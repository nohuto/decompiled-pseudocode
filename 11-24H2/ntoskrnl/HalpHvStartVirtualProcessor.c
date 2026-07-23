/*
 * XREFs of HalpHvStartVirtualProcessor @ 0x140549128
 * Callers:
 *     HalpHvStartProcessor @ 0x14055673C (HalpHvStartProcessor.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1402932D0 (MmGetPhysicalAddress.c)
 *     HalpIsXboxNanovisorPresent @ 0x140548550 (HalpIsXboxNanovisorPresent.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1406B4C20 (_alloca_probe.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpHvStartVirtualProcessor(unsigned int a1, __int64 a2)
{
  _DWORD *v2; // rbp
  unsigned __int8 v3; // bl
  unsigned int v4; // r10d
  _OWORD *v5; // r11
  _OWORD *v6; // r11
  _DWORD v8[1024]; // [rsp+1020h] [rbp+0h] BYREF

  v2 = (_DWORD *)((unsigned __int64)v8 & 0xFFFFFFFFFFFFF000uLL);
  v3 = a1;
  if ( qword_140FC11D8 )
    return guard_dispatch_icall_no_overrides(a1, a2);
  *v2 = -1073741823;
  if ( HalpIsXboxNanovisorPresent() )
  {
    *(_OWORD *)(((unsigned __int64)v8 & 0xFFFFFFFFFFFFF000uLL) + 0x1000) = *v5;
    *(_OWORD *)(((unsigned __int64)v8 & 0xFFFFFFFFFFFFF000uLL) + 0x1010) = v5[1];
    *(_OWORD *)(((unsigned __int64)v8 & 0xFFFFFFFFFFFFF000uLL) + 0x1020) = v5[2];
    *(_OWORD *)(((unsigned __int64)v8 & 0xFFFFFFFFFFFFF000uLL) + 0x1030) = v5[3];
    *(_OWORD *)(((unsigned __int64)v8 & 0xFFFFFFFFFFFFF000uLL) + 0x1040) = v5[4];
    *(_OWORD *)(((unsigned __int64)v8 & 0xFFFFFFFFFFFFF000uLL) + 0x1050) = v5[5];
    *(_OWORD *)(((unsigned __int64)v8 & 0xFFFFFFFFFFFFF000uLL) + 0x1060) = v5[6];
    *(_OWORD *)(((unsigned __int64)v8 & 0xFFFFFFFFFFFFF000uLL) - 16 + 0x1080) = v5[7];
    v6 = v5 + 8;
    *(_OWORD *)(((unsigned __int64)v8 & 0xFFFFFFFFFFFFF000uLL) + 0x1080) = *v6;
    *(_OWORD *)(((unsigned __int64)v8 & 0xFFFFFFFFFFFFF000uLL) + 0x1090) = v6[1];
    *(_OWORD *)(((unsigned __int64)v8 & 0xFFFFFFFFFFFFF000uLL) + 0x10A0) = v6[2];
    *(_OWORD *)(((unsigned __int64)v8 & 0xFFFFFFFFFFFFF000uLL) + 0x10B0) = v6[3];
    *(_OWORD *)(((unsigned __int64)v8 & 0xFFFFFFFFFFFFF000uLL) + 0x10C0) = v6[4];
    *(_OWORD *)(((unsigned __int64)v8 & 0xFFFFFFFFFFFFF000uLL) + 0x10D0) = v6[5];
    *(_QWORD *)(((unsigned __int64)v8 & 0xFFFFFFFFFFFFF000uLL) + 0x10B8) |= 0x400uLL;
    __writemsr(0x40000074u, MmGetPhysicalAddress(v2 + 1024).QuadPart & 0xFFFFFFFFFFFFF000uLL | v3);
    v4 = 0;
    *v2 = 0;
  }
  return v4;
}
