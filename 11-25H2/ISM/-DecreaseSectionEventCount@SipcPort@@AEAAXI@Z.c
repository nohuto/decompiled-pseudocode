/*
 * XREFs of ?DecreaseSectionEventCount@SipcPort@@AEAAXI@Z @ 0x18010CB84
 * Callers:
 *     ?AddReceivedSection@SipcPort@@IEAAXPEAVSipcSection@@PEAUSipcPortEvent@@@Z @ 0x18010B63C (-AddReceivedSection@SipcPort@@IEAAXPEAVSipcSection@@PEAUSipcPortEvent@@@Z.c)
 *     ?GetSectionEvent@SipcPort@@QEAAJPEAUSipcPortEvent@@@Z @ 0x18010D0F0 (-GetSectionEvent@SipcPort@@QEAAJPEAUSipcPortEvent@@@Z.c)
 *     ?Reconnect@SipcEndpoint@@UEAAJ_K@Z @ 0x18010E020 (-Reconnect@SipcEndpoint@@UEAAJ_K@Z.c)
 * Callees:
 *     SipcFailFast @ 0x18010E99C (SipcFailFast.c)
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
