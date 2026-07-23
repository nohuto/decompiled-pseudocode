/*
 * XREFs of HalpHvWatchdogDiscover @ 0x14055E260
 * Callers:
 *     HalpTimerRegisterBuiltinPluginsCommon @ 0x1405461A4 (HalpTimerRegisterBuiltinPluginsCommon.c)
 * Callees:
 *     HalpIsMicrosoftCompatibleHvLoaded @ 0x1404A053C (HalpIsMicrosoftCompatibleHvLoaded.c)
 *     HalpTimerRegister @ 0x14055DCBC (HalpTimerRegister.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 HalpHvWatchdogDiscover()
{
  _DWORD v6[2]; // [rsp+20h] [rbp-59h] BYREF
  __int64 (__fastcall *v7)(); // [rsp+28h] [rbp-51h]
  __int64 (__fastcall *v8)(__int64, __int64, unsigned __int64); // [rsp+40h] [rbp-39h]
  __int64 (__fastcall *v9)(); // [rsp+48h] [rbp-31h]
  __int64 v10; // [rsp+78h] [rbp-1h]
  int v11; // [rsp+80h] [rbp+7h]
  int v12; // [rsp+84h] [rbp+Bh]
  __int64 v13; // [rsp+88h] [rbp+Fh]
  int v14; // [rsp+94h] [rbp+1Bh]
  int v15; // [rsp+A8h] [rbp+2Fh]
  __int128 v16; // [rsp+B0h] [rbp+37h]

  if ( !HalpTimerWatchdogPhysicalOnly && HalpIsMicrosoftCompatibleHvLoaded() && (HalpEnlightenment & 0x20) == 0 )
  {
    _RAX = 1073741827LL;
    __asm { cpuid }
    v16 = __PAIR64__(_RBX, _RAX);
    if ( (_RDX & 0x400000) != 0 && (v16 & 0x100000000008LL) == 0x100000000008LL )
    {
      memset_0(v6, 0, 0x90uLL);
      v10 = 0LL;
      v11 = 0;
      v7 = HalpHvWatchdogInitialize;
      v6[0] = 1;
      v8 = HalpHvWatchdogArm;
      v9 = HalpHvWatchdogStop;
      v6[1] = 144;
      v12 = 64;
      v13 = 10000000LL;
      v15 = 8;
      v14 = 163872;
      HalpTimerRegister((__int64)v6, 0LL);
    }
  }
  return 0LL;
}
