/*
 * XREFs of ??0bad_alloc@std@@QEAA@XZ @ 0x1800DEECC
 * Callers:
 *     ?precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z @ 0x1800E3B44 (-precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z @ 0x1800E3E5C (-throw_hresult@winrt@@YAXUhresult@1@AEBUslim_source_location@impl@1@@Z.c)
 *     ?RetrieveBroadcastSession@DummyBroadcastProvider@@AEAAAEAUDummyBroadcastSession@@AEBU_GUID@@W4RBS_OPTION@1@@Z @ 0x1800F7E08 (-RetrieveBroadcastSession@DummyBroadcastProvider@@AEAAAEAUDummyBroadcastSession@@AEBU_GUID@@W4RB.c)
 * Callees:
 *     <none>
 */

std::bad_alloc *__fastcall std::bad_alloc::bad_alloc(std::bad_alloc *this)
{
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 1) = "bad allocation";
  *(_QWORD *)this = &std::bad_alloc::`vftable';
  return this;
}
