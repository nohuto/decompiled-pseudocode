/*
 * XREFs of RtlContinueLongJump @ 0x1800EB3B0
 * Callers:
 *     RtlRestoreContext @ 0x180122930 (RtlRestoreContext.c)
 * Callees:
 *     ZwContinueEx @ 0x1801646B0 (ZwContinueEx.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall RtlContinueLongJump(__int64 a1)
{
  __int128 v2; // [rsp+20h] [rbp-28h] BYREF
  __int64 v3; // [rsp+30h] [rbp-18h]

  v2 = 0LL;
  LODWORD(v2) = 2;
  v3 = 0LL;
  return ZwContinueEx(a1, &v2);
}
