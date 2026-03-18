/*
 * XREFs of ?RecordVaPagingHistoryBitplane@VIDMM_GLOBAL@@QEAAXPEAU_DXGKARG_BUILDPAGINGBUFFER@@PEAVVIDMM_DIRTY_BITPLANE@@W4_DXGK_GPUP_MIGRATIONTYPE@@@Z @ 0x14009B3DC
 * Callers:
 *     ?TransferTransportBufferSystemCommand@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_TRANSPORT_BUFFER@@PEAVVIDMM_DIRTY_BITPLANE@@W4_DXGK_GPUP_MIGRATIONTYPE@@PEA_K@Z @ 0x140096274 (-TransferTransportBufferSystemCommand@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_TRANSPORT_BUFFER@@PEAVVIDMM_D.c)
 * Callees:
 *     ??2@YAPEAX_KPEAVDXGK_LOG@@II@Z @ 0x140033150 (--2@YAPEAX_KPEAVDXGK_LOG@@II@Z.c)
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x140034220 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ @ 0x140034280 (-Release@DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAAXXZ.c)
 *     ?AllocateVaPagingHistoryEntry@VIDMM_GLOBAL@@QEAAPEAXW4VIDMM_PAGING_HISTORY_ENTRY_TYPE@@_K@Z @ 0x140111560 (-AllocateVaPagingHistoryEntry@VIDMM_GLOBAL@@QEAAPEAXW4VIDMM_PAGING_HISTORY_ENTRY_TYPE@@_K@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryBitplane(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _OWORD *VaPagingHistoryEntry; // rax
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled || *(_QWORD *)(a1 + 40992) )
  {
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
      (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v9,
      (struct DXGPUSHLOCKFAST *)(a1 + 41008),
      1);
    if ( VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled )
      VaPagingHistoryEntry = operator new(88, (struct DXGK_LOG *)(a1 + 41032), 0x15u, 0);
    else
      VaPagingHistoryEntry = (_OWORD *)VIDMM_GLOBAL::AllocateVaPagingHistoryEntry(a1, 21LL, 88LL);
    if ( VaPagingHistoryEntry )
    {
      *VaPagingHistoryEntry = *(_OWORD *)(a2 + 40);
      VaPagingHistoryEntry[1] = *(_OWORD *)(a2 + 56);
      VaPagingHistoryEntry[2] = *(_OWORD *)(a2 + 72);
      VaPagingHistoryEntry[3] = *(_OWORD *)(a2 + 88);
      *((_QWORD *)VaPagingHistoryEntry + 8) = *(_QWORD *)(a3 + 56);
      *((_QWORD *)VaPagingHistoryEntry + 9) = *(_QWORD *)(a3 + 64);
      *((_DWORD *)VaPagingHistoryEntry + 20) = a4;
    }
    DXGAUTOPUSHLOCKFASTEXCLUSIVE::Release((DXGAUTOPUSHLOCKFASTEXCLUSIVE *)v9);
  }
}
