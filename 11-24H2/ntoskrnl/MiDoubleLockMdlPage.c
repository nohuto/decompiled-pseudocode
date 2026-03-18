/*
 * XREFs of MiDoubleLockMdlPage @ 0x14023BD94
 * Callers:
 *     MiMapLockedPagesInUserSpace @ 0x1409C3AE8 (MiMapLockedPagesInUserSpace.c)
 * Callees:
 *     MiChargeForLockedPage @ 0x140211B30 (MiChargeForLockedPage.c)
 *     MiAreChargesNeededToLockPage @ 0x14023C190 (MiAreChargesNeededToLockPage.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiDoubleLockMdlPage(__int64 a1)
{
  unsigned __int8 v2; // al
  __int64 v3; // rdx
  unsigned __int64 v4; // rsi
  unsigned int locked; // edi
  int v7; // [rsp+30h] [rbp+8h]

  v2 = MiLockPageInline(a1);
  v3 = *(unsigned int *)(a1 + 32);
  v4 = v2;
  if ( (unsigned __int16)v3 < 0x7FFFu
    && ((locked = 1, !(unsigned int)MiAreChargesNeededToLockPage(a1)) || (locked = MiChargeForLockedPage(a1, 0)) != 0) )
  {
    v7 = *(_DWORD *)(a1 + 32);
    LOWORD(v7) = v7 + 1;
    *(_DWORD *)(a1 + 32) = v7;
  }
  else
  {
    locked = 0;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (unsigned __int8)v4 < 2u )
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(v3) = v4;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v3);
    }
    __writecr8(v4);
  }
  return locked;
}
