/*
 * XREFs of sub_1400090A4 @ 0x1400090A4
 * Callers:
 *     sub_1400359D0 @ 0x1400359D0 (sub_1400359D0.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1400090A4(_DWORD *a1)
{
  _QWORD *result; // rax
  unsigned int v2; // r9d
  unsigned int v3; // edx
  __int64 v4; // r8
  _QWORD *v5; // rcx
  unsigned int i; // r10d

  result = 0LL;
  if ( a1 )
  {
    v2 = *a1;
    v3 = 0;
    if ( *a1 )
    {
      v4 = 0LL;
      v5 = a1 + 2;
      while ( 2 )
      {
        for ( i = 0; i < *(_DWORD *)*v5; ++i )
        {
          if ( *(_DWORD *)(*v5 + v4 + 4) == 2 )
            return v5;
        }
        ++v3;
        v5 += 13;
        v4 += 4LL;
        if ( v3 < v2 )
          continue;
        break;
      }
    }
  }
  return result;
}
