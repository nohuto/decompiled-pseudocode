/*
 * XREFs of ??1VIDMM_RECYCLE_BLOCK@@QEAA@XZ @ 0x1400C07AC
 * Callers:
 *     ??_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z @ 0x14001D19C (--_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z.c)
 *     ?MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z @ 0x1400C82C0 (-MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??3@YAXPEAX@Z @ 0x14001D2D0 (--3@YAXPEAX@Z.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x14003783C (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     McTemplateK0pxqqt_EtwWriteTransfer @ 0x140042B80 (McTemplateK0pxqqt_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     ?UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z @ 0x1400A8B60 (-UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z.c)
 *     ?VidMmDereferenceObjectAsync@@YAXPEAX@Z @ 0x1400C13C0 (-VidMmDereferenceObjectAsync@@YAXPEAX@Z.c)
 */

void __fastcall VIDMM_RECYCLE_BLOCK::~VIDMM_RECYCLE_BLOCK(VIDMM_RECYCLE_BLOCK *this)
{
  _QWORD *v2; // rsi
  void *v3; // rcx
  int *v4; // r8
  int v5; // edx
  void *v6; // rdx
  void **v7; // rcx
  VIDMM_RECYCLE_BLOCK **v8; // rdx
  VIDMM_RECYCLE_BLOCK **v9; // rcx
  unsigned int *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r9
  void *v13; // rcx
  unsigned __int64 v14; // rcx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v16; // eax
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // [rsp+28h] [rbp-30h]
  __int64 v20; // [rsp+30h] [rbp-28h]
  __int64 v21; // [rsp+38h] [rbp-20h]
  __int64 v22; // [rsp+60h] [rbp+8h] BYREF

  v2 = (_QWORD *)((char *)this + 40);
  v3 = (void *)*((_QWORD *)this + 5);
  v4 = (int *)*((_QWORD *)this + 4);
  v22 = *((_QWORD *)this + 6) - (_QWORD)v3;
  v5 = *v4;
  if ( (unsigned int)(*v4 - 9) > 1 )
  {
    if ( (unsigned int)(v5 - 3) > 3 )
    {
      if ( v3 )
      {
        VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
        v16 = (*((__int64 (__fastcall **)(__int64, _QWORD *, __int64 *, __int64))VirtualMemoryInterface + 2))(
                -1LL,
                v2,
                &v22,
                0x8000LL);
        if ( (int)(v16 + 0x80000000) >= 0 && v16 != -1073741558 )
        {
          v17 = v16;
          WdLogSingleEntry4(1LL, *v2, this);
          v18 = *((_QWORD *)this + 4);
          WdLogGlobalForLineNumber = 6750;
          v21 = **(_QWORD **)(*(_QWORD *)(v18 + 8) + 8LL);
          HIDWORD(v20) = HIDWORD(v17);
          HIDWORD(v19) = HIDWORD(this);
          DxgkLogInternalTriageEvent(v21, 0x40000LL);
        }
      }
    }
    else
    {
      if ( (unsigned int)(v5 - 5) <= 1 && v3 )
        MmUnmapViewInSystemSpace(v3);
      v13 = (void *)*((_QWORD *)this + 7);
      if ( !v13 || *((_QWORD *)this + 8) )
      {
        v14 = *((_QWORD *)this + 8);
        if ( !v14 )
          goto LABEL_4;
        ObCloseHandle((HANDLE)v14, (v14 & 0xFFFFFFFF80000000uLL) == 0);
        v13 = (void *)*((_QWORD *)this + 7);
      }
      VidMmDereferenceObjectAsync(v13);
    }
  }
  else
  {
    v6 = (void *)*((_QWORD *)this + 14);
    if ( v6 )
      VIDMM_PROCESS::UnmapHostAddressesFromGuest(
        *(VIDMM_PROCESS **)(*((_QWORD *)v4 + 1) + 8LL),
        v6,
        *((_QWORD *)this + 15));
  }
LABEL_4:
  v7 = (void **)*((_QWORD *)this + 17);
  if ( v7 )
  {
    operator delete(*v7);
    operator delete(*((void **)this + 17));
    *((_QWORD *)this + 17) = 0LL;
  }
  if ( (byte_140081242 & 4) != 0 )
  {
    v10 = (unsigned int *)*((_QWORD *)this + 4);
    v11 = *v10;
    if ( (unsigned int)(v11 - 3) > 3 )
      v12 = *((_QWORD *)this + 5);
    else
      v12 = *((_QWORD *)this + 7);
    LODWORD(v21) = 1;
    LODWORD(v20) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v10 + 1) + 8LL) + 8LL);
    LODWORD(v19) = *v10;
    McTemplateK0pxqqt_EtwWriteTransfer(v11, &EventDestroyProcessAllocation, (unsigned int)v20, v12, v22, v19, v20, v21);
  }
  WdLogSingleEntry1(4LL, this);
  WdLogGlobalForLineNumber = 6795;
  v8 = (VIDMM_RECYCLE_BLOCK **)*((_QWORD *)this + 2);
  if ( v8[1] != (VIDMM_RECYCLE_BLOCK *)((char *)this + 16)
    || (v9 = (VIDMM_RECYCLE_BLOCK **)*((_QWORD *)this + 3), *v9 != (VIDMM_RECYCLE_BLOCK *)((char *)this + 16)) )
  {
    __fastfail(3u);
  }
  *v9 = (VIDMM_RECYCLE_BLOCK *)v8;
  v8[1] = (VIDMM_RECYCLE_BLOCK *)v9;
  --*(_QWORD *)(*((_QWORD *)this + 4) + 24LL);
}
