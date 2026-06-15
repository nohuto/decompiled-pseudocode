/*
 * XREFs of ??0CAtlBaseModule@ATL@@QEAA@XZ @ 0x14004C290
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x14004C270 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140005C6C (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 */

void *__fastcall ATL::CAtlBaseModule::CAtlBaseModule(ATL::CAtlBaseModule *this)
{
  ATL::_AtlBaseModule = 96;
  qword_1400C48B0 = 0LL;
  dword_1400C48B8 = 0;
  dword_1400C48BC = 0;
  qword_1400C48A8 = 0LL;
  qword_1400C4870 = (__int64)&_ImageBase;
  hModule = &_ImageBase;
  qword_1400C4880 = (__int64)&GUID_ATLVer70;
  xmmword_1400C4888 = 0LL;
  byte_1400C4878 = 1;
  xmmword_1400C4898 = 0LL;
  dword_1400C487C = 2048;
  if ( (int)ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)&xmmword_1400C4888) < 0 )
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  return &ATL::_AtlBaseModule;
}
