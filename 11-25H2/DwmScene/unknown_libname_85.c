/*
 * XREFs of unknown_libname_85 @ 0x18001E02C
 * Callers:
 *     sub_18001DAA0 @ 0x18001DAA0 (sub_18001DAA0.c)
 * Callees:
 *     memcpy @ 0x18000CD49 (memcpy.c)
 */

// Microsoft VisualC v14 64bit runtime
__int64 __fastcall unknown_libname_85(__int64 a1, char *a2, const void *a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdi
  char *v8; // rdi
  __int64 i; // rcx
  __int64 result; // rax

  v5 = 2 * a4;
  memcpy(a2, a3, 2 * a4);
  v8 = &a2[v5];
  if ( a5 )
  {
    for ( i = a5; i; --i )
    {
      *(_WORD *)v8 = 0;
      v8 += 2;
    }
  }
  result = a4 + a5;
  *(_WORD *)&a2[2 * a4 + 2 * a5] = 0;
  return result;
}
