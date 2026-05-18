/*
 * XREFs of sub_180026830 @ 0x180026830
 * Callers:
 *     <none>
 * Callees:
 *     sub_180026CC0 @ 0x180026CC0 (sub_180026CC0.c)
 *     sub_180027C14 @ 0x180027C14 (sub_180027C14.c)
 */

__int64 __fastcall sub_180026830(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  result = sub_180027C14(a1, *(unsigned int *)(*a2 + 244LL));
  if ( !(_BYTE)result )
    return sub_180026CC0(a1, *a2);
  return result;
}
