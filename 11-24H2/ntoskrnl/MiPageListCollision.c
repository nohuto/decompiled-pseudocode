/*
 * XREFs of MiPageListCollision @ 0x1404218AC
 * Callers:
 *     MiUnlinkFreeOrZeroedPage @ 0x14024E130 (MiUnlinkFreeOrZeroedPage.c)
 *     MiUnlinkHugeRange @ 0x1404EEA38 (MiUnlinkHugeRange.c)
 *     MiReplenishPageSlist @ 0x1404F1A70 (MiReplenishPageSlist.c)
 * Callees:
 *     MiStopPageAccessor @ 0x140220340 (MiStopPageAccessor.c)
 *     MiZeroPageWorkMapping @ 0x140421920 (MiZeroPageWorkMapping.c)
 */

ULONG_PTR __fastcall MiPageListCollision(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR result; // rax
  __int64 v5; // r9
  __int64 v6; // rcx
  ULONG_PTR *v7; // rdx
  unsigned int v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0;
  result = MiStopPageAccessor(a1, 1LL, &v8, a4);
  *(_QWORD *)(result + 8LL * v8 + 24) |= 1uLL;
  v5 = *(_QWORD *)(result + 288);
  if ( v5 )
  {
    v6 = *(unsigned int *)(result + 320);
    v7 = (ULONG_PTR *)(v5 + 8 * MiPtesToSupportLargePageSizes[v6] * v8);
    result = *v7;
    if ( (*v7 & 1) != 0 )
      return MiZeroPageWorkMapping(v6, v7, 1LL);
  }
  return result;
}
