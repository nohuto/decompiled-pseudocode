/*
 * XREFs of ??0?$unique_any_array_ptr@PEAUHINSTANCE__@@U?$default_delete@$$BY0A@PEAUHINSTANCE__@@@std@@Uempty_deleter@wil@@_K@wil@@QEAA@PEAPEAUHINSTANCE__@@_K@Z @ 0x14007229C
 * Callers:
 *     DoLoadedModulesContainBlockedListAPO @ 0x140072320 (DoLoadedModulesContainBlockedListAPO.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall wil::unique_any_array_ptr<HINSTANCE__ *,std::default_delete<HINSTANCE__ * [0]>,wil::empty_deleter,unsigned __int64>::unique_any_array_ptr<HINSTANCE__ *,std::default_delete<HINSTANCE__ * [0]>,wil::empty_deleter,unsigned __int64>(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *result; // rax

  *a1 = a2;
  result = a1;
  a1[1] = 260LL;
  return result;
}
