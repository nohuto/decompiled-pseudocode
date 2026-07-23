/*
 * XREFs of NtDuplicateToken @ 0x1408A3EE0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x140295130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     SepSetProcessTrustLabelAceForToken @ 0x14036A3B0 (SepSetProcessTrustLabelAceForToken.c)
 *     SeCaptureObjectAttributeSecurityDescriptorPresent @ 0x14036C2C0 (SeCaptureObjectAttributeSecurityDescriptorPresent.c)
 *     RtlIsSandboxedToken @ 0x140840280 (RtlIsSandboxedToken.c)
 *     SeQueryInformationToken @ 0x1408418A0 (SeQueryInformationToken.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     SeCaptureSubjectContext @ 0x140858670 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 *     ObInsertObjectEx @ 0x1408A05E0 (ObInsertObjectEx.c)
 *     SepDuplicateToken @ 0x1408A2910 (SepDuplicateToken.c)
 *     SeCaptureSecurityQos @ 0x1408A42A8 (SeCaptureSecurityQos.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1408A43D0 (SepAppendAceToTokenObjectAcl.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x140A098B8 (SepNewTokenAsRestrictedAsProcessToken.c)
 */

NTSTATUS __stdcall NtDuplicateToken(
        HANDLE ExistingTokenHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN EffectiveOnly,
        TOKEN_TYPE TokenType,
        PHANDLE NewTokenHandle)
{
  unsigned __int8 PreviousMode; // si
  TOKEN_TYPE v11; // r15d
  NTSTATUS result; // eax
  bool v13; // bl
  PACCESS_TOKEN ClientToken; // rcx
  PVOID v15; // rdi
  signed int v16; // ecx
  NTSTATUS inserted; // ebx
  _QWORD *v18; // rsi
  __int64 v19; // rcx
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *PrimaryToken; // rbx
  int v22; // ecx
  PVOID TokenInformation; // [rsp+40h] [rbp-98h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+48h] [rbp-90h] BYREF
  PVOID Token; // [rsp+50h] [rbp-88h] BYREF
  PVOID v26; // [rsp+58h] [rbp-80h] BYREF
  __int64 v27; // [rsp+60h] [rbp-78h] BYREF
  __int64 v28; // [rsp+68h] [rbp-70h] BYREF
  int v29; // [rsp+70h] [rbp-68h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+78h] [rbp-60h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v31; // [rsp+98h] [rbp-40h] BYREF

  v28 = 0LL;
  v29 = 0;
  WORD1(TokenInformation) = 0;
  v27 = 0LL;
  HandleInformation = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  BYTE1(TokenInformation) = 0;
  v31.ClientToken = 0LL;
  *(_QWORD *)&v31.ImpersonationLevel = 0LL;
  v31.ProcessAuditId = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v11 = TokenType;
    if ( (unsigned int)(TokenType - 1) > 1 )
      return -1073741811;
    v19 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)NewTokenHandle < 0x7FFFFFFF0000LL )
      v19 = (__int64)NewTokenHandle;
    *(_QWORD *)v19 = *(_QWORD *)v19;
  }
  else
  {
    v11 = TokenType;
  }
  result = SeCaptureSecurityQos(ObjectAttributes, PreviousMode, (char *)&TokenInformation + 2, &v28);
  if ( result >= 0 )
  {
    result = SeCaptureObjectAttributeSecurityDescriptorPresent(
               (__int64)ObjectAttributes,
               PreviousMode,
               (_BYTE *)&TokenInformation + 3);
    if ( result >= 0 )
    {
      Token = 0LL;
      result = ObReferenceObjectByHandle(
                 ExistingTokenHandle,
                 2u,
                 (POBJECT_TYPE)SeTokenObjectType,
                 PreviousMode,
                 &Token,
                 &HandleInformation);
      if ( result >= 0 )
      {
        if ( DesiredAccess )
        {
          SeCaptureSubjectContext(&SubjectContext);
          v31.PrimaryToken = SubjectContext.PrimaryToken;
          v13 = 0;
          LOBYTE(TokenInformation) = 0;
          if ( !PreviousMode )
            goto LABEL_13;
          ClientToken = SubjectContext.ClientToken;
          if ( !SubjectContext.ClientToken )
            ClientToken = SubjectContext.PrimaryToken;
          if ( SeQueryInformationToken(ClientToken, TokenIsSandboxed, &TokenInformation) >= 0 )
            v13 = (_BYTE)TokenInformation == 0;
          if ( !v13 && RtlIsSandboxedToken(&v31, PreviousMode) )
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            PrimaryToken = (PERESOURCE *)SubjectContext.PrimaryToken;
            ExAcquireResourceSharedLite(*((PERESOURCE *)SubjectContext.PrimaryToken + 6), 1u);
            v22 = SepNewTokenAsRestrictedAsProcessToken(Token, PrimaryToken);
            if ( Token == PrimaryToken || v22 >= 0 && BYTE1(TokenInformation) )
              HandleInformation.HandleAttributes = DesiredAccess;
            else
              HandleInformation.HandleAttributes = DesiredAccess & (HandleInformation.GrantedAccess | 0x2001F);
            ExReleaseResourceLite(PrimaryToken[6]);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          }
          else
          {
LABEL_13:
            HandleInformation.HandleAttributes = DesiredAccess;
          }
          SeReleaseSubjectContext(&SubjectContext);
        }
        else
        {
          HandleInformation.HandleAttributes = HandleInformation.GrantedAccess;
        }
        v15 = Token;
        if ( BYTE2(TokenInformation) )
          v16 = HIDWORD(v28);
        else
          v16 = *((_DWORD *)Token + 49);
        if ( *((_DWORD *)Token + 48) == 2
          && (v11 == TokenImpersonation && v16 > *((_DWORD *)Token + 49)
           || v11 == TokenPrimary && *((int *)Token + 49) < 2) )
        {
          ObfDereferenceObject(Token);
          return -1073741659;
        }
        else
        {
          v26 = 0LL;
          inserted = SepDuplicateToken(
                       (__int128 *)Token,
                       (__int64)ObjectAttributes,
                       EffectiveOnly,
                       v11,
                       v16,
                       PreviousMode,
                       0,
                       (__int64 *)&v26);
          if ( inserted >= 0 )
          {
            inserted = ObInsertObjectEx((char *)v26, 0LL, HandleInformation.HandleAttributes, 1, 0, 0LL, (__int64)&v27);
            if ( inserted >= 0 )
            {
              if ( !BYTE3(TokenInformation) )
              {
                v18 = v26;
                if ( (int)SepAppendAceToTokenObjectAcl((ULONG_PTR)v26) >= 0 )
                  SepSetProcessTrustLabelAceForToken(v18);
              }
              ObfDereferenceObject(v26);
            }
          }
          ObfDereferenceObject(v15);
          if ( inserted >= 0 )
            *NewTokenHandle = (HANDLE)v27;
          return inserted;
        }
      }
    }
  }
  return result;
}
