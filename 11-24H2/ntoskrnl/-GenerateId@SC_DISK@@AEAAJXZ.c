/*
 * XREFs of ?GenerateId@SC_DISK@@AEAAJXZ @ 0x14069E7AC
 * Callers:
 *     ?Initialize@SC_DISK@@UEAAJXZ @ 0x14069EA00 (-Initialize@SC_DISK@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ?CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z @ 0x14070B9C0 (-CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z.c)
 */

__int64 __fastcall SC_DISK::GenerateId(SC_DISK *this)
{
  __int64 result; // rax
  struct _GUID *v3; // rcx
  _BYTE v4[20]; // [rsp+50h] [rbp-28h] BYREF

  memset(v4, 0, sizeof(v4));
  result = guard_dispatch_icall_no_overrides(this, 2953348LL);
  v3 = (struct _GUID *)((char *)this + 272);
  if ( (int)result < 0 )
    return SC_ENV::CreateGuid(v3);
  *v3 = *(struct _GUID *)&v4[4];
  return result;
}
