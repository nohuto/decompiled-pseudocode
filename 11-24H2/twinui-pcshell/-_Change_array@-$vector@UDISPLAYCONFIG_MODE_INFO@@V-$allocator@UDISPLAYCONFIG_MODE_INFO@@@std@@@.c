/*
 * XREFs of ?_Change_array@?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@AEAAXQEAUDISPLAYCONFIG_MODE_INFO@@_K1@Z @ 0x1805BE560
 * Callers:
 *     ??$_Emplace_reallocate@AEBUDISPLAYCONFIG_MODE_INFO@@@?$vector@UDISPLAYCONFIG_MODE_INFO@@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@AEAAPEAUDISPLAYCONFIG_MODE_INFO@@QEAU2@AEBU2@@Z @ 0x1805BD068 (--$_Emplace_reallocate@AEBUDISPLAYCONFIG_MODE_INFO@@@-$vector@UDISPLAYCONFIG_MODE_INFO@@V-$alloc.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<DISPLAYCONFIG_MODE_INFO>::_Change_array(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rcx

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(
      v6,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v6) & 0xFFFFFFFFFFFFFFC0uLL));
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + (a3 << 6);
  *(_QWORD *)(a1 + 16) = a2 + (a4 << 6);
}
