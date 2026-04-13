/*
 * XREFs of ??$_Maklocstr@D@std@@YAPEADPEBDPEADAEBU_Cvtvec@@@Z @ 0x180048FC4
 * Callers:
 *     ?_Init@?$numpunct@G@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x18005ADCC (-_Init@-$numpunct@G@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 * Callees:
 *     ??_U@YAPEAX_K@Z @ 0x1800062B4 (--_U@YAPEAX_K@Z.c)
 */

_BYTE *__fastcall std::_Maklocstr<char>(_BYTE *a1)
{
  _BYTE *v1; // rdi
  __int64 v2; // rbx
  size_t v3; // rbx
  _BYTE *result; // rax
  __int64 v5; // rdx

  v1 = a1;
  v2 = -1LL;
  do
    ++v2;
  while ( a1[v2] );
  v3 = v2 + 1;
  result = operator new[](v3);
  if ( v3 )
  {
    v5 = result - v1;
    do
    {
      v1[v5] = *v1;
      ++v1;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
