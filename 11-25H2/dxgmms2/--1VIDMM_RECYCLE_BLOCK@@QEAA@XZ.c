/*
 * XREFs of ??1VIDMM_RECYCLE_BLOCK@@QEAA@XZ @ 0x1401000EC
 * Callers:
 *     ??_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z @ 0x1400285FC (--_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z.c)
 *     ?MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z @ 0x1400C8210 (-MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??3@YAXPEAX@Z @ 0x140028730 (--3@YAXPEAX@Z.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x140038DE0 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     McTemplateK0pxqqt_EtwWriteTransfer @ 0x140043F1C (McTemplateK0pxqqt_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     ?VidMmDereferenceObjectAsync@@YAXPEAX@Z @ 0x1400C0A60 (-VidMmDereferenceObjectAsync@@YAXPEAX@Z.c)
 *     ?UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z @ 0x1401014AC (-UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z.c)
 */

void __fastcall VIDMM_RECYCLE_BLOCK::~VIDMM_RECYCLE_BLOCK(VIDMM_RECYCLE_BLOCK *this)
{
  _QWORD *v2; // rsi
  void *v3; // rcx
  int *v4; // r8
  unsigned __int64 v5; // r9
  int v6; // edx
  void *v7; // rdx
  void **v8; // rcx
  VIDMM_RECYCLE_BLOCK **v9; // rdx
  VIDMM_RECYCLE_BLOCK **v10; // rcx
  unsigned int *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r9
  void *v14; // rcx
  unsigned __int64 v15; // rcx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v17; // eax
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // [rsp+28h] [rbp-30h]
  __int64 v21; // [rsp+30h] [rbp-28h]
  __int64 v22; // [rsp+38h] [rbp-20h]
  unsigned __int64 v23; // [rsp+60h] [rbp+8h] BYREF

  v2 = (_QWORD *)((char *)this + 40);
  v3 = (void *)*((_QWORD *)this + 5);
  v4 = (int *)*((_QWORD *)this + 4);
  v5 = *((_QWORD *)this + 6) - (_QWORD)v3;
  v23 = v5;
  v6 = *v4;
  if ( (unsigned int)(*v4 - 9) > 1 )
  {
    if ( (unsigned int)(v6 - 3) > 3 )
    {
      if ( v3 )
      {
        VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
        v17 = (*((__int64 (__fastcall **)(__int64, _QWORD *, unsigned __int64 *, __int64))VirtualMemoryInterface + 2))(
                -1LL,
                v2,
                &v23,
                0x8000LL);
        if ( (int)(v17 + 0x80000000) >= 0 && v17 != -1073741558 )
        {
          v18 = v17;
          WdLogSingleEntry4(1LL, *v2, this);
          v19 = *((_QWORD *)this + 4);
          WdLogGlobalForLineNumber = 6750;
          v22 = **(_QWORD **)(*(_QWORD *)(v19 + 8) + 8LL);
          HIDWORD(v21) = HIDWORD(v18);
          HIDWORD(v20) = HIDWORD(this);
          DxgkLogInternalTriageEvent(v22, 0x40000LL);
        }
      }
    }
    else
    {
      if ( (unsigned int)(v6 - 5) <= 1 && v3 )
        MmUnmapViewInSystemSpace(v3);
      v14 = (void *)*((_QWORD *)this + 7);
      if ( !v14 || *((_QWORD *)this + 8) )
      {
        v15 = *((_QWORD *)this + 8);
        if ( !v15 )
          goto LABEL_4;
        ObCloseHandle((HANDLE)v15, (v15 & 0xFFFFFFFF80000000uLL) == 0);
        v14 = (void *)*((_QWORD *)this + 7);
      }
      VidMmDereferenceObjectAsync(v14);
    }
  }
  else
  {
    v7 = (void *)*((_QWORD *)this + 14);
    if ( v7 )
      VIDMM_PROCESS::UnmapHostAddressesFromGuest(
        *(VIDMM_PROCESS **)(*((_QWORD *)v4 + 1) + 8LL),
        v7,
        *((_QWORD *)this + 15),
        v5,
        1);
  }
LABEL_4:
  v8 = (void **)*((_QWORD *)this + 17);
  if ( v8 )
  {
    operator delete(*v8);
    operator delete(*((void **)this + 17));
    *((_QWORD *)this + 17) = 0LL;
  }
  if ( (byte_140081242 & 4) != 0 )
  {
    v11 = (unsigned int *)*((_QWORD *)this + 4);
    v12 = *v11;
    if ( (unsigned int)(v12 - 3) > 3 )
      v13 = *((_QWORD *)this + 5);
    else
      v13 = *((_QWORD *)this + 7);
    LODWORD(v22) = 1;
    LODWORD(v21) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 1) + 8LL) + 8LL);
    LODWORD(v20) = *v11;
    McTemplateK0pxqqt_EtwWriteTransfer(v12, &EventDestroyProcessAllocation, (unsigned int)v21, v13, v23, v20, v21, v22);
  }
  WdLogSingleEntry1(4LL, this);
  WdLogGlobalForLineNumber = 6795;
  v9 = (VIDMM_RECYCLE_BLOCK **)*((_QWORD *)this + 2);
  if ( v9[1] != (VIDMM_RECYCLE_BLOCK *)((char *)this + 16)
    || (v10 = (VIDMM_RECYCLE_BLOCK **)*((_QWORD *)this + 3), *v10 != (VIDMM_RECYCLE_BLOCK *)((char *)this + 16)) )
  {
    __fastfail(3u);
  }
  *v10 = (VIDMM_RECYCLE_BLOCK *)v9;
  v9[1] = (VIDMM_RECYCLE_BLOCK *)v10;
  --*(_QWORD *)(*((_QWORD *)this + 4) + 24LL);
}
