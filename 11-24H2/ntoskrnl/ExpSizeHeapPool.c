/*
 * XREFs of ExpSizeHeapPool @ 0x140658B18
 * Callers:
 *     ViPostPoolAllocation @ 0x140B938F0 (ViPostPoolAllocation.c)
 * Callees:
 *     ExpRemoveTagForBigPages @ 0x14021B1B0 (ExpRemoveTagForBigPages.c)
 *     MmDeterminePoolType @ 0x14035B710 (MmDeterminePoolType.c)
 */

__int64 __fastcall ExpSizeHeapPool(unsigned __int64 a1)
{
  ULONG_PTR v1; // rax
  ULONG_PTR v2; // r10
  int v4; // [rsp+50h] [rbp+8h] BYREF
  __int64 v5; // [rsp+58h] [rbp+10h] BYREF
  __int64 v6; // [rsp+60h] [rbp+18h] BYREF
  __int64 v7; // [rsp+68h] [rbp+20h] BYREF

  v5 = 0LL;
  v4 = 0;
  v7 = 0LL;
  v6 = 0LL;
  if ( (a1 & 0xFFF) != 0 )
    return 16LL * (unsigned __int8)*(_WORD *)(a1 - 14);
  v1 = MmDeterminePoolType(a1);
  ExpRemoveTagForBigPages(v2, v1, 0LL, &v4, &v7, &v5, (ULONG_PTR *)&v6);
  return v5;
}
