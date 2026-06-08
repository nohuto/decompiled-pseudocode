/*
 * XREFs of sub_14003C338 @ 0x14003C338
 * Callers:
 *     sub_1400046C0 @ 0x1400046C0 (sub_1400046C0.c)
 * Callees:
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_14003C338(__int64 a1, _QWORD *a2)
{
  int v3; // ebx
  int v5; // [rsp+28h] [rbp-30h]
  __int128 v6; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]
  int v8; // [rsp+60h] [rbp+8h] BYREF

  v6 = 0LL;
  v7 = 0LL;
  LODWORD(v6) = *(_DWORD *)(a1 + 56);
  v8 = 24;
  v3 = ((__int64 (__fastcall *)(__int64, __int64, __int128 *, int *))HalDispatchTable->HalQuerySystemInformation)(
         29LL,
         24LL,
         &v6,
         &v8);
  if ( v3 >= 0 )
  {
    *a2 = *((_QWORD *)&v6 + 1);
    a2[1] = v7;
  }
  else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
  {
    v5 = v3;
    sub_1400050F8((__int64)off_140018050->DeviceExtension, 2u, 4u, 0x17u, (__int64)&unk_140014CC8, v5);
  }
  return (unsigned int)v3;
}
