/*
 * XREFs of ??1MDCOBJ@@QEAA@XZ @ 0x1C02C1418
 * Callers:
 *     NtGdiSelectBitmap @ 0x1C0064470 (NtGdiSelectBitmap.c)
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C72C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 */

void __fastcall MDCOBJ::~MDCOBJ(MDCOBJ *this)
{
  if ( *(_QWORD *)this )
    XDCOBJ::vUnlockFast(this);
}
