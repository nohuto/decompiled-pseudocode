/*
 * XREFs of sub_14002F1E0 @ 0x14002F1E0
 * Callers:
 *     sub_14002F2B0 @ 0x14002F2B0 (sub_14002F2B0.c)
 * Callees:
 *     sub_1400050F8 @ 0x1400050F8 (sub_1400050F8.c)
 */

__int64 __fastcall sub_14002F1E0(_BYTE *a1)
{
  unsigned int v1; // ebx
  unsigned __int16 v2; // r9
  int v4; // [rsp+28h] [rbp-10h]

  if ( *a1 == 127 )
  {
    if ( a1[1] == 64 )
    {
      v1 = 0;
      if ( a1[2] )
      {
        v1 = -1073741811;
        if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
        {
          v2 = 39;
          goto LABEL_13;
        }
      }
      else if ( a1[3] != 64 )
      {
        v1 = -1073741811;
        if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
        {
          v2 = 40;
          goto LABEL_13;
        }
      }
    }
    else
    {
      v1 = -1073741811;
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        v2 = 38;
        goto LABEL_13;
      }
    }
  }
  else
  {
    v1 = -1073741811;
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      v2 = 37;
LABEL_13:
      v4 = -1073741811;
      sub_1400050F8((__int64)off_140018050->DeviceExtension, 2u, 1u, v2, (__int64)&unk_1400145E8, v4);
    }
  }
  return v1;
}
