/*
 * XREFs of HvlResumeFromRootCrashdump @ 0x140588088
 * Callers:
 *     KeBugCheck2 @ 0x1405B1780 (KeBugCheck2.c)
 *     KiBugCheckRecoveryCleanupFromCrashDump @ 0x1405C5ACC (KiBugCheckRecoveryCleanupFromCrashDump.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140265D90 (VslpEnterIumSecureMode.c)
 *     HvlNotifyRootCrashdump @ 0x140587BA8 (HvlNotifyRootCrashdump.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall HvlResumeFromRootCrashdump(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl
  __int64 result; // rax
  _BYTE v6[112]; // [rsp+20h] [rbp-88h] BYREF

  v4 = a1;
  if ( !VslVsmEnabled || (HvlpForceAllPages = (unsigned int)HvlpForceAllPages >> 1, (_BYTE)a1) )
  {
    if ( (HvlpFlags & 2) != 0 )
      HvlNotifyRootCrashdump(3);
    if ( VslVsmEnabled )
    {
      if ( v4 )
      {
        memset_0(v6, 0, 0x68uLL);
        VslpEnterIumSecureMode(2u, 2051LL, 0, (__int64)v6);
      }
    }
    HvlEnlightenments = HvlpEnlightenments;
    return guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  }
  return result;
}
