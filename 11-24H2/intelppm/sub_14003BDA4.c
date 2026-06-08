/*
 * XREFs of sub_14003BDA4 @ 0x14003BDA4
 * Callers:
 *     sub_14003B4B4 @ 0x14003B4B4 (sub_14003B4B4.c)
 * Callees:
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14003BDA4(__int64 a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6, _DWORD *a7)
{
  __int64 v7; // rcx
  int v11; // ebx
  int v13; // [rsp+28h] [rbp-60h]
  __int128 v14; // [rsp+30h] [rbp-58h] BYREF
  __int64 v15; // [rsp+40h] [rbp-48h]

  v7 = *(_QWORD *)(a1 + 1120);
  v15 = 0LL;
  v14 = 0LL;
  v11 = PoFxProcessorNotification(v7, 11LL, &v14);
  if ( v11 >= 0 )
  {
    *a2 = v14;
    *a3 = DWORD1(v14);
    *a4 = DWORD2(v14);
    *a5 = HIDWORD(v14);
    *a6 = v15;
    *a7 = HIDWORD(v15);
  }
  else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
  {
    v13 = v11;
    sub_1400050F8((__int64)off_140018050->DeviceExtension, 2u, 2u, 0x20u, (__int64)&unk_140014CB8, v13);
  }
  return (unsigned int)v11;
}
