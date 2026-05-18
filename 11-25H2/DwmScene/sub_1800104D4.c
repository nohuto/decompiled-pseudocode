/*
 * XREFs of sub_1800104D4 @ 0x1800104D4
 * Callers:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_1800104D4(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rdx
  unsigned __int64 result; // rax

  *a2 += 39LL;
  v2 = *(_QWORD *)(*a1 - 8LL);
  result = *a1 - v2 - 8;
  if ( result > 0x1F )
  {
    o__invalid_parameter_noinfo_noreturn();
    __debugbreak();
    JUMPOUT(0x180010506LL);
  }
  *a1 = v2;
  return result;
}
