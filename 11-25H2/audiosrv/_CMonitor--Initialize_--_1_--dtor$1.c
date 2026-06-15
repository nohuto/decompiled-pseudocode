/*
 * XREFs of _CMonitor::Initialize_::_1_::dtor$1 @ 0x180162D39
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMonitor::Initialize_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 104));
}
