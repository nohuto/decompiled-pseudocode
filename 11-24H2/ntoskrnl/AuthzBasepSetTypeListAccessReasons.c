/*
 * XREFs of AuthzBasepSetTypeListAccessReasons @ 0x140456724
 * Callers:
 *     SepAccessCheckEx @ 0x1404E81A8 (SepAccessCheckEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AuthzBasepSetTypeListAccessReasons(int a1, int a2, int a3, __int64 a4, unsigned int a5, char a6)
{
  __int64 result; // rax
  __int64 *v9; // r9
  __int64 v10; // r11
  __int64 v11; // r10
  __int64 v12; // r8
  int v13; // edx

  result = a5;
  if ( a5 )
  {
    v9 = (__int64 *)(a4 + 40);
    v10 = a5;
    do
    {
      v11 = *v9;
      v12 = 0LL;
      v13 = 1;
      if ( *v9 )
      {
        while ( v13 )
        {
          if ( (v13 & a1) != 0 && (a6 || !*(_DWORD *)(v11 + 4 * v12)) )
            *(_DWORD *)(v11 + 4 * v12) = a3 | a2;
          v12 = (unsigned int)(v12 + 1);
          v13 *= 2;
        }
      }
      v9 += 6;
      --v10;
    }
    while ( v10 );
  }
  return result;
}
