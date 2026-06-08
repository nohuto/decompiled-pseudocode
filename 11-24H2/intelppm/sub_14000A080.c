/*
 * XREFs of sub_14000A080 @ 0x14000A080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall sub_14000A080(_OWORD *a1, __int64 a2, _OWORD *a3)
{
  char result; // al

  *a3 = *a1;
  result = (*(_QWORD *)a3 >> 52) & 0xF;
  if ( result == 3 )
  {
    *(_DWORD *)a3 = a2;
  }
  else
  {
    result = 0;
    *(_QWORD *)a3 = a2 ^ (a2 ^ *(_QWORD *)a3) & 0xFFF0000000000000uLL;
  }
  return result;
}
