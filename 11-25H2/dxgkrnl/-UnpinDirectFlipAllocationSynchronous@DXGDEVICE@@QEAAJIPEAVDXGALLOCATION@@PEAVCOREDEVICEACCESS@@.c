/*
 * XREFs of ?UnpinDirectFlipAllocationSynchronous@DXGDEVICE@@QEAAJIPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1401858E0
 * Callers:
 *     ?DisablePinnedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1402E1360 (-DisablePinnedAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 *     ?UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402E15DC (-UnpinDirectFlipAllocation@DXGDEVICE@@QEAAJIIPEAPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z @ 0x1400135A0 (-TestAndSetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@PEAV2@@Z.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x14001D8E0 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140034400 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?VidMmIsAllocationInPresentQueue@VIDMM_EXPORT@@QEAAEPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEAI@Z @ 0x14003B7CC (-VidMmIsAllocationInPresentQueue@VIDMM_EXPORT@@QEAAEPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@PEA.c)
 *     ?VidMmIsAllocationPinned@VIDMM_EXPORT@@QEAA_NPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z @ 0x140047878 (-VidMmIsAllocationPinned@VIDMM_EXPORT@@QEAA_NPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z @ 0x140056908 (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@@Z.c)
 *     ?VidMmWaitOnAllocationPresentQueue@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@I@Z @ 0x140067CC8 (-VidMmWaitOnAllocationPresentQueue@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@I.c)
 */

__int64 __fastcall DXGDEVICE::UnpinDirectFlipAllocationSynchronous(
        DXGDEVICE *this,
        unsigned int a2,
        struct VIDMM_MULTI_ALLOC **a3,
        struct COREDEVICEACCESS *a4)
{
  unsigned int v8; // ebp
  __int64 v9; // rax
  struct DXGALLOCATION *v10; // r9
  char IsAllocationInPresentQueue; // r14
  int v12; // eax
  const char *v13; // rdx
  unsigned int v15; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0;
  if ( (unsigned __int8)VIDMM_EXPORT::VidMmIsAllocationPinned(
                          *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
                          *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 768LL),
                          a3[3]) )
  {
    v9 = *((_QWORD *)this + 2);
    v15 = 0;
    IsAllocationInPresentQueue = VIDMM_EXPORT::VidMmIsAllocationInPresentQueue(
                                   *(VIDMM_EXPORT **)(v9 + 760),
                                   *(struct VIDMM_GLOBAL **)(v9 + 768),
                                   a3[3],
                                   &v15);
    if ( a4 )
      COREDEVICEACCESS::Release(a4);
    if ( IsAllocationInPresentQueue )
    {
      if ( v15 <= 1 )
      {
        v12 = VIDMM_EXPORT::VidMmWaitOnAllocationPresentQueue(
                *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
                *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 768LL),
                a3[3],
                a2);
        v8 = v12;
        if ( v12 < 0 )
        {
          WdLogSingleEntry3(3LL, a3, a3[3], v12);
          WdLogGlobalForLineNumber = 7400;
        }
      }
    }
    DXGDEVICE::TestAndSetDisplayedPrimary(this, a2, (const struct DXGALLOCATION *)a3, v10);
    if ( a4 )
      COREDEVICEACCESS::AcquireSharedUncheck(a4, v13);
    VIDMM_EXPORT::VidMmUnpinAllocation(
      *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
      *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 768LL),
      a3[3]);
  }
  return v8;
}
