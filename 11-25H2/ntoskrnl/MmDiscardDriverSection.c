/*
 * XREFs of MmDiscardDriverSection @ 0x140C4AB80
 * Callers:
 *     KeFreeInitializationCode @ 0x140BCE4F0 (KeFreeInitializationCode.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402AC190 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiUnlockLoadedDataTableEntry @ 0x14036DE44 (MiUnlockLoadedDataTableEntry.c)
 *     MiLockLoadedDataTableEntry @ 0x14036DEDC (MiLockLoadedDataTableEntry.c)
 *     MiSnapDriverRange @ 0x140A39B68 (MiSnapDriverRange.c)
 *     MiFreeInitializationCode @ 0x140AD58A0 (MiFreeInitializationCode.c)
 */

__int64 __fastcall MmDiscardDriverSection(__int64 a1)
{
  _QWORD *v2; // rbx
  PVOID v3; // rdi
  PVOID v4; // rt1
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0LL;
  v6 = 0LL;
  v2 = (_QWORD *)MiLockLoadedDataTableEntry(a1, 1);
  v3 = (PVOID)v2[6];
  if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS((unsigned __int64)v3)
    || (v4 = *(PVOID *)&KeNumberProcessorsGroup0[9], v3 == v4)
    || v3 == PsHalImageBase )
  {
    MiSnapDriverRange((__int64)v2, 0, 0, a1, (unsigned __int64 *)&v6, (unsigned __int64 *)&v7);
    if ( v6 )
      MiFreeInitializationCode(v2, v6, v7, 0);
  }
  return MiUnlockLoadedDataTableEntry((__int64)v2, 1);
}
