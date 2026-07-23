/*
 * XREFs of MiZeroAndFlushGoodCitizen @ 0x1404BFA78
 * Callers:
 *     MiClearMappingAndDereferenceIoSpace @ 0x14029E560 (MiClearMappingAndDereferenceIoSpace.c)
 * Callees:
 *     MiReduceShareCount @ 0x140206F10 (MiReduceShareCount.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x14020BF58 (MiLockWorkingSetSharedAtDpc.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 */

char __fastcall MiZeroAndFlushGoodCitizen(__int64 a1, _QWORD *a2, unsigned __int8 a3, unsigned int a4, int a5)
{
  __int64 v5; // r14
  __int64 v9; // rbx
  unsigned int v10; // esi
  char result; // al
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9

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
          HvlNotifyLongSpinWait(v10);
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
  MiUnlockPageTableInternal(a1, (unsigned __int64)a2);
  result = MiUnlockWorkingSetShared(a1, a3);
  if ( a5 )
  {
    if ( a3 == 17 )
      return MiLockWorkingSetSharedAtDpc(a1);
    else
      return MiLockWorkingSetShared(a1, v12, v13, v14);
  }
  return result;
}
