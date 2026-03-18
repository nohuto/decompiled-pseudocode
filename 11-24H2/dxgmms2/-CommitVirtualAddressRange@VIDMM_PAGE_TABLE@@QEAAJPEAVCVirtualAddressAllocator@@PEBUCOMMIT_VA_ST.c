/*
 * XREFs of ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400F2030
 * Callers:
 *     ?ExpandLargePagePteWithFix@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x14009A358 (-ExpandLargePagePteWithFix@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PA.c)
 *     ?ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K222PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400F1CA8 (-ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400F28C0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x140114090 (-ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABL.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??3@YAXPEAX@Z @ 0x14001D2D0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036BA0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     Feature_3694358843__private_IsEnabledDeviceUsageNoInline @ 0x14004C408 (Feature_3694358843__private_IsEnabledDeviceUsageNoInline.c)
 *     ?EnsureResident@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@_KPEAPEAUVIDMM_ALLOC@@@Z @ 0x14009A2F8 (-EnsureResident@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@_KPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?Convert64K_4K@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K@Z @ 0x1400A9078 (-Convert64K_4K@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K@Z.c)
 *     ?UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@II3U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1400AAE70 (-UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_.c)
 *     ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1400AB920 (-UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDAT.c)
 *     ?CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400B13C4 (-CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?InvalidatePageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVVIDMM_GLOBAL@@IIPEAE@Z @ 0x1400CD290 (-InvalidatePageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVVIDMM_GLOBAL@@IIPEAE@Z.c)
 *     ?ModifyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_KPEAE@Z @ 0x1400CD470 (-ModifyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_KP.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
        void **this,
        struct CVirtualAddressAllocator *a2,
        const struct COMMIT_VA_STATE *a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        char a8,
        struct VIDMM_ALLOC **a9)
{
  unsigned __int64 v11; // rbx
  unsigned __int64 v13; // r15
  __int64 v14; // rcx
  int v15; // edi
  __int64 v16; // rdx
  unsigned __int64 v17; // r12
  unsigned int v18; // r14d
  unsigned int v19; // r15d
  __int64 v20; // r8
  void *v21; // rax
  struct CVirtualAddressAllocator *v22; // rdx
  int v23; // ebx
  char v24; // r8
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  int v31; // ebx
  unsigned int v32; // r15d
  unsigned int v33; // r12d
  unsigned __int8 *v34; // rcx
  int updated; // eax
  __int64 v36; // rcx
  unsigned int v37; // edi
  unsigned int v38; // edi
  int v39; // eax
  int v40; // eax
  unsigned __int64 v42; // [rsp+50h] [rbp-48h]
  struct VIDMM_GLOBAL *v43; // [rsp+58h] [rbp-40h]
  unsigned __int64 v44; // [rsp+60h] [rbp-38h]
  _DWORD *v46; // [rsp+C0h] [rbp+28h]
  unsigned __int64 v47; // [rsp+C8h] [rbp+30h]
  unsigned __int64 v48; // [rsp+D0h] [rbp+38h]
  char v49; // [rsp+E0h] [rbp+48h]

  v11 = a5 >> 12;
  v13 = (a5 >> 12) + a6;
  *a9 = 0LL;
  if ( v13 <= a5 >> 12 )
  {
    WdLogSingleEntry2(1LL, v13, v11);
    WdLogGlobalForLineNumber = 5821;
    DxgkLogInternalTriageEvent(v14, 0x40000LL);
    return (unsigned int)-1073741811;
  }
  v48 = a7 >> 12;
  v43 = (struct VIDMM_GLOBAL *)*((_QWORD *)a2 + 11);
  v16 = *(_DWORD *)this & 7;
  v46 = *(_DWORD **)(*((_QWORD *)v43 + 5029) + 8LL * ((*(_DWORD *)this >> 7) & 0x1F));
  v17 = v11 & ~*(_QWORD *)&v46[12 * v16 + 40];
  v44 = v17;
  v42 = v17 & ~*(_QWORD *)&v46[12 * v16 + 36];
  v47 = *(_QWORD *)&v46[12 * v16 + 42];
  v18 = v11 & v46[28];
  v19 = v46[28] & (v13 - 1);
  if ( (unsigned int)Feature_3694358843__private_IsEnabledDeviceUsageNoInline() )
  {
    v15 = VIDMM_PAGE_TABLE::EnsureResident((VIDMM_PAGE_TABLE *)this, a2, v20, a9);
    if ( v15 < 0 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 5853;
      return (unsigned int)v15;
    }
  }
  else
  {
    v21 = this[2];
    if ( !v21 || !*(_QWORD *)(*(_QWORD *)v21 + 64LL) )
    {
      v15 = VIDMM_PAGE_TABLE::CommitPageTable((VIDMM_PAGE_TABLE *)this, a2, a9);
      if ( v15 < 0 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 5867;
        return (unsigned int)v15;
      }
      *(_DWORD *)this &= ~0x10000u;
    }
  }
  v22 = (struct CVirtualAddressAllocator *)*(unsigned int *)this;
  v23 = 0;
  v24 = 1;
  if ( ((unsigned int)v22 & 0x10000) != 0 )
    v24 = a8;
  else
    v23 = 2;
  v49 = v24;
  if ( !*((_BYTE *)a3 + 77) )
  {
    if ( !*((_BYTE *)a3 + 76) )
    {
      if ( ((unsigned __int8)v22 & 0x40) == 0 )
        goto LABEL_30;
      v15 = VIDMM_PAGE_TABLE::Convert64K_4K((VIDMM_PAGE_TABLE *)this, a2, a3, v42);
      if ( v15 < 0 )
        return (unsigned int)v15;
      goto LABEL_29;
    }
    if ( !*((_DWORD *)this + 1) && ((unsigned __int8)v22 & 0x40) == 0 )
    {
      operator delete(this[4]);
      v25 = 16LL * (unsigned int)v46[30];
      if ( !is_mul_ok((unsigned int)v46[30], 0x10uLL) )
        v25 = -1LL;
      v26 = operator new[](v25, 0x34356956u, 256LL);
      this[4] = (void *)v26;
      if ( !v26 )
      {
        _InterlockedIncrement(&dword_1400817F4);
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 5896;
        DxgkLogInternalTriageEvent(v27, 262145LL);
        return (unsigned int)-1073741801;
      }
      v28 = 16LL * (unsigned int)v46[30];
      if ( !is_mul_ok((unsigned int)v46[30], 0x10uLL) )
        v28 = -1LL;
      v29 = operator new[](v28, 0x34356956u, 256LL);
      this[5] = (void *)v29;
      if ( !v29 )
      {
        _InterlockedIncrement(&dword_1400817F8);
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 5907;
        DxgkLogInternalTriageEvent(v30, 262145LL);
        return (unsigned int)-1073741801;
      }
      *(_DWORD *)this |= 0x40u;
LABEL_29:
      v24 = v49;
    }
  }
LABEL_30:
  v31 = (*(_DWORD *)this >> 3) & 8 | v23;
  if ( (*(_DWORD *)this & 0x40) != 0 )
  {
    v18 >>= 4;
    v19 >>= 4;
    v47 *= 16LL;
    v44 = v17 & 0xFFFFFFFFFFFFFFF0uLL;
  }
  v32 = v19 + 1;
  v33 = v32 - v18;
  if ( v24 )
  {
    v34 = (unsigned __int8 *)a3 + 81;
    if ( v18 )
    {
      VIDMM_PAGE_TABLE::InvalidatePageTable((VIDMM_PAGE_TABLE *)this, v43, 0, v18, (unsigned __int8 *)a3 + 81);
      updated = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
                  (VIDMM_PAGE_TABLE *)this,
                  a2,
                  0,
                  v18,
                  v42,
                  (struct _DXGK_UPDATEPAGETABLEFLAGS)v31);
      v15 = updated;
      if ( updated < 0 )
      {
        WdLogSingleEntry1(1LL, updated);
        WdLogGlobalForLineNumber = 5967;
LABEL_43:
        DxgkLogInternalTriageEvent(v36, 0x40000LL);
        return (unsigned int)v15;
      }
      v34 = (unsigned __int8 *)a3 + 81;
    }
    if ( (*(_DWORD *)this & 0x40) != 0 )
      v37 = v46[30];
    else
      v37 = v46[29];
    if ( v32 < v37 )
    {
      v38 = v37 - v32;
      VIDMM_PAGE_TABLE::InvalidatePageTable((VIDMM_PAGE_TABLE *)this, v43, v32, v38, v34);
      v39 = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
              (VIDMM_PAGE_TABLE *)this,
              a2,
              v32,
              v38,
              v42 + v47 * v32,
              (struct _DXGK_UPDATEPAGETABLEFLAGS)v31);
      v15 = v39;
      if ( v39 < 0 )
      {
        WdLogSingleEntry1(1LL, v39);
        WdLogGlobalForLineNumber = 5984;
        goto LABEL_43;
      }
    }
  }
  if ( ((*((_DWORD *)a3 + 18) + 3) & 0xFFFFFFFD) != 0 )
  {
    VIDMM_PAGE_TABLE::ModifyPageTable(
      (VIDMM_PAGE_TABLE *)this,
      v22,
      a3,
      v18,
      v32 - v18,
      v48,
      (unsigned __int8 *)a3 + 81);
    v40 = VIDMM_PAGE_TABLE::UpdatePageTable(
            (struct VIDMM_PAGE_TABLE_BASE *)this,
            (VIDMM_GLOBAL **)a2,
            (__int64)a3,
            *((struct VIDMM_GLOBAL_ALLOC ****)a3 + 6),
            a4,
            *((_DWORD *)a3 + 14),
            v18,
            v32 - v18,
            v44,
            (struct _DXGK_UPDATEPAGETABLEFLAGS)v31);
  }
  else
  {
    VIDMM_PAGE_TABLE::InvalidatePageTable((VIDMM_PAGE_TABLE *)this, v43, v18, v33, (unsigned __int8 *)a3 + 81);
    v40 = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
            (VIDMM_PAGE_TABLE *)this,
            a2,
            v18,
            v33,
            v44,
            (struct _DXGK_UPDATEPAGETABLEFLAGS)v31);
  }
  v15 = v40;
  if ( v40 >= 0 )
  {
    *(_DWORD *)this |= 0x10000u;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 6023;
  }
  return (unsigned int)v15;
}
