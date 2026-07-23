/*
 * XREFs of TppPHDelete @ 0x1800DF1C0
 * Callers:
 *     TppWaitCompletion @ 0x18004C800 (TppWaitCompletion.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TppPHDelete(__int64 *a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // r9

  v2 = *a1;
  if ( a2 != (_QWORD *)*a1 )
  {
    v4 = *a2;
    if ( *(_QWORD **)(*a2 + 8LL) != a2 )
      goto LABEL_5;
    v5 = (_QWORD *)a2[1];
    if ( (_QWORD *)*v5 != a2
      || (*v5 = v4,
          *(_QWORD *)(v4 + 8) = v5,
          v6 = a2 + 2,
          a2[1] = a2,
          *a2 = a2,
          v7 = a2[2],
          v8 = (_QWORD *)*a1,
          *(_QWORD **)(v7 + 8) != a2 + 2) )
    {
LABEL_5:
      __fastfail(3u);
    }
    v8[1] = v6;
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    *v6 = v8;
    v2 = (__int64)a2;
    *a1 = (__int64)a2;
  }
  *(_QWORD *)(v2 + 32) = 0LL;
  return TppPHExtractMin(a1);
}
