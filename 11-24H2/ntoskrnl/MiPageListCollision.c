/*
 * XREFs of MiPageListCollision @ 0x14042FDFC
 * Callers:
 *     MiUnlinkFreeOrZeroedPage @ 0x1402213E0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiUnlinkHugeRange @ 0x1404F0F98 (MiUnlinkHugeRange.c)
 *     MiReplenishPageSlist @ 0x1404F40C0 (MiReplenishPageSlist.c)
 * Callees:
 *     MiStopPageAccessor @ 0x14026ADB0 (MiStopPageAccessor.c)
 *     MiZeroPageWorkMapping @ 0x14042FE70 (MiZeroPageWorkMapping.c)
 */

ULONG_PTR __fastcall MiPageListCollision(__int64 *a1)
{
  ULONG_PTR result; // rax
  __int64 v2; // r9
  __int64 v3; // rcx
  ULONG_PTR *v4; // rdx
  unsigned int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0;
  result = MiStopPageAccessor(a1, 1LL, &v5);
  *(_QWORD *)(result + 8LL * v5 + 24) |= 1uLL;
  v2 = *(_QWORD *)(result + 288);
  if ( v2 )
  {
    v3 = *(unsigned int *)(result + 320);
    v4 = (ULONG_PTR *)(v2 + 8 * MiPtesToSupportLargePageSizes[v3] * v5);
    result = *v4;
    if ( (*v4 & 1) != 0 )
      return MiZeroPageWorkMapping(v3, v4, 1LL);
  }
  return result;
}
