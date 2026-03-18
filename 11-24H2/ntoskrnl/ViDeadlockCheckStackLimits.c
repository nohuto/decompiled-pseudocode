/*
 * XREFs of ViDeadlockCheckStackLimits @ 0x140BA7C08
 * Callers:
 *     ViDeadlockCanProceed @ 0x140BA7B94 (ViDeadlockCanProceed.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x14027FEF0 (RtlpGetStackLimits.c)
 *     DbgPrintEx @ 0x1402CB2F0 (DbgPrintEx.c)
 */

ULONG ViDeadlockCheckStackLimits()
{
  ULONG result; // eax
  char *v1; // [rsp+30h] [rbp+10h] BYREF
  unsigned __int64 v2; // [rsp+38h] [rbp+18h] BYREF
  unsigned __int64 v3; // [rsp+40h] [rbp+20h] BYREF

  v1 = 0LL;
  v3 = 0LL;
  v2 = (unsigned __int64)&v2;
  if ( !RtlpGetStackLimits(&v1, &v3) )
  {
    v1 = 0LL;
    v3 = 0LL;
  }
  result = v2;
  if ( v2 < (unsigned __int64)v1 || (result = v2, v2 > v3) )
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
