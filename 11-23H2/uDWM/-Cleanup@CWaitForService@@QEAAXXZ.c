/*
 * XREFs of ?Cleanup@CWaitForService@@QEAAXXZ @ 0x1800B3D2C
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x180045FF0 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 *     ?WaitFor@CWaitForService@@QEAA_NPEBG@Z @ 0x1800B578C (-WaitFor@CWaitForService@@QEAA_NPEBG@Z.c)
 *     ?s_ServiceStarted@CWaitForService@@CAXPEAX@Z @ 0x1800B59E0 (-s_ServiceStarted@CWaitForService@@CAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CWaitForService::Cleanup(SC_HANDLE *this)
{
  SC_HANDLE v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    CloseServiceHandle(v2);
    *this = 0LL;
  }
}
