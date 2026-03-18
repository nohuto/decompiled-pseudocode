/*
 * XREFs of ?GetStorageProperty@SC_DEVICE@@QEAAJW4_STORAGE_PROPERTY_ID@@PEAPEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x14069EA58
 * Callers:
 *     ?Initialize@SC_DISK@@UEAAJXZ @ 0x14069D970 (-Initialize@SC_DISK@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ?Allocate@SC_ENV@@SAPEAX_KKEK@Z @ 0x14070DD00 (-Allocate@SC_ENV@@SAPEAX_KKEK@Z.c)
 *     PspUserApcKernelRoutine @ 0x1408A8FB0 (PspUserApcKernelRoutine.c)
 */

__int64 __fastcall SC_DEVICE::GetStorageProperty(
        SC_DEVICE *this,
        enum _STORAGE_PROPERTY_ID a2,
        struct _STORAGE_DESCRIPTOR_HEADER **a3,
        __int64 a4)
{
  unsigned int v6; // edx
  int v7; // edi
  unsigned __int8 v8; // r8
  unsigned int v9; // r9d
  unsigned int Size; // esi
  struct _STORAGE_DESCRIPTOR_HEADER *v11; // rbx
  __int64 v12; // r9
  SIZE_T NumberOfBytes; // [rsp+40h] [rbp-48h] BYREF
  _DWORD v15[4]; // [rsp+48h] [rbp-40h] BYREF

  *a3 = 0LL;
  LODWORD(NumberOfBytes) = 0;
  v15[2] = 0;
  v7 = guard_dispatch_icall_no_overrides(this, 6LL, &NumberOfBytes, a4);
  if ( v7 >= 0 )
  {
    v15[1] = 0;
    Size = NumberOfBytes;
    v15[0] = 6;
    while ( 1 )
    {
      v11 = (struct _STORAGE_DESCRIPTOR_HEADER *)SC_ENV::Allocate(Size, v6, v8, v9);
      if ( !v11 )
        break;
      v7 = guard_dispatch_icall_no_overrides(this, 2954240LL, v15, 12LL);
      if ( ((v7 + 0x80000000) & 0x80000000) == 0 && v7 != -2147483643 )
        goto LABEL_10;
      if ( v11->Size <= Size )
      {
        v11->Size = Size;
        v7 = guard_dispatch_icall_no_overrides(this, 6LL, v11, v12);
        if ( v7 >= 0 )
        {
          *a3 = v11;
          return (unsigned int)v7;
        }
LABEL_10:
        PspUserApcKernelRoutine(v11);
        return (unsigned int)v7;
      }
      Size = v11->Size;
      PspUserApcKernelRoutine(v11);
    }
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v7;
}
