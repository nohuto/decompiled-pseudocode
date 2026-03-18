/*
 * XREFs of SmmIommuMapLogicalRange @ 0x14003B000
 * Callers:
 *     SmmMapIommu @ 0x14003AF70 (SmmMapIommu.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 SmmIommuMapLogicalRange(__int64 a1, __int64 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v5[3]; // [rsp+48h] [rbp-18h] BYREF
  va_list va; // [rsp+88h] [rbp+28h] BYREF

  va_start(va, a3);
  if ( (unsigned int)dword_14015E518 < 2 )
    return ((__int64 (__fastcall *)(__int64, __int64))qword_14015E558)(a1, 3LL);
  v5[0] = 2LL;
  v5[1] = a3 + 48;
  v5[2] = (unsigned __int64)*(unsigned int *)(a3 + 40) >> 12;
  v4 = 0LL;
  if ( dword_14015E518 == 2 || dword_14015E518 == 3 )
    return ((__int64 (__fastcall *)(__int64, __int64, _QWORD *, __int64 *, _QWORD, _QWORD, __int64 *))qword_14015E558)(
             a1,
             3LL,
             v5,
             (__int64 *)va,
             0LL,
             0LL,
             &v4);
  else
    return 3221225473LL;
}
