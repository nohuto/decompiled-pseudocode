/*
 * XREFs of ?Convert64K_4K@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K@Z @ 0x1400A9078
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400F2030 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??3@YAXPEAX@Z @ 0x14001D2D0 (--3@YAXPEAX@Z.c)
 *     ?FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z @ 0x140035D1C (-FlushGpuVaTlb@CVirtualAddressAllocator@@QEAAXI_K0@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036BA0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     McTemplateK0ppq_EtwWriteTransfer @ 0x14003E084 (McTemplateK0ppq_EtwWriteTransfer.c)
 *     memset @ 0x140056340 (memset.c)
 *     ?SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z @ 0x1400A96C0 (-SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z.c)
 *     ?UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@II3U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1400AAE70 (-UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@PEAX_.c)
 *     ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1400AB920 (-UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDAT.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE::Convert64K_4K(
        VIDMM_PAGE_TABLE *this,
        struct CVirtualAddressAllocator *a2,
        const struct COMMIT_VA_STATE *a3,
        unsigned __int64 a4)
{
  _OWORD *v4; // r12
  __int64 v6; // rcx
  __int128 v8; // xmm1
  struct CVirtualAddressAllocator *v9; // r9
  int v10; // ebx
  _QWORD *v11; // rdi
  __int128 v12; // xmm0
  __int64 v13; // rax
  __int64 v14; // r11
  __int64 v15; // r10
  __int128 v16; // xmm1
  int v17; // r14d
  __int64 v18; // r13
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int64 v21; // rax
  unsigned __int64 v22; // rdi
  __int64 v23; // rax
  _QWORD *v24; // r10
  __int64 v25; // r11
  unsigned int v26; // edi
  unsigned int v27; // r13d
  unsigned int v28; // r9d
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rcx
  __int64 v32; // rcx
  int v33; // r13d
  __int64 v34; // r8
  int *v35; // rax
  unsigned int v36; // edi
  __int64 v37; // rdx
  unsigned int v38; // r10d
  unsigned __int64 v39; // r11
  unsigned __int64 v40; // rax
  __int64 v41; // r15
  __int64 v42; // rax
  __int64 v43; // r9
  __int64 v44; // rax
  unsigned __int64 v45; // rax
  __int64 v46; // rcx
  void *v47; // rdi
  int v48; // eax
  int v50; // eax
  __int64 v51; // rcx
  int v52; // eax
  __int64 v53; // rax
  int updated; // eax
  __int64 v55; // rcx
  __int64 v56; // rcx
  struct _DXGK_UPDATEPAGETABLEFLAGS v57[2]; // [rsp+28h] [rbp-D8h]
  _QWORD *v58; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v59; // [rsp+58h] [rbp-A8h]
  __int64 v60; // [rsp+60h] [rbp-A0h]
  __int64 v61; // [rsp+68h] [rbp-98h]
  unsigned __int64 v62; // [rsp+70h] [rbp-90h]
  __int64 v63; // [rsp+78h] [rbp-88h]
  unsigned int v64; // [rsp+80h] [rbp-80h]
  __int64 v65; // [rsp+88h] [rbp-78h]
  __int64 v66; // [rsp+90h] [rbp-70h]
  __int128 v67; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v68; // [rsp+B0h] [rbp-50h]
  __int128 v69; // [rsp+C0h] [rbp-40h]
  __int128 v70; // [rsp+D0h] [rbp-30h]
  __int128 v71; // [rsp+E0h] [rbp-20h]
  __int128 v72; // [rsp+F0h] [rbp-10h]
  unsigned int v73; // [rsp+150h] [rbp+50h]
  unsigned int v75; // [rsp+160h] [rbp+60h]

  v4 = 0LL;
  v6 = *((_QWORD *)a2 + 11);
  v8 = *((_OWORD *)a3 + 1);
  v9 = a2;
  v63 = v6;
  v67 = *(_OWORD *)a3;
  v10 = 0;
  v11 = (_QWORD *)(v6 + 24);
  v12 = *((_OWORD *)a3 + 2);
  v13 = *(_QWORD *)(v6 + 40232);
  v14 = *(_DWORD *)this & 7;
  v15 = (*(_DWORD *)this >> 7) & 0x1F;
  v68 = v8;
  v16 = *((_OWORD *)a3 + 3);
  v17 = 0;
  v69 = v12;
  v18 = *(_QWORD *)(v13 + 8 * v15);
  v19 = *((_OWORD *)a3 + 4);
  v60 = v18;
  v70 = v16;
  v20 = *((_OWORD *)a3 + 5);
  v21 = *(_QWORD *)(v18 + 48 * v14 + 168);
  *(_BYTE *)(v6 + 40938) |= 4u;
  v66 = v21;
  v71 = v19;
  v72 = v20;
  if ( (byte_140081241 & 0x10) != 0 )
  {
    McTemplateK0ppq_EtwWriteTransfer(v6, &EventPageTableDemotion64, (__int64)a3, *v11, this, 1);
    v9 = a2;
  }
  *((_QWORD *)&v72 + 1) = 0LL;
  *(_QWORD *)&v68 = 0LL;
  if ( !*((_BYTE *)a3 + 80) )
  {
    VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(*((VIDMM_PROCESS **)v9 + 12), *(_DWORD *)(*v11 + 240LL), 1);
    *((_BYTE *)a3 + 80) = 1;
  }
  v22 = *(unsigned int *)(v18 + 116);
  v75 = *(_DWORD *)(v18 + 120);
  v23 = 16 * v22;
  if ( !is_mul_ok(v22, 0x10uLL) )
    v23 = -1LL;
  v58 = (_QWORD *)operator new[](v23, 0x34356956u, 256LL);
  v24 = v58;
  if ( !v58 )
  {
    _InterlockedIncrement(&dword_1400817F4);
    WdLogSingleEntry0(6LL);
    v52 = 5586;
LABEL_44:
    v57[1] = 0;
    WdLogGlobalForLineNumber = v52;
    DxgkLogInternalTriageEvent(v51, 262145LL);
    v17 = -1073741801;
    goto LABEL_45;
  }
  if ( (*(_BYTE *)(v63 + 40937) & 0x40) == 0 )
    goto LABEL_9;
  v53 = 16 * v22;
  if ( !is_mul_ok(v22, 0x10uLL) )
    v53 = -1LL;
  v4 = (_OWORD *)operator new[](v53, 0x34356956u, 256LL);
  if ( !v4 )
  {
    _InterlockedIncrement(&dword_1400817F8);
    WdLogSingleEntry0(6LL);
    v52 = 5595;
    goto LABEL_44;
  }
  v24 = v58;
LABEL_9:
  v25 = v18;
  v26 = 0;
  *((_DWORD *)this + 1) = 0;
  v27 = 0;
  v28 = *(_DWORD *)(v60 + 120);
  if ( v28 )
  {
    do
    {
      if ( (*(_BYTE *)(*((_QWORD *)this + 4) + 16LL * v27) & 1) != 0 )
      {
        v29 = 0LL;
        v30 = 16LL;
        do
        {
          v31 = 2LL * v26;
          *(_OWORD *)&v24[v31] = *(_OWORD *)(*((_QWORD *)this + 4) + 16LL * v27);
          v24[v31 + 1] += v29;
          if ( v4 )
            v4[v26] = *(_OWORD *)(*((_QWORD *)this + 5) + 16LL * v27);
          ++v26;
          ++v29;
          --v30;
        }
        while ( v30 );
        *((_DWORD *)this + 1) += 16;
      }
      else
      {
        memset(&v24[2 * v26], 0, 0x100uLL);
        if ( v4 )
          memset(&v4[v26], 0, 0x100uLL);
        v24 = v58;
        v26 += 16;
        v25 = v60;
      }
      v28 = *(_DWORD *)(v25 + 120);
      ++v27;
    }
    while ( v27 < v28 );
  }
  if ( (**(_DWORD **)(v25 + 480) & 8) != 0 )
  {
    updated = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(this, a2, 0, v28, a4, (struct _DXGK_UPDATEPAGETABLEFLAGS)8);
    v17 = updated;
    if ( updated >= 0 )
    {
      v10 = 2;
      goto LABEL_21;
    }
    WdLogSingleEntry1(1LL, updated);
    v57[1] = 0;
    WdLogGlobalForLineNumber = 5646;
    DxgkLogInternalTriageEvent(v55, 0x40000LL);
LABEL_45:
    v47 = 0LL;
    goto LABEL_31;
  }
LABEL_21:
  operator delete(*((void **)this + 4));
  v33 = 16;
  *(_DWORD *)this &= ~0x40u;
  v34 = 0LL;
  *((_QWORD *)this + 4) = v58;
  v35 = (int *)*((_QWORD *)this + 5);
  v58 = 0LL;
  v36 = 1;
  v73 = 0;
  v37 = *((_QWORD *)v35 + 1);
  v38 = *v35;
  v39 = a4;
  v62 = a4;
  v40 = a4 + 16;
  v61 = v37;
  while ( 1 )
  {
    v59 = v40;
    v41 = v38;
    if ( v36 >= v75 )
      break;
    v42 = *((_QWORD *)this + 5);
    v32 = 2LL * v36;
    v43 = *(_QWORD *)(v42 + 16LL * v36);
    v44 = *(_QWORD *)(v42 + 16LL * v36 + 8);
    v65 = v44;
    v64 = v43;
    if ( v38 == v43 && v37 == v44 )
    {
      v45 = v59;
      v33 += 16;
    }
    else
    {
      *(_QWORD *)&v68 = v38;
      v50 = VIDMM_PAGE_TABLE::UpdatePageTable(this, a2, &v67, v37, 0LL, v37 != 0 ? 3 : 0, v34, v33, v39, v10);
      v17 = v50;
      if ( v50 < 0 )
      {
        WdLogSingleEntry1(1LL, v50);
        WdLogGlobalForLineNumber = 5695;
        v57[1] = 0;
        DxgkLogInternalTriageEvent(v46, 0x40000LL);
        v37 = v61;
        v34 = v73;
        v39 = v62;
        break;
      }
      v45 = v59;
      v34 = v33 + v73;
      v37 = v65;
      v33 = 16;
      v38 = v64;
      v39 = v59;
      v73 = v34;
      v61 = v65;
      v62 = v59;
    }
    v40 = v45 + 16;
    ++v36;
  }
  v47 = (void *)*((_QWORD *)this + 5);
  *((_QWORD *)this + 5) = v4;
  v4 = 0LL;
  if ( v17 >= 0 )
  {
    *(_QWORD *)&v68 = v41;
    v48 = VIDMM_PAGE_TABLE::UpdatePageTable(this, a2, &v67, v37, 0LL, v37 != 0 ? 3 : 0, v34, v33, v39, v10);
    v17 = v48;
    if ( v48 < 0 )
    {
      WdLogSingleEntry1(1LL, v48);
      v57[1] = 0;
      WdLogGlobalForLineNumber = 5734;
      DxgkLogInternalTriageEvent(v56, 0x40000LL);
    }
    else
    {
      CVirtualAddressAllocator::FlushGpuVaTlb(
        a2,
        (*(_DWORD *)this >> 7) & 0x1F,
        a4 << 12,
        (a4 + v66 * *(unsigned int *)(v60 + 116)) << 12);
    }
  }
LABEL_31:
  *(_BYTE *)(v63 + 40938) &= ~4u;
  if ( v58 )
    operator delete(v58);
  if ( v4 )
    operator delete(v4);
  if ( v47 )
    operator delete(v47);
  if ( (byte_140081241 & 0x10) != 0 )
  {
    v57[0] = 0;
    McTemplateK0ppq_EtwWriteTransfer(v32, &EventPageTableDemotion64, v34, *(_QWORD *)(v63 + 24), this, *(_QWORD *)v57);
  }
  return (unsigned int)v17;
}
