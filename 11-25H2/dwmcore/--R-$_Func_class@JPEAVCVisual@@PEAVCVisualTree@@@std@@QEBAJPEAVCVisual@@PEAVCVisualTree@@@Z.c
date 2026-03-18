/*
 * XREFs of ??R?$_Func_class@JPEAVCVisual@@PEAVCVisualTree@@@std@@QEBAJPEAVCVisual@@PEAVCVisualTree@@@Z @ 0x18028D264
 * Callers:
 *     ?ForEachCursorVisual@CComposition@@QEAAJV?$function@$$A6AJPEAVCVisual@@PEAVCVisualTree@@@Z@std@@@Z @ 0x18028D618 (-ForEachCursorVisual@CComposition@@QEAAJV-$function@$$A6AJPEAVCVisual@@PEAVCVisualTree@@@Z@std@@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::_Func_class<long,CVisual *,CVisualTree *>::operator()(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = a3;
  v5 = a2;
  v3 = *(_QWORD *)(a1 + 56);
  if ( !v3 )
  {
    std::_Xbad_function_call();
    __debugbreak();
  }
  return (*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v3 + 16LL))(v3, &v5, &v6);
}
