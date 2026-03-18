/*
 * XREFs of ??0OverlayPlaneInfo@COverlayContext@@QEAA@$$QEAV01@@Z @ 0x1800F15C4
 * Callers:
 *     ??$emplace_back@VOverlayPlaneInfo@COverlayContext@@@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXVOverlayPlaneInfo@COverlayContext@@@Z @ 0x1800F0E98 (--$emplace_back@VOverlayPlaneInfo@COverlayContext@@@-$vector_facade@VOverlayPlaneInfo@COverlayCo.c)
 *     ??$swap@$0BA@@?$expandable_buffer_base@VOverlayPlaneInfo@COverlayContext@@$0BA@@detail@@QEAA_NAEAV01@@Z @ 0x1800F0F38 (--$swap@$0BA@@-$expandable_buffer_base@VOverlayPlaneInfo@COverlayContext@@$0BA@@detail@@QEAA_NAE.c)
 *     ??$_Swap_ranges_unchecked@V?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@V12@@std@@YA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@V12@V12@0@Z @ 0x1800F1080 (--$_Swap_ranges_unchecked@V-$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@V12@@std.c)
 *     ??$emplace@VOverlayPlaneInfo@COverlayContext@@@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@1@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@1@VOverlayPlaneInfo@COverlayContext@@@Z @ 0x1800F1128 (--$emplace@VOverlayPlaneInfo@COverlayContext@@@-$vector_facade@VOverlayPlaneInfo@COverlayContext.c)
 *     ?swap@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEAV12@@Z @ 0x1800F1194 (-swap@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COverl.c)
 *     ??$swap_generic@V?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAXAEAV01@@Z @ 0x1800F1304 (--$swap_generic@V-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlane.c)
 *     ??$move@V?$move_iterator@V?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@V?$back_insert_iterator_unchecked@V?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@detail@@@std@@YA?AV?$back_insert_iterator_unchecked@V?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@detail@@V?$move_iterator@V?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@0@0V12@@Z @ 0x1800F14C4 (--$move@V-$move_iterator@V-$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@V-$.c)
 *     ??$assign@V?$move_iterator@V?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@X@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXV?$move_iterator@V?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@0@Z @ 0x1800F1548 (--$assign@V-$move_iterator@V-$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@detail@@@std@@X.c)
 *     ?reserve_region@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVOverlayPlaneInfo@COverlayContext@@_K0@Z @ 0x1800F17B8 (-reserve_region@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneI.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@std@@V?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@stdext@@V?$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@0@0V12@@Z @ 0x18024A274 (--$uninitialized_move@V-$move_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@std@@V-$checked_ar.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  v2 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a1 + 16) = v2;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
  *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
  *(_OWORD *)(a1 + 112) = *(_OWORD *)(a2 + 112);
  *(_OWORD *)(a1 + 128) = *(_OWORD *)(a2 + 128);
  *(_OWORD *)(a1 + 144) = *(_OWORD *)(a2 + 144);
  *(_OWORD *)(a1 + 160) = *(_OWORD *)(a2 + 160);
  *(_OWORD *)(a1 + 176) = *(_OWORD *)(a2 + 176);
  *(_OWORD *)(a1 + 192) = *(_OWORD *)(a2 + 192);
  *(_OWORD *)(a1 + 208) = *(_OWORD *)(a2 + 208);
  *(_DWORD *)(a1 + 224) = *(_DWORD *)(a2 + 224);
  *(_OWORD *)(a1 + 228) = *(_OWORD *)(a2 + 228);
  *(_OWORD *)(a1 + 244) = *(_OWORD *)(a2 + 244);
  *(_OWORD *)(a1 + 260) = *(_OWORD *)(a2 + 260);
  *(_DWORD *)(a1 + 276) = *(_DWORD *)(a2 + 276);
  *(_OWORD *)(a1 + 280) = *(_OWORD *)(a2 + 280);
  *(_OWORD *)(a1 + 296) = *(_OWORD *)(a2 + 296);
  *(_OWORD *)(a1 + 312) = *(_OWORD *)(a2 + 312);
  *(_OWORD *)(a1 + 328) = *(_OWORD *)(a2 + 328);
  *(_DWORD *)(a1 + 344) = *(_DWORD *)(a2 + 344);
  *(_QWORD *)(a1 + 352) = *(_QWORD *)(a2 + 352);
  *(_DWORD *)(a1 + 360) = *(_DWORD *)(a2 + 360);
  *(_BYTE *)(a1 + 364) = *(_BYTE *)(a2 + 364);
  *(_BYTE *)(a1 + 365) = *(_BYTE *)(a2 + 365);
  *(_BYTE *)(a1 + 366) = *(_BYTE *)(a2 + 366);
  *(_BYTE *)(a1 + 367) = *(_BYTE *)(a2 + 367);
  *(_BYTE *)(a1 + 368) = *(_BYTE *)(a2 + 368);
  *(_BYTE *)(a1 + 369) = *(_BYTE *)(a2 + 369);
  *(_BYTE *)(a1 + 370) = *(_BYTE *)(a2 + 370);
  *(_BYTE *)(a1 + 371) = *(_BYTE *)(a2 + 371);
  *(_DWORD *)(a1 + 372) = *(_DWORD *)(a2 + 372);
  *(_DWORD *)(a1 + 376) = *(_DWORD *)(a2 + 376);
  *(_DWORD *)(a1 + 380) = *(_DWORD *)(a2 + 380);
  *(_DWORD *)(a1 + 384) = *(_DWORD *)(a2 + 384);
  *(_DWORD *)(a1 + 388) = *(_DWORD *)(a2 + 388);
  return a1;
}
