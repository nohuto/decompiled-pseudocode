/*
 * XREFs of ?GetStorageProperty@SC_DEVICE@@QEAAJW4_STORAGE_PROPERTY_ID@@PEAPEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x1406936B8
 * Callers:
 *     ?Initialize@SC_DISK@@UEAAJXZ @ 0x1406925D0 (-Initialize@SC_DISK@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ?Allocate@SC_ENV@@SAPEAX_KKEK@Z @ 0x140701E20 (-Allocate@SC_ENV@@SAPEAX_KKEK@Z.c)
 *     PspUserApcKernelRoutine @ 0x1408E08C0 (PspUserApcKernelRoutine.c)
 */

__int64 __fastcall SC_DEVICE::GetStorageProperty(
        SC_DEVICE *this,
        enum _STORAGE_PROPERTY_ID a2,
        struct _STORAGE_DESCRIPTOR_HEADER **a3)
{
  unsigned int v5; // edx
  int v6; // edi
  unsigned __int8 v7; // r8
  unsigned int v8; // r9d
  unsigned int Size; // esi
  struct _STORAGE_DESCRIPTOR_HEADER *v10; // rbx

  *a3 = 0LL;
  v6 = guard_dispatch_icall_no_overrides(this);
  if ( v6 >= 0 )
  {
    Size = 0;
    while ( 1 )
    {
      v10 = (struct _STORAGE_DESCRIPTOR_HEADER *)SC_ENV::Allocate(Size, v5, v7, v8);
      if ( !v10 )
        break;
      v6 = guard_dispatch_icall_no_overrides(this);
      if ( ((v6 + 0x80000000) & 0x80000000) == 0 && v6 != -2147483643 )
        goto LABEL_10;
      if ( v10->Size <= Size )
      {
        v10->Size = Size;
        v6 = guard_dispatch_icall_no_overrides(this);
        if ( v6 >= 0 )
        {
          *a3 = v10;
          return (unsigned int)v6;
        }
LABEL_10:
        PspUserApcKernelRoutine(v10);
        return (unsigned int)v6;
      }
      Size = v10->Size;
      PspUserApcKernelRoutine(v10);
    }
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v6;
}
