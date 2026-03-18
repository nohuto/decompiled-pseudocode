/*
 * XREFs of KiShadowKernelSectionByAddress @ 0x1405C3AA0
 * Callers:
 *     KiShadowProcessorAllocation @ 0x140B5AA1C (KiShadowProcessorAllocation.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x14041E7E0 (RtlImageNtHeaderEx.c)
 *     RtlSectionTableFromVirtualAddress @ 0x14042CF10 (RtlSectionTableFromVirtualAddress.c)
 *     MmCreateShadowMapping @ 0x1407F674C (MmCreateShadowMapping.c)
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
