/*
 * XREFs of MiReleaseArbitraryPage @ 0x1403F0FF4
 * Callers:
 *     MiComputeCombineHash @ 0x140335700 (MiComputeCombineHash.c)
 *     MiConvertStandbyToProto @ 0x1403F0D74 (MiConvertStandbyToProto.c)
 * Callees:
 *     MiSafeLockPage @ 0x140334630 (MiSafeLockPage.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

unsigned __int8 __fastcall MiReleaseArbitraryPage(__int64 a1)
{
  __int64 v1; // rsi
  unsigned __int8 result; // al
  _QWORD *v4; // rdx
  unsigned __int64 v5; // rdi

  v1 = *(_QWORD *)(a1 + 48);
  result = MiSafeLockPage(0xAAAAAAAAAAAAAAABuLL * ((v1 + 0x220000000000LL) >> 4));
  *(_QWORD *)(a1 + 48) = 0LL;
  v4 = *(_QWORD **)(a1 + 56);
  v5 = result;
  *v4 = CLFS_LSN_NULL_EXT;
  *(_QWORD *)(a1 + 56) = 0LL;
  if ( result != 17 )
  {
    result = -1;
    _InterlockedAnd64((volatile signed __int64 *)(v1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (unsigned __int8)v5 < 2u )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v4) = v5;
        result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v4);
      }
      __writecr8(v5);
    }
  }
  return result;
}
