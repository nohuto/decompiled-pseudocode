/*
 * XREFs of IoInitializeProcessor @ 0x14070F18C
 * Callers:
 *     KiStartDynamicProcessor @ 0x1407393A8 (KiStartDynamicProcessor.c)
 *     IoInitSystemPreDrivers @ 0x140C1CA4C (IoInitSystemPreDrivers.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     IopQueryProcessorInitValues @ 0x14070F3F0 (IopQueryProcessorInitValues.c)
 *     ExInitializeSystemLookasideList @ 0x140B6FF6C (ExInitializeSystemLookasideList.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall IoInitializeProcessor(__int64 a1, _OWORD *a2)
{
  _OWORD *v2; // rsi
  char *Pool2; // rbx
  void *v5; // rbp
  int v6; // eax
  void *v7; // rbp
  void *v8; // rbp
  void *v9; // rbp
  _OWORD v11[2]; // [rsp+30h] [rbp-58h] BYREF

  v2 = a2;
  memset(v11, 0, sizeof(v11));
  if ( !a2 )
  {
    IopQueryProcessorInitValues(v11);
    v2 = v11;
  }
  Pool2 = (char *)ExAllocatePool2(0x40uLL, 0x280uLL, 0x6F49u);
  v5 = Pool2;
  if ( IopIrpCreditsEnabled <= 0 )
    v6 = 0x7FFFFFFF;
  else
    v6 = *((_DWORD *)v2 + 7);
  *(_DWORD *)(a1 + 11676) = v6;
  *(_QWORD *)(a1 + 2168) = &IopCompletionLookasideList;
  if ( Pool2 )
  {
    ExInitializeSystemLookasideList(
      (_DWORD)Pool2,
      512,
      56,
      1349542729,
      *((_WORD *)v2 + 3),
      (__int64)&ExSystemLookasideListHead);
    Pool2 += 128;
  }
  else
  {
    v5 = &IopCompletionLookasideList;
  }
  *(_QWORD *)(a1 + 2160) = v5;
  *(_QWORD *)(a1 + 2088) = &IopLargeIrpLookasideList;
  v7 = Pool2;
  if ( Pool2 )
  {
    ExInitializeSystemLookasideList(
      (_DWORD)Pool2,
      512,
      *((_DWORD *)v2 + 5),
      1282437705,
      *((_WORD *)v2 + 2),
      (__int64)&ExSystemLookasideListHead);
    Pool2 += 128;
  }
  else
  {
    v7 = &IopLargeIrpLookasideList;
  }
  *(_QWORD *)(a1 + 2080) = v7;
  *(_QWORD *)(a1 + 2072) = &IopMediumIrpLookasideList;
  v8 = Pool2;
  if ( Pool2 )
  {
    ExInitializeSystemLookasideList(
      (_DWORD)Pool2,
      512,
      *((_DWORD *)v2 + 4),
      1299214921,
      *((_WORD *)v2 + 1),
      (__int64)&ExSystemLookasideListHead);
    Pool2 += 128;
  }
  else
  {
    v8 = &IopMediumIrpLookasideList;
  }
  *(_QWORD *)(a1 + 2064) = v8;
  *(_QWORD *)(a1 + 2056) = &IopSmallIrpLookasideList;
  v9 = Pool2;
  if ( Pool2 )
  {
    ExInitializeSystemLookasideList(
      (_DWORD)Pool2,
      512,
      *((_DWORD *)v2 + 3),
      1399878217,
      *(_WORD *)v2,
      (__int64)&ExSystemLookasideListHead);
    Pool2 += 128;
  }
  else
  {
    v9 = &IopSmallIrpLookasideList;
  }
  *(_QWORD *)(a1 + 2048) = v9;
  *(_QWORD *)(a1 + 2104) = &IopMdlLookasideList;
  if ( Pool2 )
    ExInitializeSystemLookasideList(
      (_DWORD)Pool2,
      512,
      *((_DWORD *)v2 + 6),
      1349280845,
      *((_WORD *)v2 + 4),
      (__int64)&ExSystemLookasideListHead);
  else
    Pool2 = (char *)&IopMdlLookasideList;
  *(_QWORD *)(a1 + 2096) = Pool2;
  if ( (IopIrpStackProfilerFlags & 3) != 0 )
  {
    memset_0((void *)(a1 + 37696), 0, 0x50uLL);
    *(_DWORD *)(a1 + 37776) = 0;
    memset_0((void *)(a1 + 37780), 0, 0x50uLL);
    *(_DWORD *)(a1 + 37860) = 0;
  }
  return 0LL;
}
