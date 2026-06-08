/*
 * XREFs of sub_140046638 @ 0x140046638
 * Callers:
 *     sub_140029660 @ 0x140029660 (sub_140029660.c)
 * Callees:
 *     sub_140004B88 @ 0x140004B88 (sub_140004B88.c)
 *     sub_1400053CC @ 0x1400053CC (sub_1400053CC.c)
 *     sub_1400054D4 @ 0x1400054D4 (sub_1400054D4.c)
 *     sub_140010680 @ 0x140010680 (sub_140010680.c)
 *     sub_14002823C @ 0x14002823C (sub_14002823C.c)
 *     sub_14003B240 @ 0x14003B240 (sub_14003B240.c)
 *     sub_14003B304 @ 0x14003B304 (sub_14003B304.c)
 *     sub_14003B36C @ 0x14003B36C (sub_14003B36C.c)
 */

__int64 __fastcall sub_140046638(unsigned int a1)
{
  unsigned __int64 v1; // rbx
  __int64 result; // rax
  int v4; // r11d
  __int64 v5; // rdi
  __int64 v6; // r9
  unsigned int v7; // edx
  unsigned int v8; // r8d
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rdx
  int v11; // r11d
  _OWORD v12[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v13; // [rsp+78h] [rbp+38h] BYREF

  v13 = 0LL;
  v1 = (unsigned __int64)a1 << 8;
  memset(v12, 0, sizeof(v12));
  sub_1400054D4((__int64)&qword_140019198, 32, (__int64)v12);
  sub_1400053CC((__int64 *)v12);
  while ( 1 )
  {
    result = sub_140004B88((__int64 *)v12, &v13);
    if ( (_DWORD)result )
      break;
    if ( _bittest64((const signed __int64 *)(v13 + 280), 0x25u) )
    {
      if ( *(unsigned __int8 *)(v13 + 376) == a1 )
      {
        result = sub_14002823C(v13);
        v4 = result;
        if ( (int)result < 0 )
          break;
      }
    }
  }
  if ( v4 >= 0 )
    goto LABEL_35;
  sub_1400054D4((__int64)&qword_140019198, 32, (__int64)v12);
  sub_1400053CC((__int64 *)v12);
  while ( 1 )
  {
    result = sub_140004B88((__int64 *)v12, &v13);
    if ( (_DWORD)result )
      break;
    if ( _bittest64((const signed __int64 *)(v13 + 280), 0x25u) && *(unsigned __int8 *)(v13 + 376) == a1 )
      sub_14003B240(v13);
  }
  *(__int64 *)((char *)&qword_140019140[255] + v1) = 0LL;
  v5 = 0LL;
  *(__int64 *)((char *)&qword_140019140[254] + v1) = 0LL;
  v6 = 0LL;
  v7 = *(_DWORD *)((char *)&qword_140019140[229] + v1);
  if ( v7 )
  {
    v8 = *(_DWORD *)((char *)&qword_140019140[229] + v1);
    do
    {
      result = 3 * v6;
      v7 = v8;
      if ( (*(_DWORD *)((_BYTE *)&qword_140019140[230] + 12 * v6 + v1) & 1) == 0 )
      {
        if ( (_DWORD)v6 != (_DWORD)v5 )
        {
          v9 = v1 + 12 * v6;
          v10 = v1 + 12 * v5;
          *(__int64 *)((char *)&qword_140019140[229] + v10 + 4) = *(__int64 *)((char *)&qword_140019140[229] + v9 + 4);
          result = *(unsigned int *)((char *)&qword_140019140[230] + v9 + 4);
          *(_DWORD *)((char *)&qword_140019140[230] + v10 + 4) = result;
          v7 = *(_DWORD *)((char *)&qword_140019140[229] + v1);
        }
        v5 = (unsigned int)(v5 + 1);
      }
      v6 = (unsigned int)(v6 + 1);
      v8 = v7;
    }
    while ( (unsigned int)v6 < v7 );
  }
  if ( v7 != (_DWORD)v5 )
  {
    result = sub_140010680(&byte_14001986C[12 * v5 + v1], 0, 12LL * (v7 - (unsigned int)v5));
    *(_DWORD *)((char *)&qword_140019140[229] + v1) = v5;
  }
  if ( !(_DWORD)v5 )
    goto LABEL_35;
  sub_1400053CC((__int64 *)v12);
  while ( 1 )
  {
    result = sub_140004B88((__int64 *)v12, &v13);
    if ( (_DWORD)result )
      break;
    if ( _bittest64((const signed __int64 *)(v13 + 280), 0x25u) )
    {
      if ( *(unsigned __int8 *)(v13 + 376) == a1 )
      {
        result = sub_14003B36C(v13);
        v11 = result;
        if ( (int)result < 0 )
          break;
      }
    }
  }
  if ( v11 < 0 || !*(__int64 *)((char *)&qword_140019140[254] + v1) )
  {
    sub_1400054D4((__int64)&qword_140019198, 32, (__int64)v12);
    sub_1400053CC((__int64 *)v12);
    while ( 1 )
    {
      result = sub_140004B88((__int64 *)v12, &v13);
      if ( (_DWORD)result )
        break;
      if ( _bittest64((const signed __int64 *)(v13 + 280), 0x25u) && *(unsigned __int8 *)(v13 + 376) == a1 )
        sub_14003B304(v13);
    }
    *(__int64 *)((char *)&qword_140019140[255] + v1) = 0LL;
    *(__int64 *)((char *)&qword_140019140[254] + v1) = 0LL;
LABEL_35:
    if ( !*(__int64 *)((char *)&qword_140019140[254] + v1) )
    {
      result = (__int64)sub_1400031D0;
      *(__int64 *)((char *)&qword_140019140[254] + v1) = (__int64)sub_1400031D0;
    }
  }
  return result;
}
