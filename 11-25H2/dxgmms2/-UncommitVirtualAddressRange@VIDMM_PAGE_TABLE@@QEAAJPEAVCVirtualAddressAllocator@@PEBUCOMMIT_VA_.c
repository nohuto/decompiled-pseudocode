/*
 * XREFs of ?UncommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K2@Z @ 0x1400D1A80
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400D03C0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14004CCF0 (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1400B9F20 (-UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDAT.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE::UncommitVirtualAddressRange(
        VIDMM_PAGE_TABLE *this,
        struct CVirtualAddressAllocator *a2,
        const struct COMMIT_VA_STATE *a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  unsigned __int64 v5; // r11
  const struct COMMIT_VA_STATE *v6; // rsi
  struct CVirtualAddressAllocator *v7; // rdi
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  int v12; // r9d
  __int64 v13; // rbp
  __int64 v14; // rax
  int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // r15d
  unsigned int v18; // edx
  unsigned int v19; // eax
  __int64 v20; // r14
  __int64 v21; // r12
  __int64 v22; // rax
  unsigned __int64 v23; // rsi
  __int64 v24; // r13
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  char v30; // r9
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rax
  int updated; // eax
  unsigned int v36; // edi
  __int64 v37; // rcx
  unsigned int v38; // [rsp+50h] [rbp-48h]
  unsigned __int64 v41; // [rsp+B8h] [rbp+20h]

  v41 = a4;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  if ( (a4 & 0xFFF) != 0 )
    return 3221225485LL;
  v10 = a4 >> 12;
  v11 = (a4 >> 12) + a5;
  if ( v11 <= a4 >> 12 )
    return 3221225485LL;
  v12 = *(_DWORD *)this;
  v13 = *((_QWORD *)v7 + 11);
  v14 = *((_QWORD *)this + 2);
  if ( !v14 || !*(_QWORD *)(*(_QWORD *)v14 + 64LL) )
    return 0LL;
  v15 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 40232) + 8LL * ((*(_DWORD *)this >> 7) & 0x1F)) + 112LL);
  v16 = v15 & (v11 - 1);
  v17 = v10 & v15;
  if ( (v12 & 0x40) != 0 )
  {
    v17 >>= 4;
    v16 >>= 4;
    v5 &= 0xFFFFFFFFFFFF0000uLL;
    v41 = v5;
  }
  v18 = v16 - v17 + 1;
  v38 = v18;
  if ( *(_QWORD *)(v13 + 41064) )
  {
    v19 = v16 + 1;
    if ( v17 < v16 + 1 )
    {
      v20 = 16LL * v17;
      v21 = v18;
      do
      {
        v22 = *((_QWORD *)this + 4);
        v23 = *(_QWORD *)(v20 + v22);
        if ( (v23 & 1) != 0 )
        {
          v24 = *(_QWORD *)(v20 + v22 + 8);
          v25 = (v23 >> 5) & 0x1F;
          if ( *(_QWORD *)(v13 + 41064) )
          {
            KeEnterCriticalRegion();
            ExAcquirePushLockExclusiveEx(v13 + 41008, 0LL);
            Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
            *(_QWORD *)(v13 + 41016) = KeGetCurrentThread();
            v26 = *(unsigned int *)(v13 + 41072);
            if ( (_DWORD)v26 == dword_1400814B4 )
            {
              *(_DWORD *)(v13 + 41072) = 0;
              v26 = 0LL;
            }
            v27 = 3 * v26;
            v28 = MEMORY[0xFFFFF78000000014];
            v29 = *(_QWORD *)(v13 + 41064) + 16 * v27;
            *(_QWORD *)(v29 + 8) = v24;
            *(_QWORD *)(v29 + 24) = 0LL;
            *(_QWORD *)v29 = v28;
            *(_DWORD *)(v29 + 32) = 1;
            *(_DWORD *)(v29 + 36) = v25;
            *(_QWORD *)(v29 + 16) = 1LL;
            *(_DWORD *)(v29 + 40) = *(_DWORD *)(v13 + 41000);
            ++*(_DWORD *)(v13 + 41072);
            Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
            *(_QWORD *)(v13 + 41016) = 0LL;
            ExReleasePushLockExclusiveEx(v13 + 41008, 0LL);
            KeLeaveCriticalRegion();
          }
        }
        v20 += 16LL;
        --v21;
      }
      while ( v21 );
      v30 = 0;
      v5 = v41;
      v18 = v38;
      v7 = a2;
      v6 = a3;
      goto LABEL_20;
    }
  }
  else
  {
    v19 = v16 + 1;
  }
  v30 = 0;
  if ( v17 < v19 )
  {
LABEL_20:
    v31 = 16LL * v17;
    v32 = v18;
    do
    {
      v33 = *((_QWORD *)this + 4);
      if ( (*(_BYTE *)(v33 + v31) & 1) != 0 )
      {
        --*((_DWORD *)this + 1);
        v30 = 1;
        *(_QWORD *)(v33 + v31) = 0LL;
        *(_QWORD *)(v31 + *((_QWORD *)this + 4) + 8) = 0LL;
        v34 = *((_QWORD *)this + 5);
        if ( v34 )
        {
          *(_QWORD *)(v31 + v34) = 0LL;
          *(_QWORD *)(v31 + *((_QWORD *)this + 5) + 8) = 0LL;
        }
      }
      v31 += 16LL;
      --v32;
    }
    while ( v32 );
    v18 = v38;
    if ( v30 )
      *((_BYTE *)v6 + 81) = 1;
  }
  if ( !*((_DWORD *)this + 1) && (*((_DWORD *)v7 + 36) & 4) == 0 )
    return 0LL;
  updated = VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
              this,
              v7,
              v17,
              v18,
              v5 >> 12,
              (struct _DXGK_UPDATEPAGETABLEFLAGS)((*(_DWORD *)this >> 3) & 8));
  v36 = updated;
  if ( updated < 0 )
  {
    WdLogSingleEntry1(1LL, updated);
    WdLogGlobalForLineNumber = 7649;
    DxgkLogInternalTriageEvent(v37, 0x40000LL);
  }
  return v36;
}
