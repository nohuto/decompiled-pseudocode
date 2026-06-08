/*
 * XREFs of sub_1400339D0 @ 0x1400339D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 *     sub_140010380 @ 0x140010380 (sub_140010380.c)
 */

__int64 __fastcall sub_1400339D0(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // ebx
  unsigned __int16 v4; // ax
  int v5; // r9d
  char *v6; // r9

  if ( a3 >= 0xC )
  {
    v4 = *(_WORD *)(a1 + 2);
    if ( v4 >= 0xFu || v4 == 8 )
    {
      v3 = 0;
      v6 = (char *)(a1 + 4);
      if ( v4 == 8 )
      {
        *(_DWORD *)a2 = 126;
        sub_140010380((char *)(a2 + 4), v6, *(unsigned __int16 *)(a1 + 2));
        return v3;
      }
      if ( *v6 == -126 && *(_WORD *)(a1 + 5) >= 0xCu )
      {
        *(_BYTE *)a2 = *(_BYTE *)(a1 + 7);
        *(_BYTE *)(a2 + 1) = *(_BYTE *)(a1 + 8);
        *(_BYTE *)(a2 + 2) = *(_BYTE *)(a1 + 9);
        *(_QWORD *)(a2 + 4) = *(_QWORD *)(a1 + 11);
        *(_BYTE *)(a2 + 3) = *(_BYTE *)(a1 + 10);
        return v3;
      }
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        v5 = 82;
        goto LABEL_14;
      }
    }
    else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      v5 = 81;
LABEL_14:
      LOBYTE(a2) = 2;
      sub_140003D28(off_140018050->DeviceExtension, a2, 1, v5, (__int64)&unk_140012FE8);
    }
    return (unsigned int)-1072431096;
  }
  return (unsigned int)-1073741811;
}
