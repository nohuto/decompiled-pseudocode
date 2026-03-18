/*
 * XREFs of ?Clear@?$NonPagedPoolZeroedArray@UVIDMM_SEGMENT_GROUP_STATE@@$00$0GCDBGJFG@@@QEAAXXZ @ 0x14004D6F4
 * Callers:
 *     ??1VIDMM_PARTITION_ADAPTER_INFO@@QEAA@XZ @ 0x14004D6B0 (--1VIDMM_PARTITION_ADAPTER_INFO@@QEAA@XZ.c)
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x140092720 (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall NonPagedPoolZeroedArray<VIDMM_SEGMENT_GROUP_STATE,1,1647405398>::Clear(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 != (void *)(a1 + 8) && v2 )
    ExFreePoolWithTag(v2, 0);
  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 352) = 0;
}
