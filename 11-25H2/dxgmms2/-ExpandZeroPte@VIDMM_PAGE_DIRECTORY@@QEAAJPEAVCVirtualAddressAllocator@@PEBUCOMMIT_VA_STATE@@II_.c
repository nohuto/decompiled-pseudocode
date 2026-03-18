/*
 * XREFs of ?ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K222PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CF2F8
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400D03C0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     memset @ 0x140056780 (memset.c)
 *     ?SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z @ 0x1400CF5A8 (-SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CF680 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400D03C0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z @ 0x1400E7850 (-CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::ExpandZeroPte(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2,
        const struct COMMIT_VA_STATE *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        unsigned __int64 a9,
        struct VIDMM_ALLOC **a10)
{
  __int64 v12; // r12
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rdi
  char v17; // al
  __int64 v18; // rcx
  int v19; // r14d
  unsigned __int64 v21; // [rsp+20h] [rbp-A1h]
  unsigned __int64 v22; // [rsp+20h] [rbp-A1h]
  unsigned __int64 v23; // [rsp+28h] [rbp-99h]
  unsigned __int64 v24; // [rsp+28h] [rbp-99h]
  _QWORD v25[12]; // [rsp+50h] [rbp-71h] BYREF

  v12 = a4;
  v14 = *((_QWORD *)this + 6);
  v15 = a4;
  if ( (*(_BYTE *)(*((_QWORD *)this + 5) + 16LL * a4) & 2) == 0 )
    v15 = a5;
  v16 = (unsigned int)v15;
  if ( !*(_QWORD *)(v14 + 8 * v15) )
  {
    *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * (unsigned int)v15) = CreatePageTable(
                                                                     a2,
                                                                     (*(_DWORD *)this >> 7) & 0x1F,
                                                                     (unsigned int)v15 > a4,
                                                                     0);
    v14 = *((_QWORD *)this + 6);
    if ( !*(_QWORD *)(v14 + 8 * v16) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 6308;
      DxgkLogInternalTriageEvent(0LL, 0x40000LL);
      return 3221225495LL;
    }
  }
  memset(v25, 0, sizeof(v25));
  v17 = *((_BYTE *)a3 + 77);
  v25[0] |= 3uLL;
  BYTE5(v25[9]) = v17;
  BYTE4(v25[9]) = *((_BYTE *)a3 + 76);
  LODWORD(v25[7]) = 6;
  LODWORD(v25[9]) = -2;
  if ( a8 < a6 )
  {
    v24 = a6 - a8;
    v22 = a8 << 12;
    if ( (*(_DWORD *)this & 0x20) != 0 )
    {
      v19 = VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
              *(VIDMM_PAGE_TABLE **)(v14 + 8 * v16),
              a2,
              (const struct COMMIT_VA_STATE *)v25,
              0LL,
              v22,
              v24,
              0LL,
              0,
              a10);
      if ( v19 < 0 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 6335;
        return (unsigned int)v19;
      }
    }
    else
    {
      v19 = VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
              *(VIDMM_PAGE_DIRECTORY **)(v14 + 8 * v12),
              a2,
              (const struct COMMIT_VA_STATE *)v25,
              0LL,
              v22,
              v24,
              0LL,
              0,
              a10);
      if ( v19 < 0 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 6352;
        return (unsigned int)v19;
      }
    }
  }
  if ( a7 >= a9 )
  {
LABEL_8:
    *(_QWORD *)(*((_QWORD *)this + 5) + 16 * v16) &= ~2uLL;
    VIDMM_PAGE_DIRECTORY::SetPageTableInPde(this, a2, v16);
    return 0LL;
  }
  v18 = *((_QWORD *)this + 6);
  v23 = a9 - a7;
  v21 = a7 << 12;
  if ( (*(_DWORD *)this & 0x20) != 0 )
  {
    v19 = VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
            *(VIDMM_PAGE_TABLE **)(v18 + 8 * v16),
            a2,
            (const struct COMMIT_VA_STATE *)v25,
            0LL,
            v21,
            v23,
            0LL,
            0,
            a10);
    if ( v19 >= 0 )
      goto LABEL_8;
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 6372;
  }
  else
  {
    v19 = VIDMM_PAGE_DIRECTORY::CommitVirtualAddressRange(
            *(VIDMM_PAGE_DIRECTORY **)(v18 + 8 * v12),
            a2,
            (const struct COMMIT_VA_STATE *)v25,
            0LL,
            v21,
            v23,
            0LL,
            0,
            a10);
    if ( v19 >= 0 )
      goto LABEL_8;
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 6389;
  }
  return (unsigned int)v19;
}
