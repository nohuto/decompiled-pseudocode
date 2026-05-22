/*
 * XREFs of ?GetBoundaryDescriptorAndInitializeName@SipcPrivateNamespace@@AEAAJPEAPEAX@Z @ 0x18010EE90
 * Callers:
 *     ?Create@SipcPrivateNamespace@@QEAAJXZ @ 0x18010DE08 (-Create@SipcPrivateNamespace@@QEAAJXZ.c)
 *     ?Open@SipcPrivateNamespace@@QEAAJAEBUSipcPrivateNamespaceAttributes@@@Z @ 0x18010F8B8 (-Open@SipcPrivateNamespace@@QEAAJAEBUSipcPrivateNamespaceAttributes@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 */

__int64 __fastcall SipcPrivateNamespace::GetBoundaryDescriptorAndInitializeName(SipcPrivateNamespace *this, void **a2)
{
  char *v3; // rcx
  unsigned __int64 v5; // r9
  _WORD *v6; // r8
  unsigned int v7; // edx
  signed int LastError; // eax
  unsigned int v9; // ebx
  HANDLE BoundaryDescriptor; // [rsp+20h] [rbp-20h] BYREF
  int RequiredSid; // [rsp+28h] [rbp-18h] BYREF
  __int64 v13; // [rsp+2Ch] [rbp-14h]

  *a2 = 0LL;
  v3 = (char *)this + 8;
  v5 = 0LL;
  v6 = (_WORD *)((char *)this + 18);
  *(_QWORD *)v3 = SipcPrivateNamespace::NamespacePrefix;
  *((_DWORD *)v3 + 2) = 95;
  do
  {
    v7 = *((unsigned __int8 *)this + v5++ + 84);
    *v6 = a0123456789abcd[(unsigned __int64)v7 >> 4];
    v6 += 2;
    *(v6 - 1) = a0123456789abcd[v7 & 0xF];
  }
  while ( v5 < 0x10 );
  *v6 = 0;
  BoundaryDescriptor = CreateBoundaryDescriptorW((LPCWSTR)v3, 0);
  if ( BoundaryDescriptor
    && (RequiredSid = 257, v13 = 0x1000000LL, AddSIDToBoundaryDescriptor(&BoundaryDescriptor, &RequiredSid))
    && (IsWellKnownSid((char *)this + 100, WinNullSid)
     || AddSIDToBoundaryDescriptor(&BoundaryDescriptor, (char *)this + 100)) )
  {
    *a2 = BoundaryDescriptor;
    return 0LL;
  }
  else
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    v9 = -2147418113;
    if ( LastError < 0 )
      v9 = LastError;
    if ( BoundaryDescriptor )
      DeleteBoundaryDescriptor(BoundaryDescriptor);
    return v9;
  }
}
