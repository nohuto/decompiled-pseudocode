/*
 * XREFs of sub_180090CDC @ 0x180090CDC
 * Callers:
 *     sub_18008DA68 @ 0x18008DA68 (sub_18008DA68.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180090CDC(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v4; // r10
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx

  v4 = *(_QWORD **)(a3 + 8);
  ++qword_1801C9A70;
  *a4 = a3;
  a4[1] = v4;
  *v4 = a4;
  *(_QWORD *)(a3 + 8) = a4;
  v5 = qword_1801C9A78;
  v6 = 2 * (a2 & qword_1801C9A90);
  v7 = *(_QWORD *)(qword_1801C9A78 + 16 * (a2 & qword_1801C9A90));
  if ( v7 == qword_1801C9A68 )
  {
    *(_QWORD *)(qword_1801C9A78 + 8 * v6) = a4;
LABEL_6:
    *(_QWORD *)(v5 + 8 * v6 + 8) = a4;
    return a4;
  }
  if ( v7 == a3 )
  {
    *(_QWORD *)(qword_1801C9A78 + 8 * v6) = a4;
  }
  else if ( *(_QWORD **)(qword_1801C9A78 + 8 * v6 + 8) == v4 )
  {
    goto LABEL_6;
  }
  return a4;
}
