/*
 * XREFs of ?DisconnectSection@SipcPort@@IEAAXPEAVSipcSection@@@Z @ 0x18010CE04
 * Callers:
 *     ?GetPortEvent@AlpcPort@@UEAAJPEAUSipcPortEvent@@@Z @ 0x18006E9B0 (-GetPortEvent@AlpcPort@@UEAAJPEAUSipcPortEvent@@@Z.c)
 *     ?AddReceivedSection@SipcPort@@IEAAXPEAVSipcSection@@PEAUSipcPortEvent@@@Z @ 0x18010B63C (-AddReceivedSection@SipcPort@@IEAAXPEAVSipcSection@@PEAUSipcPortEvent@@@Z.c)
 *     ?Disconnect@SipcPort@@UEAAXXZ @ 0x18010CDB0 (-Disconnect@SipcPort@@UEAAXXZ.c)
 * Callees:
 *     ?IncreaseSectionEventCount@SipcPort@@AEAAXI@Z @ 0x18010D5B0 (-IncreaseSectionEventCount@SipcPort@@AEAAXI@Z.c)
 */

void __fastcall SipcPort::DisconnectSection(SipcPort *this, struct SipcSection *a2)
{
  if ( *((_DWORD *)a2 + 22) == 1 )
  {
    *((_DWORD *)a2 + 22) = 2;
    SipcPort::IncreaseSectionEventCount(this, (unsigned int)a2);
  }
}
