/*
 * XREFs of sub_18008FCA0 @ 0x18008FCA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180017054 @ 0x180017054 (sub_180017054.c)
 */

__int64 __fastcall sub_18008FCA0(__int64 a1, __int64 a2, char a3)
{
  void *v4; // rdx

  switch ( a3 )
  {
    case 0:
      v4 = &unk_1801C7F78;
      goto LABEL_12;
    case 1:
      v4 = &unk_1801C7FB8;
      goto LABEL_12;
    case 2:
      v4 = &unk_1801C7F98;
      goto LABEL_12;
    case 3:
      v4 = &unk_1801C7F58;
      goto LABEL_12;
    case 5:
      v4 = &unk_1801C7FD8;
LABEL_12:
      sub_180017054(a2, (__int64)v4);
      return a2;
  }
  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 15LL;
  *(_BYTE *)a2 = 0;
  return a2;
}
