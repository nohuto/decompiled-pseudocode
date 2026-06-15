/*
 * XREFs of ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140005C9C
 * Callers:
 *     ?Init@CComSafeDeleteCriticalSection@ATL@@QEAAJXZ @ 0x140005C78 (-Init@CComSafeDeleteCriticalSection@ATL@@QEAAJXZ.c)
 *     ??0?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAA@XZ @ 0x1400497B8 (--0-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAA@XZ.c)
 *     ??0CAtlWinModule@ATL@@QEAA@XZ @ 0x140049D00 (--0CAtlWinModule@ATL@@QEAA@XZ.c)
 *     ATL::_dynamic_initializer_for___AtlComModule__ @ 0x14004BBC0 (ATL--_dynamic_initializer_for___AtlComModule__.c)
 *     ??0CAtlBaseModule@ATL@@QEAA@XZ @ 0x14004BDC0 (--0CAtlBaseModule@ATL@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComCriticalSection::Init(struct _RTL_CRITICAL_SECTION *this)
{
  InitializeCriticalSection(this);
  return 0LL;
}
