/*
 * XREFs of ?CallCleanup@FxObject@@QEAAXXZ @ 0x14004B0F8
 * Callers:
 *     ?Dispose@FxDevice@@UEAAEXZ @ 0x14004C790 (-Dispose@FxDevice@@UEAAEXZ.c)
 *     ?Dispose@FxCommonBuffer@@UEAAEXZ @ 0x140081720 (-Dispose@FxCommonBuffer@@UEAAEXZ.c)
 *     ?Dispose@FxDmaEnabler@@UEAAEXZ @ 0x140089B10 (-Dispose@FxDmaEnabler@@UEAAEXZ.c)
 *     ?Dispose@FxCompanionTarget@@EEAAEXZ @ 0x14008F3D0 (-Dispose@FxCompanionTarget@@EEAAEXZ.c)
 *     ?Dispose@FxMpDevice@@UEAAEXZ @ 0x140094180 (-Dispose@FxMpDevice@@UEAAEXZ.c)
 * Callees:
 *     ?CallCleanupCallbacks@FxObject@@AEAAXXZ @ 0x14004B118 (-CallCleanupCallbacks@FxObject@@AEAAXXZ.c)
 */

void __fastcall FxObject::CallCleanup(FxObject *this)
{
  if ( _bittest16((const signed __int16 *)&this->24, 0xAu) )
    FxObject::CallCleanupCallbacks(this);
}
