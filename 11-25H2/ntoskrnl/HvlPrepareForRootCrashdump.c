/*
 * XREFs of HvlPrepareForRootCrashdump @ 0x1405844B4
 * Callers:
 *     KeBugCheck2 @ 0x1405ADDF0 (KeBugCheck2.c)
 *     KiBugCheckRecoveryPrepareForCrashDump @ 0x1405C1AD0 (KiBugCheckRecoveryPrepareForCrashDump.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x140278EE0 (KeStallExecutionProcessor.c)
 *     VslpEnterIumSecureMode @ 0x140282F50 (VslpEnterIumSecureMode.c)
 *     HvlNotifyRootCrashdump @ 0x140584428 (HvlNotifyRootCrashdump.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall HvlPrepareForRootCrashdump(__int64 a1)
{
  __int64 v1; // rbx
  _BYTE v3[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v4; // [rsp+28h] [rbp-80h]

  v1 = (unsigned __int8)a1;
  if ( (HvlpFlags & 2) != 0 )
  {
    HvlNotifyRootCrashdump(1);
    KeStallExecutionProcessor(0xC350u);
  }
  if ( VslVsmEnabled )
  {
    memset_0(v3, 0, 0x68uLL);
    v4 = v1;
    VslpEnterIumSecureMode(2u, 0x107u, 0, (__int64)v3);
    if ( (HvlpFlags & 2) != 0 )
    {
      if ( (_BYTE)v1 )
        PoAllProcIntrDisabled = 1;
    }
  }
  if ( (HvlpFlags & 2) != 0 )
    HvlNotifyRootCrashdump(2);
  LOBYTE(a1) = 1;
  guard_dispatch_icall_no_overrides(a1);
  return guard_dispatch_icall_no_overrides(1LL);
}
