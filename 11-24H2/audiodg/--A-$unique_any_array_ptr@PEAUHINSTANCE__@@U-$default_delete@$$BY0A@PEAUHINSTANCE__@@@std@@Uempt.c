/*
 * XREFs of ??A?$unique_any_array_ptr@PEAUHINSTANCE__@@U?$default_delete@$$BY0A@PEAUHINSTANCE__@@@std@@Uempty_deleter@wil@@_K@wil@@QEAAAEAPEAUHINSTANCE__@@_K@Z @ 0x140072310
 * Callers:
 *     DoLoadedModulesContainBlockedListAPO @ 0x140072320 (DoLoadedModulesContainBlockedListAPO.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::unique_any_array_ptr<HINSTANCE__ *,std::default_delete<HINSTANCE__ * [0]>,wil::empty_deleter,unsigned __int64>::operator[](
        _QWORD *a1,
        __int64 a2)
{
  return *a1 + 8 * a2;
}
