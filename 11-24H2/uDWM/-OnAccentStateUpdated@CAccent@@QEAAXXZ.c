/*
 * XREFs of ?OnAccentStateUpdated@CAccent@@QEAAXXZ @ 0x180098064
 * Callers:
 *     ?OnAccentStateUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18008B730 (-OnAccentStateUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?OnGraphicsDeviceLost@CAccent@@QEAAXXZ @ 0x1800A1404 (-OnGraphicsDeviceLost@CAccent@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CAccent::OnAccentStateUpdated(CAccent *this)
{
  (*(void (__fastcall **)(CAccent *, __int64))(*(_QWORD *)this + 24LL))(this, 4096LL);
}
