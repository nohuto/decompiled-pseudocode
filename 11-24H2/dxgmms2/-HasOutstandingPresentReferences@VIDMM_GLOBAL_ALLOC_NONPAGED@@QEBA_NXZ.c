/*
 * XREFs of ?HasOutstandingPresentReferences@VIDMM_GLOBAL_ALLOC_NONPAGED@@QEBA_NXZ @ 0x140034050
 * Callers:
 *     VidSchiCheckConditionDeviceCommand @ 0x140033300 (VidSchiCheckConditionDeviceCommand.c)
 *     VidSchSubmitDeviceCommand @ 0x140033344 (VidSchSubmitDeviceCommand.c)
 *     ?IsDisplayingResourceCB@VIDMM_SEGMENT@@SA_NPEBUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x14009E6B0 (-IsDisplayingResourceCB@VIDMM_SEGMENT@@SA_NPEBUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 *     ?IsMovableResourceNoDisplayingCB@VIDMM_SEGMENT@@SA_NPEBUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x14009E720 (-IsMovableResourceNoDisplayingCB@VIDMM_SEGMENT@@SA_NPEBUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 *     ?IsNonOverlappingResourceCB@VIDMM_SEGMENT@@SA_NPEBUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x14009E760 (-IsNonOverlappingResourceCB@VIDMM_SEGMENT@@SA_NPEBUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 *     ?ReserveOutsideRangeCB@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@PEA_NPEAX@Z @ 0x14009E910 (-ReserveOutsideRangeCB@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@PEA_NPEAX@Z.c)
 *     ?ReserveOutsideRangeNoDisplayingCB@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@PEA_NPEAX@Z @ 0x14009EA60 (-ReserveOutsideRangeNoDisplayingCB@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC@@PEA_NPEAX@Z.c)
 *     ?VidMmProcessAsyncOperation@@YAXPEAX@Z @ 0x1400FC880 (-VidMmProcessAsyncOperation@@YAXPEAX@Z.c)
 *     ?IsAllocationInPresentQueue@VIDMM_GLOBAL@@QEAAEPEAUVIDMM_MULTI_ALLOC@@PEAI@Z @ 0x1401026B0 (-IsAllocationInPresentQueue@VIDMM_GLOBAL@@QEAAEPEAUVIDMM_MULTI_ALLOC@@PEAI@Z.c)
 *     ?WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@I@Z @ 0x1401040E4 (-WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@I@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall VIDMM_GLOBAL_ALLOC_NONPAGED::HasOutstandingPresentReferences(VIDMM_GLOBAL_ALLOC_NONPAGED *this)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx

  v1 = *((_QWORD *)this + 4);
  if ( v1 )
  {
    v4 = *(_QWORD *)(v1 + 8);
    v5 = *(_QWORD *)(v1 + 24);
    if ( !*(_BYTE *)(v4 + 29)
      && !(*(_DWORD *)(v4 + 48) == 6 || *(_BYTE *)(v4 + 30)
         ? **(_QWORD **)(v4 + 72) >= v5
         : **(_DWORD **)(v4 + 72) - (int)v5 >= 0) )
    {
      return 1;
    }
  }
  else
  {
    v2 = *((_QWORD *)this + 3);
    if ( v2 )
      return *(_DWORD *)(v2 + 8) > 0;
  }
  return 0;
}
