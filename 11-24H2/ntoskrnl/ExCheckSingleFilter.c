/*
 * XREFs of ExCheckSingleFilter @ 0x1403FBEF8
 * Callers:
 *     ExAllocateHeapPool @ 0x140277790 (ExAllocateHeapPool.c)
 *     EtwTraceObjectOperation @ 0x1403FBD80 (EtwTraceObjectOperation.c)
 *     EtwpCheckPoolTagFilters @ 0x14064ACE8 (EtwpCheckPoolTagFilters.c)
 *     EtwTraceObject @ 0x1407A9A04 (EtwTraceObject.c)
 *     EtwpObjectHandleEnumCallback @ 0x1407B1180 (EtwpObjectHandleEnumCallback.c)
 *     EtwTraceDuplicateHandle @ 0x140A3C190 (EtwTraceDuplicateHandle.c)
 *     VfFaultsInjectPoolAllocationFailure @ 0x140B98490 (VfFaultsInjectPoolAllocationFailure.c)
 *     ViFaultsIsTagPresentInList @ 0x140B98DF4 (ViFaultsIsTagPresentInList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExCheckSingleFilter(int a1, int a2)
{
  unsigned int v2; // ecx
  __int64 v3; // rax
  char v4; // dl
  int v6; // [rsp+8h] [rbp+8h]
  int v7; // [rsp+10h] [rbp+10h]

  v6 = a1;
  v2 = 0;
  v3 = 0LL;
  v7 = a2;
  while ( v2 < 4 )
  {
    v4 = *((_BYTE *)&v7 + v3);
    if ( v4 != 63 )
    {
      if ( v4 == 42 )
        return 1LL;
      if ( *((_BYTE *)&v6 + v3) != v4 )
        return 0LL;
    }
    ++v2;
    ++v3;
  }
  return 1LL;
}
