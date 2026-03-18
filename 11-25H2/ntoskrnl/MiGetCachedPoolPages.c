/*
 * XREFs of MiGetCachedPoolPages @ 0x140378FFC
 * Callers:
 *     MiGetPoolPages @ 0x140378DE4 (MiGetPoolPages.c)
 * Callees:
 *     MiFillPhysicalPages @ 0x14024D8D0 (MiFillPhysicalPages.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiSplitPageChain @ 0x1404A6698 (MiSplitPageChain.c)
 */

__int64 __fastcall MiGetCachedPoolPages(__int64 a1)
{
  __int64 v2; // rsi
  _QWORD *v3; // rdi
  unsigned __int64 v4; // rdx
  _QWORD **v5; // r14
  unsigned int v6; // ebp
  __int64 v7; // r8
  _QWORD *v9; // rsi

  v2 = qword_140E2D8B8 + 384LL * *(unsigned int *)(a1 + 96);
  if ( *(_BYTE *)(a1 + 102) == 2 )
  {
    *(_BYTE *)(a1 + 103) = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v2 + 72));
  }
  else
  {
    *(_BYTE *)(a1 + 103) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 72));
  }
  v3 = (_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(a1 + 8);
  v5 = (_QWORD **)(a1 + 16);
  if ( *(_QWORD *)(v2 + 96) <= v4 )
    v4 = *(_QWORD *)(v2 + 96);
  v6 = 0;
  if ( v4 )
    MiSplitPageChain(v2 + 80, v4, a1 + 16);
  MiReleaseSpinLockExclusive((_DWORD *)(v2 + 72), *(_BYTE *)(a1 + 103));
  if ( _bittest16((const signed __int16 *)(a1 + 100), 9u) )
  {
    v9 = *v5;
    if ( *v5 )
    {
      do
      {
        MiFillPhysicalPages(0LL, 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v9 + 0x44000000000LL) >> 4), v7, 0LL);
        v9 = (_QWORD *)*v9;
      }
      while ( v9 );
      v3 = (_QWORD *)(a1 + 8);
    }
  }
  LOBYTE(v6) = *(_QWORD *)(a1 + 32) == *v3;
  return v6;
}
