/*
 * XREFs of ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1402B6018
 * Callers:
 *     ?SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAUVIDMM_MULTI_ALLOC@@IE@Z @ 0x140292440 (-SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERS.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1402B351C (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1402F3D20 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAVDXGALLOCATION@@PEAPEAVDXGHWQUEUE@@@Z @ 0x14034562C (-Render@DXGCONTEXT@@QEAAJPEAU_D3DKMT_RENDER@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSH.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x14001D8E0 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140034400 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DXGCONTEXT::WaitForQueuedPresentLimit(
        DXGCONTEXT *this,
        unsigned int a2,
        char a3,
        struct COREDEVICEACCESS *a4)
{
  __int64 v8; // rbx
  __int64 v10; // r8
  int v11; // ebp
  const char *v12; // rdx

  if ( *((_BYTE *)this + 434) )
    return 0LL;
  LODWORD(v8) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                          + 736LL)
                                                                              + 8LL)
                                                                  + 184LL))(
                  *(_QWORD *)(*((_QWORD *)this + 2) + 800LL),
                  a2,
                  0LL);
  if ( (_DWORD)v8 != -1071775486 )
    goto LABEL_3;
  if ( !a3 )
    goto LABEL_9;
  COREDEVICEACCESS::Release(a4);
  LOBYTE(v10) = 1;
  v8 = (*(int (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                              + 736LL)
                                                                  + 8LL)
                                                      + 184LL))(
         *(_QWORD *)(*((_QWORD *)this + 2) + 800LL),
         a2,
         v10);
  v11 = COREDEVICEACCESS::AcquireShared(a4, 0LL);
  if ( v11 >= 0 )
  {
LABEL_3:
    if ( (int)v8 >= 0 )
      return (unsigned int)v8;
LABEL_9:
    WdLogSingleEntry2(4LL, (int)v8, this);
    WdLogGlobalForLineNumber = 3652;
    if ( (_DWORD)v8 != -1071775486 && (_DWORD)v8 != -1073741130 && (_DWORD)v8 != -1071775232 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3655;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"(STATUS_GRAPHICS_ALLOCATION_BUSY == ntStatus) || (STATUS_DEVICE_REMOVED == ntStatus) || (STATUS_GRAPHICS_GPU_EXC"
         "EPTION_ON_DEVICE == ntStatus)",
        3655LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    return (unsigned int)v8;
  }
  WdLogSingleEntry1(4LL, v8);
  WdLogGlobalForLineNumber = 3644;
  COREDEVICEACCESS::AcquireSharedUncheck(a4, v12);
  return (unsigned int)v11;
}
