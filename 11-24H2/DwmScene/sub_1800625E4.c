/*
 * XREFs of sub_1800625E4 @ 0x1800625E4
 * Callers:
 *     sub_180065E60 @ 0x180065E60 (sub_180065E60.c)
 * Callees:
 *     sub_18005D888 @ 0x18005D888 (sub_18005D888.c)
 */

__int64 *__fastcall sub_1800625E4(__int64 a1, _DWORD *a2, __int64 *a3)
{
  __int64 *result; // rax
  _DWORD *v5; // rdx
  __int64 **v6; // rcx
  __int64 *i; // rcx
  __int64 *v8; // rdx

  result = **(__int64 ***)(sub_18005D888(*a3, (__int64)a2) + 104);
  while ( !*((_BYTE *)result + 25) )
  {
    v5 = (_DWORD *)result[5];
    v5[23] = *a2;
    v5[24] = a2[1];
    v5[25] = a2[2];
    v5[26] = a2[3];
    v6 = (__int64 **)result[2];
    if ( *((_BYTE *)v6 + 25) )
    {
      for ( i = (__int64 *)result[1]; !*((_BYTE *)i + 25) && result == (__int64 *)i[2]; i = (__int64 *)i[1] )
        result = i;
      result = i;
    }
    else
    {
      v8 = *v6;
      for ( result = (__int64 *)result[2]; !*((_BYTE *)v8 + 25); v8 = (__int64 *)*v8 )
        result = v8;
    }
  }
  return result;
}
