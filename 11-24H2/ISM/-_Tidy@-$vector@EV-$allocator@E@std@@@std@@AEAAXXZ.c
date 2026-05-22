/*
 * XREFs of ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x1800EC180
 * Callers:
 *     ?SetShapeForInputType@DesktopSystemCursorService@@UEAAJW4InputType@@PEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@@Z @ 0x180077720 (-SetShapeForInputType@DesktopSystemCursorService@@UEAAJW4InputType@@PEBU_MIT_CURSOR_MANAGEMENT_M.c)
 *     ??1?$_Tidy_guard@V?$vector@EV?$allocator@E@std@@@std@@@std@@QEAA@XZ @ 0x1800E99B0 (--1-$_Tidy_guard@V-$vector@EV-$allocator@E@std@@@std@@@std@@QEAA@XZ.c)
 *     ??1?$vector@EV?$allocator@E@std@@@std@@QEAA@XZ @ 0x1800E99F0 (--1-$vector@EV-$allocator@E@std@@@std@@QEAA@XZ.c)
 *     ?ValidateReportParsers@HidLampArrayDevice@@AEAAJXZ @ 0x1800EB5A4 (-ValidateReportParsers@HidLampArrayDevice@@AEAAJXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<unsigned char>::_Tidy(__int64 a1)
{
  char *v2; // rcx

  v2 = *(char **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)(*(_QWORD *)(a1 + 16) - (_QWORD)v2));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
