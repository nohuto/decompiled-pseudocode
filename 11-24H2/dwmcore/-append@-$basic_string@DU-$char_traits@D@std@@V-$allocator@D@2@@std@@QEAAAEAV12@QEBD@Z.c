/*
 * XREFs of ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD@Z @ 0x1802660D4
 * Callers:
 *     ?GetDebugString@CVisualTreePath@@QEBA?BVDbgString@DwmDbg@@XZ @ 0x180247CD8 (-GetDebugString@CVisualTreePath@@QEBA-BVDbgString@DwmDbg@@XZ.c)
 * Callees:
 *     ??$_Reallocate_grow_by@V_lambda_65e615be2a453ca0576c979606f46740_@@PEBD_K@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_65e615be2a453ca0576c979606f46740_@@PEBD_K@Z @ 0x180265FA4 (--$_Reallocate_grow_by@V_lambda_65e615be2a453ca0576c979606f46740_@@PEBD_K@-$basic_string@DU-$cha.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

_QWORD *__fastcall std::string::append(_QWORD *Src, _BYTE *a2, __int64 a3)
{
  _QWORD *v3; // rsi
  unsigned __int64 Size; // rdi
  __int64 v5; // rcx
  bool v6; // cc
  _QWORD *v7; // rax
  char *v8; // rbx

  v3 = Src;
  Size = -1LL;
  do
    ++Size;
  while ( a2[Size] );
  v5 = Src[2];
  if ( Size > v3[3] - v5 )
    return std::string::_Reallocate_grow_by<_lambda_65e615be2a453ca0576c979606f46740_,char const *,unsigned __int64>(
             v3,
             Size,
             a3,
             a2,
             Size);
  v6 = v3[3] <= 0xFuLL;
  v3[2] = v5 + Size;
  v7 = v3;
  if ( !v6 )
    v7 = (_QWORD *)*v3;
  v8 = (char *)v7 + v5;
  memmove_0((char *)v7 + v5, a2, Size);
  v8[Size] = 0;
  return v3;
}
