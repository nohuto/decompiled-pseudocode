/*
 * XREFs of VidSchiSetPagingHwContextPageDirectory @ 0x140090948
 * Callers:
 *     VidSchSetPagingNodePageDirectory @ 0x1400F7EB4 (VidSchSetPagingNodePageDirectory.c)
 * Callees:
 *     ?DdiSetRootPageTable@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_SETROOTPAGETABLE@@@Z @ 0x140041E68 (-DdiSetRootPageTable@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_SETROOTPAGETABLE@@@Z.c)
 *     ?VidMmRecordVaPagingHistorySetPageDirectory@@YAXPEAVVIDMM_GLOBAL@@PEBVVIDMM_PROCESS@@PEBU_DXGKARG_SETROOTPAGETABLE@@PEBX@Z @ 0x140042B68 (-VidMmRecordVaPagingHistorySetPageDirectory@@YAXPEAVVIDMM_GLOBAL@@PEBVVIDMM_PROCESS@@PEBU_DXGKAR.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 */

void __fastcall VidSchiSetPagingHwContextPageDirectory(__int64 a1, unsigned int a2, UINT a3, UINT a4, UINT64 a5)
{
  __int64 v6; // rbx
  ADAPTER_RENDER *v7; // rcx
  struct _DXGKARG_SETROOTPAGETABLE v8; // [rsp+20h] [rbp-48h] BYREF

  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 328) + 8LL * a2);
  if ( (*(_DWORD *)(*(_QWORD *)(v6 + 16) + 12LL) & 0x10) != 0 )
  {
    *(&v8.Address.SegmentId + 1) = 0;
    *(&v8.NumEntries + 1) = 0;
    v7 = *(ADAPTER_RENDER **)(a1 + 8);
    v8.hContext = *(HANDLE *)(v6 + 48);
    v8.Address.SegmentOffset = a5;
    v8.Address.SegmentId = a4;
    v8.NumEntries = a3;
    ADAPTER_RENDER::DdiSetRootPageTable(v7, &v8);
    *(_QWORD *)(v6 + 336) = v8.Address.SegmentOffset;
    VidMmRecordVaPagingHistorySetPageDirectory(
      *(struct VIDMM_GLOBAL **)(*(_QWORD *)(a1 + 8) + 768LL),
      0LL,
      &v8,
      (const void *)v6);
  }
}
