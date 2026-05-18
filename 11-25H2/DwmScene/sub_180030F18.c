/*
 * XREFs of sub_180030F18 @ 0x180030F18
 * Callers:
 *     sub_180034AC8 @ 0x180034AC8 (sub_180034AC8.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall sub_180030F18(__int64 ***a1)
{
  __int64 *result; // rax
  __int64 **v2; // rcx
  __int64 *i; // rcx
  __int64 *v4; // rdx

  result = **a1;
  while ( !*((_BYTE *)result + 25) )
  {
    *((_DWORD *)result + 10) = -8388609;
    *(__int64 *)((char *)result + 44) = 2139095039LL;
    result[7] = 0LL;
    v2 = (__int64 **)result[2];
    if ( *((_BYTE *)v2 + 25) )
    {
      for ( i = (__int64 *)result[1]; !*((_BYTE *)i + 25) && result == (__int64 *)i[2]; i = (__int64 *)i[1] )
        result = i;
      result = i;
    }
    else
    {
      v4 = *v2;
      for ( result = (__int64 *)result[2]; !*((_BYTE *)v4 + 25); v4 = (__int64 *)*v4 )
        result = v4;
    }
  }
  return result;
}
