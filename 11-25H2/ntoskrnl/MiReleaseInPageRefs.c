/*
 * XREFs of MiReleaseInPageRefs @ 0x14041981C
 * Callers:
 *     MiInvalidateCollidedIos @ 0x1404192CC (MiInvalidateCollidedIos.c)
 * Callees:
 *     MiLockAndDecrementShareCount @ 0x140227554 (MiLockAndDecrementShareCount.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiDereferenceControlAreaPfnList @ 0x140419984 (MiDereferenceControlAreaPfnList.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall MiReleaseInPageRefs(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v2; // r9
  int v3; // edi
  __int64 v4; // rcx
  __int64 result; // rax

  v2 = 48 * (*(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  if ( (*(_QWORD *)(v2 + 24) & 0x4000000000000000LL) != 0 )
    KeBugCheckEx(0x1Au, 0x61950uLL, BugCheckParameter2, v2, *(_QWORD *)(v2 + 24) & 0x3FFFFFFFFFFFFFFFLL);
  MiLockAndDecrementShareCount(v2, 2);
  v3 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v3 & HvlLongSpinCountMask) == 0
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
    while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
  }
  *(_QWORD *)(BugCheckParameter2 + 24) |= 0x4000000000000000uLL;
  if ( *(__int64 *)(BugCheckParameter2 + 40) < 0 && (v4 = *(_QWORD *)(BugCheckParameter2 + 16), (v4 & 0x400) != 0) )
  {
    if ( qword_140E2D940 )
    {
      if ( (v4 & 0x10) == 0 )
        v4 &= ~qword_140E2D940;
    }
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return MiDereferenceControlAreaPfnList(*(_QWORD *)(v4 >> 16), v4 >> 16, 1LL, 3LL);
  }
  else
  {
    *(_QWORD *)(BugCheckParameter2 + 16) &= ~4uLL;
    *(_QWORD *)(BugCheckParameter2 + 16) &= ~2uLL;
    result = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return result;
}
