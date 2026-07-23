/*
 * XREFs of MmDiscardDriverSection @ 0x140C5E090
 * Callers:
 *     KeFreeInitializationCode @ 0x140BE14F0 (KeFreeInitializationCode.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x140293050 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiUnlockLoadedDataTableEntry @ 0x1402BBA24 (MiUnlockLoadedDataTableEntry.c)
 *     MiLockLoadedDataTableEntry @ 0x1402BBABC (MiLockLoadedDataTableEntry.c)
 *     MiSnapDriverRange @ 0x140A33798 (MiSnapDriverRange.c)
 *     MiFreeInitializationCode @ 0x140AE80CC (MiFreeInitializationCode.c)
 */

__int64 __fastcall MmDiscardDriverSection(__int64 a1)
{
  _QWORD *v2; // rbx
  PVOID v3; // rdi
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  v6 = 0LL;
  v5 = 0LL;
  v2 = (_QWORD *)MiLockLoadedDataTableEntry(a1, 1);
  v3 = (PVOID)v2[6];
  if ( !(unsigned int)MI_IS_PHYSICAL_ADDRESS((unsigned __int64)v3) || v3 == PsNtosImageBase || v3 == PsHalImageBase )
  {
    MiSnapDriverRange((__int64)v2, 0, 0, a1, (unsigned __int64 *)&v5, (unsigned __int64 *)&v6);
    if ( v5 )
      MiFreeInitializationCode(v2, v5, v6, 0);
  }
  return MiUnlockLoadedDataTableEntry((__int64)v2, 1);
}
