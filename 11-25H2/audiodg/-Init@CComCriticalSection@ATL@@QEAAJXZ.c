/*
 * XREFs of ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140005C6C
 * Callers:
 *     ?Init@CComSafeDeleteCriticalSection@ATL@@QEAAJXZ @ 0x140005C48 (-Init@CComSafeDeleteCriticalSection@ATL@@QEAAJXZ.c)
 *     ??0?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAA@XZ @ 0x140049AB8 (--0-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAA@XZ.c)
 *     ??0CAtlWinModule@ATL@@QEAA@XZ @ 0x14004A000 (--0CAtlWinModule@ATL@@QEAA@XZ.c)
 *     ATL::_dynamic_initializer_for___AtlComModule__ @ 0x14004C090 (ATL--_dynamic_initializer_for___AtlComModule__.c)
 *     ??0CAtlBaseModule@ATL@@QEAA@XZ @ 0x14004C290 (--0CAtlBaseModule@ATL@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComCriticalSection::Init(struct _RTL_CRITICAL_SECTION *this)
{
  InitializeCriticalSection(this);
  return 0LL;
}
