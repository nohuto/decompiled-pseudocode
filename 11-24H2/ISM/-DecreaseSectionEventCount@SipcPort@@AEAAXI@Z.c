/*
 * XREFs of ?DecreaseSectionEventCount@SipcPort@@AEAAXI@Z @ 0x18010EA94
 * Callers:
 *     ?AddReceivedSection@SipcPort@@IEAAXPEAVSipcSection@@PEAUSipcPortEvent@@@Z @ 0x18010D54C (-AddReceivedSection@SipcPort@@IEAAXPEAVSipcSection@@PEAUSipcPortEvent@@@Z.c)
 *     ?GetSectionEvent@SipcPort@@QEAAJPEAUSipcPortEvent@@@Z @ 0x18010F000 (-GetSectionEvent@SipcPort@@QEAAJPEAUSipcPortEvent@@@Z.c)
 *     ?Reconnect@SipcEndpoint@@UEAAJ_K@Z @ 0x18010FF30 (-Reconnect@SipcEndpoint@@UEAAJ_K@Z.c)
 * Callees:
 *     SipcFailFast @ 0x1801108AC (SipcFailFast.c)
 */

void __fastcall SipcPort::DecreaseSectionEventCount(SipcPort *this)
{
  int v1; // eax
  int v2; // eax

  v1 = *((_DWORD *)this + 10);
  if ( !v1 )
  {
    SipcFailFast(2147549183LL);
    __debugbreak();
  }
  v2 = v1 - 1;
  *((_DWORD *)this + 10) = v2;
  if ( !v2 )
    ResetEvent(*((HANDLE *)this + 4));
}
