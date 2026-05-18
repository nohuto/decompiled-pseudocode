/*
 * XREFs of sub_1800BED0C @ 0x1800BED0C
 * Callers:
 *     sub_1800BD9EC @ 0x1800BD9EC (sub_1800BD9EC.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800BED0C(__int64 *a1, _QWORD *a2, _DWORD *a3)
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
