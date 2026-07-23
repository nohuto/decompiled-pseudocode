/*
 * XREFs of PiDqSameUserHive @ 0x1406F99D0
 * Callers:
 *     PiDqQueryApplyObjectEvent @ 0x1408D0C6C (PiDqQueryApplyObjectEvent.c)
 * Callees:
 *     RtlEqualSid @ 0x1403EB6C0 (RtlEqualSid.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SeQueryUserSidToken @ 0x1408E1C90 (SeQueryUserSidToken.c)
 */

__int64 __fastcall PiDqSameUserHive(__int64 *a1, __int64 *a2, BOOLEAN *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  _BYTE Sid2[80]; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE Sid1[80]; // [rsp+70h] [rbp-78h] BYREF

  memset_0(Sid1, 0, 0x44uLL);
  memset_0(Sid2, 0, 0x44uLL);
  v6 = *a1;
  if ( !*a1 )
    v6 = a1[2];
  SeQueryUserSidToken(v6, Sid1, 68LL, 0LL);
  v7 = *a2;
  if ( !*a2 )
    v7 = a2[2];
  SeQueryUserSidToken(v7, Sid2, 68LL, 0LL);
  *a3 = RtlEqualSid(Sid1, Sid2);
  return 0LL;
}
