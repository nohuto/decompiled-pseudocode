/*
 * XREFs of ?vGlobal@BRUSHMEMOBJ@@QEAAXXZ @ 0x14010BC10
 * Callers:
 *     bInitBRUSHOBJ @ 0x1402E409C (bInitBRUSHOBJ.c)
 * Callees:
 *     HmgSetOwner @ 0x14002DC20 (HmgSetOwner.c)
 *     HmgMarkUndeletable @ 0x14010BC90 (HmgMarkUndeletable.c)
 */

void __fastcall BRUSHMEMOBJ::vGlobal(__int64 **this)
{
  __int64 v2; // rdx

  *((_DWORD *)*this + 10) |= 0x40200u;
  HmgSetOwner(**this, 0, 16);
  LOBYTE(v2) = 16;
  HmgMarkUndeletable(**this, v2);
}
