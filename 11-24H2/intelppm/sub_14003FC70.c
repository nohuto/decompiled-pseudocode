/*
 * XREFs of sub_14003FC70 @ 0x14003FC70
 * Callers:
 *     sub_14003ED1C @ 0x14003ED1C (sub_14003ED1C.c)
 * Callees:
 *     sub_140009A48 @ 0x140009A48 (sub_140009A48.c)
 *     sub_14000A1EC @ 0x14000A1EC (sub_14000A1EC.c)
 *     sub_14000A340 @ 0x14000A340 (sub_14000A340.c)
 *     sub_14002DBD8 @ 0x14002DBD8 (sub_14002DBD8.c)
 */

__int64 __fastcall sub_14003FC70(unsigned int *a1, const wchar_t *a2)
{
  unsigned int v2; // r10d
  unsigned int *v4; // r11
  unsigned int v5; // esi
  __int64 i; // rdx
  unsigned int j; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int16 v11; // r9

  v2 = 0;
  v4 = a1;
  if ( !a1 )
    return (unsigned int)-1073741823;
  v5 = *a1;
  for ( i = 1LL; (unsigned int)i < v5; i = (unsigned int)(i + 1) )
  {
    if ( LOBYTE(a1[5 * (unsigned int)i + 4]) < LOBYTE(a1[5 * (unsigned int)(i - 1) + 4])
      || HIWORD(a1[5 * (unsigned int)i + 4]) < HIWORD(a1[5 * (unsigned int)(i - 1) + 4])
      || a1[5 * (unsigned int)i + 5] > a1[5 * (unsigned int)(i - 1) + 5] )
    {
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
        sub_14000A340(
          (__int64)off_140018050->DeviceExtension,
          i,
          5LL * (unsigned int)(i - 1),
          0x19u,
          (__int64)&unk_1400145E8,
          a2,
          i,
          i - 1);
      return (unsigned int)-1073741823;
    }
  }
  for ( j = 0; ; ++j )
  {
    if ( j >= v5 )
      return v2;
    if ( LOBYTE(v4[5 * j + 1]) == 127 )
      continue;
    if ( !LOBYTE(v4[5 * j + 4]) )
    {
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
        sub_140009A48((__int64)off_140018050->DeviceExtension, 2u, 1u, 0x1Cu, (__int64)&unk_1400145E8, a2);
      return (unsigned int)-1073741823;
    }
    if ( LOBYTE(v4[5 * j + 4]) == 1 )
      return (unsigned int)-1073741823;
    if ( LOBYTE(v4[5 * j + 4]) == 2 )
      break;
    if ( !sub_14002DBD8((__int64)&dword_140019AF4)
      || !sub_14002DBD8((__int64)&dword_140019AC4)
      || !sub_14002DBD8((__int64)&dword_140019ADC) )
    {
      if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
        return (unsigned int)-1073741823;
      v11 = 27;
      goto LABEL_24;
    }
LABEL_11:
    ;
  }
  if ( sub_14002DBD8((__int64)&dword_140019ADC) )
    goto LABEL_11;
  if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
  {
    v11 = 26;
LABEL_24:
    sub_14000A1EC((__int64)off_140018050->DeviceExtension, v9, v10, v11, (__int64)&unk_1400145E8, a2, j);
  }
  return (unsigned int)-1073741823;
}
