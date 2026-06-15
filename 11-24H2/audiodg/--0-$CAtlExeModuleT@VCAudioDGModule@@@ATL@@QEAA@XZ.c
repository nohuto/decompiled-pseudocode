/*
 * XREFs of ??0?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAA@XZ @ 0x1400497B8
 * Callers:
 *     ??0CAudioDGModule@@QEAA@XZ @ 0x140049680 (--0CAudioDGModule@@QEAA@XZ.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140005C9C (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ?ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z @ 0x1400435F0 (-ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z.c)
 */

void *ATL::CAtlExeModuleT<CAudioDGModule>::CAtlExeModuleT<CAudioDGModule>()
{
  HRESULT v0; // eax
  ATL::CAtlComModule *v1; // rcx

  xmmword_1400C45F8 = 0LL;
  xmmword_1400C4608 = 0LL;
  qword_1400C4618 = 0LL;
  dword_1400C45E8 = 0;
  *(__int64 *)((char *)&qword_1400C45EC + 4) = 0LL;
  qword_1400C45EC = 0LL;
  ATL::_pAtlModule = (struct ATL::CAtlModule *)&_AtlModule;
  qword_1400C4620 = 0LL;
  if ( (int)ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)&xmmword_1400C45F8) >= 0 )
    dword_1400C45E8 = 56;
  else
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  ATL::CAtlModule::m_libid = LIBID_PolicyServerLib;
  dword_1400C4628 = GetCurrentThreadId();
  qword_1400C4630 = 0LL;
  dword_1400C4638 = 5000;
  dword_1400C463C = 1000;
  byte_1400C4640 = 1;
  byte_1400C4642 = 0;
  v0 = CoInitializeEx(0LL, 0);
  if ( v0 >= 0 )
  {
    byte_1400C4642 = 1;
LABEL_9:
    ATL::CAtlComModule::ExecuteObjectMain(v1, 1);
    return &_AtlModule;
  }
  if ( v0 == -2147417850 && GetModuleHandleW(L"Mscoree.dll") )
    goto LABEL_9;
  ATL::CAtlBaseModule::m_bInitFailed = 1;
  return &_AtlModule;
}
