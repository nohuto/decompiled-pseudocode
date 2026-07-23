/*
 * XREFs of NtImpersonateAnonymousToken @ 0x140A24050
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14031F4D0 (PsReferencePrimaryTokenWithTag.c)
 *     ObFastDereferenceObject @ 0x140324D60 (ObFastDereferenceObject.c)
 *     SepGetAnonymousToken @ 0x1403B977C (SepGetAnonymousToken.c)
 *     PsGetCurrentServerSilo @ 0x1403C3490 (PsGetCurrentServerSilo.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140421410 (PsIsCurrentThreadInServerSilo.c)
 *     SeTokenIsRestricted @ 0x140424A30 (SeTokenIsRestricted.c)
 *     ObReferenceObjectByPointer @ 0x140424A50 (ObReferenceObjectByPointer.c)
 *     SeTokenIsWriteRestricted @ 0x14044F500 (SeTokenIsWriteRestricted.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     SepDuplicateToken @ 0x1408527E0 (SepDuplicateToken.c)
 *     PsImpersonateClient @ 0x1408E7A20 (PsImpersonateClient.c)
 *     SepRegQueryDwordValue @ 0x140A24394 (SepRegQueryDwordValue.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x140A24410 (SepCopyAnonymousTokenAndSetSilo.c)
 */

NTSTATUS __stdcall NtImpersonateAnonymousToken(HANDLE ThreadHandle)
{
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS result; // eax
  __int64 v3; // rcx
  const signed __int32 *PrimaryToken; // rbx
  PACCESS_TOKEN ClientToken; // rdi
  __int64 v6; // rcx
  NTSTATUS AnonymousToken; // ebx
  PVOID v8; // rsi
  unsigned __int64 CurrentServerSilo; // rax
  _KPROCESS *Process; // rdi
  void *v11; // rax
  void *v12; // rbx
  PVOID v13; // [rsp+40h] [rbp-29h] BYREF
  PACCESS_TOKEN Token; // [rsp+48h] [rbp-21h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-19h] BYREF
  __int128 v16; // [rsp+70h] [rbp+7h] BYREF
  __int128 v17; // [rsp+80h] [rbp+17h]
  __int128 v18; // [rsp+90h] [rbp+27h]
  int v19; // [rsp+D8h] [rbp+6Fh] BYREF
  PVOID Object; // [rsp+E0h] [rbp+77h] BYREF
  PVOID v21; // [rsp+E8h] [rbp+7Fh] BYREF

  *(_QWORD *)&v18 = 0LL;
  DWORD2(v18) = 0;
  v16 = 0LL;
  v13 = 0LL;
  v17 = 0LL;
  v21 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v19 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  Token = 0LL;
  Object = 0LL;
  result = ObReferenceObjectByHandle(ThreadHandle, 0x100u, (POBJECT_TYPE)PsThreadType, PreviousMode, &Object, 0LL);
  if ( result < 0 )
    return result;
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = (const signed __int32 *)SubjectContext.PrimaryToken;
  ClientToken = SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    ClientToken = SubjectContext.ClientToken;
  if ( ((int)SepRegQueryDwordValue(v3, L"AnonymousAppContainerImpersonationLevelCheck", &v19) < 0 || !v19)
    && *((_DWORD *)ClientToken + 48) != 1
    && _bittest(PrimaryToken + 50, 0xEu)
    && *((int *)ClientToken + 49) < 2 )
  {
    AnonymousToken = -1073741659;
    goto LABEL_13;
  }
  if ( _bittest((const signed __int32 *)ClientToken + 50, 0xEu) )
  {
    AnonymousToken = SepGetAnonymousToken((__int64)ClientToken, &Token);
    if ( AnonymousToken >= 0 )
    {
      AnonymousToken = PsImpersonateClient((PETHREAD)Object, Token, 1u, 0, SecurityImpersonation);
      ObfDereferenceObject(Token);
    }
    goto LABEL_13;
  }
  if ( (int)SepRegQueryDwordValue(v6, L"EveryoneIncludesAnonymous", &v19) < 0 || (v8 = SeAnonymousLogonToken, v19 != 1) )
    v8 = SeAnonymousLogonTokenNoEveryone;
  if ( !PsIsCurrentThreadInServerSilo() )
  {
    if ( (*((_DWORD *)ClientToken + 50) & 0x380000) != 0 )
    {
      LODWORD(v16) = 48;
      *((_QWORD *)&v16 + 1) = 0LL;
      DWORD2(v17) = 0;
      *(_QWORD *)&v17 = 0LL;
      v18 = 0LL;
      AnonymousToken = SepDuplicateToken((__int64)v8, (int)&v16, 1, 2, 2u, 0, 1, &v13);
      if ( AnonymousToken < 0 )
        goto LABEL_13;
      *((_DWORD *)v13 + 50) |= *((_DWORD *)ClientToken + 50) & 0x380000;
      v8 = v13;
    }
LABEL_22:
    AnonymousToken = ObReferenceObjectByPointer(
                       v8,
                       4u,
                       (POBJECT_TYPE)SeTokenObjectType,
                       KeGetCurrentThread()->PreviousMode);
    if ( AnonymousToken >= 0 )
    {
      ObfDereferenceObject(v8);
      Process = KeGetCurrentThread()->ApcState.Process;
      v11 = (void *)PsReferencePrimaryTokenWithTag((__int64)Process, 0x746C6644u);
      v12 = v11;
      if ( v11 )
      {
        if ( !SeTokenIsRestricted(v11) || SeTokenIsWriteRestricted(v12) )
        {
          ObFastDereferenceObject((__int64 *)&Process[1].ActiveProcessors, (ULONG_PTR)v12, 0x746C6644u);
          AnonymousToken = PsImpersonateClient((PETHREAD)Object, v8, v21 == 0LL, 0, SecurityImpersonation);
        }
        else
        {
          ObfDereferenceObject(v12);
          AnonymousToken = -1073741790;
        }
      }
      else
      {
        AnonymousToken = -1073741823;
      }
    }
    goto LABEL_13;
  }
  CurrentServerSilo = PsGetCurrentServerSilo();
  AnonymousToken = SepCopyAnonymousTokenAndSetSilo(CurrentServerSilo, &v21);
  if ( AnonymousToken >= 0 )
  {
    v8 = v21;
    goto LABEL_22;
  }
LABEL_13:
  SeReleaseSubjectContext(&SubjectContext);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v21 )
    ObfDereferenceObject(v21);
  if ( v13 )
    ObfDereferenceObject(v13);
  return AnonymousToken;
}
