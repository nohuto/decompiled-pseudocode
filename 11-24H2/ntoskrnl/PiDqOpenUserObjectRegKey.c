/*
 * XREFs of PiDqOpenUserObjectRegKey @ 0x1408E1780
 * Callers:
 *     PiDqActionDataGetRequestedProperties @ 0x1408D1B70 (PiDqActionDataGetRequestedProperties.c)
 *     PiDqActionDataGetAllPropertiesInBestLanguage @ 0x1408E0590 (PiDqActionDataGetAllPropertiesInBestLanguage.c)
 *     PiDqOpenObjectRegKey @ 0x1408E14CC (PiDqOpenObjectRegKey.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     RtlConvertSidToUnicodeString @ 0x140869960 (RtlConvertSidToUnicodeString.c)
 *     _PnpCtxRegOpenKey @ 0x1408C552C (_PnpCtxRegOpenKey.c)
 *     _RegRtlOpenKeyTransacted @ 0x1408C5590 (_RegRtlOpenKeyTransacted.c)
 *     PiDqGetRelativeObjectRegPath @ 0x1408E1294 (PiDqGetRelativeObjectRegPath.c)
 *     _PnpValidateObjectName @ 0x1408E1AD4 (_PnpValidateObjectName.c)
 *     SeQueryUserSidToken @ 0x1408E1C90 (SeQueryUserSidToken.c)
 *     PnpConcatPWSTR @ 0x1408E1D40 (PnpConcatPWSTR.c)
 *     SeQueryInformationToken @ 0x1408E4F90 (SeQueryInformationToken.c)
 *     _RegRtlCreateTreeTransacted @ 0x1409282E4 (_RegRtlCreateTreeTransacted.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDqOpenUserObjectRegKey(
        __int64 a1,
        unsigned int a2,
        ACCESS_MASK a3,
        char a4,
        struct _SECURITY_SUBJECT_CONTEXT *a5,
        PHANDLE KeyHandle)
{
  char v6; // r13
  PVOID v9; // r14
  wchar_t *v10; // rdi
  __int64 v11; // rcx
  int RelativeObjectRegPath; // ebx
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // rax
  PACCESS_TOKEN ClientToken; // rsi
  NTSTATUS v15; // eax
  wchar_t *Buffer; // rsi
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  __int64 v21; // rax
  __int64 v22; // rcx
  ULONG v25; // [rsp+58h] [rbp-A8h] BYREF
  NTSTRSAFE_PCWSTR pszSrc; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  PVOID P; // [rsp+70h] [rbp-90h] BYREF
  PVOID TokenInformation; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-80h] BYREF
  int v31[2]; // [rsp+90h] [rbp-70h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+98h] [rbp-68h] BYREF
  _BYTE Sid[80]; // [rsp+C0h] [rbp-40h] BYREF

  v6 = 0;
  *(_QWORD *)v31 = a1;
  TokenInformation = 0LL;
  P = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v9 = 0LL;
  Handle = 0LL;
  v10 = 0LL;
  pszSrc = 0LL;
  UnicodeString = 0LL;
  v25 = 0;
  memset_0(Sid, 0, 0x44uLL);
  *KeyHandle = 0LL;
  RelativeObjectRegPath = PnpValidateObjectName(v11, a1, a2);
  if ( RelativeObjectRegPath < 0 )
    goto LABEL_20;
  if ( !a5 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    v6 = 1;
  }
  p_SubjectContext = &SubjectContext;
  if ( a5 )
    p_SubjectContext = a5;
  ClientToken = p_SubjectContext->ClientToken;
  if ( !p_SubjectContext->ClientToken )
    ClientToken = p_SubjectContext->PrimaryToken;
  v15 = SeQueryInformationToken(ClientToken, TokenImpersonationLevel, &TokenInformation);
  RelativeObjectRegPath = v15;
  if ( v15 >= 0 )
  {
    if ( *(int *)TokenInformation < 2 )
    {
      Buffer = UnicodeString.Buffer;
      RelativeObjectRegPath = -1073741790;
      goto LABEL_25;
    }
  }
  else if ( v15 != -1073741821 )
  {
    goto LABEL_20;
  }
  SeQueryUserSidToken(ClientToken, Sid, 68LL, 0LL);
  RelativeObjectRegPath = RtlConvertSidToUnicodeString(&UnicodeString, Sid, 1u);
  if ( RelativeObjectRegPath >= 0 )
  {
    Buffer = UnicodeString.Buffer;
    RelativeObjectRegPath = PnpConcatPWSTR(
                              0x7FFFFFFFLL,
                              1483763280LL,
                              &P,
                              2LL,
                              L"\\REGISTRY\\USER\\",
                              UnicodeString.Buffer);
    if ( RelativeObjectRegPath < 0 )
    {
      v9 = P;
    }
    else
    {
      if ( *(_QWORD *)&PiPnpRtlCtx && (v17 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
        v18 = *(_QWORD *)(v17 + 8);
      else
        v18 = 0LL;
      v9 = P;
      RelativeObjectRegPath = RegRtlOpenKeyTransacted(0LL, (const WCHAR *)P, 0, 4u, &Handle, v18);
      if ( RelativeObjectRegPath >= 0 )
      {
        RelativeObjectRegPath = PiDqGetRelativeObjectRegPath(*(unsigned __int16 **)v31, a2, (PVOID *)&pszSrc);
        if ( RelativeObjectRegPath < 0 )
        {
          v10 = (wchar_t *)pszSrc;
        }
        else
        {
          if ( a4 )
          {
            if ( *(_QWORD *)&PiPnpRtlCtx && (v22 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
              v21 = *(_QWORD *)(v22 + 8);
            else
              v21 = 0LL;
            v10 = (wchar_t *)pszSrc;
            v19 = RegRtlCreateTreeTransacted(Handle, pszSrc, 0, a3, 0LL, 0, KeyHandle, &v25, v21);
          }
          else
          {
            v10 = (wchar_t *)pszSrc;
            v25 = 2;
            v19 = PnpCtxRegOpenKey(
                    *(__int64 *)&PiPnpRtlCtx,
                    (__int64)Handle,
                    (__int64)pszSrc,
                    0,
                    a3,
                    (__int64)KeyHandle);
          }
          RelativeObjectRegPath = v19;
        }
      }
    }
    goto LABEL_21;
  }
LABEL_20:
  Buffer = UnicodeString.Buffer;
LABEL_21:
  if ( RelativeObjectRegPath == -1073741444 )
    RelativeObjectRegPath = -1073741772;
  if ( v10 )
    ExFreePoolWithTag(v10, 0x58706E50u);
LABEL_25:
  if ( Handle )
    ZwClose(Handle);
  if ( v9 )
    ExFreePoolWithTag(v9, 0x58706E50u);
  if ( Buffer )
    ExFreePool(Buffer);
  if ( v6 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( TokenInformation )
    ExFreePoolWithTag(TokenInformation, 0);
  return (unsigned int)RelativeObjectRegPath;
}
