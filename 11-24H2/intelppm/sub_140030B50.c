/*
 * XREFs of sub_140030B50 @ 0x140030B50
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     sub_1400301C4 @ 0x1400301C4 (sub_1400301C4.c)
 *     sub_140030478 @ 0x140030478 (sub_140030478.c)
 *     sub_140030C8C @ 0x140030C8C (sub_140030C8C.c)
 *     sub_140030F80 @ 0x140030F80 (sub_140030F80.c)
 */

__int64 __fastcall sub_140030B50(__int64 a1)
{
  __int64 v1; // rax
  int v3; // ebx
  unsigned __int16 v4; // r9
  bool v6; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 280);
  v3 = 0;
  if ( (v1 & 0x20E0000000000LL) != 0 )
  {
    v3 = sub_140030C8C(a1);
    if ( v3 < 0 && off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      v4 = 10;
LABEL_16:
      sub_1400050F8((__int64)off_140018050->DeviceExtension, 2u, 3u, v4, (__int64)&unk_1400145F8, v3);
    }
  }
  else if ( (v1 & 0x200) != 0 )
  {
    v6 = 0;
    v3 = sub_140030478(a1);
    if ( v3 >= 0 )
    {
      sub_1400301C4(&v6, 0LL, 0LL);
      if ( v6 )
        v3 = sub_140030F80(a1);
    }
    if ( v3 < 0 && off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      v4 = 11;
      goto LABEL_16;
    }
  }
  else if ( (v1 & 0x7F077) != 0 )
  {
    v3 = sub_140030478(a1);
    if ( v3 < 0 && off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      v4 = 12;
      goto LABEL_16;
    }
  }
  return (unsigned int)v3;
}
