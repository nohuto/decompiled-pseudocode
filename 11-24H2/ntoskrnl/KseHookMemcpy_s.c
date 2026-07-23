/*
 * XREFs of KseHookMemcpy_s @ 0x14048F6C0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall KseHookMemcpy_s(char *a1, size_t a2, __int64 *a3, size_t a4)
{
  __int64 *v4; // rbx
  size_t i; // rdx
  __int64 v6; // rax
  size_t v7; // r9
  signed __int64 v9; // rcx

  v4 = a3;
  if ( !a4 )
    return 0LL;
  if ( !a1 )
    return 22LL;
  if ( a3 && a2 >= a4 )
  {
    for ( i = a4 >> 3; i; --i )
    {
      v6 = *v4++;
      *(_QWORD *)a1 = v6;
      a1 += 8;
    }
    v7 = a4 & 7;
    if ( (_DWORD)v7 )
    {
      v9 = a1 - (char *)v4;
      do
      {
        *((_BYTE *)v4 + v9) = *(_BYTE *)v4;
        v4 = (__int64 *)((char *)v4 + 1);
        --v7;
      }
      while ( v7 );
    }
    return 0LL;
  }
  memset_0(a1, 0, a2);
  return v4 != 0LL ? 34 : 22;
}
