/*
 * XREFs of ??0CAtlBaseModule@ATL@@QEAA@XZ @ 0x14004BDC0
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x14004BDA0 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140005C9C (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 */

void *__fastcall ATL::CAtlBaseModule::CAtlBaseModule(ATL::CAtlBaseModule *this)
{
  ATL::_AtlBaseModule = 96;
  qword_1400C4830 = 0LL;
  dword_1400C4838 = 0;
  dword_1400C483C = 0;
  qword_1400C4828 = 0LL;
  qword_1400C47F0 = (__int64)&_ImageBase;
  hModule = &_ImageBase;
  qword_1400C4800 = (__int64)&GUID_ATLVer70;
  xmmword_1400C4808 = 0LL;
  byte_1400C47F8 = 1;
  xmmword_1400C4818 = 0LL;
  dword_1400C47FC = 2048;
  if ( (int)ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)&xmmword_1400C4808) < 0 )
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  return &ATL::_AtlBaseModule;
}
