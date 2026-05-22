/*
 * XREFs of ?CreateProxyEvents@SipcSignalFactory@@SAJGAEBVSipcPrivateNamespace@@@Z @ 0x18010E670
 * Callers:
 *     ?Reconnect@SipcEndpoint@@UEAAJ_K@Z @ 0x18010FF30 (-Reconnect@SipcEndpoint@@UEAAJ_K@Z.c)
 * Callees:
 *     ?Reset@SipcFileHandle@@QEAAXXZ @ 0x18009BAC8 (-Reset@SipcFileHandle@@QEAAXXZ.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     swprintf_s @ 0x18009DCC4 (swprintf_s.c)
 */

__int64 __fastcall SipcSignalFactory::CreateProxyEvents(unsigned __int16 a1, const struct SipcPrivateNamespace *a2)
{
  unsigned int v3; // esi
  signed int LastError; // eax
  unsigned int v5; // ebx
  HANDLE FileW; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t Buffer[264]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v9; // [rsp+260h] [rbp+160h]
  wchar_t InBuffer[264]; // [rsp+270h] [rbp+170h] BYREF
  __int64 v11; // [rsp+480h] [rbp+380h]

  v3 = a1;
  FileW = CreateFileW(L"\\\\.\\XVmCtrl", 0xC0000000, 3u, 0LL, 3u, 0, 0LL);
  if ( FileW == (HANDLE)-1LL )
    goto LABEL_3;
  memset_0(Buffer, 0, 0x218uLL);
  swprintf_s(Buffer, 0x104uLL, L"%4.4X_%s", v3, L"ClientSignal");
  v9 = *(_QWORD *)a2;
  Buffer[260] = 3;
  if ( !DeviceIoControl(FileW, 0x1501FCu, Buffer, 0x218u, 0LL, 0, 0LL, 0LL) )
    goto LABEL_3;
  memset_0(InBuffer, 0, 0x218uLL);
  swprintf_s(InBuffer, 0x104uLL, L"%4.4X_%s", v3, L"ServerSignal");
  v11 = *(_QWORD *)a2;
  InBuffer[260] = 259;
  if ( DeviceIoControl(FileW, 0x1501FCu, InBuffer, 0x218u, 0LL, 0, 0LL, 0LL) )
  {
    v5 = 0;
  }
  else
  {
LABEL_3:
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    v5 = -2147418113;
    if ( LastError < 0 )
      v5 = LastError;
  }
  SipcFileHandle::Reset(&FileW);
  return v5;
}
