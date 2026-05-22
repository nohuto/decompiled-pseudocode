/*
 * XREFs of ??4?$weak_ptr@VGestureHandler@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180157058
 * Callers:
 *     ?CreateHandlerForHandlerContext@ShellGesturesProcessor@@CAXAEAUHandlerContext@1@UtagPOINT@@_K@Z @ 0x18015725C (-CreateHandlerForHandlerContext@ShellGesturesProcessor@@CAXAEAUHandlerContext@1@UtagPOINT@@_K@Z.c)
 * Callees:
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18007FF1C (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

_QWORD *__fastcall std::weak_ptr<GestureHandler>::operator=(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // r8
  std::_Ref_count_base *v5; // rcx

  v2 = *a2;
  *a2 = 0LL;
  v4 = a2[1];
  a2[1] = 0LL;
  *a1 = v2;
  v5 = (std::_Ref_count_base *)a1[1];
  a1[1] = v4;
  if ( v5 )
    std::_Ref_count_base::_Decwref(v5);
  return a1;
}
