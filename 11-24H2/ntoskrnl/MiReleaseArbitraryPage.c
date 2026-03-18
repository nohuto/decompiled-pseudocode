/*
 * XREFs of MiReleaseArbitraryPage @ 0x14020BF38
 * Callers:
 *     MiComputeCombineHash @ 0x14020C3A0 (MiComputeCombineHash.c)
 *     MiConvertStandbyToProto @ 0x140313ACC (MiConvertStandbyToProto.c)
 * Callees:
 *     MiSafeLockPage @ 0x140216290 (MiSafeLockPage.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiReleaseArbitraryPage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 result; // rax
  _QWORD *v7; // rdx
  unsigned __int64 v8; // rdi

  v4 = *(_QWORD *)(a1 + 48);
  result = MiSafeLockPage(0xAAAAAAAAAAAAAAABuLL * ((v4 + 0x220000000000LL) >> 4), a2, a3, a4);
  *(_QWORD *)(a1 + 48) = 0LL;
  v7 = *(_QWORD **)(a1 + 56);
  v8 = (unsigned __int8)result;
  *v7 = CLFS_LSN_NULL_EXT;
  *(_QWORD *)(a1 + 56) = 0LL;
  if ( (_BYTE)result != 17 )
  {
    result = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (unsigned __int8)v8 < 2u )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v7) = v8;
        result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
      }
      __writecr8(v8);
    }
  }
  return result;
}
