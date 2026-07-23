/*
 * XREFs of CmpUpdateKeyNodeAccessBits @ 0x14086E968
 * Callers:
 *     CmpCreateTombstone @ 0x140666D04 (CmpCreateTombstone.c)
 *     CmpSetSecurityDescriptorInfo @ 0x140830F98 (CmpSetSecurityDescriptorInfo.c)
 *     CmSetValueKey @ 0x14086F460 (CmSetValueKey.c)
 *     CmQueryMultipleValueKey @ 0x140870B80 (CmQueryMultipleValueKey.c)
 *     CmDeleteValueKey @ 0x1408713A8 (CmDeleteValueKey.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x14088452C (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpCreateChild @ 0x14090B2FC (CmpCreateChild.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x140875930 (HvpMarkCellDirty.c)
 */

void __fastcall CmpUpdateKeyNodeAccessBits(ULONG_PTR a1, __int64 a2, unsigned int a3)
{
  if ( (*(_DWORD *)(a1 + 160) & 0x8001) == 0
    && (*(_BYTE *)(a2 + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0
    && (int)HvpMarkCellDirty(a1, a3) >= 0 )
  {
    *(_BYTE *)(a2 + 12) |= CmpAccessBitForPhase;
  }
}
