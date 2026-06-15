/*
 * XREFs of ??0CAtlBaseModule@ATL@@QEAA@XZ @ 0x18001E9A4
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x180001E10 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x18001EA30 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 */

void *__fastcall ATL::CAtlBaseModule::CAtlBaseModule(ATL::CAtlBaseModule *this)
{
  ATL::_AtlBaseModule = 96;
  *(&stru_180064B28 + 4) = 0LL;
  qword_180064B50 = 0LL;
  qword_180064B58 = 0LL;
  qword_180064B10 = (__int64)&_ImageBase;
  qword_180064B08 = (__int64)&_ImageBase;
  qword_180064B20 = (__int64)&GUID_ATLVer70;
  stru_180064B28 = 0LL;
  byte_180064B18 = 1;
  *(&stru_180064B28 + 1) = 0LL;
  dword_180064B1C = 2048;
  ATL::CComCriticalSection::Init((ATL::CComCriticalSection *)&stru_180064B28);
  return &ATL::_AtlBaseModule;
}
