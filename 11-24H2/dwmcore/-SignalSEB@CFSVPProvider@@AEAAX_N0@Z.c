/*
 * XREFs of ?SignalSEB@CFSVPProvider@@AEAAX_N0@Z @ 0x18009B8A0
 * Callers:
 *     ?CheckForFullscreenVideoNotifications@CFSVPProvider@@QEAAXXZ @ 0x18009B4E8 (-CheckForFullscreenVideoNotifications@CFSVPProvider@@QEAAXXZ.c)
 *     ?CheckForMajorityScreenVideoNotifications@CLegacyRenderTarget@@AEAAXXZ @ 0x18009B6D0 (-CheckForMajorityScreenVideoNotifications@CLegacyRenderTarget@@AEAAXXZ.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1801BEBA0 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?RequestThreadpoolWork@CFSVPProvider@@AEAAJXZ @ 0x18027E3E0 (-RequestThreadpoolWork@CFSVPProvider@@AEAAJXZ.c)
 *     ?SignalSEBWorker@CFSVPProvider@@AEAAXXZ @ 0x18027E49C (-SignalSEBWorker@CFSVPProvider@@AEAAXXZ.c)
 */

void __fastcall CFSVPProvider::SignalSEB(CFSVPProvider *this, char a2, char a3)
{
  __int64 v6; // rdx
  char *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = (char *)this + 32;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  *((_BYTE *)this + 73) = a2;
  *((_BYTE *)this + 74) = a3;
  if ( (a2 != *((_BYTE *)this + 75) || a3 != *((_BYTE *)this + 76))
    && (int)CFSVPProvider::RequestThreadpoolWork(this) < 0 )
  {
    CFSVPProvider::SignalSEBWorker(this);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v7, v6);
}
