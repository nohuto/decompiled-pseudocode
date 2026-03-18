/*
 * XREFs of ?Receive@CIVChannel@@AEAAJXZ @ 0x1C01F3A18
 * Callers:
 *     ?Initialize@CIVChannel@@QEAAXXZ @ 0x1C01F38B0 (-Initialize@CIVChannel@@QEAAXXZ.c)
 *     ?PacketCallback@CIVChannel@@AEAAJPEAU_IVSRContext@@@Z @ 0x1C01F3940 (-PacketCallback@CIVChannel@@AEAAJPEAU_IVSRContext@@@Z.c)
 *     ?Reconnect@CIVChannel@@AEAAJXZ @ 0x1C01F3AC8 (-Reconnect@CIVChannel@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     ?ivrIVRecv@@YAJKPEAU_ETHREAD@@0U_IVPacketContext@@KP6AJPEAU_IVSRContext@@@Z@Z @ 0x1C01EE7C4 (-ivrIVRecv@@YAJKPEAU_ETHREAD@@0U_IVPacketContext@@KP6AJPEAU_IVSRContext@@@Z@Z.c)
 */

__int64 __fastcall CIVChannel::Receive(CIVChannel *this)
{
  __int64 (__fastcall *v2)(_QWORD); // rax
  unsigned int v3; // ebx
  int v4; // eax
  __int128 v6; // [rsp+30h] [rbp-48h]
  __int128 v7; // [rsp+50h] [rbp-28h] BYREF
  __int64 v8; // [rsp+60h] [rbp-18h]

  v2 = (__int64 (__fastcall *)(_QWORD))*((_QWORD *)this + 4);
  v3 = -1073741823;
  v6 = 0LL;
  if ( !v2 || (*((_QWORD *)&v6 + 1) = v2(*(_QWORD *)this)) != 0LL )
  {
    if ( gpIVThread )
    {
      v4 = *((_DWORD *)this + 2);
      v7 = v6;
      v8 = 12LL;
      return (unsigned int)ivrIVRecv(
                             0x10u,
                             (__int64)gpIVThread,
                             (__int64)KeGetCurrentThread(),
                             &v7,
                             v4,
                             (__int64)CIVChannel::sHeaderCallback);
    }
  }
  return v3;
}
