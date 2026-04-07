/*
 * XREFs of ?_Change_array@?$vector@U_DWMCaptureWindowInformation@@V?$allocator@U_DWMCaptureWindowInformation@@@std@@@std@@AEAAXQEAU_DWMCaptureWindowInformation@@_K1@Z @ 0x1800B358C
 * Callers:
 *     ??$_Emplace_reallocate@AEBU_DWMCaptureWindowInformation@@@?$vector@U_DWMCaptureWindowInformation@@V?$allocator@U_DWMCaptureWindowInformation@@@std@@@std@@AEAAPEAU_DWMCaptureWindowInformation@@QEAU2@AEBU2@@Z @ 0x1800ABEC8 (--$_Emplace_reallocate@AEBU_DWMCaptureWindowInformation@@@-$vector@U_DWMCaptureWindowInformation.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800398F4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<_DWMCaptureWindowInformation>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(
      v6,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFE0uLL));
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 32 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 32 * a4;
}
