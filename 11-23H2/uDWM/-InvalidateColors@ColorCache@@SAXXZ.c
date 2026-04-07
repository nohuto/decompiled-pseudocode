/*
 * XREFs of ?InvalidateColors@ColorCache@@SAXXZ @ 0x18002FEEC
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJPEAK@Z @ 0x18002FF48 (-UpdateSettings@CDesktopManager@@QEAAJPEAK@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 */

void ColorCache::InvalidateColors(void)
{
  _BYTE *v0; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v2; // [rsp+38h] [rbp+10h] BYREF

  RestartKey = 0LL;
  v2 = &ColorCache::_lock;
  EnterCriticalSection(&ColorCache::_lock);
  while ( 1 )
  {
    v0 = RtlEnumerateGenericTableWithoutSplaying(&ColorCache::_cachedColors, &RestartKey);
    if ( !v0 )
      break;
    v0[8] = 0;
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v2);
}
