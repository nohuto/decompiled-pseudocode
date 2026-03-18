/*
 * XREFs of ??$uninitialized_move@V?$move_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@std@@V?$checked_array_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@stdext@@V?$move_iterator@PEAV?$unique_ptr@VCOcclusionInfo@@U?$default_delete@VCOcclusionInfo@@@std@@@std@@@0@0V12@@Z @ 0x1801E6740
 * Callers:
 *     ?GetOcclusionInfo@CTreeData@@QEAAPEAVCOcclusionInfo@@I_N@Z @ 0x18009E720 (-GetOcclusionInfo@CTreeData@@QEAAPEAVCOcclusionInfo@@I_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::uninitialized_move<std::move_iterator<std::unique_ptr<COcclusionInfo> *>,stdext::checked_array_iterator<std::unique_ptr<COcclusionInfo> *>>(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        _QWORD *a4)
{
  _QWORD *v5; // rcx
  __int64 v6; // r10
  _QWORD *v8; // r9
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // xmm1_8

  v5 = a4 + 2;
  v6 = a3 - a2;
  if ( v6 < 0 )
  {
    if ( *v5 >= (unsigned __int64)-v6 )
      goto LABEL_3;
LABEL_7:
    _invalid_parameter_noinfo_noreturn();
  }
  if ( v6 > 0 && a4[1] - *v5 < (unsigned __int64)v6 )
    goto LABEL_7;
LABEL_3:
  v8 = (_QWORD *)(*a4 + 8LL * *v5);
  while ( a2 != a3 )
  {
    v9 = *a2;
    *a2 = 0LL;
    *v8++ = v9;
    ++a2;
  }
  result = a1;
  a4[2] = ((__int64)v8 - *a4) >> 3;
  v11 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v11;
  return result;
}
