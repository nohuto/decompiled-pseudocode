/*
 * XREFs of MmDiscardDriverSection @ 0x140C5BF00
 * Callers:
 *     KeFreeInitializationCode @ 0x140BDF4F0 (KeFreeInitializationCode.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1402637E0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiUnlockLoadedDataTableEntry @ 0x1402C6EA4 (MiUnlockLoadedDataTableEntry.c)
 *     MiLockLoadedDataTableEntry @ 0x1402C6F3C (MiLockLoadedDataTableEntry.c)
 *     MiSnapDriverRange @ 0x140A3DE88 (MiSnapDriverRange.c)
 *     MiFreeInitializationCode @ 0x140AE67EC (MiFreeInitializationCode.c)
 */

__int64 __fastcall MmDiscardDriverSection(__int64 a1)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rdi
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  v6 = 0LL;
  v5 = 0LL;
  v2 = MiLockLoadedDataTableEntry(a1, 1);
  v3 = *(_QWORD *)(v2 + 48);
  if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS(v3) || v3 == PsNtosImageBase || v3 == PsHalImageBase )
  {
    MiSnapDriverRange(v2, 0, 0, a1, (unsigned __int64 *)&v5, (unsigned __int64 *)&v6);
    if ( v5 )
      MiFreeInitializationCode(v2, v5, v6, 0);
  }
  return MiUnlockLoadedDataTableEntry(v2, 1);
}
