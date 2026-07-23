/*
 * XREFs of CmpAddToDelayedDeref @ 0x14086DAAC
 * Callers:
 *     CmpCloseKeyObject @ 0x14083DB50 (CmpCloseKeyObject.c)
 *     CmpReportNotifyHelper @ 0x14086CB10 (CmpReportNotifyHelper.c)
 *     CmpPostNotify @ 0x14086D048 (CmpPostNotify.c)
 *     CmpCancelSubordinatePost @ 0x140A2BA34 (CmpCancelSubordinatePost.c)
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
