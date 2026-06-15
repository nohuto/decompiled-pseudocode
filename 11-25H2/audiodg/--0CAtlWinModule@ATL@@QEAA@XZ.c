/*
 * XREFs of ??0CAtlWinModule@ATL@@QEAA@XZ @ 0x14004A000
 * Callers:
 *     ATL::_dynamic_initializer_for___AtlWinModule__ @ 0x140049FE0 (ATL--_dynamic_initializer_for___AtlWinModule__.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140005C6C (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 */

int *__fastcall ATL::CAtlWinModule::CAtlWinModule(ATL::CAtlWinModule *this)
{
  ATL::_AtlWinModule = 72;
  qword_1400C48F8 = 0LL;
  dword_1400C4900 = 0;
  dword_1400C4904 = 0;
  qword_1400C48F0 = 0LL;
  stru_1400C48C8 = 0LL;
  *(&stru_1400C48C8 + 4) = 0LL;
  *(&stru_1400C48C8 + 1) = 0LL;
  if ( (int)ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)&stru_1400C48C8) < 0 )
  {
    ATL::_AtlWinModule = 0;
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  }
  return &ATL::_AtlWinModule;
}
