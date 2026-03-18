/*
 * XREFs of MiDoubleLockMdlPage @ 0x14033E058
 * Callers:
 *     MiMapLockedPagesInUserSpace @ 0x1408F8DEC (MiMapLockedPagesInUserSpace.c)
 * Callees:
 *     MiChargeForLockedPage @ 0x14022E1E0 (MiChargeForLockedPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     MiAreChargesNeededToLockPage @ 0x14033E460 (MiAreChargesNeededToLockPage.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiDoubleLockMdlPage(__int64 a1)
{
  unsigned __int8 v2; // al
  __int64 v3; // rdx
  unsigned __int64 v4; // rsi
  unsigned int locked; // edi
  __int64 v6; // r8
  unsigned __int64 v7; // r9
  int v9; // [rsp+30h] [rbp+8h]

  v2 = MiLockPageInline(a1);
  v3 = *(unsigned int *)(a1 + 32);
  v4 = v2;
  if ( (unsigned __int16)v3 < 0x7FFFu
    && ((locked = 1, !(unsigned int)MiAreChargesNeededToLockPage(a1))
     || (locked = MiChargeForLockedPage(a1, 0, v6, v7)) != 0) )
  {
    v9 = *(_DWORD *)(a1 + 32);
    LOWORD(v9) = v9 + 1;
    *(_DWORD *)(a1 + 32) = v9;
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
