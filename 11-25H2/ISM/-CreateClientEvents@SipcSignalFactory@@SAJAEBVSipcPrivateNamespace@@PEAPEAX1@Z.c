/*
 * XREFs of ?CreateClientEvents@SipcSignalFactory@@SAJAEBVSipcPrivateNamespace@@PEAPEAX1@Z @ 0x18010C0D8
 * Callers:
 *     ?Reconnect@SipcEndpoint@@UEAAJ_K@Z @ 0x18010E020 (-Reconnect@SipcEndpoint@@UEAAJ_K@Z.c)
 * Callees:
 *     ?Reset@SipcWin32Handle@@QEAAXXZ @ 0x180094CA0 (-Reset@SipcWin32Handle@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     swprintf_s @ 0x18009DAF4 (swprintf_s.c)
 */

__int64 __fastcall SipcSignalFactory::CreateClientEvents(const struct SipcPrivateNamespace *a1, void **a2, void **a3)
{
  signed int LastError; // eax
  unsigned int v7; // ebx
  void *v9; // rbx
  signed int v10; // eax
  HANDLE v11; // rax
  signed int v12; // eax
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE v14; // [rsp+38h] [rbp-C8h] BYREF
  void *v15; // [rsp+40h] [rbp-C0h] BYREF
  struct _SECURITY_ATTRIBUTES EventAttributes; // [rsp+48h] [rbp-B8h] BYREF
  wchar_t Buffer[56]; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t Name[56]; // [rsp+D0h] [rbp-30h] BYREF

  *a2 = 0LL;
  *a3 = 0LL;
  SecurityDescriptor = 0LL;
  if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(L"D:(A;;GA;;;WD)", 1u, &SecurityDescriptor, 0LL) )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    v7 = -2147418113;
    if ( LastError < 0 )
      v7 = LastError;
    goto LABEL_6;
  }
  *(&EventAttributes.nLength + 1) = 0;
  *(&EventAttributes.bInheritHandle + 1) = 0;
  EventAttributes.bInheritHandle = 0;
  EventAttributes.lpSecurityDescriptor = SecurityDescriptor;
  EventAttributes.nLength = 24;
  swprintf_s(Buffer, 0x33uLL, L"%s\\%s", (char *)a1 + 8, L"ClientSignal");
  v14 = CreateEventW(&EventAttributes, 0, 0, Buffer);
  v9 = v14;
  if ( !v14 )
  {
    v10 = GetLastError();
    if ( v10 > 0 )
      v10 = (unsigned __int16)v10 | 0x80070000;
    v7 = -2147418113;
    if ( v10 < 0 )
      v7 = v10;
LABEL_14:
    SipcWin32Handle::Reset(&v14);
LABEL_6:
    if ( SecurityDescriptor )
      LocalFree(SecurityDescriptor);
    return v7;
  }
  swprintf_s(Name, 0x33uLL, L"%s\\%s", (char *)a1 + 8, L"ServerSignal");
  v11 = CreateEventW(&EventAttributes, 0, 0, Name);
  v15 = v11;
  if ( !v11 )
  {
    v12 = GetLastError();
    if ( v12 > 0 )
      v12 = (unsigned __int16)v12 | 0x80070000;
    v7 = -2147418113;
    if ( v12 < 0 )
      v7 = v12;
    SipcWin32Handle::Reset(&v15);
    goto LABEL_14;
  }
  v14 = 0LL;
  v15 = 0LL;
  *a2 = v9;
  *a3 = v11;
  SipcWin32Handle::Reset(&v15);
  SipcWin32Handle::Reset(&v14);
  if ( SecurityDescriptor )
    LocalFree(SecurityDescriptor);
  return 0LL;
}
