/*
 * XREFs of SepCopyAnonymousTokenAndSetSilo @ 0x140A2A050
 * Callers:
 *     NtImpersonateAnonymousToken @ 0x140A29C90 (NtImpersonateAnonymousToken.c)
 * Callees:
 *     SepGetAnonymousToken @ 0x1402905D8 (SepGetAnonymousToken.c)
 *     ObFastDereferenceObject @ 0x1402930B0 (ObFastDereferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     PsGetServerSiloServiceSessionId @ 0x1404565D0 (PsGetServerSiloServiceSessionId.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     SepSetServerSiloToken @ 0x140780948 (SepSetServerSiloToken.c)
 *     SeDeleteAccessState @ 0x140844A10 (SeDeleteAccessState.c)
 *     ObInsertObjectEx @ 0x1408A05E0 (ObInsertObjectEx.c)
 *     SepFinalizeTokenAcls @ 0x1408A4398 (SepFinalizeTokenAcls.c)
 *     SeCreateAccessState @ 0x1409154F0 (SeCreateAccessState.c)
 *     SeSetSessionIdToken @ 0x140A4CF28 (SeSetSessionIdToken.c)
 */

__int64 __fastcall SepCopyAnonymousTokenAndSetSilo(__int64 a1, PVOID *a2)
{
  int AnonymousToken; // edi
  _QWORD *v5; // rsi
  ULONG ServerSiloServiceSessionId; // eax
  PACCESS_TOKEN Token; // [rsp+40h] [rbp-C0h] BYREF
  struct _ACCESS_STATE AccessState; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v10[28]; // [rsp+F0h] [rbp-10h] BYREF

  Token = 0LL;
  AnonymousToken = SepGetAnonymousToken(0LL, &Token);
  if ( AnonymousToken < 0 )
    goto LABEL_7;
  memset_0(&AccessState, 0, sizeof(AccessState));
  memset_0(v10, 0, sizeof(v10));
  SeCreateAccessState(
    &AccessState,
    v10,
    0,
    (_DWORD *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Token - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Token - 48) >> 8)]
             + 76));
  ObFastDereferenceObject(
    (__int64 *)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors,
    (ULONG_PTR)AccessState.SubjectSecurityContext.PrimaryToken,
    1968399699LL);
  ObfReferenceObjectWithTag(SeAnonymousLogonTokenNoEveryone, 0x75536553u);
  v5 = Token;
  AccessState.SubjectSecurityContext.PrimaryToken = SeAnonymousLogonTokenNoEveryone;
  AnonymousToken = ObInsertObjectEx((char *)Token, &AccessState, 0, 0, 0, 0LL, 0LL);
  SeDeleteAccessState((__int64)&AccessState);
  if ( AnonymousToken < 0 )
    goto LABEL_7;
  SepFinalizeTokenAcls(v5);
  *a2 = v5;
  ServerSiloServiceSessionId = PsGetServerSiloServiceSessionId(a1);
  if ( ServerSiloServiceSessionId != -1
    && (AnonymousToken = SeSetSessionIdToken(v5, ServerSiloServiceSessionId), AnonymousToken < 0)
    || (AnonymousToken = SepSetServerSiloToken((__int64)*a2, a1), AnonymousToken < 0) )
  {
    ObfDereferenceObject(*a2);
LABEL_7:
    *a2 = 0LL;
  }
  return (unsigned int)AnonymousToken;
}
