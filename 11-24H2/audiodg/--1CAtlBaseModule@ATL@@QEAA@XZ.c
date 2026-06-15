/*
 * XREFs of ??1CAtlBaseModule@ATL@@QEAA@XZ @ 0x14005818C
 * Callers:
 *     ATL::_dynamic_atexit_destructor_for___AtlBaseModule__ @ 0x140097490 (ATL--_dynamic_atexit_destructor_for___AtlBaseModule__.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CAtlBaseModule::~CAtlBaseModule(struct _RTL_CRITICAL_SECTION *this)
{
  DeleteCriticalSection(this + 1);
  ATL::_ATL_BASE_MODULE70::~_ATL_BASE_MODULE70((ATL::_ATL_BASE_MODULE70 *)this);
}
