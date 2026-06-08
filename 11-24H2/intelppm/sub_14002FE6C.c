/*
 * XREFs of sub_14002FE6C @ 0x14002FE6C
 * Callers:
 *     sub_140027628 @ 0x140027628 (sub_140027628.c)
 * Callees:
 *     sub_14000A1EC @ 0x14000A1EC (sub_14000A1EC.c)
 *     sub_14002F2B0 @ 0x14002F2B0 (sub_14002F2B0.c)
 *     sub_14002FB54 @ 0x14002FB54 (sub_14002FB54.c)
 */

__int64 __fastcall sub_14002FE6C(__int64 a1, _DWORD *a2, const wchar_t *a3, _DWORD *a4)
{
  __int64 v7; // rdx
  int v8; // ebx
  __int64 v9; // r8
  unsigned __int16 v10; // r9
  int v12; // [rsp+30h] [rbp-18h]

  *a4 = 0;
  v8 = sub_14002FB54(a2, "XPSS", a3);
  if ( v8 >= 0 )
  {
    v8 = sub_14002F2B0(a1, a3);
    if ( v8 < 0 )
    {
      *a4 |= 0x20u;
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        v10 = 16;
        goto LABEL_7;
      }
    }
  }
  else
  {
    *a4 |= 0x80u;
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      v10 = 15;
LABEL_7:
      v12 = v8;
      sub_14000A1EC((__int64)off_140018050->DeviceExtension, v7, v9, v10, (__int64)&unk_1400145E8, a3, v12);
    }
  }
  return (unsigned int)v8;
}
