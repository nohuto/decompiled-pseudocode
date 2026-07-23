/*
 * XREFs of MiReleaseInPageRefs @ 0x14021C2D8
 * Callers:
 *     MiInvalidateCollidedIos @ 0x14049B72C (MiInvalidateCollidedIos.c)
 * Callees:
 *     MiLockAndDecrementShareCount @ 0x14021D444 (MiLockAndDecrementShareCount.c)
 *     MiDereferenceControlAreaPfnList @ 0x14021DC9C (MiDereferenceControlAreaPfnList.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiReleaseInPageRefs(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v2; // r9
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // edi
  __int64 v8; // rcx
  __int64 result; // rax

  v2 = 48 * (*(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  if ( (*(_QWORD *)(v2 + 24) & 0x4000000000000000LL) != 0 )
    KeBugCheckEx(0x1Au, 0x61950uLL, BugCheckParameter2, v2, *(_QWORD *)(v2 + 24) & 0x3FFFFFFFFFFFFFFFLL);
  MiLockAndDecrementShareCount(v2);
  v7 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v7 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v4, v3, v5, v6) )
      {
        HvlNotifyLongSpinWait(v7);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(BugCheckParameter2 + 24) < 0 );
  }
  *(_QWORD *)(BugCheckParameter2 + 24) |= 0x4000000000000000uLL;
  if ( *(__int64 *)(BugCheckParameter2 + 40) < 0 && (v8 = *(_QWORD *)(BugCheckParameter2 + 16), (v8 & 0x400) != 0) )
  {
    if ( qword_140E2DCC0 )
    {
      if ( (v8 & 0x10) == 0 )
        v8 &= ~qword_140E2DCC0;
    }
    _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return MiDereferenceControlAreaPfnList(*(_QWORD *)(v8 >> 16), v8 >> 16, 1LL, 3LL);
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
