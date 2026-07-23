/*
 * XREFs of EtwTiLogImpersonateClient @ 0x1408E8518
 * Callers:
 *     PsImpersonateClient @ 0x1408E7A20 (PsImpersonateClient.c)
 * Callees:
 *     EtwProviderEnabled @ 0x140262770 (EtwProviderEnabled.c)
 *     EtwpTiFillProcessIdentity @ 0x1402633C0 (EtwpTiFillProcessIdentity.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14031F4D0 (PsReferencePrimaryTokenWithTag.c)
 *     ObFastDereferenceObject @ 0x140324D60 (ObFastDereferenceObject.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     EtwpTiFillThreadIdentity @ 0x14045F510 (EtwpTiFillThreadIdentity.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     SeQueryInformationToken @ 0x1408E4F90 (SeQueryInformationToken.c)
 *     SeCompareTokens @ 0x140A179B8 (SeCompareTokens.c)
 *     EtwpTiQueryTokenIdentity @ 0x140A69F44 (EtwpTiQueryTokenIdentity.c)
 *     EtwpTiFillTokenIdentity @ 0x140A7AFB8 (EtwpTiFillTokenIdentity.c)
 *     EtwpTiFreeTokenIdentity @ 0x140A93010 (EtwpTiFreeTokenIdentity.c)
 */

char __fastcall EtwTiLogImpersonateClient(__int64 a1, __int64 a2, void *a3, void *a4)
{
  const EVENT_DESCRIPTOR *v4; // r14
  char v9; // r12
  ULONGLONG v10; // rbx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  int v14; // eax
  char result; // al
  PVOID TokenInformation; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int64 v17; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v18[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+68h] [rbp-98h]
  _OWORD v20[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v21; // [rsp+90h] [rbp-70h]
  struct _EVENT_DATA_DESCRIPTOR UserData[36]; // [rsp+A0h] [rbp-60h] BYREF

  v4 = &THREATINT_PROCESS_IMPERSONATION_UP;
  v17 = 0LL;
  TokenInformation = 0LL;
  v21 = 0LL;
  v19 = 0LL;
  memset(v20, 0, sizeof(v20));
  v9 = 0;
  memset(v18, 0, sizeof(v18));
  if ( EtwEventEnabled(EtwThreatIntProvRegHandle, &THREATINT_PROCESS_IMPERSONATION_UP)
    && EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x4000000000uLL)
    || EtwEventEnabled(EtwThreatIntProvRegHandle, &THREATINT_PROCESS_IMPERSONATION_DOWN)
    && EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x40000000000uLL) )
  {
    if ( !a3 )
    {
      a3 = (void *)PsReferencePrimaryTokenWithTag(a1, 0x746C6644u);
      v9 = 1;
    }
    if ( SeQueryInformationToken(a4, TokenIntegrityLevel, (PVOID *)((char *)&TokenInformation + 4)) >= 0
      && SeQueryInformationToken(a3, TokenIntegrityLevel, &TokenInformation) >= 0 )
    {
      if ( HIDWORD(TokenInformation) < (unsigned int)TokenInformation )
      {
        v10 = 0x40000000000LL;
        v4 = &THREATINT_PROCESS_IMPERSONATION_DOWN;
      }
      else
      {
        v10 = 0x4000000000LL;
      }
      if ( EtwEventEnabled(EtwThreatIntProvRegHandle, v4)
        && EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, v10)
        && (int)SeCompareTokens(a3, a4) >= 0
        && (int)EtwpTiQueryTokenIdentity(v18, a3) >= 0
        && (int)EtwpTiQueryTokenIdentity(v20, a4) >= 0 )
      {
        v11 = EtwpTiFillProcessIdentity(UserData, a1, &v17);
        v12 = EtwpTiFillThreadIdentity((__int64)&UserData[v11], a2) + v11;
        v13 = EtwpTiFillTokenIdentity(&UserData[v12], v18) + v12;
        v14 = EtwpTiFillTokenIdentity(&UserData[v13], v20);
        EtwWrite(EtwThreatIntProvRegHandle, v4, 0LL, v14 + v13, UserData);
      }
    }
  }
  EtwpTiFreeTokenIdentity(v18);
  result = EtwpTiFreeTokenIdentity(v20);
  if ( v9 )
  {
    if ( a3 )
      return ObFastDereferenceObject((__int64 *)(a1 + 584), (ULONG_PTR)a3, 0x746C6644u);
  }
  return result;
}
