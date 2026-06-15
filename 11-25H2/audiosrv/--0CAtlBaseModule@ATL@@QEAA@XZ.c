/*
 * XREFs of ??0CAtlBaseModule@ATL@@QEAA@XZ @ 0x180084B08
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x180007FE0 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x18009FAB0 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 */

void *__fastcall ATL::CAtlBaseModule::CAtlBaseModule(ATL::CAtlBaseModule *this)
{
  ATL::_AtlBaseModule = 96;
  qword_1801CF780 = 0LL;
  dword_1801CF788 = 0;
  dword_1801CF78C = 0;
  qword_1801CF778 = 0LL;
  qword_1801CF740 = (__int64)&_ImageBase;
  qword_1801CF738 = (__int64)&_ImageBase;
  qword_1801CF750 = (__int64)&GUID_ATLVer70;
  xmmword_1801CF758 = 0LL;
  byte_1801CF748 = 1;
  xmmword_1801CF768 = 0LL;
  dword_1801CF74C = 2048;
  if ( (int)ATL::CComCriticalSection::Init((ATL::CComCriticalSection *)&xmmword_1801CF758) < 0 )
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  return &ATL::_AtlBaseModule;
}
