/*
 * XREFs of sub_18002611C @ 0x18002611C
 * Callers:
 *     sub_1800BDC90 @ 0x1800BDC90 (sub_1800BDC90.c)
 * Callees:
 *     sub_180025FD0 @ 0x180025FD0 (sub_180025FD0.c)
 *     sub_18002811C @ 0x18002811C (sub_18002811C.c)
 */

__int64 __fastcall sub_18002611C(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( !v2 )
    sub_180025FD0(1);
  if ( *((_BYTE *)a1 + 8) )
    sub_180025FD0(36);
  result = sub_18002811C(v2);
  *((_BYTE *)a1 + 8) = 1;
  return result;
}
