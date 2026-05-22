/*
 * XREFs of ?RejectClientConnection@AlpcPort@@UEAAJXZ @ 0x1801101A0
 * Callers:
 *     ?GetPortEvent@AlpcPort@@UEAAJPEAUSipcPortEvent@@@Z @ 0x18006E740 (-GetPortEvent@AlpcPort@@UEAAJPEAUSipcPortEvent@@@Z.c)
 *     ?Disconnect@AlpcPort@@UEAAXXZ @ 0x18010EB60 (-Disconnect@AlpcPort@@UEAAXXZ.c)
 * Callees:
 *     ?Reset@SipcWin32Handle@@QEAAXXZ @ 0x180094EA0 (-Reset@SipcWin32Handle@@QEAAXXZ.c)
 */

__int64 __fastcall AlpcPort::RejectClientConnection(AlpcPort *this)
{
  char *v1; // rbx
  __int64 v2; // rdx
  char v4; // [rsp+40h] [rbp-18h]
  void *v5; // [rsp+60h] [rbp+8h] BYREF

  v1 = (char *)this + 56;
  v4 = 0;
  *((_DWORD *)this + 14) = 2621440;
  v2 = *((_QWORD *)this + 6);
  v5 = 0LL;
  NtAlpcAcceptConnectPort(&v5, v2, 0LL, 0LL, 0LL, 0LL, (char *)this + 56, 0LL, v4);
  *(_OWORD *)v1 = 0LL;
  *((_OWORD *)v1 + 1) = 0LL;
  *((_QWORD *)v1 + 4) = 0LL;
  *((_QWORD *)v1 + 46) = 0LL;
  *((_WORD *)v1 + 1) = 40;
  *((_DWORD *)v1 + 92) = 1610612736;
  SipcWin32Handle::Reset(&v5);
  return 0LL;
}
