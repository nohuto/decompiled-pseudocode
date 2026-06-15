/*
 * XREFs of _CDeviceGraphObjectCache::CreateConnection_::_1_::dtor$1 @ 0x140091DF9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDeviceGraphObjectCache::CreateConnection_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<CConnectionNode>::~CAutoPtr<CConnectionNode>((__int64 (__fastcall ****)(_QWORD, __int64))(a2 + 112));
}
