/*
 * XREFs of RaidAdapterReInitialize @ 0x140054250
 * Callers:
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x14000F548 (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x14001A910 (RaidAdapterAcquireInterruptLock.c)
 *     RaidAdapterReleaseInterruptLock @ 0x1400277E0 (RaidAdapterReleaseInterruptLock.c)
 *     RaCallMiniportFindAdapter @ 0x1400370D4 (RaCallMiniportFindAdapter.c)
 *     RaCallMiniportHwInitialize @ 0x14003C630 (RaCallMiniportHwInitialize.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaidAdapterReInitialize(__int64 a1)
{
  __int64 v1; // rsi
  __int64 result; // rax
  KIRQL v4; // bl
  int v5; // esi
  char v6; // cl
  char v7[16]; // [rsp+20h] [rbp-28h] BYREF

  v1 = a1 + 376;
  strcpy(v7, "wakeup=1");
  result = RaCallMiniportFindAdapter((char **)(a1 + 376), v7);
  if ( (int)result >= 0 )
  {
    *(_BYTE *)(a1 + 104) |= 0x10u;
    v4 = RaidAdapterAcquireInterruptLock(a1);
    v5 = RaCallMiniportHwInitialize(v1);
    RaidAdapterReleaseInterruptLock(a1, v4);
    v6 = *(_BYTE *)(a1 + 104) & 0xEF;
    *(_BYTE *)(a1 + 104) = v6;
    if ( v5 >= 0 )
      *(_BYTE *)(a1 + 104) = v6 | 1;
    return (unsigned int)v5;
  }
  return result;
}
