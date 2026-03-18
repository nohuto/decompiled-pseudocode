/*
 * XREFs of ?Initialize@SC_DISK@@UEAAJXZ @ 0x14069D970
 * Callers:
 *     ?Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x14070DE38 (-Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     ?GenerateId@SC_DISK@@AEAAJXZ @ 0x14069D71C (-GenerateId@SC_DISK@@AEAAJXZ.c)
 *     ?GetStorageProperty@SC_DEVICE@@QEAAJW4_STORAGE_PROPERTY_ID@@PEAPEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x14069EA58 (-GetStorageProperty@SC_DEVICE@@QEAAJW4_STORAGE_PROPERTY_ID@@PEAPEAU_STORAGE_DESCRIPTOR_HEADER@@@.c)
 *     ?Initialize@SC_DEVICE@@UEAAJXZ @ 0x14069EBE0 (-Initialize@SC_DEVICE@@UEAAJXZ.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SC_DISK::Initialize(SC_DISK *this)
{
  __int64 result; // rax
  __int64 v3; // rax
  _QWORD *v4; // rdi
  enum _STORAGE_PROPERTY_ID v5; // edx
  unsigned int v6; // eax
  __int64 v7; // r9
  struct _STORAGE_DESCRIPTOR_HEADER *v8; // [rsp+40h] [rbp-48h] BYREF
  int v9; // [rsp+48h] [rbp-40h]
  __int128 v10; // [rsp+4Ch] [rbp-3Ch]
  __int128 v11; // [rsp+5Ch] [rbp-2Ch]
  int v12; // [rsp+6Ch] [rbp-1Ch]

  v9 = 0;
  v10 = 0LL;
  v12 = 0;
  v11 = 0LL;
  result = SC_DEVICE::Initialize(this);
  if ( (int)result >= 0 )
  {
    v3 = *((_QWORD *)this + 1) - *(_QWORD *)&GUID_DEVCLASS_SMRDISK.Data1;
    if ( !v3 )
      v3 = *((_QWORD *)this + 2) - *(_QWORD *)GUID_DEVCLASS_SMRDISK.Data4;
    if ( !v3 )
      *((_DWORD *)this + 50) |= 1u;
    v4 = (_QWORD *)((char *)this + 208);
    if ( (int)guard_dispatch_icall_no_overrides(this, 475228LL, 0LL, 0LL) < 0 || !*v4 )
    {
      result = guard_dispatch_icall_no_overrides(this, 458912LL, 0LL, 0LL);
      if ( (int)result < 0 )
        return result;
      *v4 = *(_QWORD *)((char *)&v11 + 4);
    }
    result = guard_dispatch_icall_no_overrides(this, 458752LL, 0LL, 0LL);
    if ( (int)result >= 0 )
    {
      v6 = *((_DWORD *)this + 59);
      if ( v6 )
      {
        v8 = 0LL;
        _BitScanReverse(&v6, v6);
        *((_DWORD *)this + 60) = v6;
        *((_QWORD *)this + 31) = *v4 >> *((_DWORD *)this + 60);
        if ( (int)SC_DEVICE::GetStorageProperty(this, v5, &v8) >= 0 )
          guard_dispatch_icall_no_overrides(this, 6LL, v8, v7);
        return SC_DISK::GenerateId(this);
      }
      else
      {
        return 3221225635LL;
      }
    }
  }
  return result;
}
