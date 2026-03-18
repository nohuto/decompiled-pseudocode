/*
 * XREFs of ?HandleFullPageTableCoverage@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@PEBU_DXGK_GPUMMUCAPS@@PEBUCOMMIT_VA_STATE@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@III_KPEAE5@Z @ 0x1401142DC
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400D03C0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     Feature_191927608__private_IsEnabledDeviceUsageNoInline @ 0x14004DC14 (Feature_191927608__private_IsEnabledDeviceUsageNoInline.c)
 *     ?DestroyPdePageTableData@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I_K@Z @ 0x1400FC34C (-DestroyPdePageTableData@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I_K@Z.c)
 */

unsigned __int8 __fastcall VIDMM_PAGE_DIRECTORY::HandleFullPageTableCoverage(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2,
        const struct _DXGK_GPUMMUCAPS *a3,
        const struct COMMIT_VA_STATE *a4,
        const struct VIDMM_PAGE_TABLE_LEVEL_DESC *a5,
        unsigned int a6,
        unsigned int a7,
        char a8,
        unsigned __int64 a9,
        unsigned __int8 *a10,
        unsigned __int8 *a11)
{
  char v11; // bp
  unsigned __int64 v12; // rbx
  __int64 v13; // r15
  _DWORD *v14; // r12
  __int64 *v18; // r15
  __int64 v19; // r9
  _QWORD *v20; // r10
  unsigned __int8 *v21; // rcx
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned __int64 v23; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  char v28; // [rsp+88h] [rbp+40h]

  v11 = 0;
  v12 = -1LL;
  v13 = *((_QWORD *)a2 + 11);
  v14 = 0LL;
  v28 = 0;
  if ( (*(_QWORD *)a4 & 1) != 0 )
  {
    if ( (*(_QWORD *)a4 & 2) != 0 )
    {
      v11 = *(_BYTE *)(v13 + 40937) & 1;
    }
    else
    {
      if ( (*(_DWORD *)this & 0x20) == 0 || !*((_BYTE *)a4 + 79) )
        return 0;
      IsEnabledDeviceUsageNoInline = Feature_191927608__private_IsEnabledDeviceUsageNoInline();
      v23 = *((_QWORD *)a4 + 11);
      if ( !IsEnabledDeviceUsageNoInline )
      {
        if ( !v23 || v23 >= *((_QWORD *)a5 + 5) )
        {
          v12 = a9 + *((_QWORD *)a4 + 3) + (*((_QWORD *)a4 + 5) << 12);
          if ( (a3->Value & 0x100) != 0 || (((*((_QWORD *)a5 + 5) << 12) - 1LL) & v12) == 0 )
          {
            v14 = ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)(v13 + 40256));
            if ( v14 )
              goto LABEL_3;
            WdLogSingleEntry0(3LL);
            WdLogGlobalForLineNumber = 6168;
          }
        }
        return 0;
      }
      if ( v23 )
        return 0;
      v12 = a9 + *((_QWORD *)a4 + 3) + (*((_QWORD *)a4 + 5) << 12);
      if ( (a3->Value & 0x100) == 0 && (((*((_QWORD *)a5 + 5) << 12) - 1LL) & v12) != 0 )
        return 0;
      v14 = ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)(v13 + 40256));
      if ( v14 )
        goto LABEL_3;
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 6122;
    }
    if ( v11 )
      goto LABEL_3;
    return 0;
  }
  v28 = 1;
LABEL_3:
  v18 = (__int64 *)((char *)this + 40);
  v19 = a6;
  if ( (*(_BYTE *)(*((_QWORD *)this + 5) + 16LL * a6) & 1) != 0 )
  {
    VIDMM_PAGE_DIRECTORY::DestroyPdePageTableData(this, a2, a6);
    v19 = a6;
    *a10 = 1;
    *a11 = 1;
  }
  v20 = (_QWORD *)((char *)this + 40);
  if ( a7 == a6 || (*(_BYTE *)(*v18 + 16LL * a7) & 1) == 0 )
  {
    v21 = a10;
  }
  else
  {
    VIDMM_PAGE_DIRECTORY::DestroyPdePageTableData(this, a2, a7);
    v21 = a10;
    v20 = (_QWORD *)((char *)this + 40);
    v19 = a6;
    *a10 = 1;
    *a11 = 1;
  }
  if ( !v28 )
  {
    v25 = *v18;
    *v21 = 1;
    *(_QWORD *)(v25 + 16LL * a6) |= 1uLL;
    ++*((_DWORD *)this + 1);
    v26 = *v18;
    if ( v11 )
    {
      *(_QWORD *)(v26 + 16LL * a6) |= 2uLL;
    }
    else
    {
      *(_QWORD *)(v26 + 16LL * a6) |= 0x400uLL;
      *(_QWORD *)(*v20 + 16LL * a6 + 8) = v12 >> 12;
      *(_QWORD *)(*v20 + 16LL * a6) = (32LL * *((unsigned int *)a4 + 18)) ^ (*(_QWORD *)(*v20 + 16LL * a6) ^ (32LL * *((unsigned int *)a4 + 18))) & 0xFFFFFFFFFFFFFC1FuLL;
      *(_QWORD *)(*v20 + 16LL * a6) = *(_QWORD *)a4 ^ (*(_QWORD *)(*v20 + 16LL * a6) ^ *(_QWORD *)a4) & 0xFFFFFFFFFFFFFFF7uLL;
      *(_QWORD *)(*v20 + 16LL * a6) = *(_QWORD *)a4 ^ (*(_QWORD *)(*v20 + 16LL * a6) ^ *(_QWORD *)a4) & 0xFFFFFFFFFFFFFFEFuLL;
      *(_QWORD *)(*v20 + 16LL * a6) = *(_QWORD *)a4 ^ (*(_QWORD *)(*v20 + 16LL * a6) ^ *(_QWORD *)a4) & 0xFFFFFFFFFFFFFFFBuLL;
      *(_QWORD *)(*v20 + 16LL * a6) = *(_QWORD *)a4 ^ (*(_QWORD *)(*v20 + 16LL * a6) ^ *(_QWORD *)a4) & 0xFFFFFFFFFFFE07FFuLL;
      v14[2] = *((_DWORD *)a4 + 14);
      *(_QWORD *)v14 = *((_QWORD *)a4 + 6);
      *((_QWORD *)v14 + 2) = *((_QWORD *)a4 + 2);
      *((_QWORD *)v14 + 3) = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v19);
      *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v19) = v14;
    }
  }
  return 1;
}
