/*
 * XREFs of SepCopyAnonymousTokenAndSetSilo @ 0x140A2F9D0
 * Callers:
 *     NtImpersonateAnonymousToken @ 0x140A2F610 (NtImpersonateAnonymousToken.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     ObFastDereferenceObject @ 0x140356880 (ObFastDereferenceObject.c)
 *     SepGetAnonymousToken @ 0x14035F4BC (SepGetAnonymousToken.c)
 *     PsGetServerSiloServiceSessionId @ 0x1404566C0 (PsGetServerSiloServiceSessionId.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     SepSetServerSiloToken @ 0x14078FC08 (SepSetServerSiloToken.c)
 *     SeCreateAccessState @ 0x14083F490 (SeCreateAccessState.c)
 *     SeDeleteAccessState @ 0x140840F80 (SeDeleteAccessState.c)
 *     ObInsertObjectEx @ 0x140857620 (ObInsertObjectEx.c)
 *     SepFinalizeTokenAcls @ 0x14090F550 (SepFinalizeTokenAcls.c)
 *     SeSetSessionIdToken @ 0x140A50448 (SeSetSessionIdToken.c)
 */

__int64 __fastcall SepCopyAnonymousTokenAndSetSilo(__int64 a1, PVOID *a2)
{
  int AnonymousToken; // edi
  _QWORD *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  ULONG ServerSiloServiceSessionId; // eax
  PACCESS_TOKEN Token; // [rsp+40h] [rbp-C0h] BYREF
  struct _ACCESS_STATE v12; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v13[28]; // [rsp+F0h] [rbp-10h] BYREF

  Token = 0LL;
  AnonymousToken = SepGetAnonymousToken(0LL, &Token);
  if ( AnonymousToken < 0 )
    goto LABEL_7;
  memset_0(&v12, 0, sizeof(v12));
  memset_0(v13, 0, sizeof(v13));
  SeCreateAccessState(
    &v12,
    v13,
    0,
    (_DWORD *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Token - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Token - 48) >> 8)]
             + 76));
  ObFastDereferenceObject(
    (__int64 *)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors,
    (ULONG_PTR)v12.SubjectSecurityContext.PrimaryToken,
    0x75536553u);
  ObfReferenceObjectWithTag(SeAnonymousLogonTokenNoEveryone, 0x75536553u);
  v5 = Token;
  v12.SubjectSecurityContext.PrimaryToken = SeAnonymousLogonTokenNoEveryone;
  AnonymousToken = ObInsertObjectEx((struct _FILE_OBJECT *)Token, &v12, 0, 0, 0, 0LL, 0LL);
  SeDeleteAccessState((__int64)&v12, v6, v7, v8);
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
