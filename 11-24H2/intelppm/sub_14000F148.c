/*
 * XREFs of sub_14000F148 @ 0x14000F148
 * Callers:
 *     sub_1400385B0 @ 0x1400385B0 (sub_1400385B0.c)
 *     sub_14003BFC0 @ 0x14003BFC0 (sub_14003BFC0.c)
 * Callees:
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 */

__int64 __fastcall sub_14000F148(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v3; // rcx
  int v6; // ebx
  int v8; // [rsp+28h] [rbp-10h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(a1 + 1120);
  v9 = 0LL;
  v6 = PoFxProcessorNotification(v3, 12LL, &v9);
  if ( v6 >= 0 )
  {
    *a2 = v9;
    *a3 = HIDWORD(v9);
  }
  else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
  {
    v8 = v6;
    sub_1400050F8((__int64)off_140018050->DeviceExtension, 2u, 2u, 0x23u, (__int64)&unk_140014CB8, v8);
  }
  return (unsigned int)v6;
}
