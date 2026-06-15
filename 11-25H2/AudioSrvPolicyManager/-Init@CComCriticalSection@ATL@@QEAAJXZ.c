/*
 * XREFs of ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x18001EBD0
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x180001C60 (ATL--_dynamic_initializer_for___AtlWinModule__.c)
 *     ??0CAtlBaseModule@ATL@@QEAA@XZ @ 0x18001EB44 (--0CAtlBaseModule@ATL@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComCriticalSection::Init(struct _RTL_CRITICAL_SECTION *this)
{
  InitializeCriticalSection(this);
  return 0LL;
}
