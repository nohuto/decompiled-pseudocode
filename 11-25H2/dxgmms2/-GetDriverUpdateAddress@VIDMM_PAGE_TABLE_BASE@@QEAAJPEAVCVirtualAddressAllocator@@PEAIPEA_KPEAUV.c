/*
 * XREFs of ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAUVIDMM_DRIVER_UPDATE_ADDRESS_CONTEXT@@@Z @ 0x1400BA084
 * Callers:
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1400B9124 (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@II3U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1400B9468 (-UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1400B9620 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1400B9F20 (-UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDAT.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CF680 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400D03C0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x140037174 (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ?VidMmGetAllocGpuVirtualAddress@@YA_KPEBUVIDMM_ALLOC@@I@Z @ 0x140038E04 (-VidMmGetAllocGpuVirtualAddress@@YA_KPEBUVIDMM_ALLOC@@I@Z.c)
 *     ?GetSegmentAddressMdl@VIDMM_PAGE_TABLE_BASE@@QEAAPEAU_MDL@@XZ @ 0x14003BEC8 (-GetSegmentAddressMdl@VIDMM_PAGE_TABLE_BASE@@QEAAPEAU_MDL@@XZ.c)
 *     ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x14003C090 (-SysMmGetLogicalAddress@@YA_KQEAX@Z.c)
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 *     ?GetCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_DRIVER_UPDATE_ADDRESS_CONTEXT@@@Z @ 0x1400BABA0 (-GetCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAUVIDMM_DRIVER_UPDATE_A.c)
 *     TryMapScratchRange @ 0x1400BBC84 (TryMapScratchRange.c)
 *     ?MustFlushTlbOnValidTransition@VIDMM_GLOBAL@@QEAA_NI@Z @ 0x1400BEDDC (-MustFlushTlbOnValidTransition@VIDMM_GLOBAL@@QEAA_NI@Z.c)
 *     ?VidMmiInitializeAdlForPfnArray@@YAXPEAU_DXGK_ADL@@PEB_KI_K@Z @ 0x1400BFF30 (-VidMmiInitializeAdlForPfnArray@@YAXPEAU_DXGK_ADL@@PEB_KI_K@Z.c)
 *     MapScratchRangeWithStall @ 0x140106350 (MapScratchRangeWithStall.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(
        VIDMM_PAGE_TABLE_BASE *this,
        struct CVirtualAddressAllocator *a2,
        unsigned int *a3,
        unsigned __int64 *a4,
        struct VIDMM_DRIVER_UPDATE_ADDRESS_CONTEXT *a5)
{
  VIDMM_GLOBAL *v5; // r12
  _QWORD *v7; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  unsigned int v13; // r9d
  int v14; // eax
  void *CpuVisibleAddress; // rax
  __int64 result; // rax
  __int64 AllocGpuVirtualAddress; // rax
  unsigned __int64 v18; // rcx
  CVirtualAddressAllocator *v19; // r13
  __int64 v20; // rcx
  unsigned int v21; // r15d
  struct _MDL *SegmentAddressMdl; // rax
  __int64 *v23; // rdx
  struct _MDL *v24; // rdi
  __int64 v25; // rdx
  unsigned int v26; // r8d
  __int64 v27; // rax
  _QWORD *v28; // rbp
  unsigned int v29; // r10d
  __int64 *v30; // rcx
  __int64 v31; // rax
  __int64 **v32; // rdx
  __int64 v33; // rdx
  unsigned __int64 LogicalAddress; // rax
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v38; // [rsp+70h] [rbp+8h] BYREF

  v5 = (VIDMM_GLOBAL *)*((_QWORD *)a2 + 11);
  v7 = (_QWORD *)*((_QWORD *)this + 2);
  v11 = *v7;
  v12 = *(_QWORD *)(*v7 + 64LL);
  if ( !*((_BYTE *)v5 + 40940) )
  {
    v13 = *(_DWORD *)this;
    v14 = (int)(*(_DWORD *)this << 16) >> 29;
    if ( v14 )
    {
      if ( v14 == 1 )
      {
        *a3 = 0;
        *a4 = 0LL;
        v18 = ((unsigned __int64)v13 >> 7) & 0x1F;
        v19 = (CVirtualAddressAllocator *)*((_QWORD *)v5 + v18 + 5052);
        if ( (v13 & 0x80000) != 0 )
        {
          AllocGpuVirtualAddress = VidMmGetAllocGpuVirtualAddress(
                                     *((const struct VIDMM_ALLOC **)this + 3),
                                     (v13 >> 7) & 0x1F);
        }
        else
        {
          v20 = *((_QWORD *)a2 + 15) + 32 * v18;
          if ( (v13 & 7) != 0 )
            v21 = *(_DWORD *)(v20 + 24);
          else
            v21 = *(_DWORD *)(v20 + 28);
          SegmentAddressMdl = VIDMM_PAGE_TABLE_BASE::GetSegmentAddressMdl(this);
          v23 = (__int64 *)*((_QWORD *)this + 2);
          v24 = SegmentAddressMdl;
          *(_OWORD *)v37 = 0LL;
          if ( SegmentAddressMdl )
          {
            LogicalAddress = SysMmGetLogicalAddress((void *const)v23[44]);
            VidMmiInitializeAdlForPfnArray(
              (struct _DXGK_ADL *)v37,
              (const unsigned __int64 *)&v24[1],
              v24->ByteCount >> 12,
              LogicalAddress);
          }
          else
          {
            v25 = *v23;
            v26 = *(_DWORD *)(v25 + 16);
            if ( (*(_DWORD *)(*(_QWORD *)(v25 + 64) + 104LL) & 0x1000) != 0 )
              v27 = 0LL;
            else
              v27 = *(__int64 *)(v25 + 72) >> 12;
            HIDWORD(v37[0]) = 1;
            v37[1] = v27 & 0xFFFFFFFFFFFFFLL;
            LODWORD(v37[0]) = v26 >> 12;
          }
          LOBYTE(v38) = 0;
          v28 = (_QWORD *)TryMapScratchRange(v5, (__int64)v37, (__int64)&v38);
          if ( !v28 )
          {
            v33 = *(_DWORD *)this >> 7;
            LOWORD(v33) = v33 & 0x1F;
            v28 = (_QWORD *)((__int64 (__fastcall *)(VIDMM_GLOBAL *, __int64, _QWORD, _QWORD, __int64 *, __int64 *))MapScratchRangeWithStall)(
                              v5,
                              v33,
                              *((_QWORD *)this + 2),
                              v21,
                              v37,
                              &v38);
          }
          if ( VIDMM_GLOBAL::MustFlushTlbOnValidTransition(v5, (*(_DWORD *)this >> 7) & 0x1F) )
            CVirtualAddressAllocator::FlushGpuVaTlb(v19, v29, v28[13], v28[14]);
          v30 = v28 + 4;
          v31 = *((_QWORD *)this + 3) + 128LL;
          v32 = *(__int64 ***)(*((_QWORD *)this + 3) + 136LL);
          if ( *v32 != (__int64 *)v31 )
            __fastfail(3u);
          *v30 = v31;
          v28[5] = v32;
          *v32 = v30;
          *(_QWORD *)(v31 + 8) = v30;
          AllocGpuVirtualAddress = v28[13];
          *a3 = v21;
        }
      }
      else if ( (*(_DWORD *)(v12 + 104) & 0x1000) != 0 )
      {
        v35 = v7[28];
        v36 = v7[29];
        *a3 = 0;
        AllocGpuVirtualAddress = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v35 + 104LL))(v35, v36);
      }
      else
      {
        *a3 = (unsigned __int16)(*(_WORD *)(v12 + 40) + 1);
        AllocGpuVirtualAddress = *(_QWORD *)(v11 + 72);
      }
      *a4 = AllocGpuVirtualAddress;
      return 0LL;
    }
  }
  CpuVisibleAddress = VIDMM_PAGE_TABLE_BASE::GetCpuVisibleAddress(this, v5, a5);
  *a4 = (unsigned __int64)CpuVisibleAddress;
  *a3 = 0;
  if ( CpuVisibleAddress )
    return 0LL;
  WdLogSingleEntry1(2LL, this);
  result = 3221225495LL;
  WdLogGlobalForLineNumber = 4039;
  return result;
}
