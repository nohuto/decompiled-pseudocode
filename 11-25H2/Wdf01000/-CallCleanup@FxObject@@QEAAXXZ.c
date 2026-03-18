/*
 * XREFs of ?CallCleanup@FxObject@@QEAAXXZ @ 0x140045858
 * Callers:
 *     ?Dispose@FxDevice@@UEAAEXZ @ 0x140046EF0 (-Dispose@FxDevice@@UEAAEXZ.c)
 *     ?Dispose@FxCompanionTarget@@EEAAEXZ @ 0x14008F370 (-Dispose@FxCompanionTarget@@EEAAEXZ.c)
 *     ?Dispose@FxMpDevice@@UEAAEXZ @ 0x140094120 (-Dispose@FxMpDevice@@UEAAEXZ.c)
 * Callees:
 *     ?CallCleanupCallbacks@FxObject@@AEAAXXZ @ 0x140045878 (-CallCleanupCallbacks@FxObject@@AEAAXXZ.c)
 */

void __fastcall FxObject::CallCleanup(FxObject *this)
{
  if ( _bittest16((const signed __int16 *)&this->24, 0xAu) )
    FxObject::CallCleanupCallbacks(this);
}
