/*
 * XREFs of ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CF680
 * Callers:
 *     ?ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CF084 (-ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABL.c)
 *     ?ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K222PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CF2F8 (-ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400D03C0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??3@YAXPEAX@Z @ 0x140028730 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140038248 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?Convert64K_4K@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K@Z @ 0x1400B776C (-Convert64K_4K@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K@Z.c)
 *     ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1400B9F20 (-UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDAT.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAUVIDMM_DRIVER_UPDATE_ADDRESS_CONTEXT@@@Z @ 0x1400BA084 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAUV.c)
 *     ?FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAUVIDMM_DRIVER_UPDATE_ADDRESS_CONTEXT@@@Z @ 0x1400BA350 (-FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAUVIDMM_.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PAGE_TABLE_BASE@@PEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@2IIPEAU_DXGK_PTE@@5II2W4_DXGK_PAGETABLEUPDATEMODE@@2U_DXGK_UPDATEPAGETABLEFLAGS@@2@Z @ 0x1400BA420 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PAGE_TABLE_BASE@@PEAVVIDMM_PROCESS@@_KPEAUVIDMM_AL.c)
 *     ?InvalidatePageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVVIDMM_GLOBAL@@IIPEAE@Z @ 0x1400CEEA0 (-InvalidatePageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVVIDMM_GLOBAL@@IIPEAE@Z.c)
 *     ?CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400E2B68 (-CommitPageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAPEAUVIDMM_ALLOC@@@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
        VIDMM_PAGE_TABLE *this,
        struct CVirtualAddressAllocator *a2,
        const struct COMMIT_VA_STATE *a3,
        UINT64 a4,
        SIZE_T a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int8 a8,
        struct VIDMM_ALLOC **a9)
{
  struct VIDMM_ALLOC **v9; // r10
  const struct COMMIT_VA_STATE *v10; // rsi
  unsigned __int64 v11; // r13
  unsigned __int64 v13; // r12
  __int64 v14; // rcx
  int v15; // ebp
  unsigned int v16; // r8d
  __int64 v17; // r15
  unsigned __int64 v18; // r14
  __int64 v19; // rcx
  __int64 v20; // r11
  int v21; // eax
  unsigned __int64 v22; // rbp
  unsigned int v23; // r13d
  unsigned __int64 v24; // r11
  unsigned int v25; // r12d
  __int64 v26; // rax
  int v27; // ebx
  int v28; // edx
  bool v29; // zf
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rcx
  int v36; // ebx
  unsigned int v37; // r12d
  unsigned int v38; // ebp
  unsigned __int8 *v39; // rcx
  int updated; // eax
  __int64 v41; // rcx
  unsigned int v42; // ebp
  unsigned int v43; // ebp
  int v44; // eax
  int v45; // ecx
  int v46; // r9d
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // rcx
  int v50; // eax
  LONG v51; // r12d
  int v52; // ebp
  struct VIDMM_GLOBAL_ALLOC ***v53; // r14
  VIDMM_GLOBAL *v54; // r15
  __int64 v55; // r11
  __int64 v56; // rbp
  int v57; // eax
  SIZE_T v58; // rdx
  __int64 v59; // r8
  __int64 v60; // rbp
  __int64 v61; // rcx
  int v62; // eax
  unsigned __int64 v63; // r10
  __int64 v64; // rcx
  __int64 v65; // r11
  __int64 v66; // rcx
  int v67; // eax
  unsigned __int64 v68; // r10
  __int64 v69; // rcx
  __int64 v70; // rcx
  struct VIDMM_ALLOC *v71; // r9
  struct VIDMM_GLOBAL_ALLOC *v72; // rcx
  enum _DXGK_PAGETABLEUPDATEMODE v73; // eax
  void *v74; // rbx
  __int64 v75; // r8
  unsigned __int64 v77; // rcx
  __int64 v78; // r12
  __int64 v79; // rax
  unsigned __int64 v80; // r14
  __int64 v81; // r14
  __int64 v82; // rax
  __int64 v83; // rcx
  char v84; // r8
  __int64 v85; // rcx
  __int64 v86; // r10
  __int64 v87; // rdx
  __int64 v88; // rax
  LONG v89; // [rsp+80h] [rbp-68h]
  __int64 v90; // [rsp+90h] [rbp-58h]
  __int64 v91; // [rsp+90h] [rbp-58h]
  unsigned __int64 v92; // [rsp+98h] [rbp-50h]
  unsigned __int64 v93; // [rsp+98h] [rbp-50h]
  __int128 v94; // [rsp+A0h] [rbp-48h] BYREF

  v9 = a9;
  v10 = a3;
  v11 = a5 >> 12;
  v13 = (a5 >> 12) + a6;
  *a9 = 0LL;
  if ( v13 > v11 )
  {
    v16 = *(_DWORD *)this;
    v17 = *((_QWORD *)a2 + 11);
    v18 = a7 >> 12;
    v19 = *(_DWORD *)this & 7;
    a5 = *(_QWORD *)(*(_QWORD *)(v17 + 40232) + 8LL * ((v16 >> 7) & 0x1F));
    v20 = ~*(_QWORD *)(a5 + 48 * (v19 + 3));
    v90 = *(_QWORD *)(a5 + 48 * v19 + 168);
    v21 = *(_DWORD *)(a5 + 112);
    v22 = v11 & ~*(_QWORD *)(a5 + 48 * v19 + 160);
    v23 = v21 & v11;
    a6 = v22;
    v24 = v22 & v20;
    v92 = v24;
    v25 = v21 & (v13 - 1);
    v26 = *((_QWORD *)this + 2);
    if ( !v26 || !*(_QWORD *)(*(_QWORD *)v26 + 64LL) )
    {
      v15 = VIDMM_PAGE_TABLE::CommitPageTable(this, a2, v9);
      if ( v15 < 0 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 5452;
        return (unsigned int)v15;
      }
      *(_DWORD *)this &= ~0x10000u;
      v16 = *(_DWORD *)this;
      v24 = v92;
    }
    v27 = 0;
    v28 = 1;
    if ( (v16 & 0x10000) != 0 )
      v28 = a8;
    else
      v27 = 2;
    v29 = *((_BYTE *)v10 + 77) == 0;
    LODWORD(a9) = v28;
    if ( v29 )
    {
      if ( !*((_BYTE *)v10 + 76) )
      {
        if ( (v16 & 0x40) == 0 )
          goto LABEL_27;
        v15 = VIDMM_PAGE_TABLE::Convert64K_4K(this, a2, v10, v24);
        if ( v15 < 0 )
          return (unsigned int)v15;
        goto LABEL_26;
      }
      if ( !*((_DWORD *)this + 1) && (v16 & 0x40) == 0 )
      {
        operator delete(*((void **)this + 4));
        v30 = 16LL * *(unsigned int *)(a5 + 120);
        if ( !is_mul_ok(*(unsigned int *)(a5 + 120), 0x10uLL) )
          v30 = -1LL;
        v31 = operator new[](v30, 0x34356956u, 256LL);
        *((_QWORD *)this + 4) = v31;
        if ( !v31 )
        {
          _InterlockedIncrement(&dword_1400817D4);
          WdLogSingleEntry0(6LL);
          WdLogGlobalForLineNumber = 5479;
          DxgkLogInternalTriageEvent(v32, 262145LL);
          return (unsigned int)-1073741801;
        }
        v33 = 16LL * *(unsigned int *)(a5 + 120);
        if ( !is_mul_ok(*(unsigned int *)(a5 + 120), 0x10uLL) )
          v33 = -1LL;
        v34 = operator new[](v33, 0x34356956u, 256LL);
        *((_QWORD *)this + 5) = v34;
        if ( !v34 )
        {
          _InterlockedIncrement(&dword_1400817D8);
          WdLogSingleEntry0(6LL);
          WdLogGlobalForLineNumber = 5490;
          DxgkLogInternalTriageEvent(v35, 262145LL);
          return (unsigned int)-1073741801;
        }
        *(_DWORD *)this |= 0x40u;
LABEL_26:
        LOBYTE(v28) = (_BYTE)a9;
      }
    }
LABEL_27:
    v36 = (*(_DWORD *)this >> 3) & 8 | v27;
    if ( (*(_DWORD *)this & 0x40) != 0 )
    {
      a6 &= 0xFFFFFFFFFFFFFFF0uLL;
      v23 >>= 4;
      v25 >>= 4;
      v90 *= 16LL;
    }
    v37 = v25 + 1;
    v38 = v37 - v23;
    LODWORD(a9) = v37 - v23;
    if ( (_BYTE)v28 )
    {
      v39 = (unsigned __int8 *)v10 + 81;
      if ( v23 )
      {
        VIDMM_PAGE_TABLE::InvalidatePageTable(this, (struct VIDMM_GLOBAL *)v17, 0, v23, (unsigned __int8 *)v10 + 81);
        updated = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
                    this,
                    a2,
                    0,
                    v23,
                    v92,
                    (struct _DXGK_UPDATEPAGETABLEFLAGS)v36);
        v15 = updated;
        if ( updated < 0 )
        {
          WdLogSingleEntry1(1LL, updated);
          WdLogGlobalForLineNumber = 5550;
LABEL_40:
          DxgkLogInternalTriageEvent(v41, 0x40000LL);
          return (unsigned int)v15;
        }
        v39 = (unsigned __int8 *)v10 + 81;
      }
      if ( (*(_DWORD *)this & 0x40) != 0 )
        v42 = *(_DWORD *)(a5 + 120);
      else
        v42 = *(_DWORD *)(a5 + 116);
      if ( v37 < v42 )
      {
        v43 = v42 - v37;
        VIDMM_PAGE_TABLE::InvalidatePageTable(this, (struct VIDMM_GLOBAL *)v17, v37, v43, v39);
        v44 = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
                this,
                a2,
                v37,
                v43,
                v92 + v90 * v37,
                (struct _DXGK_UPDATEPAGETABLEFLAGS)v36);
        v15 = v44;
        if ( v44 < 0 )
        {
          WdLogSingleEntry1(1LL, v44);
          WdLogGlobalForLineNumber = 5567;
          goto LABEL_40;
        }
      }
      v38 = (unsigned int)a9;
    }
    v45 = *((_DWORD *)v10 + 18);
    if ( ((v45 + 3) & 0xFFFFFFFD) != 0 )
    {
      v46 = 0;
      if ( v45 == -2 )
      {
        if ( v23 < v37 )
        {
          v47 = 16LL * v23;
          v48 = v38;
          do
          {
            v49 = *((_QWORD *)this + 4);
            v50 = v46 + 1;
            v47 += 16LL;
            if ( (*(_BYTE *)(v49 + v47 - 16) & 1) == 0 )
              v50 = v46;
            v46 = v50;
            *(_QWORD *)(v49 + v47 - 16) = *(_QWORD *)v10;
            --v48;
          }
          while ( v48 );
        }
      }
      else
      {
        v55 = 0LL;
        v56 = 0LL;
        if ( (*((_DWORD *)v10 + 9) & 1) != 0 )
          v56 = *((_QWORD *)v10 + 5);
        else
          v55 = *((_QWORD *)v10 + 5);
        v57 = *(_DWORD *)this & 0x40;
        if ( v23 < v37 )
        {
          v51 = (int)a9;
          v58 = 16LL;
          v59 = 16LL * v23;
          if ( v55 )
          {
            v60 = (unsigned int)a9;
            if ( !v57 )
              v58 = 1LL;
            a5 = v58;
            do
            {
              v61 = *((_QWORD *)this + 4);
              v62 = v46 + 1;
              if ( (*(_BYTE *)(v61 + v59) & 1) == 0 )
                v62 = v46;
              v46 = v62;
              *(_QWORD *)(v61 + v59) = *(_QWORD *)v10;
              v63 = *((_QWORD *)v10 + 11);
              if ( v63 )
              {
                v58 = a5;
                *(_QWORD *)(*((_QWORD *)this + 4) + v59 + 8) = *(_QWORD *)(v55
                                                                         + 8LL
                                                                         * ((unsigned int)*((_QWORD *)v10 + 3)
                                                                          + (unsigned int)((v18 - *((_QWORD *)v10 + 3))
                                                                                         % v63)));
              }
              else
              {
                *(_QWORD *)(*((_QWORD *)this + 4) + v59 + 8) = *(_QWORD *)(v55 + 8LL * (unsigned int)v18);
              }
              v64 = *((_QWORD *)this + 5);
              if ( v64 )
              {
                *(_QWORD *)(v64 + v59) = *((_QWORD *)v10 + 2);
                *(_QWORD *)(*((_QWORD *)this + 5) + v59 + 8) = *((_QWORD *)v10 + 8);
              }
              v18 += v58;
              v59 += 16LL;
              --v60;
            }
            while ( v60 );
          }
          else
          {
            v65 = (unsigned int)a9;
            if ( !v57 )
              v58 = 1LL;
            a5 = v58;
            do
            {
              v66 = *((_QWORD *)this + 4);
              v67 = v46 + 1;
              if ( (*(_BYTE *)(v66 + v59) & 1) == 0 )
                v67 = v46;
              v46 = v67;
              *(_QWORD *)(v66 + v59) = *(_QWORD *)v10;
              v68 = *((_QWORD *)v10 + 11);
              if ( v68 )
              {
                v58 = a5;
                v69 = (unsigned int)((v18 - *((_QWORD *)v10 + 3)) % v68) + (unsigned int)*((_QWORD *)v10 + 3);
              }
              else
              {
                v69 = (unsigned int)v18;
              }
              *(_QWORD *)(*((_QWORD *)this + 4) + v59 + 8) = v56 + v69;
              v70 = *((_QWORD *)this + 5);
              if ( v70 )
              {
                *(_QWORD *)(v70 + v59) = *((_QWORD *)v10 + 2);
                *(_QWORD *)(*((_QWORD *)this + 5) + v59 + 8) = *((_QWORD *)v10 + 8);
              }
              v18 += v58;
              v59 += 16LL;
              --v65;
            }
            while ( v65 );
          }
          goto LABEL_50;
        }
      }
      v51 = (int)a9;
LABEL_50:
      *((_DWORD *)this + 1) += v51 - v46;
      if ( v46 )
        *((_BYTE *)v10 + 81) = 1;
      v52 = *((_DWORD *)v10 + 14);
      v53 = (struct VIDMM_GLOBAL_ALLOC ***)*((_QWORD *)v10 + 6);
      v54 = (VIDMM_GLOBAL *)*((_QWORD *)a2 + 11);
      LODWORD(a9) = 0;
      a5 = 0LL;
      v94 = 0LL;
      if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(
                  this,
                  a2,
                  (unsigned int *)&a9,
                  &a5,
                  (struct VIDMM_DRIVER_UPDATE_ADDRESS_CONTEXT *)&v94) < 0 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 4593;
        v15 = -1073741823;
LABEL_112:
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 5606;
        return (unsigned int)v15;
      }
      v71 = 0LL;
      if ( v52 == 1 )
      {
        v71 = (struct VIDMM_ALLOC *)v53;
        v72 = **v53;
      }
      else
      {
        v72 = 0LL;
        if ( v52 == 3 )
          v72 = (struct VIDMM_GLOBAL_ALLOC *)v53;
      }
      if ( *((_BYTE *)v54 + 40940) )
        v73 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
      else
        v73 = (int)(*(_DWORD *)this << 16) >> 29;
      v89 = v36;
      v74 = (void *)a5;
      VIDMM_GLOBAL::UpdatePageTable(
        v54,
        this,
        *((struct VIDMM_PROCESS **)a2 + 12),
        *((_QWORD *)v10 + 2),
        v71,
        v72,
        a4,
        v23,
        v51,
        (struct _DXGK_PTE *)(*((_QWORD *)this + 4) + 16LL * v23),
        0LL,
        (*(_DWORD *)this >> 7) & 0x1F,
        (UINT)a9,
        a5,
        v73,
        a6,
        v89,
        *((_QWORD *)v10 + 11));
      VIDMM_PAGE_TABLE_BASE::FreeDriverUpdateAddress(
        this,
        a2,
        v75,
        v74,
        (struct VIDMM_DRIVER_UPDATE_ADDRESS_CONTEXT *)&v94);
      v15 = 0;
LABEL_91:
      *(_DWORD *)this |= 0x10000u;
      return (unsigned int)v15;
    }
    if ( *(_QWORD *)(v17 + 41064) && v23 < v37 )
    {
      v77 = v38;
      v78 = 16LL * v23;
      v93 = v38;
      do
      {
        v79 = *((_QWORD *)this + 4);
        v80 = *(_QWORD *)(v79 + v78);
        if ( (v80 & 1) != 0 )
        {
          v81 = (v80 >> 5) & 0x1F;
          v91 = *(_QWORD *)(v79 + v78 + 8);
          if ( *(_QWORD *)(v17 + 41064) )
          {
            KeEnterCriticalRegion();
            ExAcquirePushLockExclusiveEx(v17 + 41008, 0LL);
            Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
            *(_QWORD *)(v17 + 41016) = KeGetCurrentThread();
            v82 = *(unsigned int *)(v17 + 41072);
            if ( (_DWORD)v82 == dword_1400814B4 )
            {
              *(_DWORD *)(v17 + 41072) = 0;
              v82 = 0LL;
            }
            v83 = *(_QWORD *)(v17 + 41064) + 48 * v82;
            *(_QWORD *)v83 = MEMORY[0xFFFFF78000000014];
            *(_DWORD *)(v83 + 36) = v81;
            *(_QWORD *)(v83 + 8) = v91;
            *(_QWORD *)(v83 + 24) = 0LL;
            *(_DWORD *)(v83 + 32) = 1;
            *(_QWORD *)(v83 + 16) = 1LL;
            *(_DWORD *)(v83 + 40) = *(_DWORD *)(v17 + 41000);
            ++*(_DWORD *)(v17 + 41072);
            Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
            *(_QWORD *)(v17 + 41016) = 0LL;
            ExReleasePushLockExclusiveEx(v17 + 41008, 0LL);
            KeLeaveCriticalRegion();
            v77 = v93;
          }
        }
        v78 += 16LL;
        v93 = --v77;
      }
      while ( v77 );
      v10 = a3;
      v84 = 0;
      v38 = (unsigned int)a9;
    }
    else
    {
      v84 = 0;
      if ( v23 >= v37 )
        goto LABEL_111;
    }
    v85 = 16LL * v23;
    v86 = v38;
    do
    {
      v87 = *((_QWORD *)this + 4);
      if ( (*(_BYTE *)(v87 + v85) & 1) != 0 )
      {
        --*((_DWORD *)this + 1);
        *(_QWORD *)(v87 + v85) = 0LL;
        v84 = 1;
        *(_QWORD *)(*((_QWORD *)this + 4) + v85 + 8) = 0LL;
        v88 = *((_QWORD *)this + 5);
        if ( v88 )
        {
          *(_QWORD *)(v88 + v85) = 0LL;
          *(_QWORD *)(v85 + *((_QWORD *)this + 5) + 8) = 0LL;
        }
      }
      v85 += 16LL;
      --v86;
    }
    while ( v86 );
    if ( v84 )
      *((_BYTE *)v10 + 81) = 1;
LABEL_111:
    v15 = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(this, a2, v23, v38, a6, (struct _DXGK_UPDATEPAGETABLEFLAGS)v36);
    if ( v15 < 0 )
      goto LABEL_112;
    goto LABEL_91;
  }
  WdLogSingleEntry2(1LL, v13, v11);
  WdLogGlobalForLineNumber = 5417;
  DxgkLogInternalTriageEvent(v14, 0x40000LL);
  return (unsigned int)-1073741811;
}
