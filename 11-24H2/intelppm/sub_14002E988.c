/*
 * XREFs of sub_14002E988 @ 0x14002E988
 * Callers:
 *     sub_140039A78 @ 0x140039A78 (sub_140039A78.c)
 * Callees:
 *     sub_140005F24 @ 0x140005F24 (sub_140005F24.c)
 *     __security_check_cookie @ 0x140010230 (__security_check_cookie.c)
 *     sub_140010680 @ 0x140010680 (sub_140010680.c)
 */

__int64 __fastcall sub_14002E988(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 v4; // rdi
  unsigned int v5; // ecx
  unsigned int v6; // ebx
  char v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rax
  unsigned int v10; // edx
  __int64 v11; // r10
  _BYTE *v12; // rcx
  bool v13; // zf
  char v15[272]; // [rsp+30h] [rbp-138h] BYREF

  v2 = a2;
  sub_140010680(v15, 0, 0x108uLL);
  v4 = a1 + 320 * v2;
  KeInitializeAffinityEx2(v15, 32LL);
  KeCopyAffinityEx2(v15, &unk_140019580);
  v5 = *(_DWORD *)(v4 + 348);
  v6 = 0;
  v7 = 0;
  if ( !v5 )
    goto LABEL_12;
  v8 = v5;
  v9 = (_QWORD *)(*(_QWORD *)(v4 + 360) + 8LL);
  do
  {
    v10 = *((_DWORD *)v9 - 1);
    if ( v10 )
    {
      v11 = v10;
      v12 = (_BYTE *)(*v9 + 2LL);
      do
      {
        v13 = *v12 == 0;
        v12 += 4;
        if ( !v13 )
          v7 = 1;
        --v11;
      }
      while ( v11 );
    }
    v9 += 2;
    --v8;
  }
  while ( v8 );
  if ( v7 )
  {
    if ( (unsigned int)KeIsEqualAffinityEx(v4 + 48, &unk_140019580) )
      *(_BYTE *)(v4 + 352) = 1;
  }
  else
  {
LABEL_12:
    if ( off_140018058 != (_UNKNOWN *)&off_140018058 )
      sub_140005F24((__int64)off_140018050->DeviceExtension, 2u, 1u, 0x68u, (__int64)&unk_1400145E8, v2);
    return (unsigned int)-1073741811;
  }
  return v6;
}
