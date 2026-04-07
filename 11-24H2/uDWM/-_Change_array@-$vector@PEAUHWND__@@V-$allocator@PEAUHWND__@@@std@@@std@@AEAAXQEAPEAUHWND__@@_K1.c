/*
 * XREFs of ?_Change_array@?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@AEAAXQEAPEAUHWND__@@_K1@Z @ 0x180097BFC
 * Callers:
 *     ??$_Emplace_reallocate@AEBQEAVCWindowData@@@?$vector@PEAVCWindowData@@V?$allocator@PEAVCWindowData@@@std@@@std@@AEAAPEAPEAVCWindowData@@QEAPEAV2@AEBQEAV2@@Z @ 0x18004D430 (--$_Emplace_reallocate@AEBQEAVCWindowData@@@-$vector@PEAVCWindowData@@V-$allocator@PEAVCWindowDa.c)
 *     ??$_Emplace_reallocate@AEBQEBVCDWMDisplay@@@?$vector@PEBVCDWMDisplay@@V?$allocator@PEBVCDWMDisplay@@@std@@@std@@AEAAPEAPEBVCDWMDisplay@@QEAPEBV2@AEBQEBV2@@Z @ 0x18004D698 (--$_Emplace_reallocate@AEBQEBVCDWMDisplay@@@-$vector@PEBVCDWMDisplay@@V-$allocator@PEBVCDWMDispl.c)
 *     ??$_Emplace_reallocate@AEBQEAVCVisualProxy@@@?$vector@PEAVCVisualProxy@@V?$allocator@PEAVCVisualProxy@@@std@@@std@@AEAAPEAPEAVCVisualProxy@@QEAPEAV2@AEBQEAV2@@Z @ 0x1800ABDC8 (--$_Emplace_reallocate@AEBQEAVCVisualProxy@@@-$vector@PEAVCVisualProxy@@V-$allocator@PEAVCVisual.c)
 *     ??$_Reallocate@$0A@@?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@AEAAXAEA_K@Z @ 0x1800ED450 (--$_Reallocate@$0A@@-$vector@PEAUHWND__@@V-$allocator@PEAUHWND__@@@std@@@std@@AEAAXAEA_K@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800398F4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<HWND__ *>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(
      v6,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF8uLL));
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 8 * a3;
  result = a2 + 8 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
