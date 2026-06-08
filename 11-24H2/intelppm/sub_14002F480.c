/*
 * XREFs of sub_14002F480 @ 0x14002F480
 * Callers:
 *     sub_14002F738 @ 0x14002F738 (sub_14002F738.c)
 * Callees:
 *     sub_14000B5C4 @ 0x14000B5C4 (sub_14000B5C4.c)
 *     sub_14002FD44 @ 0x14002FD44 (sub_14002FD44.c)
 */

__int64 __fastcall sub_14002F480(const wchar_t *a1, __int64 a2, const wchar_t *a3, __int64 a4, const char *a5)
{
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int16 v13; // r9
  int v15; // [rsp+20h] [rbp-28h]

  v9 = -1073741823;
  if ( (unsigned __int8)sub_14002FD44(a2, a4, a3, a4) )
  {
    if ( (unsigned __int8)sub_14002FD44(a2 + 12, a4 + 12, v11, v12) )
      return 0;
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      v13 = 76;
      goto LABEL_4;
    }
  }
  else if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
  {
    v13 = 75;
LABEL_4:
    sub_14000B5C4((__int64)off_140018050->DeviceExtension, v10, v11, v13, v15, a1, a3, a5);
  }
  return v9;
}
