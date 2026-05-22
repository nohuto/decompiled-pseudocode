/*
 * XREFs of ?_Change_array@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXQEAUColor@UI@Windows@@_K1@Z @ 0x180073B44
 * Callers:
 *     ??$_Emplace_reallocate@AEBUColor@UI@Windows@@@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAPEAUColor@UI@Windows@@QEAU234@AEBU234@@Z @ 0x180073A3C (--$_Emplace_reallocate@AEBUColor@UI@Windows@@@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI.c)
 *     ??$_Reallocate@$00@?$vector@KV?$allocator@K@std@@@std@@AEAAXAEA_K@Z @ 0x18008B89C (--$_Reallocate@$00@-$vector@KV-$allocator@K@std@@@std@@AEAAXAEA_K@Z.c)
 *     ??$_Emplace_reallocate@K@?$vector@KV?$allocator@K@std@@@std@@AEAAPEAKQEAK$$QEAK@Z @ 0x1800CC610 (--$_Emplace_reallocate@K@-$vector@KV-$allocator@K@std@@@std@@AEAAPEAKQEAK$$QEAK@Z.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800E48D0 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<Windows::UI::Color>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *v6; // rcx
  __int64 result; // rax

  v6 = *(char **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(
      v6,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFFCuLL));
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 4 * a3;
  result = a2 + 4 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
