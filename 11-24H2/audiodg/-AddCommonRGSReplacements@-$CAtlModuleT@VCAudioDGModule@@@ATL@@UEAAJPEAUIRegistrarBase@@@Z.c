/*
 * XREFs of ?AddCommonRGSReplacements@?$CAtlModuleT@VCAudioDGModule@@@ATL@@UEAAJPEAUIRegistrarBase@@@Z @ 0x1400651C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ATL::CAtlModuleT<CAudioDGModule>::AddCommonRGSReplacements(__int64 a1, __int64 a2)
{
  return (*(__int64 (__fastcall **)(__int64, const wchar_t *, void *))(*(_QWORD *)a2 + 24LL))(
           a2,
           L"APPID",
           &unk_1400A8518);
}
