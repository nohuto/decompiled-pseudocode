/*
 * XREFs of std::remove_if_detail::basic_iterator_CVisualTree_____lambda_71e003bdfe7c152bc782aeb788c37967___ @ 0x180259AF8
 * Callers:
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x18003C140 (-CleanTrees@CComposition@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::remove_if_detail::basic_iterator_CVisualTree_____lambda_71e003bdfe7c152bc782aeb788c37967___(
        _QWORD *a1,
        _QWORD **a2,
        _QWORD *a3,
        _QWORD **a4)
{
  _QWORD *v4; // rax
  _QWORD *v6; // r8
  _QWORD *i; // rcx
  _QWORD *v9; // rcx
  __int64 v10; // r10
  _QWORD *j; // rdx
  _QWORD *result; // rax

  v4 = *a2;
  v6 = (_QWORD *)*a3;
  while ( v4 != v6 )
  {
    for ( i = *a4; i != a4[1] && *i != *v4; ++i )
      ;
    if ( i != a4[1] )
      break;
    ++v4;
  }
  v9 = v4;
  if ( v4 != v6 )
  {
    while ( ++v4 != v6 )
    {
      v10 = *v4;
      for ( j = *a4; j != a4[1] && *j != v10; ++j )
        ;
      if ( j == a4[1] )
        *v9++ = v10;
    }
  }
  result = a1;
  *a2 = v9;
  *a1 = v9;
  return result;
}
