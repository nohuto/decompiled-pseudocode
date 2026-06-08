/*
 * XREFs of sub_140004B88 @ 0x140004B88
 * Callers:
 *     sub_140006AB0 @ 0x140006AB0 (sub_140006AB0.c)
 *     sub_14000DAA4 @ 0x14000DAA4 (sub_14000DAA4.c)
 *     sub_140029798 @ 0x140029798 (sub_140029798.c)
 *     sub_14002F738 @ 0x14002F738 (sub_14002F738.c)
 *     sub_1400359D0 @ 0x1400359D0 (sub_1400359D0.c)
 *     sub_140037080 @ 0x140037080 (sub_140037080.c)
 *     sub_1400373A8 @ 0x1400373A8 (sub_1400373A8.c)
 *     sub_1400385B0 @ 0x1400385B0 (sub_1400385B0.c)
 *     sub_140042830 @ 0x140042830 (sub_140042830.c)
 *     sub_14004599C @ 0x14004599C (sub_14004599C.c)
 *     sub_140046638 @ 0x140046638 (sub_140046638.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140004B88(__int64 *a1, _QWORD *a2)
{
  __int64 v3; // r8
  unsigned int v4; // r9d
  __int64 v5; // rdx
  __int64 *v6; // rax
  __int64 v7; // r8

  *a2 = 0LL;
  v3 = a1[2];
  v4 = -1073741275;
  if ( v3 )
  {
    if ( *((_BYTE *)a1 + 24) )
      return v4;
    *((_BYTE *)a1 + 24) = 1;
    goto LABEL_5;
  }
  v5 = *a1;
  if ( *a1 )
  {
    v6 = (__int64 *)a1[1];
    v7 = *v6;
    a1[1] = *v6;
    if ( v7 != v5 )
    {
      v3 = v7 - *((unsigned int *)a1 + 6);
LABEL_5:
      *a2 = v3;
      return 0;
    }
  }
  return v4;
}
