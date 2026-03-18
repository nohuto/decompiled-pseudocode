/*
 * XREFs of WRITE_PM1_ENABLE @ 0x140022AC8
 * Callers:
 *     PciExpressWakeControl @ 0x140022310 (PciExpressWakeControl.c)
 *     ACPIEnableInitializeACPI @ 0x140022A10 (ACPIEnableInitializeACPI.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WRITE_PM1_ENABLE(__int16 a1)
{
  __int64 result; // rax
  __int16 v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = a1;
  if ( (*(int (__fastcall **)(_QWORD))(PmHalDispatchTable + 120))(0LL) >= 0 )
    (*(void (__fastcall **)(_QWORD, __int64, __int16 *))(PmHalDispatchTable + 136))(0LL, 2LL, &v2);
  result = (*(__int64 (__fastcall **)(__int64))(PmHalDispatchTable + 120))(3LL);
  if ( (int)result >= 0 )
    return (*(__int64 (__fastcall **)(__int64, __int64, __int16 *))(PmHalDispatchTable + 136))(3LL, 2LL, &v2);
  return result;
}
