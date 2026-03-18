/*
 * XREFs of VidSchSetPagingNodePageDirectory @ 0x140104BCC
 * Callers:
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x140104104 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 * Callees:
 *     ?DdiSetRootPageTable@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_SETROOTPAGETABLE@@@Z @ 0x140043478 (-DdiSetRootPageTable@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_SETROOTPAGETABLE@@@Z.c)
 *     ?VidMmRecordVaPagingHistorySetPageDirectory@@YAXPEAVVIDMM_GLOBAL@@PEBVVIDMM_PROCESS@@PEBU_DXGKARG_SETROOTPAGETABLE@@PEBX@Z @ 0x140043F04 (-VidMmRecordVaPagingHistorySetPageDirectory@@YAXPEAVVIDMM_GLOBAL@@PEBVVIDMM_PROCESS@@PEBU_DXGKAR.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     VidSchiSetPagingHwContextPageDirectory @ 0x140090950 (VidSchiSetPagingHwContextPageDirectory.c)
 */

void __fastcall VidSchSetPagingNodePageDirectory(_QWORD *a1, unsigned int a2, UINT a3, UINT a4, UINT64 a5)
{
  __int64 v6; // rdi
  __int64 v9; // rax
  char i; // bp
  __int64 v11; // rsi
  ADAPTER_RENDER *v12; // rcx
  struct _DXGKARG_SETROOTPAGETABLE v13; // [rsp+30h] [rbp-68h] BYREF

  v6 = a2;
  if ( *(_QWORD *)(a1[41] + 8LL * a2) )
  {
    VidSchiSetPagingHwContextPageDirectory((__int64)a1, a2, a3, a4, a5);
  }
  else
  {
    v9 = a1[40];
    for ( i = 0; ; i = 1 )
    {
      v11 = *(_QWORD *)(v9 + 8 * v6);
      *(&v13.Address.SegmentId + 1) = 0;
      *(&v13.NumEntries + 1) = 0;
      v12 = (ADAPTER_RENDER *)a1[1];
      v13.hContext = *(HANDLE *)(v11 + 64);
      v13.Address.SegmentId = a4;
      v13.Address.SegmentOffset = a5;
      v13.NumEntries = a3;
      ADAPTER_RENDER::DdiSetRootPageTable(v12, &v13);
      *(_QWORD *)(v11 + 824) = v13.Address.SegmentOffset;
      VidMmRecordVaPagingHistorySetPageDirectory(*(struct VIDMM_GLOBAL **)(a1[1] + 768LL), 0LL, &v13, (const void *)v11);
      if ( i || (*(_BYTE *)(*(_QWORD *)(a1[2] + 2992LL) + 344 * v6 + 16) & 0xC) != 0xC )
        break;
      v9 = a1[43];
    }
  }
}
