/*
 * XREFs of sub_18008FB40 @ 0x18008FB40
 * Callers:
 *     <none>
 * Callees:
 *     sub_180016F54 @ 0x180016F54 (sub_180016F54.c)
 */

__int64 __fastcall sub_18008FB40(__int64 a1, __int64 a2, char a3)
{
  void *v4; // rdx

  switch ( a3 )
  {
    case 0:
      v4 = &unk_1801C6F68;
      goto LABEL_12;
    case 1:
      v4 = &unk_1801C6FA8;
      goto LABEL_12;
    case 2:
      v4 = &unk_1801C6F88;
      goto LABEL_12;
    case 3:
      v4 = &unk_1801C6F48;
      goto LABEL_12;
    case 5:
      v4 = &unk_1801C6FC8;
LABEL_12:
      sub_180016F54(a2, (__int64)v4);
      return a2;
  }
  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 15LL;
  *(_BYTE *)a2 = 0;
  return a2;
}
