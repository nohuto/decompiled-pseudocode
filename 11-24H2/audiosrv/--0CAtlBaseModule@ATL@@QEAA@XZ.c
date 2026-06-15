/*
 * XREFs of ??0CAtlBaseModule@ATL@@QEAA@XZ @ 0x1800719D8
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x1800084F0 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x18009C3B0 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 */

void *__fastcall ATL::CAtlBaseModule::CAtlBaseModule(ATL::CAtlBaseModule *this)
{
  ATL::_AtlBaseModule = 96;
  qword_1801DB8D0 = 0LL;
  dword_1801DB8D8 = 0;
  dword_1801DB8DC = 0;
  qword_1801DB8C8 = 0LL;
  qword_1801DB890 = (__int64)&_ImageBase;
  qword_1801DB888 = (__int64)&_ImageBase;
  qword_1801DB8A0 = (__int64)&GUID_ATLVer70;
  xmmword_1801DB8A8 = 0LL;
  byte_1801DB898 = 1;
  xmmword_1801DB8B8 = 0LL;
  dword_1801DB89C = 2048;
  if ( (int)ATL::CComCriticalSection::Init((ATL::CComCriticalSection *)&xmmword_1801DB8A8) < 0 )
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  return &ATL::_AtlBaseModule;
}
