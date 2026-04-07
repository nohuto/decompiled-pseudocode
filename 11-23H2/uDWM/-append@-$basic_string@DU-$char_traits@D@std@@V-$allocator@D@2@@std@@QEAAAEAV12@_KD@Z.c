/*
 * XREFs of ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x1800F26BC
 * Callers:
 *     ?wstring_to_string@util@cereal@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$basic_string_view@GU?$char_traits@G@std@@@4@@Z @ 0x1800F4050 (-wstring_to_string@util@cereal@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std.c)
 * Callees:
 *     memset_0 @ 0x18005D520 (memset_0.c)
 *     ??$_Reallocate_grow_by@V_lambda_e1befb086ad3257e3f042a63030725f7_@@_KD@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAAEAV01@_KV_lambda_e1befb086ad3257e3f042a63030725f7_@@_KD@Z @ 0x1800EF5BC (--$_Reallocate_grow_by@V_lambda_e1befb086ad3257e3f042a63030725f7_@@_KD@-$basic_string@DU-$char_t.c)
 */

char *__fastcall std::string::append(char *Src, size_t Size, __int64 a3)
{
  __int64 v5; // rcx
  bool v6; // cf
  _QWORD *v7; // rax
  char *v8; // rbx
  char *result; // rax

  v5 = *((_QWORD *)Src + 2);
  if ( Size > *((_QWORD *)Src + 3) - v5 )
    return std::string::_Reallocate_grow_by<_lambda_e1befb086ad3257e3f042a63030725f7_,unsigned __int64,char>(
             Src,
             Size,
             a3,
             Size);
  v6 = *((_QWORD *)Src + 3) < 0x10uLL;
  *((_QWORD *)Src + 2) = v5 + Size;
  v7 = Src;
  if ( !v6 )
    v7 = *(_QWORD **)Src;
  v8 = (char *)v7 + v5;
  memset_0((char *)v7 + v5, 0, Size);
  result = Src;
  v8[Size] = 0;
  return result;
}
