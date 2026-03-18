/*
 * XREFs of HvUnlockHiveFilePages @ 0x140A8991C
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x140465694 (CmpRecheckHiveVolumePolicy.c)
 * Callees:
 *     HvpViewMapAdjustFlag @ 0x140A401E4 (HvpViewMapAdjustFlag.c)
 */

__int64 __fastcall HvUnlockHiveFilePages(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 160);
  if ( (result & 0x800000) != 0 )
  {
    if ( (result & 0x20000) != 0 )
      result = HvpViewMapAdjustFlag(a1 + 224, 2, 0);
    *(_DWORD *)(a1 + 160) &= ~0x800000u;
  }
  return result;
}
