/*
 * XREFs of ?ReleaseCVICache@CDesktopManager@@SAXXZ @ 0x180086B2C
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJPEAK@Z @ 0x180009A3C (-UpdateSettings@CDesktopManager@@QEAAJPEAK@Z.c)
 *     ?ProcessDeviceStateChangeNotification@CWindowList@@AEAAJW4Enum@MilCompositionDeviceState@@@Z @ 0x180048408 (-ProcessDeviceStateChangeNotification@CWindowList@@AEAAJW4Enum@MilCompositionDeviceState@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void CDesktopManager::ReleaseCVICache(void)
{
  CDesktopManager *v0; // rax
  __int64 v1; // rbx
  __int64 v2; // rdi
  CBaseObject *v3; // rcx

  v0 = CDesktopManager::s_pDesktopManagerInstance;
  v1 = 1240LL;
  v2 = 2LL;
  do
  {
    v3 = *(CBaseObject **)((char *)v0 + v1);
    if ( v3 )
    {
      CBaseObject::Release(v3);
      v0 = CDesktopManager::s_pDesktopManagerInstance;
      *(_QWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + v1) = 0LL;
    }
    v1 += 8LL;
    --v2;
  }
  while ( v2 );
}
