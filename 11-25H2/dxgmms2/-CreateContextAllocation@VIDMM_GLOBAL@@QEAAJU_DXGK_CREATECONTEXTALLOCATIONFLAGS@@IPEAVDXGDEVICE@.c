/*
 * XREFs of ?CreateContextAllocation@VIDMM_GLOBAL@@QEAAJU_DXGK_CREATECONTEXTALLOCATIONFLAGS@@IPEAVDXGDEVICE@@PEAVDXGCONTEXT@@PEAX_KKKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_SEGMENTBANKPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAPEAUVIDMM_CONTEXT_ALLOC@@@Z @ 0x1400E736C
 * Callers:
 *     VidMmCreateContextAllocation @ 0x1400403F0 (VidMmCreateContextAllocation.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x140056780 (memset.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1400B4820 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     VidSchRemoveContextAllocation @ 0x1400B8158 (VidSchRemoveContextAllocation.c)
 *     ?CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAPEAU_KEVENT@@@Z @ 0x1400B85FC (-CloseOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAPEAUVIDMM_LOCAL_ALLOC@@EU_D3DDDICB_DE.c)
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400B8AEC (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1400BDBC4 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_NPEA_K@Z @ 0x1400E6F70 (-QueueDeferredCommand@VIDMM_GLOBAL@@QEAAJAEAUVIDMM_PAGING_QUEUE@@PEAU_VIDMM_DEFERRED_COMMAND@@_N.c)
 *     VidSchInsertContextAllocation @ 0x1400E7214 (VidSchInsertContextAllocation.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1400E7C48 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALL.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEBVDXGADAPTERALLOCATION@@PEAX6KE6PEAVVIDMM_PAGE_TABLE_BASE@@PEAPEAUVIDMM_CROSSADAPTER_ALLOC@@PEAPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400E8A9C (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 */

__int64 __fastcall VIDMM_GLOBAL::CreateContextAllocation(
        VIDMM_GLOBAL *this,
        struct _DXGK_CREATECONTEXTALLOCATIONFLAGS a2,
        unsigned int a3,
        struct DXGDEVICE *a4,
        struct DXGCONTEXT *a5,
        void *a6,
        unsigned __int64 a7,
        unsigned int a8,
        unsigned int a9,
        unsigned int a10,
        struct _D3DDDI_SEGMENTPREFERENCE a11,
        struct _DXGK_SEGMENTBANKPREFERENCE a12,
        struct _DXGK_ALLOCATIONINFOFLAGS a13,
        struct VIDMM_CONTEXT_ALLOC **a14)
{
  unsigned int v15; // r10d
  _QWORD *v18; // rsi
  struct VIDMM_DEVICE *v19; // r15
  int OneAllocation; // r14d
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  char v25; // dl
  int v27; // ecx
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rcx
  void *v31; // [rsp+A0h] [rbp-80h] BYREF
  struct VIDMM_ALLOC *v32; // [rsp+A8h] [rbp-78h] BYREF
  struct VIDMM_GLOBAL_ALLOC *v33; // [rsp+B0h] [rbp-70h]
  _QWORD v34[12]; // [rsp+C0h] [rbp-60h] BYREF
  unsigned int v35; // [rsp+170h] [rbp+50h]

