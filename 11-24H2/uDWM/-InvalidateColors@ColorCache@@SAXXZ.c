/*
 * XREFs of ?InvalidateColors@ColorCache@@SAXXZ @ 0x18007ACF0
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJPEAK@Z @ 0x180009A3C (-UpdateSettings@CDesktopManager@@QEAAJPEAK@Z.c)
 * Callees:
 *     <none>
 */

void ColorCache::InvalidateColors(void)
{
  _BYTE *v0; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  RestartKey = 0LL;
  EnterCriticalSection(&ColorCache::_lock);
  while ( 1 )
  {
    v0 = RtlEnumerateGenericTableWithoutSplaying(&ColorCache::_cachedColors, &RestartKey);
    if ( !v0 )
      break;
    v0[8] = 0;
  }
  LeaveCriticalSection(&ColorCache::_lock);
}
