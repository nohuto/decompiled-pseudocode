/*
 * XREFs of HvlResumeFromRootCrashdump @ 0x140584908
 * Callers:
 *     KeBugCheck2 @ 0x1405ADDF0 (KeBugCheck2.c)
 *     KiBugCheckRecoveryCleanupFromCrashDump @ 0x1405C172C (KiBugCheckRecoveryCleanupFromCrashDump.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140282F50 (VslpEnterIumSecureMode.c)
 *     HvlNotifyRootCrashdump @ 0x140584428 (HvlNotifyRootCrashdump.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall HvlResumeFromRootCrashdump(__int64 a1)
{
  char v1; // bl
  __int64 result; // rax
  _BYTE v3[112]; // [rsp+20h] [rbp-88h] BYREF

  v1 = a1;
  if ( !VslVsmEnabled || (HvlpForceAllPages = (unsigned int)HvlpForceAllPages >> 1, (_BYTE)a1) )
  {
    if ( (HvlpFlags & 2) != 0 )
      HvlNotifyRootCrashdump(3);
    if ( VslVsmEnabled )
    {
      if ( v1 )
      {
        memset_0(v3, 0, 0x68uLL);
        VslpEnterIumSecureMode(2u, 0x803u, 0, (__int64)v3);
      }
    }
    HvlEnlightenments = HvlpEnlightenments;
    return guard_dispatch_icall_no_overrides(a1);
  }
  return result;
}
