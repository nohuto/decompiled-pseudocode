/*
 * XREFs of ?Receive@CIVChannel@@AEAAJXZ @ 0x14021B38C
 * Callers:
 *     ?Initialize@CIVChannel@@QEAAXXZ @ 0x14021B18C (-Initialize@CIVChannel@@QEAAXXZ.c)
 *     ?PacketCallback@CIVChannel@@AEAAJPEAU_IVSRContext@@@Z @ 0x14021B2B0 (-PacketCallback@CIVChannel@@AEAAJPEAU_IVSRContext@@@Z.c)
 *     ?Reconnect@CIVChannel@@AEAAJXZ @ 0x14021B480 (-Reconnect@CIVChannel@@AEAAJXZ.c)
 * Callees:
 *     ?ivrIVRecv@@YAJKPEAU_ETHREAD@@0U_IVPacketContext@@KP6AJPEAU_IVSRContext@@@Z@Z @ 0x14021777C (-ivrIVRecv@@YAJKPEAU_ETHREAD@@0U_IVPacketContext@@KP6AJPEAU_IVSRContext@@@Z@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CIVChannel::Receive(CIVChannel *this)
{
  unsigned int v1; // ebx
  __int64 (__fastcall *v2)(_QWORD); // rax
  int v5; // ebx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v7; // rdx
  __int128 v8; // [rsp+30h] [rbp-48h]
  __int128 v9; // [rsp+50h] [rbp-28h] BYREF
  __int64 v10; // [rsp+60h] [rbp-18h]

  v1 = 0;
  v2 = (__int64 (__fastcall *)(_QWORD))*((_QWORD *)this + 4);
  v8 = 0LL;
  if ( !v2 || (*((_QWORD *)&v8 + 1) = v2(*(_QWORD *)this)) != 0LL )
  {
    if ( *(_QWORD *)(W32GetUserSessionState(this) + 19424) )
    {
      v5 = *((_DWORD *)this + 2);
      CurrentThread = KeGetCurrentThread();
      v7 = *(_QWORD *)(W32GetUserSessionState(this) + 19424);
      v9 = v8;
      v10 = 12LL;
      return (unsigned int)ivrIVRecv(16LL, v7, (__int64)CurrentThread, &v9, v5, (__int64)CIVChannel::sHeaderCallback);
    }
  }
  else
  {
    v1 = -1073741823;
  }
  if ( !*(_QWORD *)(W32GetUserSessionState(this) + 19424) )
    return (unsigned int)-1073741823;
  return v1;
}
