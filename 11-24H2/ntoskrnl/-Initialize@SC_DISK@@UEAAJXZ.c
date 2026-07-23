/*
 * XREFs of ?Initialize@SC_DISK@@UEAAJXZ @ 0x14069EA00
 * Callers:
 *     ?Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x14070B9D8 (-Initialize@NT_DISK@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     ?GenerateId@SC_DISK@@AEAAJXZ @ 0x14069E7AC (-GenerateId@SC_DISK@@AEAAJXZ.c)
 *     ?GetStorageProperty@SC_DEVICE@@QEAAJW4_STORAGE_PROPERTY_ID@@PEAPEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x14069FAF8 (-GetStorageProperty@SC_DEVICE@@QEAAJW4_STORAGE_PROPERTY_ID@@PEAPEAU_STORAGE_DESCRIPTOR_HEADER@@@.c)
 *     ?Initialize@SC_DEVICE@@UEAAJXZ @ 0x14069FC90 (-Initialize@SC_DEVICE@@UEAAJXZ.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SC_DISK::Initialize(SC_DISK *this)
{
  __int64 result; // rax
  __int64 v3; // rax
  _QWORD *v4; // rdi
  enum _STORAGE_PROPERTY_ID v5; // edx
  unsigned int v6; // eax
  struct _STORAGE_DESCRIPTOR_HEADER *v7; // [rsp+40h] [rbp-48h] BYREF
  int v8; // [rsp+48h] [rbp-40h]
  __int128 v9; // [rsp+4Ch] [rbp-3Ch]
  __int128 v10; // [rsp+5Ch] [rbp-2Ch]
  int v11; // [rsp+6Ch] [rbp-1Ch]

  v8 = 0;
  v9 = 0LL;
  v11 = 0;
  v10 = 0LL;
  result = SC_DEVICE::Initialize(this);
  if ( (int)result >= 0 )
  {
    v3 = *((_QWORD *)this + 1) - *(_QWORD *)&GUID_DEVCLASS_SMRDISK.Data1;
    if ( !v3 )
      v3 = *((_QWORD *)this + 2) - *(_QWORD *)GUID_DEVCLASS_SMRDISK.Data4;
    if ( !v3 )
      *((_DWORD *)this + 50) |= 1u;
    v4 = (_QWORD *)((char *)this + 208);
    if ( (int)guard_dispatch_icall_no_overrides(this, 475228LL) < 0 || !*v4 )
    {
      result = guard_dispatch_icall_no_overrides(this, 458912LL);
      if ( (int)result < 0 )
        return result;
      *v4 = *(_QWORD *)((char *)&v10 + 4);
    }
    result = guard_dispatch_icall_no_overrides(this, 458752LL);
    if ( (int)result >= 0 )
    {
      v6 = *((_DWORD *)this + 59);
      if ( v6 )
      {
        v7 = 0LL;
        _BitScanReverse(&v6, v6);
        *((_DWORD *)this + 60) = v6;
        *((_QWORD *)this + 31) = *v4 >> *((_DWORD *)this + 60);
        if ( (int)SC_DEVICE::GetStorageProperty(this, v5, &v7) >= 0 )
          guard_dispatch_icall_no_overrides(this, 6LL);
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
