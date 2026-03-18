/*
 * XREFs of HvlPrepareForRootCrashdump @ 0x140587C34
 * Callers:
 *     KeBugCheck2 @ 0x1405B1780 (KeBugCheck2.c)
 *     KiBugCheckRecoveryPrepareForCrashDump @ 0x1405C5E70 (KiBugCheckRecoveryPrepareForCrashDump.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     KeStallExecutionProcessor @ 0x14033A030 (KeStallExecutionProcessor.c)
 *     HvlNotifyRootCrashdump @ 0x140587BA8 (HvlNotifyRootCrashdump.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall HvlPrepareForRootCrashdump(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  _BYTE v9[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v10; // [rsp+28h] [rbp-80h]

  v4 = (unsigned __int8)a1;
  if ( (HvlpFlags & 2) != 0 )
  {
    HvlNotifyRootCrashdump(1);
    KeStallExecutionProcessor(0xC350u);
  }
  if ( VslVsmEnabled )
  {
    memset_0(v9, 0, 0x68uLL);
    v10 = v4;
    VslpEnterIumSecureMode(2u, 263LL, 0, (__int64)v9);
    if ( (HvlpFlags & 2) != 0 )
    {
      if ( (_BYTE)v4 )
        PoAllProcIntrDisabled = 1;
    }
  }
  if ( (HvlpFlags & 2) != 0 )
    HvlNotifyRootCrashdump(2);
  LOBYTE(a1) = 1;
  guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  return guard_dispatch_icall_no_overrides(1LL, v5, v6, v7);
}
