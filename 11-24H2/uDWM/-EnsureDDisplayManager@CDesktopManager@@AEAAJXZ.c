/*
 * XREFs of ?EnsureDDisplayManager@CDesktopManager@@AEAAJXZ @ 0x1800862BC
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18008D05C (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?InitializeComObjects@CDesktopManager@@AEAAJXZ @ 0x18008E5C8 (-InitializeComObjects@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopManager::EnsureDDisplayManager(CDesktopManager *this)
{
  struct CDDisplayManager **v1; // rcx

  v1 = (struct CDDisplayManager **)((char *)this + 1304);
  if ( *v1 )
    return 0LL;
  *v1 = 0LL;
  return CDDisplayManager::Create(v1);
}
