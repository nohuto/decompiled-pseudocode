/*
 * XREFs of sub_140027CB4 @ 0x140027CB4
 * Callers:
 *     sub_14003EE7C @ 0x14003EE7C (sub_14003EE7C.c)
 * Callees:
 *     sub_14000A340 @ 0x14000A340 (sub_14000A340.c)
 *     sub_14000A4BC @ 0x14000A4BC (sub_14000A4BC.c)
 */

__int64 __fastcall sub_140027CB4(unsigned int *a1, __int64 i, const wchar_t *a3)
{
  unsigned int v3; // edi
  unsigned int v4; // r9d
  unsigned int v5; // r10d
  unsigned int *v6; // rsi
  unsigned int v8; // ecx
  __int64 v9; // rdx
  unsigned __int16 v10; // r9
  int v12; // [rsp+20h] [rbp-38h]

  v3 = *a1;
  v4 = 0;
  v5 = 0;
  v6 = (unsigned int *)i;
  while ( 1 )
  {
    if ( v5 >= v3 )
      return v4;
    v8 = a1[6 * v5 + 1];
    if ( v8 != 6 )
    {
      if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
        return (unsigned int)-1073741823;
      v10 = 20;
      goto LABEL_25;
    }
    if ( a1[6 * v5 + 4] != 254 )
      break;
    v8 = a1[6 * v5 + 5];
    if ( v8 > 0x800 )
    {
      if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
        return (unsigned int)-1073741823;
      v10 = 22;
LABEL_25:
      sub_14000A340((__int64)off_140018050->DeviceExtension, i, (__int64)a3, v10, (__int64)&unk_1400145E8, a3, v5, v8);
      return (unsigned int)-1073741823;
    }
    if ( !v8 )
    {
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      {
        v10 = 23;
        goto LABEL_25;
      }
      return (unsigned int)-1073741823;
    }
    v9 = *v6;
    if ( a1[6 * v5 + 6] >= (unsigned int)v9 )
    {
      if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
        sub_14000A4BC((__int64)off_140018050->DeviceExtension, v9, (__int64)a3, 0LL, v12, a3);
      return (unsigned int)-1073741823;
    }
    for ( i = 0LL; (unsigned int)i < v3; i = (unsigned int)(i + 1) )
    {
      if ( v5 != (_DWORD)i && a1[6 * v5 + 6] == a1[6 * (unsigned int)i + 6] )
        return (unsigned int)-1073741637;
    }
    ++v5;
  }
  if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
    sub_14000A340(
      (__int64)off_140018050->DeviceExtension,
      i,
      (__int64)a3,
      0x15u,
      (__int64)&unk_1400145E8,
      a3,
      v5,
      a1[6 * v5 + 4]);
  return (unsigned int)-1073741637;
}
