/*
 * XREFs of ?Cancel@AlpcMessage@@QEAAXPEAX@Z @ 0x18009BF44
 * Callers:
 *     ?GetPortEvent@AlpcPort@@UEAAJPEAUSipcPortEvent@@@Z @ 0x18006E740 (-GetPortEvent@AlpcPort@@UEAAJPEAUSipcPortEvent@@@Z.c)
 *     ?Disconnect@AlpcPort@@UEAAXXZ @ 0x18010EB60 (-Disconnect@AlpcPort@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall AlpcMessage::Cancel(AlpcMessage *this, void *a2)
{
  *((_WORD *)this + 2) &= ~0x2000u;
  NtAlpcCancelMessage(a2, 0LL, (char *)this + 408);
}
