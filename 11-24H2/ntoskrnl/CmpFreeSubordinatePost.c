/*
 * XREFs of CmpFreeSubordinatePost @ 0x14086D3B4
 * Callers:
 *     CmpPostApcRunDown @ 0x1407D24A0 (CmpPostApcRunDown.c)
 *     CmpCloseKeyObject @ 0x14083DB50 (CmpCloseKeyObject.c)
 *     CmpReportNotifyHelper @ 0x14086CB10 (CmpReportNotifyHelper.c)
 *     CmpPostNotify @ 0x14086D048 (CmpPostNotify.c)
 *     CmNotifyRunDown @ 0x1408FEA30 (CmNotifyRunDown.c)
 *     CmpPostApc @ 0x140A23B30 (CmpPostApc.c)
 * Callees:
 *     CmpFreePostBlock @ 0x14086EA70 (CmpFreePostBlock.c)
 */

_QWORD *__fastcall CmpFreeSubordinatePost(__int64 a1)
{
  _QWORD **v1; // rcx
  _QWORD *result; // rax
  __int64 v3; // r8
  _QWORD *v4; // rcx
  _QWORD *v5; // rdx
  __int64 v6; // r8
  _QWORD *v7; // rax

  v1 = (_QWORD **)(a1 + 32);
  result = *v1;
  if ( *v1 != v1 )
  {
    v3 = *result;
    v4 = result - 4;
    if ( *(_QWORD **)(*result + 8LL) != result
      || (v5 = (_QWORD *)result[1], (_QWORD *)*v5 != result)
      || (*v5 = v3, *(_QWORD *)(v3 + 8) = v5, v6 = v4[2], *(_QWORD **)(v6 + 8) != v4 + 2)
      || (v7 = (_QWORD *)v4[3], (_QWORD *)*v7 != v4 + 2) )
    {
      __fastfail(3u);
    }
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    return (_QWORD *)CmpFreePostBlock(v4);
  }
  return result;
}
