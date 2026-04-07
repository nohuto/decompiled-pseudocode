/*
 * XREFs of ?s_ServiceStarted@CWaitForService@@CAXPEAX@Z @ 0x1800BB950
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?PostInitializeComObjects@CDesktopManager@@QEAAJXZ @ 0x1800BAB10 (-PostInitializeComObjects@CDesktopManager@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CWaitForService::s_ServiceStarted(_DWORD *a1)
{
  SC_HANDLE *v1; // rbx
  struct _RTL_CRITICAL_SECTION *v2; // [rsp+30h] [rbp+8h] BYREF

  v1 = (SC_HANDLE *)(a1 - 2);
  if ( !a1[6] )
  {
    v2 = &CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    if ( CDesktopManager::s_pDesktopManagerInstance )
      CDesktopManager::PostInitializeComObjects(CDesktopManager::s_pDesktopManagerInstance);
    CGuard<CDwmCS>::~CGuard<CDwmCS>(&v2);
  }
  CWaitForService::Cleanup(v1);
}
