/*
 * XREFs of ?DisablePinnedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1402E5640
 * Callers:
 *     ?UnpinDeviceAllocations@DXGDEVICE@@QEAAXXZ @ 0x1402C8F80 (-UnpinDeviceAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?DisablePinnedResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x140409554 (-DisablePinnedResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?VidSchCreateContext@VIDSCH_EXPORT@@QEAAPEAU_VIDSCH_CONTEXT@@PEAVDXGCONTEXT@@PEAU_VIDSCH_CONTEXT_DATA@@@Z @ 0x140051164 (-VidSchCreateContext@VIDSCH_EXPORT@@QEAAPEAU_VIDSCH_CONTEXT@@PEAVDXGCONTEXT@@PEAU_VIDSCH_CONTEXT.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z @ 0x1400560B8 (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?UnpinDirectFlipAllocationSynchronous@DXGDEVICE@@QEAAJIPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x140187B38 (-UnpinDirectFlipAllocationSynchronous@DXGDEVICE@@QEAAJIPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@.c)
 *     ?DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z @ 0x1402E5A50 (-DxgkReferenceDxgAllocation@@YAXPEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1402E5AAC (-DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 */

void __fastcall DXGDEVICE::DisablePinnedAllocation(DXGDEVICE *this, struct DXGALLOCATION *a2)
{
  __int64 v3; // rcx
  struct DXGALLOCATION *v4; // rbx
  unsigned int v5; // edi
  unsigned int v6; // edi
  int v7; // ebp
  struct DXGALLOCATION **v8; // r14
  struct DXGALLOCATION *v9; // r15
  __int64 v10; // rbx
  struct DXGALLOCATION *v11; // [rsp+78h] [rbp+10h] BYREF

  v11 = a2;
  v3 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v3 + 184)
    && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v3 + 168)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 481;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"GetRenderCore()->IsCoreResourceExclusiveOwner()",
      481LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v4 = v11;
  if ( (*((_DWORD *)v11 + 18) & 0x800) != 0 )
  {
    VIDMM_EXPORT::VidMmUnpinAllocation(
      *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
      *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 768LL),
      *((struct VIDMM_MULTI_ALLOC **)v11 + 3));
    *((_DWORD *)v4 + 18) &= ~0x800u;
  }
  v5 = *(_DWORD *)(*((_QWORD *)v4 + 6) + 4LL);
  if ( (v5 & 0x2000) != 0 && *((_QWORD *)v4 + 3) )
  {
    v6 = (v5 >> 6) & 0xF;
    v7 = 0;
    v8 = &v11;
    do
    {
      v9 = *v8;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL)
                                                                         + 8LL)
                                                             + 1272LL))(
             *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
             *((_QWORD *)*v8 + 3)) )
      {
        if ( !*((_QWORD *)v9 + 5) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 7337;
          DxgkLogInternalTriageEvent(
            0LL,
            262146LL,
            0xFFFFFFFFLL,
            L"NULL != pCurrentAlloc->m_pOwningResource",
            7337LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        DxgkReferenceDxgAllocation(v9);
        DxgkReferenceDxgResource(*((struct DXGRESOURCE **)v9 + 5));
        if ( (int)VIDSCH_EXPORT::VidSchCreateContext(
                    *(VIDSCH_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
                    *(struct DXGCONTEXT **)(*((_QWORD *)this + 2) + 768LL),
                    v9) < 0 )
        {
          v10 = (int)DXGDEVICE::UnpinDirectFlipAllocationSynchronous(this, v6, (struct VIDMM_MULTI_ALLOC **)v9, 0LL);
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)v9 + 5) + 72LL));
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)v9 + 11);
          WdLogSingleEntry1(3LL, v10);
          WdLogGlobalForLineNumber = 7364;
          if ( (int)v10 < 0 )
            break;
        }
      }
      ++v7;
      ++v8;
    }
    while ( !v7 );
  }
}
