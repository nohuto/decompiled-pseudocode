/*
 * XREFs of sub_140028380 @ 0x140028380
 * Callers:
 *     sub_140029F8C @ 0x140029F8C (sub_140029F8C.c)
 *     sub_140033F84 @ 0x140033F84 (sub_140033F84.c)
 *     sub_140034144 @ 0x140034144 (sub_140034144.c)
 *     sub_140034388 @ 0x140034388 (sub_140034388.c)
 *     sub_1400347CC @ 0x1400347CC (sub_1400347CC.c)
 * Callees:
 *     sub_140003BC4 @ 0x140003BC4 (sub_140003BC4.c)
 *     sub_140009BAC @ 0x140009BAC (sub_140009BAC.c)
 *     sub_14000CE88 @ 0x14000CE88 (sub_14000CE88.c)
 *     sub_14000D180 @ 0x14000D180 (sub_14000D180.c)
 *     sub_140034F60 @ 0x140034F60 (sub_140034F60.c)
 */

__int64 __fastcall sub_140028380(unsigned __int8 *a1, const char *a2, PDEVICE_OBJECT a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r9
  PDEVICE_OBJECT v11; // rcx
  unsigned __int16 v12; // r9
  int v13; // [rsp+20h] [rbp-28h]
  __int64 v14; // [rsp+30h] [rbp-18h]

  result = *a1;
  if ( (_BYTE)result == 126 )
  {
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      if ( LOWORD(off_140018050->DeviceType) )
        return sub_140009BAC(
                 (__int64)off_140018050->DeviceExtension,
                 5u,
                 2u,
                 0xA0u,
                 (__int64)&unk_140012FE8,
                 a2,
                 *((_DWORD *)a1 + 1));
    }
    return result;
  }
  if ( !(_BYTE)result && !*(_QWORD *)(a1 + 4) )
  {
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 && LOWORD(off_140018050->DeviceType) )
      return sub_140003BC4((__int64)off_140018050->DeviceExtension, 5u, 2u, 0xA1u, (__int64)&unk_140012FE8, a2);
    return result;
  }
  if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
  {
    a3 = off_140018050;
    if ( LOWORD(off_140018050->DeviceType) )
    {
      v7 = sub_140034F60(*a1, *a1);
      result = sub_14000CE88(*(_QWORD *)(v8 + 64), v9, v8, v10, v13, a2, v9, v7);
    }
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      if ( LOWORD(off_140018050->DeviceType) )
      {
        LODWORD(v14) = a1[1];
        result = sub_140009BAC((__int64)off_140018050->DeviceExtension, 5u, 2u, 0xA3u, (__int64)&unk_140012FE8, a2, v14);
      }
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 && LOWORD(off_140018050->DeviceType) )
      {
        LODWORD(v14) = a1[2];
        result = sub_140009BAC((__int64)off_140018050->DeviceExtension, 5u, 2u, 0xA4u, (__int64)&unk_140012FE8, a2, v14);
      }
    }
  }
  if ( *a1 == 10 )
  {
    if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
      return result;
    v11 = off_140018050;
    if ( !LOWORD(off_140018050->DeviceType) )
      goto LABEL_27;
    v12 = 165;
  }
  else
  {
    if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
      return result;
    v11 = off_140018050;
    if ( !LOWORD(off_140018050->DeviceType) )
      goto LABEL_27;
    v12 = 166;
  }
  LODWORD(v14) = a1[3];
  result = sub_140009BAC((__int64)v11->DeviceExtension, 5u, 2u, v12, (__int64)&unk_140012FE8, a2, v14);
LABEL_27:
  if ( off_140018058 != (_UNKNOWN *)&off_140018058 && LOWORD(off_140018050->DeviceType) )
    return sub_14000D180((__int64)off_140018050->DeviceExtension, (__int64)a2, (__int64)a3, a4, v13, a2);
  return result;
}
