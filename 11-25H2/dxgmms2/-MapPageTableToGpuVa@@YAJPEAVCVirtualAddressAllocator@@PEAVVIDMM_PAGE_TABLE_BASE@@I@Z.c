/*
 * XREFs of ?MapPageTableToGpuVa@@YAJPEAVCVirtualAddressAllocator@@PEAVVIDMM_PAGE_TABLE_BASE@@I@Z @ 0x140099C54
 * Callers:
 *     ?MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x140104CDC (-MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?VidMmGetAllocGpuVirtualAddress@@YA_KPEBUVIDMM_ALLOC@@I@Z @ 0x140038E04 (-VidMmGetAllocGpuVirtualAddress@@YA_KPEBUVIDMM_ALLOC@@I@Z.c)
 *     ?GetSegmentAddressMdl@VIDMM_PAGE_TABLE_BASE@@QEAAPEAU_MDL@@XZ @ 0x14003BEC8 (-GetSegmentAddressMdl@VIDMM_PAGE_TABLE_BASE@@QEAAPEAU_MDL@@XZ.c)
 *     ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x14003C090 (-SysMmGetLogicalAddress@@YA_KQEAX@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1400BDBC4 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DXGK_ADL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_NW4VIDMM_PAGESIZEUSAGE@@1@Z @ 0x1400BE2C0 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DX.c)
 *     ?VidMmiInitializeAdlForPfnArray@@YAXPEAU_DXGK_ADL@@PEB_KI_K@Z @ 0x1400BFF30 (-VidMmiInitializeAdlForPfnArray@@YAXPEAU_DXGK_ADL@@PEB_KI_K@Z.c)
 */

__int64 __fastcall MapPageTableToGpuVa(
        struct CVirtualAddressAllocator *a1,
        struct VIDMM_PAGE_TABLE_BASE *a2,
        unsigned int a3)
{
  __int64 v4; // r14
  char *v6; // rdi
  __int64 v7; // rcx
  __int64 v9; // rbp
  struct _MDL *SegmentAddressMdl; // rsi
  __int64 *v11; // rax
  unsigned __int64 LogicalAddress; // rax
  __int64 v13; // rax
  unsigned int v14; // ecx
  __int64 v15; // rax
  int v16; // eax
  unsigned int v17; // esi
  __int64 v18; // rcx
  __int128 v19; // [rsp+70h] [rbp-38h] BYREF
  __int64 v20; // [rsp+B8h] [rbp+10h] BYREF

  v4 = a3;
  v6 = (char *)a2 + 16;
  if ( VidMmGetAllocGpuVirtualAddress(*((const struct VIDMM_ALLOC **)a2 + 3), a3)
    || CVirtualAddressAllocator::MapVirtualAddressRange(
         a1,
         a2,
         0LL,
         5LL,
         *(unsigned int *)(**(_QWORD **)v6 + 16LL),
         0LL,
         *(_QWORD *)(*((_QWORD *)a1 + 11) + 40944LL),
         *(_QWORD *)(*((_QWORD *)a1 + 11) + 40952LL),
         4096,
         1LL,
         0LL,
         v4,
         0LL,
         0,
         v19) )
  {
    v9 = *(_QWORD *)(*((_QWORD *)a2 + 3) + 128LL);
    v19 = 0LL;
    SegmentAddressMdl = VIDMM_PAGE_TABLE_BASE::GetSegmentAddressMdl(a2);
    v11 = *(__int64 **)v6;
    if ( SegmentAddressMdl )
    {
      LogicalAddress = SysMmGetLogicalAddress((void *const)v11[44]);
      VidMmiInitializeAdlForPfnArray(
        (struct _DXGK_ADL *)&v19,
        (const unsigned __int64 *)&SegmentAddressMdl[1],
        SegmentAddressMdl->ByteCount >> 12,
        LogicalAddress);
    }
    else
    {
      v13 = *v11;
      v14 = *(_DWORD *)(v13 + 16) >> 12;
      *((_QWORD *)&v19 + 1) = *(_QWORD *)(v13 + 72) >> 12;
      *(_QWORD *)&v19 = v14 | 0x100000000LL;
    }
    v15 = *((_QWORD *)a1 + 15);
    v20 = 0LL;
    v16 = CVirtualAddressAllocator::CommitVirtualAddressRange(
            a1,
            v9 - 32,
            (unsigned int)v4,
            *(unsigned int *)(32 * v4 + v15 + 28),
            0LL,
            &v19,
            0,
            &v20,
            0LL,
            1,
            0LL);
    v17 = v16;
    if ( v16 >= 0 )
    {
      return 0LL;
    }
    else
    {
      WdLogSingleEntry1(1LL, v16);
      WdLogGlobalForLineNumber = 3489;
      DxgkLogInternalTriageEvent(v18, 0x40000LL);
      return v17;
    }
  }
  else
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3449;
    DxgkLogInternalTriageEvent(v7, 0x40000LL);
    return 3221225473LL;
  }
}
