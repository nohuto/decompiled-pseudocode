/*
 * XREFs of ??$_Move_unchecked@PEAV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@PEAV123@@std@@YAPEAV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@PEAV123@00@Z @ 0x1800A9D28
 * Callers:
 *     ?RemoveWindow@CUIHierarchy@@AEAA?AV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K@Z @ 0x1800AB358 (-RemoveWindow@CUIHierarchy@@AEAA-AV-$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K@Z.c)
 * Callees:
 *     ??4?$ComPtr@UCUIWindow@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18009506C (--4-$ComPtr@UCUIWindow@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 */

__int64 *__fastcall std::_Move_unchecked<Microsoft::WRL::ComPtr<CUIWindow> *,Microsoft::WRL::ComPtr<CUIWindow> *>(
        char *a1,
        char *a2,
        __int64 *a3)
{
  char *i; // rdi

  for ( i = a1; i != a2; i += 8 )
    Microsoft::WRL::ComPtr<CUIWindow>::operator=(a3++, i);
  return a3;
}
