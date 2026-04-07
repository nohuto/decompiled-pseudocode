/*
 * XREFs of ??$_Uninitialized_move@PEAPEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@YAPEAPEBVCDWMDisplay@@QEAPEBV1@0PEAPEBV1@AEAV?$allocator@PEBVCDWMDisplay@@@0@@Z @ 0x180096650
 * Callers:
 *     ??$_Emplace_reallocate@AEBQEAVCWindowData@@@?$vector@PEAVCWindowData@@V?$allocator@PEAVCWindowData@@@std@@@std@@AEAAPEAPEAVCWindowData@@QEAPEAV2@AEBQEAV2@@Z @ 0x18004D430 (--$_Emplace_reallocate@AEBQEAVCWindowData@@@-$vector@PEAVCWindowData@@V-$allocator@PEAVCWindowDa.c)
 *     ??$_Emplace_reallocate@AEBQEBVCDWMDisplay@@@?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@AEAAPEAPEBVCDWMDisplay@@QEAPEBV2@AEBQEBV2@@Z @ 0x18004D698 (--$_Emplace_reallocate@AEBQEBVCDWMDisplay@@@-$vector@PEBVCDWMDisplay@@V-$allocator@PEBVCDWMDispl.c)
 *     ??$_Emplace_reallocate@AEBQEAVCVisualProxy@@@?$vector@PEAVCVisualProxy@@V?$allocator@PEAVCVisualProxy@@@std@@@std@@AEAAPEAPEAVCVisualProxy@@QEAPEAV2@AEBQEAV2@@Z @ 0x1800ABDC8 (--$_Emplace_reallocate@AEBQEAVCVisualProxy@@@-$vector@PEAVCVisualProxy@@V-$allocator@PEAVCVisual.c)
 *     ??$_Reallocate@$0A@@?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@AEAAXAEA_K@Z @ 0x1800ED450 (--$_Reallocate@$0A@@-$vector@PEAUHWND__@@V-$allocator@PEAUHWND__@@@std@@@std@@AEAAXAEA_K@Z.c)
 * Callees:
 *     ??$_Copy_memmove@PEAUtagRECT@@PEAU1@@std@@YAPEAUtagRECT@@PEAU1@00@Z @ 0x180096690 (--$_Copy_memmove@PEAUtagRECT@@PEAU1@@std@@YAPEAUtagRECT@@PEAU1@00@Z.c)
 */

__int64 __fastcall std::_Uninitialized_move<CDWMDisplay const * *>(void *a1, __int64 a2, __int64 a3)
{
  std::_Copy_memmove<tagRECT *,tagRECT *>(a1);
  return a3 + 8 * ((a2 - (__int64)a1) >> 3);
}
