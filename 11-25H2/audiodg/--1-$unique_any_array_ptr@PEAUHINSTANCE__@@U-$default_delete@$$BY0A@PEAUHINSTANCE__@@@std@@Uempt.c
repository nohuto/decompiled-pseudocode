/*
 * XREFs of ??1?$unique_any_array_ptr@PEAUHINSTANCE__@@U?$default_delete@$$BY0A@PEAUHINSTANCE__@@@std@@Uempty_deleter@wil@@@wil@@QEAA@XZ @ 0x14007480C
 * Callers:
 *     _DoLoadedModulesContainBlockedListAPO_::_1_::dtor$1 @ 0x140096A68 (_DoLoadedModulesContainBlockedListAPO_--_1_--dtor$1.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400591B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall wil::unique_any_array_ptr<HINSTANCE__ *,std::default_delete<HINSTANCE__ * [0]>,wil::empty_deleter>::~unique_any_array_ptr<HINSTANCE__ *,std::default_delete<HINSTANCE__ * [0]>,wil::empty_deleter>(
        __int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    operator delete(v2);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
  }
}
