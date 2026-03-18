/*
 * XREFs of CmpFreeSubordinatePost @ 0x1408703F0
 * Callers:
 *     CmpPostApcRunDown @ 0x1407C2870 (CmpPostApcRunDown.c)
 *     CmpCloseKeyObject @ 0x140845600 (CmpCloseKeyObject.c)
 *     CmpReportNotifyHelper @ 0x14086F9E0 (CmpReportNotifyHelper.c)
 *     CmpPostNotify @ 0x140870084 (CmpPostNotify.c)
 *     CmNotifyRunDown @ 0x1408F53C0 (CmNotifyRunDown.c)
 *     CmpPostApc @ 0x140A29490 (CmpPostApc.c)
 * Callees:
 *     CmpFreePostBlock @ 0x14086CC80 (CmpFreePostBlock.c)
 */

void __fastcall CmpFreeSubordinatePost(__int64 a1)
{
  _QWORD **v1; // rcx
  _QWORD *v2; // rax
  __int64 v3; // r8
  _QWORD *v4; // rcx
  _QWORD *v5; // rdx
  __int64 v6; // r8
  _QWORD *v7; // rax

  v1 = (_QWORD **)(a1 + 32);
  v2 = *v1;
  if ( *v1 != v1 )
  {
    v3 = *v2;
    v4 = v2 - 4;
    if ( *(_QWORD **)(*v2 + 8LL) != v2
      || (v5 = (_QWORD *)v2[1], (_QWORD *)*v5 != v2)
      || (*v5 = v3, *(_QWORD *)(v3 + 8) = v5, v6 = v4[2], *(_QWORD **)(v6 + 8) != v4 + 2)
      || (v7 = (_QWORD *)v4[3], (_QWORD *)*v7 != v4 + 2) )
    {
      __fastfail(3u);
    }
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    CmpFreePostBlock(v4);
  }
}
