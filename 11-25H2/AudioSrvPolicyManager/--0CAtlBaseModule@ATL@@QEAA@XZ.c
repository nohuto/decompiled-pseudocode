/*
 * XREFs of ??0CAtlBaseModule@ATL@@QEAA@XZ @ 0x18001EB44
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlBaseModule__ @ 0x180001E10 (ATL--_dynamic_initializer_for___AtlBaseModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x18001EBD0 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 */

void *__fastcall ATL::CAtlBaseModule::CAtlBaseModule(ATL::CAtlBaseModule *this)
{
  ATL::_AtlBaseModule = 96;
  *(&stru_180067BA8 + 4) = 0LL;
  qword_180067BD0 = 0LL;
  qword_180067BD8 = 0LL;
  qword_180067B90 = (__int64)&_ImageBase;
  qword_180067B88 = (__int64)&_ImageBase;
  qword_180067BA0 = (__int64)&GUID_ATLVer70;
  stru_180067BA8 = 0LL;
  byte_180067B98 = 1;
  *(&stru_180067BA8 + 1) = 0LL;
  dword_180067B9C = 2048;
  ATL::CComCriticalSection::Init((ATL::CComCriticalSection *)&stru_180067BA8);
  return &ATL::_AtlBaseModule;
}
