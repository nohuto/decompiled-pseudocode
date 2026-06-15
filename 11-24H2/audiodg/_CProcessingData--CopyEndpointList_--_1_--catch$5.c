/*
 * XREFs of _CProcessingData::CopyEndpointList_::_1_::catch$5 @ 0x140091DA9
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x14005A0F0 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall __noreturn CProcessingData::CopyEndpointList_::_1_::catch_5(__int64 a1, __int64 a2)
{
  (***(void (__fastcall ****)(_QWORD, __int64))(a2 + 80))(*(_QWORD *)(a2 + 80), 1LL);
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(a2 + 36);
  throw (ATL::CAtlException *)(a2 + 32);
}
