/*
 * XREFs of ?Disconnect@AlpcPort@@UEAAXXZ @ 0x18010CC50
 * Callers:
 *     ?GetPortEvent@AlpcPort@@UEAAJPEAUSipcPortEvent@@@Z @ 0x18006E9B0 (-GetPortEvent@AlpcPort@@UEAAJPEAUSipcPortEvent@@@Z.c)
 * Callees:
 *     ?Reset@SipcWin32Handle@@QEAAXXZ @ 0x180094CA0 (-Reset@SipcWin32Handle@@QEAAXXZ.c)
 *     ?Cancel@AlpcMessage@@QEAAXPEAX@Z @ 0x18009BD94 (-Cancel@AlpcMessage@@QEAAXPEAX@Z.c)
 *     ?RejectClientConnection@AlpcPort@@UEAAJXZ @ 0x18010E290 (-RejectClientConnection@AlpcPort@@UEAAJXZ.c)
 */

void __fastcall AlpcPort::Disconnect(AlpcPort *this)
{
  void **v1; // rdi
  __int64 v3; // [rsp+60h] [rbp+8h] BYREF
  __int64 v4; // [rsp+68h] [rbp+10h] BYREF

  v1 = (void **)((char *)this + 48);
  if ( *((_QWORD *)this + 6) )
  {
    if ( (*((__int16 *)this + 30) & 0xFFFF00FF) == 0xA )
      AlpcPort::RejectClientConnection(this);
    NtAlpcDisconnectPort(*v1, 0LL);
    while ( 1 )
    {
      v4 = 368LL;
      v3 = 0LL;
      *(_OWORD *)((char *)this + 56) = 0LL;
      *(_OWORD *)((char *)this + 72) = 0LL;
      *((_QWORD *)this + 11) = 0LL;
      *((_QWORD *)this + 53) = 0LL;
      *((_WORD *)this + 29) = 40;
      *((_DWORD *)this + 106) = 1610612736;
      if ( (unsigned int)NtAlpcSendWaitReceivePort(*v1, 0LL, 0LL, 0LL, (char *)this + 56, &v4, (char *)this + 424, &v3) )
        break;
      if ( (*((_WORD *)this + 30) & 0x2000) != 0 )
        AlpcMessage::Cancel((AlpcPort *)((char *)this + 56), *v1);
    }
    SipcWin32Handle::Reset(v1);
  }
  SipcPort::Disconnect(this);
}
