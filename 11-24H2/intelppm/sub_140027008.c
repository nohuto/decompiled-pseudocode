/*
 * XREFs of sub_140027008 @ 0x140027008
 * Callers:
 *     sub_140041578 @ 0x140041578 (sub_140041578.c)
 * Callees:
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     sub_140004388 @ 0x140004388 (sub_140004388.c)
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_140027238 @ 0x140027238 (sub_140027238.c)
 *     sub_140027354 @ 0x140027354 (sub_140027354.c)
 *     sub_140027424 @ 0x140027424 (sub_140027424.c)
 */

__int64 __fastcall sub_140027008(_QWORD *a1)
{
  int v2; // eax
  int v3; // edx
  int v4; // ebx
  int v5; // eax
  int v6; // edx

  v2 = sub_140027238();
  v4 = v2;
  if ( v2 >= 0 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(qword_140019120 + 2504))(qword_140019128, a1[26], 0LL);
    v5 = sub_140027424(a1, a1 + 73);
    v4 = v5;
    if ( v5 < 0 )
    {
      if ( v5 == -1073741772 )
      {
        if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
        {
          LOBYTE(v6) = 4;
          sub_140003D28(off_140018050->DeviceExtension, v6, 2, 12, (__int64)&unk_140014CD8);
        }
      }
      else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        sub_1400050F8((__int64)off_140018050->DeviceExtension, 3u, 3u, 0xDu, (__int64)&unk_140014CD8, v5);
      }
      goto LABEL_19;
    }
    v4 = sub_140027354(a1[73], a1[8]);
    if ( v4 >= 0 )
    {
      if ( (unsigned int)(dword_14001973C - 1) > 0x26 )
      {
LABEL_19:
        (*(void (__fastcall **)(__int64, _QWORD))(qword_140019120 + 2512))(qword_140019128, a1[26]);
        return (unsigned int)v4;
      }
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
        sub_140004388(
          (__int64)off_140018050->DeviceExtension,
          3u,
          1u,
          0xEu,
          (__int64)&unk_140014CD8,
          dword_14001973C,
          40);
      v4 = -1073741823;
    }
    a1[35] &= ~0x80000000uLL;
    goto LABEL_19;
  }
  if ( v2 == -1073741637 )
  {
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      LOBYTE(v3) = 4;
      sub_140003D28(off_140018050->DeviceExtension, v3, 2, 10, (__int64)&unk_140014CD8);
    }
  }
  else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
  {
    sub_1400050F8((__int64)off_140018050->DeviceExtension, 3u, 3u, 0xBu, (__int64)&unk_140014CD8, v2);
  }
  return (unsigned int)v4;
}
