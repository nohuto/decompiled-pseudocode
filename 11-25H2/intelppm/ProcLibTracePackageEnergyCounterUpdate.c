/*
 * XREFs of ProcLibTracePackageEnergyCounterUpdate @ 0x1400032C0
 * Callers:
 *     ComputeProcessorEnergyMsr @ 0x140005B30 (ComputeProcessorEnergyMsr.c)
 *     ComputeProcessorEnergyMsrEx @ 0x140006AA0 (ComputeProcessorEnergyMsrEx.c)
 * Callees:
 *     __security_check_cookie @ 0x14000FEF0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall ProcLibTracePackageEnergyCounterUpdate(int a1, __int64 a2)
{
  BOOLEAN result; // al
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-38h] BYREF
  __int64 *v4; // [rsp+40h] [rbp-28h]
  __int64 v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+70h] [rbp+8h] BYREF
  __int64 v7; // [rsp+78h] [rbp+10h] BYREF

  v7 = a2;
  v6 = a1;
  result = EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, &PPM_ETW_PACKAGE_ENERGY_COUNTER_UPDATE);
  if ( result )
  {
    UserData.Ptr = (unsigned __int64)&v6;
    *(_QWORD *)&UserData.Size = 4LL;
    v4 = &v7;
    v5 = 8LL;
    return EtwWrite(
             (REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink,
             &PPM_ETW_PACKAGE_ENERGY_COUNTER_UPDATE,
             0LL,
             (ULONG)2,
             &UserData);
  }
  return result;
}
