/*
 * XREFs of _CProcessingData::CopyAPOList_::_1_::catch$19 @ 0x140092224
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCAPONode@@QEAAPEAXI@Z @ 0x14000B900 (--_GCAPONode@@QEAAPEAXI@Z.c)
 *     _CxxThrowException_0 @ 0x14005A1E0 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn CProcessingData::CopyAPOList_::_1_::catch_19(__int64 a1, __int64 a2)
{
  CAPONode::`scalar deleting destructor'(*(CAPONode **)(a2 + 80));
  *(_DWORD *)(a2 + 32) = *(_DWORD *)(a2 + 36);
  throw (ATL::CAtlException *)(a2 + 32);
}
