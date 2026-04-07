/*
 * XREFs of ?Release@CDWMDisplaySet@@QEBAXXZ @ 0x180056B3C
 * Callers:
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x180056928 (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18008D05C (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?ReleaseDCompResources@CDesktopManager@@AEAAXXZ @ 0x1800BABC0 (-ReleaseDCompResources@CDesktopManager@@AEAAXXZ.c)
 * Callees:
 *     ??1CDWMDisplaySet@@QEAA@XZ @ 0x1800581E8 (--1CDWMDisplaySet@@QEAA@XZ.c)
 */

void __fastcall CDWMDisplaySet::Release(CDWMDisplaySet *this)
{
  const struct std::nothrow_t *v2; // rdx

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this, 0xFFFFFFFF) == 1 )
  {
    if ( this )
    {
      CDWMDisplaySet::~CDWMDisplaySet(this);
      CDisplayBlackCurtainAnimatedVisual::operator delete(this, v2);
    }
  }
}
