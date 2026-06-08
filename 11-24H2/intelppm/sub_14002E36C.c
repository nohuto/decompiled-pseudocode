/*
 * XREFs of sub_14002E36C @ 0x14002E36C
 * Callers:
 *     sub_140039A78 @ 0x140039A78 (sub_140039A78.c)
 * Callees:
 *     sub_140004388 @ 0x140004388 (sub_140004388.c)
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 *     sub_140010680 @ 0x140010680 (sub_140010680.c)
 *     sub_14002E5A8 @ 0x14002E5A8 (sub_14002E5A8.c)
 *     sub_14002E700 @ 0x14002E700 (sub_14002E700.c)
 */

__int64 __fastcall sub_14002E36C(__int64 a1, unsigned int a2, int a3, unsigned int a4, __int64 a5)
{
  __int64 v6; // rsi
  unsigned int v9; // eax
  __int64 result; // rax
  unsigned int v11; // ecx
  char v12; // al
  _BYTE *v13; // rdi
  __int64 v14; // rdx
  bool v15; // zf
  unsigned __int16 v16; // r9
  __int64 v17; // [rsp+28h] [rbp-160h]
  _BYTE v18[16]; // [rsp+40h] [rbp-148h] BYREF
  char v19[272]; // [rsp+50h] [rbp-138h] BYREF

  v6 = a2;
  sub_140010680(v19, 0, 0x108uLL);
  v9 = *(_DWORD *)(a5 + 12);
  v18[0] = 0;
  if ( v9 > a4 )
    KeBugCheckEx(0x143u, 2uLL, 0LL, v9, 0LL);
  if ( !v9 )
  {
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      sub_140004388((__int64)off_140018050->DeviceExtension, 2u, 1u, 0x5Eu, (__int64)&unk_1400145E8, v6, a3);
    return 3221225485LL;
  }
  KeInitializeAffinityEx2(v19, 32LL);
  if ( *(_QWORD *)(a5 + 16) )
    result = sub_14002E700(v6, a3, a5, (unsigned int)v19, (__int64)v18);
  else
    result = sub_14002E5A8(a1, v6, a3, a5, (__int64)v19, (__int64)v18);
  if ( (int)result >= 0 )
  {
    v11 = *(_DWORD *)(a5 + 12);
    v12 = 0;
    if ( !v11 )
      goto LABEL_25;
    v13 = (_BYTE *)(a5 + 27);
    v14 = v11;
    do
    {
      if ( *(v13 - 1) )
        v12 = 1;
      v15 = *v13 == 0;
      v13 += 4;
      if ( !v15 )
        v12 = 1;
      --v14;
    }
    while ( v14 );
    if ( v12 )
    {
      if ( v18[0] )
        *(_BYTE *)(a1 + 320 * v6 + 48 + 305) = 1;
      if ( !(unsigned int)KeAndAffinityEx2(v19, a1 + 320 * v6 + 48, 0LL) )
      {
        KeOrAffinityEx2(v19, a1 + 320 * v6 + 48, a1 + 320 * v6 + 48);
        return 0LL;
      }
      if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
        return 3221225659LL;
      v16 = 96;
    }
    else
    {
LABEL_25:
      if ( off_140018058 == (_UNKNOWN *)&off_140018058 )
        return 3221225659LL;
      v16 = 95;
    }
    LODWORD(v17) = v6;
    sub_140004388((__int64)off_140018050->DeviceExtension, 2u, 1u, v16, (__int64)&unk_1400145E8, v17, a3);
    return 3221225659LL;
  }
  return result;
}
