/*
 * XREFs of ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAVPlaneInfo@CBetterCheckMPOCache@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAVPlaneInfo@CBetterCheckMPOCache@@@stdext@@_J@Z @ 0x1802B8354
 * Callers:
 *     ??$move@V?$move_iterator@PEAVPlaneInfo@CBetterCheckMPOCache@@@std@@V?$checked_array_iterator@PEAVPlaneInfo@CBetterCheckMPOCache@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVPlaneInfo@CBetterCheckMPOCache@@@stdext@@V?$move_iterator@PEAVPlaneInfo@CBetterCheckMPOCache@@@0@0V12@@Z @ 0x1802B844C (--$move@V-$move_iterator@PEAVPlaneInfo@CBetterCheckMPOCache@@@std@@V-$checked_array_iterator@PEA.c)
 *     ??$move_backward@V?$move_iterator@PEAVPlaneInfo@CBetterCheckMPOCache@@@std@@V?$checked_array_iterator@PEAVPlaneInfo@CBetterCheckMPOCache@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVPlaneInfo@CBetterCheckMPOCache@@@stdext@@V?$move_iterator@PEAVPlaneInfo@CBetterCheckMPOCache@@@0@0V12@@Z @ 0x1802B85A0 (--$move_backward@V-$move_iterator@PEAVPlaneInfo@CBetterCheckMPOCache@@@std@@V-$checked_array_ite.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Get_unwrapped_n<stdext::checked_array_iterator<CBetterCheckMPOCache::PlaneInfo *> &,__int64>(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v2; // r8

  v2 = a1 + 2;
  if ( a2 < 0 )
  {
    if ( *v2 >= (unsigned __int64)-a2 )
      return *a1 + 76LL * *v2;
LABEL_6:
    _invalid_parameter_noinfo_noreturn();
  }
  if ( a2 > 0 && a1[1] - *v2 < (unsigned __int64)a2 )
    goto LABEL_6;
  return *a1 + 76LL * *v2;
}
