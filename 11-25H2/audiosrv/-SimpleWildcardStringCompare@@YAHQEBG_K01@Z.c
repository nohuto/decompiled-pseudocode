/*
 * XREFs of ?SimpleWildcardStringCompare@@YAHQEBG_K01@Z @ 0x1800EA994
 * Callers:
 *     ??8EndpointInfo@@QEBA_NAEBV0@@Z @ 0x1800E6A38 (--8EndpointInfo@@QEBA_NAEBV0@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SimpleWildcardStringCompare(const wchar_t *a1, size_t a2, const wchar_t *a3, size_t a4)
{
  size_t v7; // rdi
  size_t v8; // rax
  size_t v9; // r8
  unsigned int v10; // ebx

  v7 = wcsnlen(a1, a2);
  v8 = wcsnlen(a3, a4);
  v9 = v8;
  if ( v7 > v8 )
    v9 = v7;
  v10 = 0;
  if ( v7 >= 2 && v8 >= 2 && (a3[v8 - 1] == 42) != (a1[v7 - 1] == 42) )
  {
    if ( a1[v7 - 1] == 42 )
    {
      v9 = v7 - 1;
    }
    else if ( a3[v8 - 1] == 42 )
    {
      v9 = v8 - 1;
    }
  }
  LOBYTE(v10) = (unsigned int)_o__wcsnicmp(a1, a3, v9) == 0;
  return v10;
}
