/*
 * XREFs of ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1400AB020
 * Callers:
 *     ?EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z @ 0x140040150 (-EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z.c)
 *     ?DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1400A9B04 (-DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1400AB020 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400F28C0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x14000D490 (McTemplateK0p_EtwWriteTransfer.c)
 *     ?IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ @ 0x140034DC0 (-IsResident@VIDMM_PAGE_TABLE_BASE@@QEBAEXZ.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1400AB020 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1400AB7F0 (-EvictOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAUVIDMM_DRIVER_UPDATE_ADDRESS_CONTEXT@@@Z @ 0x1400ABA84 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAUV.c)
 *     ?FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAUVIDMM_DRIVER_UPDATE_ADDRESS_CONTEXT@@@Z @ 0x1400ABD50 (-FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAUVIDMM_.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PAGE_TABLE_BASE@@PEAVVIDMM_PROCESS@@_KPEAUVIDMM_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@2IIPEAU_DXGK_PTE@@5II2W4_DXGK_PAGETABLEUPDATEMODE@@2U_DXGK_UPDATEPAGETABLEFLAGS@@2@Z @ 0x1400ABE20 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PAGE_TABLE_BASE@@PEAVVIDMM_PROCESS@@_KPEAUVIDMM_AL.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::EvictPageDirectory(
        VIDMM_PAGE_DIRECTORY *this,
        struct VIDMM_PROCESS **a2,
        unsigned __int64 a3,
        unsigned __int8 a4,
        char a5)
{
  unsigned __int64 v5; // r14
  __int64 v7; // rdx
  unsigned __int8 v8; // r9
  struct VIDMM_PROCESS **v9; // r10
  VIDMM_GLOBAL *v10; // r11
  int v11; // ecx
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rbx
  __int64 v16; // rsi
  unsigned __int64 v17; // r12
  __int64 v18; // r14
  unsigned int v19; // r13d
  __int64 v20; // r15
  __int64 v21; // rsi
  __int64 v22; // rsi
  __int64 *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // r9
  unsigned int v28; // ebx
  unsigned int v29; // eax
  enum _DXGK_PAGETABLEUPDATEMODE v30; // eax
  unsigned __int64 v31; // rbx
  unsigned int v32; // r8d
  VIDMM_GLOBAL *v33; // rcx
  __int64 result; // rax
  __int64 v35; // rsi
  __int64 v36; // rsi
  __int64 *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // rcx
  __int64 v41; // r9
  unsigned int v42; // ebx
  unsigned int v43; // eax
  enum _DXGK_PAGETABLEUPDATEMODE v44; // eax
  unsigned __int64 v45; // rbx
  unsigned int v46; // r8d
  VIDMM_GLOBAL *v47; // rcx
  VIDMM_PAGE_DIRECTORY *v48; // rcx
  void *v49; // rdx
  void *v50; // rdx
  enum _DXGK_PAGETABLEUPDATEMODE v51; // eax
  unsigned __int64 v52; // rbx
  unsigned int v53; // r8d
  struct _DXGK_UPDATEPAGETABLEFLAGS v54; // [rsp+80h] [rbp-90h]
  struct _DXGK_UPDATEPAGETABLEFLAGS v55; // [rsp+80h] [rbp-90h]
  unsigned int v56; // [rsp+90h] [rbp-80h]
  unsigned int v57; // [rsp+90h] [rbp-80h]
  unsigned int v58; // [rsp+94h] [rbp-7Ch] BYREF
  __int64 v59; // [rsp+98h] [rbp-78h]
  VIDMM_GLOBAL *v60; // [rsp+A0h] [rbp-70h]
  unsigned int v61; // [rsp+A8h] [rbp-68h] BYREF
  unsigned int v62; // [rsp+ACh] [rbp-64h] BYREF
  unsigned __int64 v63; // [rsp+B0h] [rbp-60h] BYREF
  VIDMM_GLOBAL *v64; // [rsp+B8h] [rbp-58h]
  VIDMM_GLOBAL *v65; // [rsp+C0h] [rbp-50h]
  unsigned __int64 v66; // [rsp+C8h] [rbp-48h] BYREF
  unsigned __int64 v67; // [rsp+D0h] [rbp-40h] BYREF
  __int128 v68; // [rsp+D8h] [rbp-38h] BYREF
  __int128 v69; // [rsp+E8h] [rbp-28h] BYREF
  __int128 v70; // [rsp+F8h] [rbp-18h] BYREF

  v5 = a3;
  if ( VIDMM_PAGE_TABLE_BASE::IsResident(this) )
  {
    v10 = *(VIDMM_GLOBAL **)(v7 + 88);
    v11 = *(_DWORD *)this;
    v12 = *((_QWORD *)v10 + 5029);
    v13 = ((unsigned __int64)*(unsigned int *)this >> 7) & 0x1F;
    v14 = *(_DWORD *)this & 7;
    v60 = v10;
    v15 = *(_QWORD *)(v12 + 8 * v13);
    *(_QWORD *)&v68 = v15;
    if ( (v11 & 0x10) != 0 )
      v16 = *((unsigned int *)v9[15] + 8 * v13 + 4);
    else
      v16 = *(unsigned int *)(v15 + 48 * v14 + 128);
    v58 = v16;
    v17 = v5;
    v63 = *(_QWORD *)(v15 + 48 * v14 + 168);
    if ( (_DWORD)v16 )
    {
      v18 = 0LL;
      v19 = v16;
      v20 = 0LL;
      v59 = v16;
      while ( !v8 )
      {
LABEL_27:
        *(_QWORD *)(v18 + *((_QWORD *)this + 5)) = 0LL;
        if ( (*(_DWORD *)this & 0x1020) == 0x1020 )
          *(_QWORD *)(*((_QWORD *)this + 5) + 16LL * v19) = 0LL;
        v17 += v63;
        ++v19;
        v8 = a4;
        v20 += 8LL;
        v9 = a2;
        v18 += 16LL;
        v10 = v60;
        v59 = --v16;
        if ( !v16 )
        {
          v15 = v68;
          LODWORD(v16) = v58;
          v5 = a3;
          goto LABEL_31;
        }
      }
      if ( (*(_DWORD *)this & 0x20) == 0 )
      {
        v48 = *(VIDMM_PAGE_DIRECTORY **)(v20 + *((_QWORD *)this + 6));
        if ( v48 )
          VIDMM_PAGE_DIRECTORY::EvictPageDirectory(v48, (struct CVirtualAddressAllocator *)v9, v17, v8, a5);
        goto LABEL_27;
      }
      v21 = *((_QWORD *)this + 6);
      if ( (*(_DWORD *)(v18 + *((_QWORD *)this + 5)) & 0x400LL) != 0 )
      {
        v49 = *(void **)(v20 + v21);
        if ( !v49 )
          goto LABEL_25;
        ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)v10 + 40256), v49);
        *(_QWORD *)(v20 + *((_QWORD *)this + 6)) = 0LL;
      }
      else
      {
        v22 = *(_QWORD *)(v20 + v21);
        if ( !v22 )
          goto LABEL_25;
        v23 = *(__int64 **)(v22 + 16);
        if ( !v23 )
          goto LABEL_25;
        v24 = *v23;
        v25 = *(_QWORD *)(*v23 + 64);
        if ( !v25 )
          goto LABEL_25;
        v26 = (*(_DWORD *)v22 >> 7) & 0x1F;
        v65 = v9[11];
        v27 = *(_QWORD *)(*((_QWORD *)v65 + 5029) + 8 * v26);
        if ( (*(_DWORD *)(v25 + 104) & 0x1000) != 0 )
          *(_QWORD *)(v24 + 72) = 0LL;
        if ( (**(_DWORD **)(v27 + 480) & 8) != 0 && a5 )
        {
          v28 = (*(_DWORD *)v22 & 0x40 | 0x20u) >> 3;
          if ( (*(_DWORD *)v22 & 0x40) != 0 )
            v29 = *(_DWORD *)(v27 + 120);
          else
            v29 = *(_DWORD *)(v27 + 116);
          v56 = v29;
          v64 = v9[11];
          v61 = 0;
          v66 = 0LL;
          v69 = 0LL;
          if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(
                      (VIDMM_PAGE_TABLE_BASE *)v22,
                      (struct CVirtualAddressAllocator *)v9,
                      &v61,
                      &v66,
                      (struct VIDMM_DRIVER_UPDATE_ADDRESS_CONTEXT *)&v69) < 0 )
          {
            WdLogSingleEntry0(2LL);
            WdLogGlobalForLineNumber = 4928;
          }
          else
          {
            if ( *((_BYTE *)v64 + 40940) )
              v30 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
            else
              v30 = (int)(*(_DWORD *)v22 << 16) >> 29;
            v54 = (struct _DXGK_UPDATEPAGETABLEFLAGS)v28;
            v31 = v66;
            VIDMM_GLOBAL::UpdatePageTable(
              v64,
              (struct VIDMM_PAGE_TABLE_BASE *)v22,
              a2[12],
              0LL,
              0LL,
              0LL,
              0LL,
              0,
              v56,
              0LL,
              0LL,
              (*(_DWORD *)v22 >> 7) & 0x1F,
              v61,
              v66,
              v30,
              v17,
              v54,
              0LL);
            VIDMM_PAGE_TABLE_BASE::FreeDriverUpdateAddress(
              (VIDMM_PAGE_TABLE_BASE *)v22,
              (struct CVirtualAddressAllocator *)a2,
              v32,
              v31,
              (struct VIDMM_DRIVER_UPDATE_ADDRESS_CONTEXT *)&v69);
          }
        }
        v33 = v65;
        *(_DWORD *)(*(_QWORD *)(v22 + 16) + 24LL) |= 0x200000u;
        *(_BYTE *)(*(_QWORD *)(v22 + 16) + 42LL) = 1;
        VIDMM_GLOBAL::EvictOneAllocation(v33, *(struct VIDMM_ALLOC **)(v22 + 24), 0);
        *(_DWORD *)(*(_QWORD *)(v22 + 16) + 24LL) &= ~0x200000u;
        if ( (byte_140081244 & 0x10) != 0 )
          McTemplateK0p_EtwWriteTransfer();
      }
      v9 = a2;
      v10 = v60;
LABEL_25:
      if ( (*(_DWORD *)this & 0x1000) != 0 )
      {
        v35 = *((_QWORD *)this + 6);
        if ( (*(_DWORD *)(*((_QWORD *)this + 5) + 16LL * v19) & 0x400LL) != 0 )
        {
          v50 = *(void **)(v35 + 8LL * v19);
          if ( v50 )
          {
            ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)v10 + 40256), v50);
            *(_QWORD *)(8LL * v19 + *((_QWORD *)this + 6)) = 0LL;
          }
        }
        else
        {
          v36 = *(_QWORD *)(v35 + 8LL * v19);
          if ( v36 )
          {
            v37 = *(__int64 **)(v36 + 16);
            if ( v37 )
            {
              v38 = *v37;
              v39 = *(_QWORD *)(*v37 + 64);
              if ( v39 )
              {
                v40 = (*(_DWORD *)v36 >> 7) & 0x1F;
                v64 = v9[11];
                v41 = *(_QWORD *)(*((_QWORD *)v64 + 5029) + 8 * v40);
                if ( (*(_DWORD *)(v39 + 104) & 0x1000) != 0 )
                  *(_QWORD *)(v38 + 72) = 0LL;
                if ( (**(_DWORD **)(v41 + 480) & 8) != 0 && a5 )
                {
                  v42 = (*(_DWORD *)v36 & 0x40 | 0x20u) >> 3;
                  if ( (*(_DWORD *)v36 & 0x40) != 0 )
                    v43 = *(_DWORD *)(v41 + 120);
                  else
                    v43 = *(_DWORD *)(v41 + 116);
                  v57 = v43;
                  v65 = v9[11];
                  v62 = 0;
                  v67 = 0LL;
                  v70 = 0LL;
                  if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(
                              (VIDMM_PAGE_TABLE_BASE *)v36,
                              (struct CVirtualAddressAllocator *)v9,
                              &v62,
                              &v67,
                              (struct VIDMM_DRIVER_UPDATE_ADDRESS_CONTEXT *)&v70) < 0 )
                  {
                    WdLogSingleEntry0(2LL);
                    WdLogGlobalForLineNumber = 4928;
                  }
                  else
                  {
                    if ( *((_BYTE *)v65 + 40940) )
                      v44 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
                    else
                      v44 = (int)(*(_DWORD *)v36 << 16) >> 29;
                    v55 = (struct _DXGK_UPDATEPAGETABLEFLAGS)v42;
                    v45 = v67;
                    VIDMM_GLOBAL::UpdatePageTable(
                      v65,
                      (struct VIDMM_PAGE_TABLE_BASE *)v36,
                      a2[12],
                      0LL,
                      0LL,
                      0LL,
                      0LL,
                      0,
                      v57,
                      0LL,
                      0LL,
                      (*(_DWORD *)v36 >> 7) & 0x1F,
                      v62,
                      v67,
                      v44,
                      v17,
                      v55,
                      0LL);
                    VIDMM_PAGE_TABLE_BASE::FreeDriverUpdateAddress(
                      (VIDMM_PAGE_TABLE_BASE *)v36,
                      (struct CVirtualAddressAllocator *)a2,
                      v46,
                      v45,
                      (struct VIDMM_DRIVER_UPDATE_ADDRESS_CONTEXT *)&v70);
                  }
                }
                v47 = v64;
                *(_DWORD *)(*(_QWORD *)(v36 + 16) + 24LL) |= 0x200000u;
                *(_BYTE *)(*(_QWORD *)(v36 + 16) + 42LL) = 1;
                VIDMM_GLOBAL::EvictOneAllocation(v47, *(struct VIDMM_ALLOC **)(v36 + 24), 0);
                *(_DWORD *)(*(_QWORD *)(v36 + 16) + 24LL) &= ~0x200000u;
                if ( (byte_140081244 & 0x10) != 0 )
                  McTemplateK0p_EtwWriteTransfer();
              }
            }
          }
        }
      }
      v16 = v59;
      goto LABEL_27;
    }
LABEL_31:
    if ( (**(_DWORD **)(v15 + 480) & 8) != 0 && a5 )
    {
      v58 = 0;
      v63 = 0LL;
      v68 = 0LL;
      if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(
                  this,
                  (struct CVirtualAddressAllocator *)v9,
                  &v58,
                  &v63,
                  (struct VIDMM_DRIVER_UPDATE_ADDRESS_CONTEXT *)&v68) < 0 )
      {
        WdLogSingleEntry0(2LL);
        result = 3221225473LL;
        WdLogGlobalForLineNumber = 8300;
        return result;
      }
      if ( *((_BYTE *)v60 + 40940) )
        v51 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
      else
        v51 = (int)(*(_DWORD *)this << 16) >> 29;
      v52 = v63;
      VIDMM_GLOBAL::UpdatePageTable(
        v60,
        this,
        a2[12],
        0LL,
        0LL,
        0LL,
        0LL,
        0,
        v16,
        0LL,
        0LL,
        (*(_DWORD *)this >> 7) & 0x1F,
        v58,
        v63,
        v51,
        v5,
        (struct _DXGK_UPDATEPAGETABLEFLAGS)4,
        0LL);
      VIDMM_PAGE_TABLE_BASE::FreeDriverUpdateAddress(
        this,
        (struct CVirtualAddressAllocator *)a2,
        v53,
        v52,
        (struct VIDMM_DRIVER_UPDATE_ADDRESS_CONTEXT *)&v68);
      v10 = v60;
    }
    *(_DWORD *)(*((_QWORD *)this + 2) + 24LL) |= 0x200000u;
    *(_BYTE *)(*((_QWORD *)this + 2) + 42LL) = 0;
    VIDMM_GLOBAL::EvictOneAllocation(v10, *((struct VIDMM_ALLOC **)this + 3), 0);
    *(_DWORD *)(*((_QWORD *)this + 2) + 24LL) &= ~0x200000u;
    if ( (byte_140081244 & 0x10) != 0 )
      McTemplateK0p_EtwWriteTransfer();
  }
  return 0LL;
}
