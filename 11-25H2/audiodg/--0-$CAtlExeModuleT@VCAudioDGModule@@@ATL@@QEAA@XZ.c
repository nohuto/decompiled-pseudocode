/*
 * XREFs of ??0?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAA@XZ @ 0x140049AB8
 * Callers:
 *     ??0CAudioDGModule@@QEAA@XZ @ 0x140049980 (--0CAudioDGModule@@QEAA@XZ.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140005C6C (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ?ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z @ 0x1400438F0 (-ExecuteObjectMain@CAtlComModule@ATL@@QEAAX_N@Z.c)
 */

void *ATL::CAtlExeModuleT<CAudioDGModule>::CAtlExeModuleT<CAudioDGModule>()
{
  HRESULT v0; // eax
  ATL::CAtlComModule *v1; // rcx

  xmmword_1400C4678 = 0LL;
  xmmword_1400C4688 = 0LL;
  qword_1400C4698 = 0LL;
  dword_1400C4668 = 0;
  *(__int64 *)((char *)&qword_1400C466C + 4) = 0LL;
  qword_1400C466C = 0LL;
  ATL::_pAtlModule = (struct ATL::CAtlModule *)&_AtlModule;
  qword_1400C46A0 = 0LL;
  if ( (int)ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)&xmmword_1400C4678) >= 0 )
    dword_1400C4668 = 56;
  else
    ATL::CAtlBaseModule::m_bInitFailed = 1;
  ATL::CAtlModule::m_libid = LIBID_PolicyServerLib;
  dword_1400C46A8 = GetCurrentThreadId();
  qword_1400C46B0 = 0LL;
  dword_1400C46B8 = 5000;
  dword_1400C46BC = 1000;
  byte_1400C46C0 = 1;
  byte_1400C46C2 = 0;
  v0 = CoInitializeEx(0LL, 0);
  if ( v0 >= 0 )
  {
    byte_1400C46C2 = 1;
LABEL_9:
    ATL::CAtlComModule::ExecuteObjectMain(v1, 1);
    return &_AtlModule;
  }
  if ( v0 == -2147417850 && GetModuleHandleW(L"Mscoree.dll") )
    goto LABEL_9;
  ATL::CAtlBaseModule::m_bInitFailed = 1;
  return &_AtlModule;
}
