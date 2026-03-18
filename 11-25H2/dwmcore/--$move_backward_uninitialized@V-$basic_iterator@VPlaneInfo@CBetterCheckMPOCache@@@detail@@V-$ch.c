/*
 * XREFs of ??$move_backward_uninitialized@V?$basic_iterator@VPlaneInfo@CBetterCheckMPOCache@@@detail@@V?$checked_array_iterator@PEAVPlaneInfo@CBetterCheckMPOCache@@@stdext@@@detail@@YAXV?$basic_iterator@VPlaneInfo@CBetterCheckMPOCache@@@0@0V?$checked_array_iterator@PEAVPlaneInfo@CBetterCheckMPOCache@@@stdext@@@Z @ 0x1802C1D18
 * Callers:
 *     ?reserve_region@?$vector_facade@VPlaneInfo@CBetterCheckMPOCache@@V?$buffer_impl@VPlaneInfo@CBetterCheckMPOCache@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVPlaneInfo@CBetterCheckMPOCache@@_K0@Z @ 0x1802C4A64 (-reserve_region@-$vector_facade@VPlaneInfo@CBetterCheckMPOCache@@V-$buffer_impl@VPlaneInfo@CBett.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall detail::move_backward_uninitialized<detail::basic_iterator<CBetterCheckMPOCache::PlaneInfo>,stdext::checked_array_iterator<CBetterCheckMPOCache::PlaneInfo *>>(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 result; // rax
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  __int64 v9; // rcx

  result = *a2;
  if ( *a2 != *a1 )
  {
    v5 = *a3;
    do
    {
      v6 = result - 76;
      *a2 = v6;
      if ( !v5 || (v7 = a3[2]) == 0 || (v8 = v7 - 1, a3[2] = v8, v8 >= a3[1]) )
        _invalid_parameter_noinfo_noreturn();
      v9 = 76 * v8;
      *(_OWORD *)(v9 + v5) = *(_OWORD *)v6;
      *(_OWORD *)(v9 + v5 + 16) = *(_OWORD *)(v6 + 16);
      *(_OWORD *)(v9 + v5 + 32) = *(_OWORD *)(v6 + 32);
      *(_OWORD *)(v9 + v5 + 48) = *(_OWORD *)(v6 + 48);
      *(_QWORD *)(v9 + v5 + 64) = *(_QWORD *)(v6 + 64);
      *(_DWORD *)(v9 + v5 + 72) = *(_DWORD *)(v6 + 72);
      result = *a2;
    }
    while ( *a2 != *a1 );
  }
  return result;
}
