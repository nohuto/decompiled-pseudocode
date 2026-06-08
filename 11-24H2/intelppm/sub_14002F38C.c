/*
 * XREFs of sub_14002F38C @ 0x14002F38C
 * Callers:
 *     sub_140027238 @ 0x140027238 (sub_140027238.c)
 * Callees:
 *     sub_140003D28 @ 0x140003D28 (sub_140003D28.c)
 */

__int64 __fastcall sub_14002F38C(__int64 a1)
{
  unsigned int v1; // ebx
  int v2; // r9d
  char v3; // al
  unsigned int v5; // eax

  v1 = -1073741811;
  if ( *(_DWORD *)a1 != 609239875 )
  {
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      v2 = 43;
LABEL_11:
      sub_140003D28(off_140018050->DeviceExtension, 2, 1, v2, (__int64)&unk_1400145E8);
      return v1;
    }
    return v1;
  }
  if ( *(_WORD *)(a1 + 4) >= 0x28u )
  {
    v3 = *(_BYTE *)(a1 + 6);
    if ( v3 )
    {
      if ( v3 != 1 || *(_BYTE *)(a1 + 7) )
      {
LABEL_9:
        if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
        {
          v2 = 45;
          goto LABEL_11;
        }
        return v1;
      }
    }
    else if ( *(_BYTE *)(a1 + 7) < 6u )
    {
      goto LABEL_9;
    }
    v5 = *(_DWORD *)(a1 + 36);
    if ( v5 > *(_DWORD *)(a1 + 28) )
    {
      if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
        return v1;
      v2 = 46;
      goto LABEL_11;
    }
    if ( *(_DWORD *)(a1 + 32) <= v5 )
      return 0;
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      v2 = 47;
      goto LABEL_11;
    }
    return v1;
  }
  if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
  {
    v2 = 44;
    goto LABEL_11;
  }
  return v1;
}
