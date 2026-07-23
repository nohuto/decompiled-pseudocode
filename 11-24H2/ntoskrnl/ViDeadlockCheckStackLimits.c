/*
 * XREFs of ViDeadlockCheckStackLimits @ 0x140BA9C08
 * Callers:
 *     ViDeadlockCanProceed @ 0x140BA9B94 (ViDeadlockCanProceed.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x140235480 (RtlpGetStackLimits.c)
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 */

ULONG ViDeadlockCheckStackLimits()
{
  ULONG result; // eax
  unsigned __int64 v1; // [rsp+30h] [rbp+10h] BYREF
  unsigned __int64 v2; // [rsp+38h] [rbp+18h] BYREF
  unsigned __int64 v3; // [rsp+40h] [rbp+20h] BYREF

  v1 = 0LL;
  v3 = 0LL;
  v2 = (unsigned __int64)&v2;
  if ( !(unsigned __int8)RtlpGetStackLimits((__int64)&v1, (__int64)&v3) )
  {
    v1 = 0LL;
    v3 = 0LL;
  }
  result = v2;
  if ( v2 < v1 || (result = v2, v2 > v3) )
  {
    if ( VfVerifyMode > 2 )
    {
      result = ViStackSwitchAlreadyReported;
      if ( !ViStackSwitchAlreadyReported )
      {
        result = DbgPrintEx(0x5Du, 0, "DVRF: Driver switched stacks using an unsupported method!\n");
        ViStackSwitchAlreadyReported = 1;
      }
    }
  }
  return result;
}
