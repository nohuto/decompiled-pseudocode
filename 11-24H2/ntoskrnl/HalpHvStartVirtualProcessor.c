/*
 * XREFs of HalpHvStartVirtualProcessor @ 0x14054B868
 * Callers:
 *     HalpHvStartProcessor @ 0x140558DFC (HalpHvStartProcessor.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x140263A60 (MmGetPhysicalAddress.c)
 *     HalpIsXboxNanovisorPresent @ 0x14054AC90 (HalpIsXboxNanovisorPresent.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1406B3C80 (_alloca_probe.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpHvStartVirtualProcessor(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rbp
  unsigned __int8 v5; // bl
  unsigned int v6; // r10d
  _OWORD *v7; // r11
  _OWORD *v8; // r11
  _DWORD v10[1024]; // [rsp+1020h] [rbp+0h] BYREF

  v4 = (_DWORD *)((unsigned __int64)v10 & 0xFFFFFFFFFFFFF000uLL);
  v5 = a1;
  if ( qword_140FC0F78 )
    return guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  *v4 = -1073741823;
  if ( HalpIsXboxNanovisorPresent() )
  {
    *(_OWORD *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFF000uLL) + 0x1000) = *v7;
    *(_OWORD *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFF000uLL) + 0x1010) = v7[1];
    *(_OWORD *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFF000uLL) + 0x1020) = v7[2];
    *(_OWORD *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFF000uLL) + 0x1030) = v7[3];
    *(_OWORD *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFF000uLL) + 0x1040) = v7[4];
    *(_OWORD *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFF000uLL) + 0x1050) = v7[5];
    *(_OWORD *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFF000uLL) + 0x1060) = v7[6];
    *(_OWORD *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFF000uLL) - 16 + 0x1080) = v7[7];
    v8 = v7 + 8;
    *(_OWORD *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFF000uLL) + 0x1080) = *v8;
    *(_OWORD *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFF000uLL) + 0x1090) = v8[1];
    *(_OWORD *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFF000uLL) + 0x10A0) = v8[2];
    *(_OWORD *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFF000uLL) + 0x10B0) = v8[3];
    *(_OWORD *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFF000uLL) + 0x10C0) = v8[4];
    *(_OWORD *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFF000uLL) + 0x10D0) = v8[5];
    *(_QWORD *)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFF000uLL) + 0x10B8) |= 0x400uLL;
    __writemsr(0x40000074u, MmGetPhysicalAddress(v4 + 1024).QuadPart & 0xFFFFFFFFFFFFF000uLL | v5);
    v6 = 0;
    *v4 = 0;
  }
  return v6;
}
