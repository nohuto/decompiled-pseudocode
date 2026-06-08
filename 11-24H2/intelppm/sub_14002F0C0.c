/*
 * XREFs of sub_14002F0C0 @ 0x14002F0C0
 * Callers:
 *     sub_14002E8F8 @ 0x14002E8F8 (sub_14002E8F8.c)
 *     sub_14002FAF0 @ 0x14002FAF0 (sub_14002FAF0.c)
 * Callees:
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     sub_14000A65C @ 0x14000A65C (sub_14000A65C.c)
 *     sub_14000A7F4 @ 0x14000A7F4 (sub_14000A7F4.c)
 *     sub_14002DBD8 @ 0x14002DBD8 (sub_14002DBD8.c)
 */

__int64 __fastcall sub_14002F0C0(__int64 a1, __int64 a2, const wchar_t *a3)
{
  unsigned int v3; // r10d
  __int64 v5; // r11
  char v6; // cl
  unsigned __int16 v7; // r9
  int v9; // [rsp+20h] [rbp-28h]

  v3 = 0;
  v5 = a1;
  if ( *(_DWORD *)(a1 + 12) )
  {
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      LOBYTE(a2) = 2;
      sub_140003D28(off_140018050->DeviceExtension, a2, 1, 105, (__int64)&unk_1400145E8);
    }
    return (unsigned int)-1073741823;
  }
  v6 = *(_BYTE *)(a1 + 24);
  if ( v6 != 127 )
  {
    if ( v6 == 1 )
    {
      if ( !sub_14002DBD8((__int64)&dword_140019ADC) )
      {
        if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
          return (unsigned int)-1073741823;
        v7 = 106;
LABEL_9:
        sub_14000A65C(
          (__int64)off_140018050->DeviceExtension,
          a2,
          (__int64)a3,
          v7,
          v9,
          a3,
          *(const wchar_t **)(v5 + 72));
        return (unsigned int)-1073741823;
      }
    }
    else
    {
      if ( v6 != 126 )
      {
        if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
          sub_14000A7F4(
            (__int64)off_140018050->DeviceExtension,
            a2,
            (__int64)a3,
            0x6Cu,
            v9,
            a3,
            *(const wchar_t **)(v5 + 72));
        return (unsigned int)-1073741823;
      }
      if ( !(_BYTE)a2 )
      {
        if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
          return (unsigned int)-1073741823;
        v7 = 107;
        goto LABEL_9;
      }
    }
  }
  return v3;
}
