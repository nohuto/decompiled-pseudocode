/*
 * XREFs of ?DestroyDisconnectedPageTables@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@II_K1PEAUVIDMM_ALLOC@@@Z @ 0x1400B84C8
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400D03C0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1400B84A0 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1400B9124 (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 */

void __fastcall VIDMM_PAGE_DIRECTORY::DestroyDisconnectedPageTables(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        struct VIDMM_ALLOC *a7)
{
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // r15
  __int64 v13; // rcx
  __int64 v14; // rax
  struct VIDMM_ALLOC **v15; // rcx
  VIDMM_PAGE_DIRECTORY *v16; // rcx
  __int64 v17; // rcx
  VIDMM_PAGE_TABLE *v18; // rcx

  if ( a3 < a4 )
  {
    v10 = 8LL * a3;
    v11 = 16LL * a3;
    v12 = a4 - a3;
    while ( 1 )
    {
      v13 = *((_QWORD *)this + 5);
      if ( (*(_DWORD *)this & 0x20) == 0 )
        break;
      v14 = *(_QWORD *)(v11 + v13);
      if ( (v14 & 0x400) != 0 )
      {
        v17 = *(_QWORD *)(v10 + *((_QWORD *)this + 6));
        if ( v17 )
        {
          v18 = *(VIDMM_PAGE_TABLE **)(v17 + 24);
          if ( v18 )
          {
            VIDMM_PAGE_TABLE::DestroyPageTable(v18, a2, a5);
            *(_QWORD *)(*(_QWORD *)(v10 + *((_QWORD *)this + 6)) + 24LL) = 0LL;
          }
        }
        goto LABEL_7;
      }
      if ( (v14 & 3) != 1 )
      {
        v15 = *(struct VIDMM_ALLOC ***)(v10 + *((_QWORD *)this + 6));
        if ( v15 )
        {
          if ( v15[3] != a7 && (*(_DWORD *)v15 & 0x40000) == 0 )
          {
            VIDMM_PAGE_TABLE::DestroyPageTable((VIDMM_PAGE_TABLE *)v15, a2, a5);
LABEL_12:
            *(_QWORD *)(v10 + *((_QWORD *)this + 6)) = 0LL;
          }
        }
      }
LABEL_7:
      a5 += a6;
      v11 += 16LL;
      v10 += 8LL;
      if ( !--v12 )
        return;
    }
    if ( (*(_BYTE *)(v11 + v13) & 3) == 1 )
      goto LABEL_7;
    v16 = *(VIDMM_PAGE_DIRECTORY **)(v10 + *((_QWORD *)this + 6));
    if ( !v16 )
      goto LABEL_7;
    VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(v16, (PRKPROCESS **)a2, a5);
    goto LABEL_12;
  }
}
