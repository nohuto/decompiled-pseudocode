/*
 * XREFs of ?PropagateUserLogon@CSettingsManager@@QEAAXPEAUHKEY__@@00_N@Z @ 0x1400024D8
 * Callers:
 *     ?s_LpcCommandHandler@CDwmAppHost@@CAJPEAUIPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z @ 0x140002280 (-s_LpcCommandHandler@CDwmAppHost@@CAJPEAUIPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z.c)
 * Callees:
 *     ?Cleanup@CSettingsManager@@QEAAXXZ @ 0x140002578 (-Cleanup@CSettingsManager@@QEAAXXZ.c)
 *     ?AcquireExclusive@CReadWriteLock@@QEAAXXZ @ 0x140002620 (-AcquireExclusive@CReadWriteLock@@QEAAXXZ.c)
 *     ?RefreshPreferencesAndPolicies@CSettingsManager@@QEAAXXZ @ 0x1400026D0 (-RefreshPreferencesAndPolicies@CSettingsManager@@QEAAXXZ.c)
 */

void __fastcall CSettingsManager::PropagateUserLogon(CSettingsManager *this, HKEY a2, HKEY a3, HKEY a4, bool a5)
{
  CDwmAppHost *v9; // rcx

  CSettingsManager::Cleanup(this);
  CReadWriteLock::AcquireExclusive((CSettingsManager *)((char *)this + 48));
  if ( a2 )
    *((_QWORD *)this + 1) = a2;
  if ( a3 )
    *((_QWORD *)this + 2) = a3;
  if ( a4 )
    *((_QWORD *)this + 3) = a4;
  *((_BYTE *)this + 32) = a5;
  *((_DWORD *)this + 14) = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)this + 6);
  CSettingsManager::RefreshPreferencesAndPolicies(this);
  CDwmAppHost::LpcNotifySettingsChange(v9, 0x7D3u);
}
