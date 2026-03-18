/*
 * XREFs of SmmIommuUnmapIdentityRange @ 0x14003A7F0
 * Callers:
 *     SmmUnmapIommu @ 0x14003A748 (SmmUnmapIommu.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SmmIommuUnmapIdentityRange(__int64 a1, _DWORD *a2)
{
  unsigned __int64 v2; // rax
  _DWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF
  _DWORD *v5; // [rsp+28h] [rbp-20h]
  unsigned __int64 v6; // [rsp+30h] [rbp-18h]

  if ( (unsigned int)dword_14015E518 < 2 )
    return ((__int64 (__fastcall *)(__int64, _DWORD *, _QWORD))qword_14015E570)(a1, a2, (unsigned int)dword_14015E518);
  v4[1] = 0;
  v5 = a2 + 12;
  v2 = (unsigned __int64)(unsigned int)a2[10] >> 12;
  v4[0] = 2;
  v6 = v2;
  if ( dword_14015E518 == 2 || dword_14015E518 == 3 )
  {
    a2 = v4;
    return ((__int64 (__fastcall *)(__int64, _DWORD *, _QWORD))qword_14015E570)(a1, a2, (unsigned int)dword_14015E518);
  }
  return 3221225473LL;
}
