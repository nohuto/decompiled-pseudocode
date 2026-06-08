/*
 * XREFs of sub_14003919C @ 0x14003919C
 * Callers:
 *     sub_1400392E0 @ 0x1400392E0 (sub_1400392E0.c)
 * Callees:
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     sub_1400279B4 @ 0x1400279B4 (sub_1400279B4.c)
 *     sub_1400320E0 @ 0x1400320E0 (sub_1400320E0.c)
 */

__int64 __fastcall sub_14003919C(__int64 a1)
{
  unsigned int v2; // edi
  int v3; // eax
  int v4; // edx
  int v5; // ebx
  int v6; // eax
  int v7; // edx
  unsigned int v8; // ebx
  __int64 v10; // [rsp+28h] [rbp-10h]

  v2 = 0;
  v3 = sub_1400279B4(a1, 1129599071, a1 + 480);
  v5 = v3;
  if ( v3 < 0 )
  {
    if ( v3 == -1073741772 )
    {
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        LOBYTE(v4) = 4;
        sub_140003D28(off_140018050->DeviceExtension, v4, 2, 19, (__int64)&unk_140013160);
      }
    }
    else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      sub_1400050F8((__int64)off_140018050->DeviceExtension, 3u, 3u, 0x14u, (__int64)&unk_140013160, v3);
    }
    v2 = v5;
  }
  v6 = sub_1400320E0(a1, (_QWORD *)(a1 + 504));
  v8 = v6;
  if ( v6 < 0 )
  {
    if ( v6 == -1073741772 )
    {
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        LOBYTE(v7) = 4;
        sub_140003D28(off_140018050->DeviceExtension, v7, 2, 21, (__int64)&unk_140013160);
      }
    }
    else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      LODWORD(v10) = v6;
      sub_1400050F8((__int64)off_140018050->DeviceExtension, 3u, 3u, 0x16u, (__int64)&unk_140013160, v10);
    }
    return v8;
  }
  return v2;
}
