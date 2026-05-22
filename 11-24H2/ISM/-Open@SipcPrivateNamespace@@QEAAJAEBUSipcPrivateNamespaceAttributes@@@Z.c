/*
 * XREFs of ?Open@SipcPrivateNamespace@@QEAAJAEBUSipcPrivateNamespaceAttributes@@@Z @ 0x18010F8B8
 * Callers:
 *     ?AcceptClientConnection@AlpcPort@@UEAAJIPEAXPEAPEAX1PEAPEAVSipcPort@@@Z @ 0x18010D030 (-AcceptClientConnection@AlpcPort@@UEAAJIPEAXPEAPEAX1PEAPEAVSipcPort@@@Z.c)
 * Callees:
 *     ?GetBoundaryDescriptorAndInitializeName@SipcPrivateNamespace@@AEAAJPEAPEAX@Z @ 0x18010EE90 (-GetBoundaryDescriptorAndInitializeName@SipcPrivateNamespace@@AEAAJPEAPEAX@Z.c)
 */

__int64 __fastcall SipcPrivateNamespace::Open(
        SipcPrivateNamespace *this,
        const struct SipcPrivateNamespaceAttributes *a2)
{
  __int128 v4; // xmm0
  int BoundaryDescriptorAndInitializeName; // ebx
  HANDLE v7; // rbx
  HANDLE v8; // rax
  signed int LastError; // eax
  unsigned int v10; // edi
  HANDLE BoundaryDescriptor; // [rsp+38h] [rbp+10h] BYREF

  if ( !IsValidSid((char *)a2 + 16) || !IsValidSid((char *)a2 + 84) )
    return 2147942487LL;
  v4 = *(_OWORD *)a2;
  BoundaryDescriptor = 0LL;
  *(_OWORD *)((char *)this + 84) = v4;
  *(_OWORD *)((char *)this + 100) = *((_OWORD *)a2 + 1);
  *(_OWORD *)((char *)this + 116) = *((_OWORD *)a2 + 2);
  *(_OWORD *)((char *)this + 132) = *((_OWORD *)a2 + 3);
  *(_OWORD *)((char *)this + 148) = *((_OWORD *)a2 + 4);
  *(_OWORD *)((char *)this + 164) = *((_OWORD *)a2 + 5);
  *(_OWORD *)((char *)this + 180) = *((_OWORD *)a2 + 6);
  *(_OWORD *)((char *)this + 196) = *((_OWORD *)a2 + 7);
  *(_OWORD *)((char *)this + 212) = *((_OWORD *)a2 + 8);
  *(_QWORD *)((char *)this + 228) = *((_QWORD *)a2 + 18);
  BoundaryDescriptorAndInitializeName = SipcPrivateNamespace::GetBoundaryDescriptorAndInitializeName(
                                          this,
                                          &BoundaryDescriptor);
  if ( BoundaryDescriptorAndInitializeName >= 0 )
  {
    v7 = BoundaryDescriptor;
    v8 = OpenPrivateNamespaceW(BoundaryDescriptor, (LPCWSTR)this + 4);
    *(_QWORD *)this = v8;
    if ( v8 )
    {
      if ( v7 )
        DeleteBoundaryDescriptor(v7);
      return 0LL;
    }
    else
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      v10 = -2147418113;
      if ( LastError < 0 )
        v10 = LastError;
      if ( v7 )
        DeleteBoundaryDescriptor(v7);
      return v10;
    }
  }
  else
  {
    if ( BoundaryDescriptor )
      DeleteBoundaryDescriptor(BoundaryDescriptor);
    return (unsigned int)BoundaryDescriptorAndInitializeName;
  }
}
