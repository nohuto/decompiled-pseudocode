/*
 * XREFs of SdbpOpenDatabaseInMemory @ 0x180093C6C
 * Callers:
 *     SdbpOpenCompressedDatabase @ 0x18009BDB4 (SdbpOpenCompressedDatabase.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline @ 0x180091D30 (Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline.c)
 *     SdbpReadMappedData @ 0x180093DD4 (SdbpReadMappedData.c)
 *     SdbpValidateAndApplyCompatFlags @ 0x18009408C (SdbpValidateAndApplyCompatFlags.c)
 *     SdbpValidateRootTagSizes @ 0x1800941A0 (SdbpValidateRootTagSizes.c)
 *     AslFree @ 0x18009D6FC (AslFree.c)
 */

_DWORD *__fastcall SdbpOpenDatabaseInMemory(__int64 a1, int a2, unsigned int a3)
{
  _DWORD *Heap; // rax
  _DWORD *v7; // rbx
  __int64 v9; // [rsp+30h] [rbp-18h] BYREF
  int v10; // [rsp+38h] [rbp-10h]

  v9 = 0LL;
  v10 = 0;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xA80uLL);
  v7 = Heap;
  if ( !Heap )
  {
    AslLogCallPrintf(1LL);
    return 0LL;
  }
  Heap[4] = 0;
  *(_QWORD *)Heap = 0LL;
  Heap[5] = a2;
  *((_QWORD *)Heap + 1) = a1;
  Heap[6] |= 1u;
  if ( !(unsigned int)SdbpReadMappedData(Heap, 0LL, &v9, 12LL)
    || (unsigned int)Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline()
    && v10 != 1717724275
    && (a3 & 2) == 0 )
  {
    goto LABEL_4;
  }
  if ( !(unsigned int)SdbpValidateAndApplyCompatFlags(v7, &v9, a3) )
    goto LABEL_5;
  if ( (unsigned int)Feature_SdbValidateRootTagsOnOpen__private_IsEnabledDeviceUsageNoInline()
    && (int)SdbpValidateRootTagSizes(v7) < 0 )
  {
LABEL_4:
    AslLogCallPrintf(1LL);
LABEL_5:
    AslFree(NtCurrentPeb()->ProcessHeap, v7);
    return 0LL;
  }
  return v7;
}
