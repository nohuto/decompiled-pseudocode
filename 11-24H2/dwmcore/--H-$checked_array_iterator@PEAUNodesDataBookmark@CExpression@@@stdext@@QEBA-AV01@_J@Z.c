/*
 * XREFs of ??H?$checked_array_iterator@PEAUNodesDataBookmark@CExpression@@@stdext@@QEBA?AV01@_J@Z @ 0x18029A56C
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802383C0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall stdext::checked_array_iterator<CExpression::NodesDataBookmark *>::operator+(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // xmm1_8
  _QWORD *v4; // rcx

  v3 = *(_QWORD *)(a1 + 16);
  *(_OWORD *)a2 = *(_OWORD *)a1;
  *(_QWORD *)(a2 + 16) = v3;
  if ( a3 )
  {
    if ( !*(_QWORD *)a2 )
      goto LABEL_8;
    if ( a3 < 0 )
    {
      v4 = (_QWORD *)(a2 + 16);
      if ( *(_QWORD *)(a2 + 16) >= (unsigned __int64)-a3 )
        goto LABEL_5;
LABEL_8:
      _invalid_parameter_noinfo_noreturn();
    }
  }
  v4 = (_QWORD *)(a2 + 16);
  if ( a3 > 0 && *(_QWORD *)(a2 + 8) - *v4 < (unsigned __int64)a3 )
    goto LABEL_8;
LABEL_5:
  *v4 += a3;
  return a2;
}
