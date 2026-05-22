/*
 * XREFs of ?_Unchecked_erase@?$list@U?$pair@$$CB_K_K@std@@V?$allocator@U?$pair@$$CB_K_K@std@@@2@@std@@AEAAPEAU?$_List_node@U?$pair@$$CB_K_K@std@@PEAX@2@QEAU32@@Z @ 0x180074DCC
 * Callers:
 *     ?OnCursorDestroyed@SystemCursorService2@@UEAAJUCursorId@@UCursorDestroyData@@@Z @ 0x1800FA5D0 (-OnCursorDestroyed@SystemCursorService2@@UEAAJUCursorId@@UCursorDestroyData@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::list<std::pair<unsigned __int64 const,unsigned __int64>>::_Unchecked_erase(
        __int64 a1,
        char *a2)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)a2;
  --*(_QWORD *)(a1 + 8);
  **((_QWORD **)a2 + 1) = v2;
  *(_QWORD *)(v2 + 8) = *((_QWORD *)a2 + 1);
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)0x20);
  return v2;
}
