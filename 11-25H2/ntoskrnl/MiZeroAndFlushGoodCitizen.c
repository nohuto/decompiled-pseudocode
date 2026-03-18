/*
 * XREFs of MiZeroAndFlushGoodCitizen @ 0x1404C5D98
 * Callers:
 *     MiClearMappingAndDereferenceIoSpace @ 0x1403292C0 (MiClearMappingAndDereferenceIoSpace.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x1402FB704 (MiLockWorkingSetSharedAtDpc.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiReduceShareCount @ 0x140340D70 (MiReduceShareCount.c)
 */

char __fastcall MiZeroAndFlushGoodCitizen(__int64 a1, _QWORD *a2, unsigned __int8 a3, unsigned int a4, int a5)
{
  __int64 v5; // r14
  __int64 v9; // rbx
  int v10; // esi
  char result; // al

  v5 = a4;
  if ( a4 )
  {
    v9 = 48 * ((*a2 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v10 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v10 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait();
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v9 + 24) < 0 );
    }
    MiReduceShareCount(v9, v5);
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  MiUnlockPageTable(a1, (unsigned __int64)a2);
  result = MiUnlockWorkingSetShared(a1, a3);
  if ( a5 )
  {
    if ( a3 == 17 )
      return MiLockWorkingSetSharedAtDpc(a1);
    else
      return MiLockWorkingSetShared(a1);
  }
  return result;
}
