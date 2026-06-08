/*
 * XREFs of sub_140027354 @ 0x140027354
 * Callers:
 *     sub_140027008 @ 0x140027008 (sub_140027008.c)
 * Callees:
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     sub_140009A48 @ 0x140009A48 (sub_140009A48.c)
 */

__int64 __fastcall sub_140027354(_DWORD *a1, const wchar_t *a2)
{
  unsigned int v2; // ebx
  unsigned __int16 v3; // r9

  v2 = -1073741811;
  if ( !qword_140019740 )
  {
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      LOBYTE(a2) = 2;
      sub_140003D28(off_140018050->DeviceExtension, (_DWORD)a2, 3, 48, (__int64)&unk_1400145E8);
    }
    return v2;
  }
  if ( *a1 > (unsigned int)(dword_140019748 - 4) )
  {
    if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
      return v2;
    v3 = 49;
LABEL_7:
    sub_140009A48((__int64)off_140018050->DeviceExtension, 2u, 1u, v3, (__int64)&unk_1400145E8, a2);
    return v2;
  }
  if ( a1[1] <= (unsigned int)(dword_140019748 - 4) )
    return 0;
  if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
  {
    v3 = 50;
    goto LABEL_7;
  }
  return v2;
}
