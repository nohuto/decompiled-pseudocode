/*
 * XREFs of sub_140038F80 @ 0x140038F80
 * Callers:
 *     sub_14003A3C0 @ 0x14003A3C0 (sub_14003A3C0.c)
 * Callees:
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_140044858 @ 0x140044858 (sub_140044858.c)
 */

__int64 __fastcall sub_140038F80(__int64 a1)
{
  int v2; // ebx
  int v4; // [rsp+28h] [rbp-10h]

  *(_BYTE *)(a1 + 40) = 1;
  v2 = ((__int64 (*)(void))qword_1400194A0)();
  if ( v2 >= 0 )
  {
    if ( a1 == qword_140019800 )
      sub_140044858(0LL);
    return 0;
  }
  else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
  {
    v4 = v2;
    sub_1400050F8((__int64)off_140018050->DeviceExtension, 2u, 3u, 0x17u, (__int64)&unk_140014AD0, v4);
  }
  return (unsigned int)v2;
}
