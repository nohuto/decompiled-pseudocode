/*
 * XREFs of ?_Change_array@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAXQEAUtagRECT@@_K1@Z @ 0x1800C0B98
 * Callers:
 *     ??$_Emplace_reallocate@AEBUtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAPEAUtagRECT@@QEAU2@AEBU2@@Z @ 0x1800C00EC (--$_Emplace_reallocate@AEBUtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAP.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800398F4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<tagRECT>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(
      v6,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF0uLL));
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 16 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 16 * a4;
}
