/*
 * XREFs of CmpUpdateKeyNodeAccessBits @ 0x14086A638
 * Callers:
 *     CmpCreateTombstone @ 0x140668414 (CmpCreateTombstone.c)
 *     CmSetValueKey @ 0x14086B130 (CmSetValueKey.c)
 *     CmQueryMultipleValueKey @ 0x14086C850 (CmQueryMultipleValueKey.c)
 *     CmDeleteValueKey @ 0x14086D078 (CmDeleteValueKey.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x14088067C (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpCreateChild @ 0x14091788C (CmpCreateChild.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1409A0064 (CmpSetSecurityDescriptorInfo.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x140871600 (HvpMarkCellDirty.c)
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