  v35 = a3;
  v33 = 0LL;
  v15 = a3;
  v32 = 0LL;
  v31 = 0LL;
  v18 = 0LL;
  if ( !a4 )
  {
    v19 = 0LL;
    goto LABEL_35;
  }
  v19 = (struct VIDMM_DEVICE *)*((_QWORD *)a4 + 99);
  if ( (*(_DWORD *)(*((_QWORD *)a4 + 5) + 408LL) & 2) != 0 )
  {
LABEL_35:
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1978;
    DxgkLogInternalTriageEvent(v30, 0x40000LL);
    OneAllocation = -1073741811;
LABEL_16:
    if ( v18 )
      VidSchRemoveContextAllocation(v18);
    goto LABEL_18;
  }
  if ( (*(_BYTE *)&a2.0 & 1) != 0 )
  {
    if ( !a5 )
      goto LABEL_5;
    WdLogSingleEntry0(1LL);
    v29 = 1992;
LABEL_29:
    WdLogGlobalForLineNumber = v29;
    DxgkLogInternalTriageEvent(v28, 0x40000LL);
    OneAllocation = -1073741811;
    goto LABEL_18;
  }
  if ( !a5 )
  {
    WdLogSingleEntry0(1LL);
    v29 = 1985;
    goto LABEL_29;
  }
  v25 = -1;
  if ( _BitScanForward((unsigned int *)&v27, *((_DWORD *)a5 + 96)) )
    v25 = v27;
  v15 = v25;
  v35 = v25;
LABEL_5:
  OneAllocation = VIDMM_GLOBAL::CreateOneAllocation(this, v19, v15);
  if ( OneAllocation >= 0 )
  {
    *(_BYTE *)&a12.0 = 0;
    OneAllocation = VIDMM_GLOBAL::OpenOneAllocation(this, v19, v33, 0LL, 0, 0LL, &v32, (unsigned __int8 *)&a12);
    if ( OneAllocation >= 0 )
    {
      OneAllocation = VidSchInsertContextAllocation(
                        *(_QWORD *)(*((_QWORD *)this + 2) + 744LL),
                        (__int64)a4,
                        (__int64)a5,
                        (__int64 *)v32,
                        &v31);
      if ( OneAllocation < 0 )
      {
        v18 = v31;
        WdLogSingleEntry1(1LL, v31);
        WdLogGlobalForLineNumber = 2065;
      }
      else
      {
        if ( (*(_BYTE *)&a2.0 & 2) != 0 )
        {
          VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                                      *(VIDMM_PROCESS **)(*(_QWORD *)v32 + 8LL),
                                      *(_DWORD *)(*((_QWORD *)this + 3) + 240LL),
                                      v35);
          if ( !CVirtualAddressAllocator::MapVirtualAddressRange(
                  VirtualAddressAllocator,
                  (__int64)v32,
                  0LL,
                  1,
                  *(_QWORD *)(*(_QWORD *)v33 + 16LL),
                  0LL,
                  0LL,
                  0LL,
                  *(_DWORD *)(*(_QWORD *)v33 + 32LL),
                  (_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE)17LL,
                  0LL,
                  v35,
                  0LL,
                  0) )
          {
            v18 = v31;
            WdLogSingleEntry1(1LL, v31);
            WdLogGlobalForLineNumber = 2091;
            DxgkLogInternalTriageEvent(v23, 0x40000LL);
            OneAllocation = -1073741801;
            goto LABEL_16;
          }
        }
        memset(v34, 0, 0x58uLL);
        v34[2] = v32;
        LODWORD(v34[0]) = 209;
        LODWORD(v34[4]) = a2;
        OneAllocation = VIDMM_GLOBAL::QueueDeferredCommand(
                          (struct VIDMM_WORKER_THREAD **)this,
                          *(struct VIDMM_PAGING_QUEUE **)(32LL * (*((_DWORD *)v33 + 6) & 0x3F)
                                                        + *(_QWORD *)(*((_QWORD *)v32 + 1) + 72LL)),
                          (struct _VIDMM_DEFERRED_COMMAND *)v34,
                          1,
                          0LL);
        if ( OneAllocation >= 0 )
        {
          *a14 = (struct VIDMM_CONTEXT_ALLOC *)v31;
          return (unsigned int)OneAllocation;
        }
        if ( OneAllocation == -1071775232 )
        {
          v18 = v31;
          WdLogSingleEntry1(3LL, v31);
          WdLogGlobalForLineNumber = 2107;
          goto LABEL_16;
        }
        v18 = v31;
        WdLogSingleEntry1(1LL, v31);
        WdLogGlobalForLineNumber = 2111;
      }
      DxgkLogInternalTriageEvent(v24, 0x40000LL);
      goto LABEL_16;
    }
  }
LABEL_18:
  if ( v32 )
    VIDMM_GLOBAL::CloseOneAllocation(this, v32, 0LL, 0, (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)1, 0LL);
  if ( v33 )
    VIDMM_GLOBAL::DestroyOneAllocation(this, v19, v33, 1);
  *a14 = 0LL;
  return (unsigned int)OneAllocation;
}
