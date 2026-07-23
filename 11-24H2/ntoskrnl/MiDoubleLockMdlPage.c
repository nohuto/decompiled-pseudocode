/*
 * XREFs of MiDoubleLockMdlPage @ 0x140345AF8
 * Callers:
 *     MiMapLockedPagesInUserSpace @ 0x1408DC1EC (MiMapLockedPagesInUserSpace.c)
 * Callees:
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiChargeForLockedPage @ 0x14033AE90 (MiChargeForLockedPage.c)
 *     MiAreChargesNeededToLockPage @ 0x140345EF0 (MiAreChargesNeededToLockPage.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiDoubleLockMdlPage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v5; // al
  __int64 v6; // rdx
  unsigned __int64 v7; // rsi
  unsigned int locked; // edi
  int v10; // [rsp+30h] [rbp+8h]

  v5 = MiLockPageInline(a1, a2, a3, a4);
  v6 = *(unsigned int *)(a1 + 32);
  v7 = v5;
  if ( (unsigned __int16)v6 < 0x7FFFu
    && ((locked = 1, !(unsigned int)MiAreChargesNeededToLockPage(a1)) || (locked = MiChargeForLockedPage(a1, 0)) != 0) )
  {
    v10 = *(_DWORD *)(a1 + 32);
    LOWORD(v10) = v10 + 1;
    *(_DWORD *)(a1 + 32) = v10;
  }
  else
  {
    locked = 0;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (unsigned __int8)v7 < 2u )
  {
    if ( KiIrqlFlags )
    {
      LOBYTE(v6) = v7;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
    }
    __writecr8(v7);
  }
  return locked;
}
