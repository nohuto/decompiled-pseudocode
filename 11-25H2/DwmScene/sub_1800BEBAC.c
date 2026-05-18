/*
 * XREFs of sub_1800BEBAC @ 0x1800BEBAC
 * Callers:
 *     sub_1800BD88C @ 0x1800BD88C (sub_1800BD88C.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800BEBAC(__int64 *a1, _QWORD *a2, _DWORD *a3)
{
  __int64 *v3; // r9
  __int64 *v4; // rax

  v3 = (__int64 *)*a1;
  v4 = *(__int64 **)(*a1 + 8);
  while ( !*((_BYTE *)v4 + 25) )
  {
    if ( *a3 >= *((_DWORD *)v4 + 8) )
    {
      v4 = (__int64 *)v4[2];
    }
    else
    {
      v3 = v4;
      v4 = (__int64 *)*v4;
    }
  }
  *a2 = v3;
  return a2;
}
