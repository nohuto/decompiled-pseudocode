/*
 * XREFs of ?Disconnect@SipcPort@@UEAAXXZ @ 0x18010CDB0
 * Callers:
 *     ?Disconnect@AlpcPort@@UEAAXXZ @ 0x18010CC50 (-Disconnect@AlpcPort@@UEAAXXZ.c)
 * Callees:
 *     ?DisconnectSection@SipcPort@@IEAAXPEAVSipcSection@@@Z @ 0x18010CE04 (-DisconnectSection@SipcPort@@IEAAXPEAVSipcSection@@@Z.c)
 */

void __fastcall SipcPort::Disconnect(SipcPort *this)
{
  char *v1; // rdi
  char *i; // rbx

  v1 = (char *)this + 8;
  for ( i = (char *)*((_QWORD *)this + 1); i != v1; i = *(char **)i )
    SipcPort::DisconnectSection(
      this,
      (struct SipcSection *)((unsigned __int64)(i - 8) & ((unsigned __int128)-(__int128)(unsigned __int64)i >> 64)));
}
