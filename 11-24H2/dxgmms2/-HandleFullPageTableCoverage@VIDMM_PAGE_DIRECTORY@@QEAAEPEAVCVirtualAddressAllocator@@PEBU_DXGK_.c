/*
 * XREFs of ?HandleFullPageTableCoverage@VIDMM_PAGE_DIRECTORY@@QEAAEPEAVCVirtualAddressAllocator@@PEBU_DXGK_GPUMMUCAPS@@PEBUCOMMIT_VA_STATE@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@III_KPEAE5@Z @ 0x1401145EC
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400F28C0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     ?DestroyPdePageTableData@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I_K@Z @ 0x1400FB810 (-DestroyPdePageTableData@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I_K@Z.c)
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
  __int64 v12; // r9
  unsigned __int64 v13; // rbx
  char v15; // bp
  _DWORD *v16; // r15
  __int64 v18; // rax
  __int64 v19; // rax
  struct CVirtualAddressAllocator *v20; // [rsp+58h] [rbp+10h]
  char v21; // [rsp+88h] [rbp+40h]

  v20 = a2;
  v12 = *((_QWORD *)a2 + 11);
  v13 = -1LL;
  v21 = 0;
  v15 = 0;
  v16 = 0LL;
  if ( (*(_QWORD *)a4 & 1) != 0 )
  {
    if ( (*(_QWORD *)a4 & 2) != 0 )
    {
      v21 = 0;
      v15 = *(_BYTE *)(v12 + 40937) & 1;
      if ( v15 )
        goto LABEL_14;
    }
    else if ( (*(_DWORD *)this & 0x20) != 0 )
    {
      if ( *((_BYTE *)a4 + 79) )
      {
        if ( !*((_QWORD *)a4 + 11) )
        {
          v13 = a9 + *((_QWORD *)a4 + 3) + (*((_QWORD *)a4 + 5) << 12);
          if ( (a3->Value & 0x100) != 0 || (((*((_QWORD *)a5 + 5) << 12) - 1LL) & v13) == 0 )
          {
            v16 = ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)(v12 + 40256));
            if ( v16 )
            {
              a2 = v20;
              goto LABEL_14;
            }
            WdLogSingleEntry0(3LL);
            WdLogGlobalForLineNumber = 6699;
          }
        }
      }
    }
    return 0;
  }
  v21 = 1;
LABEL_14:
  if ( (*(_BYTE *)(*((_QWORD *)this + 5) + 16LL * a6) & 1) != 0 )
  {
    VIDMM_PAGE_DIRECTORY::DestroyPdePageTableData(this, a2, a6);
    *a10 = 1;
    *a11 = 1;
  }
  if ( a7 != a6 && (*(_BYTE *)(*((_QWORD *)this + 5) + 16LL * a7) & 1) != 0 )
  {
    VIDMM_PAGE_DIRECTORY::DestroyPdePageTableData(this, v20, a7);
    *a10 = 1;
    *a11 = 1;
  }
  if ( !v21 )
  {
    v18 = *((_QWORD *)this + 5);
    *a10 = 1;
    *(_QWORD *)(v18 + 16LL * a6) |= 1uLL;
    ++*((_DWORD *)this + 1);
    v19 = *((_QWORD *)this + 5);
    if ( v15 )
    {
      *(_QWORD *)(v19 + 16LL * a6) |= 2uLL;
    }
    else
    {
      *(_QWORD *)(v19 + 16LL * a6) |= 0x400uLL;
      *(_QWORD *)(*((_QWORD *)this + 5) + 16LL * a6 + 8) = v13 >> 12;
      *(_QWORD *)(*((_QWORD *)this + 5) + 16LL * a6) = (32LL * *((unsigned int *)a4 + 18)) ^ (*(_QWORD *)(*((_QWORD *)this + 5) + 16LL * a6) ^ (32LL * *((unsigned int *)a4 + 18))) & 0xFFFFFFFFFFFFFC1FuLL;
      *(_QWORD *)(*((_QWORD *)this + 5) + 16LL * a6) = *(_QWORD *)a4 ^ (*(_QWORD *)(*((_QWORD *)this + 5) + 16LL * a6) ^ *(_QWORD *)a4) & 0xFFFFFFFFFFFFFFF7uLL;
      *(_QWORD *)(*((_QWORD *)this + 5) + 16LL * a6) = *(_QWORD *)a4 ^ (*(_QWORD *)(*((_QWORD *)this + 5) + 16LL * a6) ^ *(_QWORD *)a4) & 0xFFFFFFFFFFFFFFEFuLL;
      *(_QWORD *)(*((_QWORD *)this + 5) + 16LL * a6) = *(_QWORD *)a4 ^ (*(_QWORD *)(*((_QWORD *)this + 5) + 16LL * a6) ^ *(_QWORD *)a4) & 0xFFFFFFFFFFFFFFFBuLL;
      *(_QWORD *)(*((_QWORD *)this + 5) + 16LL * a6) = *(_QWORD *)a4 ^ (*(_QWORD *)(*((_QWORD *)this + 5) + 16LL * a6) ^ *(_QWORD *)a4) & 0xFFFFFFFFFFFE07FFuLL;
      v16[2] = *((_DWORD *)a4 + 14);
      *(_QWORD *)v16 = *((_QWORD *)a4 + 6);
      *((_QWORD *)v16 + 2) = *((_QWORD *)a4 + 2);
      *((_QWORD *)v16 + 3) = *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * a6);
      *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * a6) = v16;
    }
  }
  return 1;
}
