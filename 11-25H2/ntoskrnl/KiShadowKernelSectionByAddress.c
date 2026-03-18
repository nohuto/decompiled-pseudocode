/*
 * XREFs of KiShadowKernelSectionByAddress @ 0x1405BF9C0
 * Callers:
 *     KiShadowProcessorAllocation @ 0x140B4AAAC (KiShadowProcessorAllocation.c)
 * Callees:
 *     RtlSectionTableFromVirtualAddress @ 0x1404102B0 (RtlSectionTableFromVirtualAddress.c)
 *     RtlImageNtHeaderEx @ 0x140420FB0 (RtlImageNtHeaderEx.c)
 *     MmCreateShadowMapping @ 0x1407E68BC (MmCreateShadowMapping.c)
 */

__int64 KiShadowKernelSectionByAddress()
{
  _DWORD *v0; // rax
  unsigned int v1; // edx
  unsigned __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  RtlImageNtHeaderEx(1, 0x140000000uLL, 0LL, &v3);
  v0 = (_DWORD *)RtlSectionTableFromVirtualAddress(
                   v3,
                   0x140000000LL,
                   (unsigned int)KiDivideErrorFaultShadow - 0x40000000);
  v1 = v0[2];
  if ( v1 <= v0[4] )
    v1 = v0[4];
  return MmCreateShadowMapping(0x140000000LL + (unsigned int)v0[3], (v1 + 4095) & 0xFFFFF000);
}
