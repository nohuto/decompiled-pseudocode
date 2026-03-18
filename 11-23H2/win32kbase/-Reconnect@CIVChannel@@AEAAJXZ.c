/*
 * XREFs of ?Reconnect@CIVChannel@@AEAAJXZ @ 0x1C01F3AC8
 * Callers:
 *     ?Initialize@CIVChannel@@QEAAXXZ @ 0x1C01F38B0 (-Initialize@CIVChannel@@QEAAXXZ.c)
 *     ?sOnChildNotification@CIVChannel@@CAJPEAX@Z @ 0x1C01F3C30 (-sOnChildNotification@CIVChannel@@CAJPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     UserSleep @ 0x1C014E0C0 (UserSleep.c)
 *     ?Receive@CIVChannel@@AEAAJXZ @ 0x1C01F3A18 (-Receive@CIVChannel@@AEAAJXZ.c)
 */

__int64 __fastcall CIVChannel::Reconnect(CIVChannel *this)
{
  int v2; // ebx

  v2 = 0;
  while ( !gpfnIVChildReInitialize || gpfnIVChildReInitialize(*((_DWORD *)this + 2)) < 0 )
  {
    UserSleep(1000);
    if ( (unsigned int)++v2 >= 0xA )
      KeBugCheck(0x164u);
  }
  return CIVChannel::Receive(this);
}
