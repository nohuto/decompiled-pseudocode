/*
 * XREFs of RtlContinueLongJump @ 0x1800EB3B0
 * Callers:
 *     RtlRestoreContext @ 0x180122930 (RtlRestoreContext.c)
 * Callees:
 *     ZwContinueEx @ 0x1801646B0 (ZwContinueEx.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RtlContinueLongJump(struct _CONTEXT *a1)
{
  __int128 ContinueArgument; // [rsp+20h] [rbp-28h] BYREF
  __int64 v3; // [rsp+30h] [rbp-18h]

  ContinueArgument = 0LL;
  LODWORD(ContinueArgument) = 2;
  v3 = 0LL;
  return ZwContinueEx(a1, &ContinueArgument);
}
