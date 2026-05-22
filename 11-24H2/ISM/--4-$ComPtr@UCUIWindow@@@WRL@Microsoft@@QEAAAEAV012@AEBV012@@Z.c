/*
 * XREFs of ??4?$ComPtr@UCUIWindow@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180064A80
 * Callers:
 *     ?AddWindowWorker@CUIHierarchy@@AEAAXV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@@Z @ 0x1800A8E64 (-AddWindowWorker@CUIHierarchy@@AEAAXV-$ComPtr@UCUIWindow@@@WRL@Microsoft@@@Z.c)
 *     ?FindTopLevelWindow@CUIHierarchy@@AEAA?AV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K@Z @ 0x1800A9024 (-FindTopLevelWindow@CUIHierarchy@@AEAA-AV-$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K@Z.c)
 *     ?FindWindowW@CUIHierarchy@@AEAA?AV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K@Z @ 0x1800A9068 (-FindWindowW@CUIHierarchy@@AEAA-AV-$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K@Z.c)
 *     ?RemoveWindow@CUIHierarchy@@AEAA?AV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K@Z @ 0x1800A9E58 (-RemoveWindow@CUIHierarchy@@AEAA-AV-$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall Microsoft::WRL::ComPtr<CUIWindow>::operator=(__int64 *a1, _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 v5; // rcx

  v3 = *a2;
  if ( *a1 != *a2 )
  {
    if ( v3 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 8LL))(*a2);
    v5 = *a1;
    *a1 = v3;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return a1;
}
