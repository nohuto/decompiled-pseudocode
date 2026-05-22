/*
 * XREFs of ?Create@SipcPrivateNamespace@@QEAAJXZ @ 0x18010DE08
 * Callers:
 *     ?Reconnect@SipcEndpoint@@UEAAJ_K@Z @ 0x18010FF30 (-Reconnect@SipcEndpoint@@UEAAJ_K@Z.c)
 * Callees:
 *     ?GetBoundaryDescriptorAndInitializeName@SipcPrivateNamespace@@AEAAJPEAPEAX@Z @ 0x18010EE90 (-GetBoundaryDescriptorAndInitializeName@SipcPrivateNamespace@@AEAAJPEAPEAX@Z.c)
 *     ?GetSecurityDescriptor@SipcPrivateNamespace@@AEAAJPEAPEAX@Z @ 0x18010F0A4 (-GetSecurityDescriptor@SipcPrivateNamespace@@AEAAJPEAPEAX@Z.c)
 *     ?InitializeForCurrentProcess@SipcPrivateNamespaceAttributes@@QEAAJXZ @ 0x18010F508 (-InitializeForCurrentProcess@SipcPrivateNamespaceAttributes@@QEAAJXZ.c)
 */

__int64 __fastcall SipcPrivateNamespace::Create(SipcPrivateNamespace *this)
{
  __int64 result; // rax
  int BoundaryDescriptorAndInitializeName; // ebx
  HANDLE v4; // rbx
  HLOCAL v5; // rdi
  HANDLE v6; // rax
  signed int LastError; // eax
  unsigned int v8; // esi
  _SECURITY_ATTRIBUTES PrivateNamespaceAttributes; // [rsp+20h] [rbp-20h] BYREF
  HANDLE BoundaryDescriptor; // [rsp+60h] [rbp+20h] BYREF
  HLOCAL hMem; // [rsp+68h] [rbp+28h] BYREF

  result = SipcPrivateNamespaceAttributes::InitializeForCurrentProcess((PUCHAR)this + 84);
  if ( (int)result < 0 )
    return result;
  BoundaryDescriptor = 0LL;
  BoundaryDescriptorAndInitializeName = SipcPrivateNamespace::GetBoundaryDescriptorAndInitializeName(
                                          this,
                                          &BoundaryDescriptor);
  if ( BoundaryDescriptorAndInitializeName < 0 )
    goto LABEL_3;
  hMem = 0LL;
  BoundaryDescriptorAndInitializeName = SipcPrivateNamespace::GetSecurityDescriptor(this, &hMem);
  if ( BoundaryDescriptorAndInitializeName < 0 )
  {
    if ( hMem )
      LocalFree(hMem);
LABEL_3:
    if ( BoundaryDescriptor )
      DeleteBoundaryDescriptor(BoundaryDescriptor);
    return (unsigned int)BoundaryDescriptorAndInitializeName;
  }
  v4 = BoundaryDescriptor;
  v5 = hMem;
  PrivateNamespaceAttributes.bInheritHandle = 0;
  *(_QWORD *)&PrivateNamespaceAttributes.nLength = 24LL;
  PrivateNamespaceAttributes.lpSecurityDescriptor = hMem;
  *(&PrivateNamespaceAttributes.bInheritHandle + 1) = 0;
  v6 = CreatePrivateNamespaceW(&PrivateNamespaceAttributes, BoundaryDescriptor, (LPCWSTR)this + 4);
  *(_QWORD *)this = v6;
  if ( v6 )
  {
    if ( v5 )
      LocalFree(v5);
    if ( v4 )
      DeleteBoundaryDescriptor(v4);
    return 0LL;
  }
  else
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    v8 = -2147418113;
    if ( LastError < 0 )
      v8 = LastError;
    if ( v5 )
      LocalFree(v5);
    if ( v4 )
      DeleteBoundaryDescriptor(v4);
    return v8;
  }
}
