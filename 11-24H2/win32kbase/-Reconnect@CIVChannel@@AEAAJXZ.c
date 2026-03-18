/*
 * XREFs of ?Reconnect@CIVChannel@@AEAAJXZ @ 0x14021B480
 * Callers:
 *     ?Initialize@CIVChannel@@QEAAXXZ @ 0x14021B18C (-Initialize@CIVChannel@@QEAAXXZ.c)
 *     ?OnChildNotification@CIVChannel@@AEAAJPEAX@Z @ 0x14021B24C (-OnChildNotification@CIVChannel@@AEAAJPEAX@Z.c)
 * Callees:
 *     UserSleep @ 0x14015B890 (UserSleep.c)
 *     ?Receive@CIVChannel@@AEAAJXZ @ 0x14021B38C (-Receive@CIVChannel@@AEAAJXZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CIVChannel::Reconnect(CIVChannel *this)
{
  int v2; // ebx
  unsigned int v3; // esi
  int (__fastcall *v4)(_QWORD); // rax

  v2 = 0;
  while ( 1 )
  {
    v3 = *((_DWORD *)this + 2);
    v4 = *(int (__fastcall **)(_QWORD))(W32GetUserSessionState(this) + 19600);
    if ( v4 )
    {
      if ( v4(v3) >= 0 )
        break;
    }
    UserSleep(1000);
    if ( (unsigned int)++v2 >= 0xA )
      KeBugCheck(0x164u);
  }
  return CIVChannel::Receive(this);
}
