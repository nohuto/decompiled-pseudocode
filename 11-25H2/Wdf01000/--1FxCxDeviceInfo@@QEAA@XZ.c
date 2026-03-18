/*
 * XREFs of ??1FxCxDeviceInfo@@QEAA@XZ @ 0x1400952F0
 * Callers:
 *     ??1FxDevice@@UEAA@XZ @ 0x14004D4A8 (--1FxDevice@@UEAA@XZ.c)
 * Callees:
 *     ??3FxStump@@SAXPEAX@Z @ 0x140008FB4 (--3FxStump@@SAXPEAX@Z.c)
 */

void __fastcall FxCxDeviceInfo::~FxCxDeviceInfo(FxCxDeviceInfo *this)
{
  void **CxPnpPowerCallbackContexts; // rbx
  __int64 v2; // rdi

  CxPnpPowerCallbackContexts = (void **)this->CxPnpPowerCallbackContexts;
  v2 = 21LL;
  do
  {
    if ( *CxPnpPowerCallbackContexts )
      FxStump::operator delete(*CxPnpPowerCallbackContexts);
    ++CxPnpPowerCallbackContexts;
    --v2;
  }
  while ( v2 );
}
