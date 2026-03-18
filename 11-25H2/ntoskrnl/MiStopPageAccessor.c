/*
 * XREFs of MiStopPageAccessor @ 0x140347A84
 * Callers:
 *     MiPageFreeToZero @ 0x1403478B0 (MiPageFreeToZero.c)
 *     MiPageListCollision @ 0x14043ADFC (MiPageListCollision.c)
 *     MiDereferenceHugeContext @ 0x1404CFC80 (MiDereferenceHugeContext.c)
 *     MiHugeRangeFreeToZero @ 0x1404ED414 (MiHugeRangeFreeToZero.c)
 *     MiScrubLargePage @ 0x140682174 (MiScrubLargePage.c)
 *     MiInitializeNewUltraHugeContext @ 0x1406841C4 (MiInitializeNewUltraHugeContext.c)
 * Callees:
 *     MiMakeDemandZeroPte @ 0x140385190 (MiMakeDemandZeroPte.c)
 *     MiLocatePageCollisionByPfn @ 0x1404560C0 (MiLocatePageCollisionByPfn.c)
 *     MiStopHugePageAccessor @ 0x1404F3624 (MiStopHugePageAccessor.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall MiStopPageAccessor(ULONG_PTR BugCheckParameter2, __int64 a2, _DWORD *a3)
{
  ULONG_PTR v5; // rdi
  ULONG_PTR v6; // rdx
  int v8; // [rsp+40h] [rbp+8h]

  if ( a3 )
    *a3 = 0;
  if ( BugCheckParameter2 < 0xFFFFDE0000000000uLL || BugCheckParameter2 >= 48 * qword_140E2D9A0 - 0x21FFFFFFFFD0LL )
  {
    v5 = MiStopHugePageAccessor(BugCheckParameter2);
    v6 = v5 + 24;
  }
  else
  {
    v8 = *(_DWORD *)(BugCheckParameter2 + 32);
    BYTE2(v8) &= ~8u;
    *(_DWORD *)(BugCheckParameter2 + 32) = v8;
    v5 = *(_QWORD *)(BugCheckParameter2 + 16);
    if ( !MiLocatePageCollisionByPfn(
            v5,
            0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4)) )
      KeBugCheckEx(
        0x1Au,
        0x1502uLL,
        BugCheckParameter2,
        v5,
        0xAAAAAAAAAAAAAAABuLL * ((__int64)(BugCheckParameter2 + 0x220000000000LL) >> 4));
    *(_QWORD *)(BugCheckParameter2 + 16) = MiMakeDemandZeroPte(4LL);
  }
  if ( a3 )
    *a3 = (__int64)(v6 - v5 - 24) >> 3;
  return v5;
}
