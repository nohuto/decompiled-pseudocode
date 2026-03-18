/*
 * XREFs of CmpAddToDelayedDeref @ 0x14086977C
 * Callers:
 *     CmpCloseKeyObject @ 0x140841890 (CmpCloseKeyObject.c)
 *     CmpReportNotifyHelper @ 0x140868820 (CmpReportNotifyHelper.c)
 *     CmpPostNotify @ 0x140868D58 (CmpPostNotify.c)
 *     CmpCancelSubordinatePost @ 0x140A36BDC (CmpCancelSubordinatePost.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CmpAddToDelayedDeref(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  _QWORD *v3; // r8

  result = *(_QWORD **)(a1 + 48);
  if ( result )
  {
    v3 = *(_QWORD **)(a2 + 8);
    if ( *v3 != a2 )
      __fastfail(3u);
    *result = a2;
    result[1] = v3;
    *v3 = result;
    *(_QWORD *)(a2 + 8) = result;
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  return result;
}
