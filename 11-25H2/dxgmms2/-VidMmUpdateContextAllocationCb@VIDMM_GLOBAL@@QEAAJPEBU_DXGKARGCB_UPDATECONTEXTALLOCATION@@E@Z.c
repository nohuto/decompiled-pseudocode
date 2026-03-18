/*
 * XREFs of ?VidMmUpdateContextAllocationCb@VIDMM_GLOBAL@@QEAAJPEBU_DXGKARGCB_UPDATECONTEXTALLOCATION@@E@Z @ 0x140112398
 * Callers:
 *     VidMmUpdateContextAllocation @ 0x14004C990 (VidMmUpdateContextAllocation.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400DE3C0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?DriverId@VIDMM_SEGMENT@@QEBAGXZ @ 0x14003835C (-DriverId@VIDMM_SEGMENT@@QEBAGXZ.c)
 *     ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x14003C090 (-SysMmGetLogicalAddress@@YA_KQEAX@Z.c)
 *     memset @ 0x140056780 (memset.c)
 *     ?UpdateContextAllocation@VIDMM_GLOBAL@@QEAAX_K0PEAXI@Z @ 0x1400965A0 (-UpdateContextAllocation@VIDMM_GLOBAL@@QEAAX_K0PEAXI@Z.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1400B4BE4 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1400BDBC4 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DXGK_ADL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_NW4VIDMM_PAGESIZEUSAGE@@1@Z @ 0x1400BE2C0 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DX.c)
 *     ?VidMmiInitializeAdlForPfnArray@@YAXPEAU_DXGK_ADL@@PEB_KI_K@Z @ 0x1400BFF30 (-VidMmiInitializeAdlForPfnArray@@YAXPEAU_DXGK_ADL@@PEB_KI_K@Z.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1400BFF5C (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAUVIDMM_GLOBAL_ALLOC@@PEAUVIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z @ 0x14010188C (-FreeVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmUpdateContextAllocationCb(
        VIDMM_GLOBAL *this,
        const struct _DXGKARGCB_UPDATECONTEXTALLOCATION *a2,
        char a3)
{
  _QWORD *hAllocation; // rbx
  __int64 v6; // rax
  __int64 v8; // rdx
  void **v9; // r14
  int v10; // ecx
  void *v11; // rdi
  CVirtualAddressAllocator *v12; // r12
  VIDMM_SEGMENT *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r13
  struct _RTL_BALANCED_NODE *v17; // rax
  unsigned __int64 LogicalAddress; // rbx
  struct _MDL *FullMDL; // rax
  int v20; // r9d
  __int64 v21; // rdx
  struct _RTL_BALANCED_NODE *v22; // [rsp+78h] [rbp-49h]
  __int128 v23; // [rsp+80h] [rbp-41h] BYREF
  _QWORD v24[12]; // [rsp+98h] [rbp-29h] BYREF
  struct VIDMM_ALLOC *v25; // [rsp+140h] [rbp+7Fh] BYREF

  hAllocation = a2->hAllocation;
  if ( a3 )
  {
    v8 = hAllocation[3];
    v9 = **(void ****)v8;
    v10 = *((_DWORD *)v9 + 6);
    v11 = *v9;
    v12 = (CVirtualAddressAllocator *)*((_QWORD *)this + (v10 & 0x3F) + 5052);
    v13 = (VIDMM_SEGMENT *)*((_QWORD *)*v9 + 8);
    if ( (*(_DWORD *)(v8 + 28) & 3) == 2 )
    {
      v15 = CVirtualAddressAllocator::MapVirtualAddressRange(
              v12,
              v8,
              0LL,
              1,
              *((_QWORD *)v11 + 2),
              0LL,
              0LL,
              0LL,
              *((_DWORD *)v11 + 8),
              (_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE)1LL,
              0LL,
              v10 & 0x3F,
              0LL,
              0);
      v16 = v15;
      if ( v15 )
      {
        v17 = *(struct _RTL_BALANCED_NODE **)(v15 + 104);
        v23 = 0LL;
        v22 = v17;
        if ( (*((_DWORD *)v13 + 26) & 0x1001) != 0 )
        {
          LogicalAddress = SysMmGetLogicalAddress(v9[44]);
          FullMDL = VidMmGetFullMDL((struct VIDMM_GLOBAL_ALLOC *)v9, 0LL);
          VidMmiInitializeAdlForPfnArray(
            (struct _DXGK_ADL *)&v23,
            (const unsigned __int64 *)&FullMDL[1],
            FullMDL->ByteCount >> 12,
            LogicalAddress);
          v20 = 0;
        }
        else
        {
          v21 = *((_QWORD *)v11 + 9) >> 12;
          LODWORD(v23) = *((_DWORD *)v11 + 4) >> 12;
          *((_QWORD *)&v23 + 1) = v21;
          DWORD1(v23) = 1;
          v20 = VIDMM_SEGMENT::DriverId(v13);
        }
        v25 = 0LL;
        CVirtualAddressAllocator::CommitVirtualAddressRange(
          (__int64)v12,
          v16,
          (_DWORD)v9[3] & 0x3F,
          v20,
          0LL,
          (struct _DXGK_ADL *)&v23,
          1,
          &v25,
          0LL,
          0,
          0LL);
        VIDMM_GLOBAL::UpdateContextAllocation(
          (ADAPTER_RENDER **)this,
          (D3DGPU_VIRTUAL_ADDRESS)v22,
          *((_QWORD *)v11 + 2),
          (SIZE_T)a2->pPrivateDriverData,
          a2->PrivateDriverDataSize);
        CVirtualAddressAllocator::FreeVirtualAddressRange(v12, v22);
        return 0LL;
      }
      else
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 22474;
        DxgkLogInternalTriageEvent(0LL, 0x40000LL);
        return 3221225473LL;
      }
    }
    else
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 22451;
      DxgkLogInternalTriageEvent(v14, 0x40000LL);
      return 3221225485LL;
    }
  }
  else
  {
    memset(v24, 0, 0x58uLL);
    v6 = hAllocation[3];
    LODWORD(v24[0]) = 117;
    v24[5] = a2;
    HIDWORD(v24[0]) = *(_DWORD *)(**(_QWORD **)v6 + 24LL) & 0x3F;
    return VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v24, 1);
  }
}
