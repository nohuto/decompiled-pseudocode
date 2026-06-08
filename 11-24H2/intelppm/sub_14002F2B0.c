/*
 * XREFs of sub_14002F2B0 @ 0x14002F2B0
 * Callers:
 *     sub_14002FE6C @ 0x14002FE6C (sub_14002FE6C.c)
 * Callees:
 *     sub_14000A1EC @ 0x14000A1EC (sub_14000A1EC.c)
 *     sub_14002F1E0 @ 0x14002F1E0 (sub_14002F1E0.c)
 */

__int64 __fastcall sub_14002F2B0(__int64 a1, const wchar_t *a2)
{
  __int64 v4; // rdx
  int v5; // ebx
  __int64 v6; // r8
  unsigned __int16 v7; // r9
  int v9; // [rsp+30h] [rbp-18h]

  v5 = sub_14002F1E0((_BYTE *)a1);
  if ( v5 >= 0 )
  {
    if ( !*(_QWORD *)(a1 + 4) )
    {
      v5 = -1073741811;
      if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
        return (unsigned int)v5;
      v7 = 35;
      v9 = -1073741811;
      goto LABEL_5;
    }
    if ( !*(_QWORD *)(a1 + 16) )
      return 0;
    v5 = sub_14002F1E0((_BYTE *)(a1 + 12));
    if ( v5 >= 0 )
      return 0;
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      v7 = 36;
      goto LABEL_4;
    }
  }
  else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
  {
    v7 = 34;
LABEL_4:
    v9 = v5;
LABEL_5:
    sub_14000A1EC((__int64)off_140018050->DeviceExtension, v4, v6, v7, (__int64)&unk_1400145E8, a2, v9);
  }
  return (unsigned int)v5;
}
