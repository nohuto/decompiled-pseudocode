/*
 * XREFs of sub_14002DC40 @ 0x14002DC40
 * Callers:
 *     sub_140027628 @ 0x140027628 (sub_140027628.c)
 * Callees:
 *     sub_14000A1EC @ 0x14000A1EC (sub_14000A1EC.c)
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_14002FB54 @ 0x14002FB54 (sub_14002FB54.c)
 *     sub_14002FF30 @ 0x14002FF30 (sub_14002FF30.c)
 */

__int64 __fastcall sub_14002DC40(__int64 a1, __int64 a2, const wchar_t *a3, _DWORD *a4)
{
  __int64 v8; // rdx
  int v9; // ebx
  __int64 v10; // r8
  unsigned __int16 v11; // r9
  int v13; // [rsp+30h] [rbp-18h]

  v9 = sub_14002FB54(a2, "_PSS");
  if ( v9 >= 0 )
  {
    v9 = sub_14002FF30(a1);
    if ( v9 < 0 )
    {
      *a4 |= 0x20u;
      if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
        return (unsigned int)v9;
      v11 = 13;
      goto LABEL_4;
    }
    if ( !qword_140019330 )
      return 0;
    v9 = qword_140019330(a1, a2, a4);
    if ( v9 >= 0 )
      return 0;
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      v11 = 14;
      goto LABEL_4;
    }
  }
  else
  {
    *a4 |= 0x40u;
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    {
      v11 = 12;
LABEL_4:
      v13 = v9;
      sub_14000A1EC((__int64)off_140018050->DeviceExtension, v8, v10, v11, (__int64)&unk_1400145E8, a3, v13);
    }
  }
  return (unsigned int)v9;
}
