/*
 * XREFs of ??$_Construct_from_weak@VSystemCursorService2@@@?$_Ptr_base@VSystemCursorService2@@@std@@IEAA_NAEBV?$weak_ptr@VSystemCursorService2@@@1@@Z @ 0x180058324
 * Callers:
 *     ?lock@?$weak_ptr@VSystemCursorService2@@@std@@QEBA?AV?$shared_ptr@VSystemCursorService2@@@2@XZ @ 0x1800582F8 (-lock@-$weak_ptr@VSystemCursorService2@@@std@@QEBA-AV-$shared_ptr@VSystemCursorService2@@@2@XZ.c)
 *     ?shared_from_this@?$enable_shared_from_this@VSystemCursorService2@@@std@@QEAA?AV?$shared_ptr@VSystemCursorService2@@@2@XZ @ 0x180090A54 (-shared_from_this@-$enable_shared_from_this@VSystemCursorService2@@@std@@QEAA-AV-$shared_ptr@VSy.c)
 * Callees:
 *     ?_Incref_nz@_Ref_count_base@std@@QEAA_NXZ @ 0x180058B48 (-_Incref_nz@_Ref_count_base@std@@QEAA_NXZ.c)
 */

char __fastcall std::_Ptr_base<SystemCursorService2>::_Construct_from_weak<SystemCursorService2>(
        __int64 a1,
        __int64 a2)
{
  std::_Ref_count_base *v2; // rcx
  _QWORD *v3; // r8
  _QWORD *v4; // r9

  v2 = *(std::_Ref_count_base **)(a2 + 8);
  if ( !v2 || !std::_Ref_count_base::_Incref_nz(v2) )
    return 0;
  *v4 = *v3;
  v4[1] = v3[1];
  return 1;
}
