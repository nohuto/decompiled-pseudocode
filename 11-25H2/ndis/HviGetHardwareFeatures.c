/*
 * XREFs of HviGetHardwareFeatures @ 0x1400EC6E8
 * Callers:
 *     ?ndisDoesSystemSupportSriov@@YAXXZ @ 0x1400E489C (-ndisDoesSystemSupportSriov@@YAXXZ.c)
 * Callees:
 *     HviGetHypervisorVendorAndMaxFunction @ 0x1400EC758 (HviGetHypervisorVendorAndMaxFunction.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 */

__int64 HviGetHardwareFeatures()
{
  __int64 v0; // r11
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF

  v6 = 0LL;
  HviGetHypervisorVendorAndMaxFunction(&v6);
  _RAX = 1073741830LL;
  if ( (unsigned int)v6 < 0x40000006 )
  {
    result = 0LL;
    *(_QWORD *)v0 = 0LL;
    *(_QWORD *)(v0 + 8) = 0LL;
  }
  else
  {
    __asm { cpuid }
    *(_DWORD *)v0 = result;
    *(_DWORD *)(v0 + 4) = _RBX;
    *(_DWORD *)(v0 + 8) = _RCX;
    *(_DWORD *)(v0 + 12) = _RDX;
  }
  return result;
}
