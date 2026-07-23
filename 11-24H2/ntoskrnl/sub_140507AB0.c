/*
 * XREFs of sub_140507AB0 @ 0x140507AB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_check_icall_no_overrides @ 0x1406B4D40 (_guard_check_icall_no_overrides.c)
 */

char __fastcall sub_140507AB0(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        void (__fastcall *a4)(_QWORD, _QWORD, __int64),
        _BYTE *a5)
{
  unsigned __int8 *v5; // r15
  __int64 v6; // r11
  __int64 v8; // rdx
  unsigned __int8 v9; // si
  _BYTE *v10; // r14
  unsigned __int8 v11; // r13
  _OWORD *v12; // rcx
  _OWORD *v13; // rax
  __int128 v14; // xmm1
  unsigned int v15; // edi
  unsigned __int64 v16; // rbp
  _BYTE *v17; // r12
  _BYTE *v18; // r8
  unsigned int v19; // r9d
  unsigned __int8 v20; // al
  unsigned __int8 v21; // dl
  unsigned __int64 v22; // rsi
  int v23; // r13d
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // r8
  unsigned __int8 *v26; // rcx
  int v27; // edx
  unsigned __int64 v28; // rax
  bool v29; // zf
  __int64 v30; // rcx
  __int64 v31; // r8
  char v32; // dl
  unsigned __int64 retaddr; // [rsp+68h] [rbp+0h] BYREF
  unsigned __int64 v35; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int8 v36; // [rsp+78h] [rbp+10h]
  __int64 v37; // [rsp+80h] [rbp+18h]
  void (__fastcall *v38)(_QWORD, _QWORD, __int64); // [rsp+88h] [rbp+20h]

  v38 = a4;
  v37 = a3;
  v5 = a5;
  v6 = a2;
  v8 = 2LL;
  v9 = *a5;
  v10 = a5 + 258;
  v11 = a5[1];
  v12 = a5 + 2;
  v36 = *a5;
  LOBYTE(a5) = v11;
  v13 = v10;
  do
  {
    *v13 = *v12;
    v13[1] = v12[1];
    v13[2] = v12[2];
    v13[3] = v12[3];
    v13[4] = v12[4];
    v13[5] = v12[5];
    v13[6] = v12[6];
    v13 += 8;
    v14 = v12[7];
    v12 += 8;
    *(v13 - 1) = v14;
    --v8;
  }
  while ( v8 );
  v15 = 0;
  v16 = 0LL;
  if ( (v5[2] & 1) != 0 )
  {
    v16 = retaddr ^ a1;
    retaddr = 0LL;
  }
  v17 = (_BYTE *)(a1 + v6);
  v18 = (_BYTE *)a1;
  v19 = 0;
  if ( a1 != a1 + v6 )
  {
    do
    {
      v20 = v5[++v9 + 2];
      v11 += v20;
      v21 = v5[v11 + 2];
      v5[v11 + 2] = v20;
      v5[v9 + 2] = v21;
      if ( v19 < 0x400 )
        ++v19;
      else
        *v18++ ^= v5[(unsigned __int8)(v5[v11 + 2] + v21) + 2] ^ 0xDA;
    }
    while ( v18 != v17 );
  }
  *v5 = v9;
  v5[1] = v11;
  v22 = (unsigned __int64)&v35 ^ a1;
  v23 = 64;
  v24 = (unsigned __int64)&v35 ^ a1;
  v25 = (unsigned __int64)&v35 ^ a1;
  v26 = v5;
  v27 = 64;
  do
  {
    *(_QWORD *)v26 ^= v24;
    v24 = __ROR8__(v25, 3);
    v26 += 8;
    v25 = v24;
    --v27;
  }
  while ( v27 );
  v35 = v24;
  guard_check_icall_no_overrides(v38);
  v38(0LL, 0LL, v37);
  v28 = (unsigned __int64)&v35 ^ a1;
  do
  {
    *(_QWORD *)v5 ^= v22;
    v22 = __ROR8__(v28, 3);
    v5 += 8;
    v28 = v22;
    --v23;
  }
  while ( v23 );
  v29 = (*v10 & 1) == 0;
  v35 = v22;
  if ( !v29 )
  {
    v28 = (unsigned __int64)&retaddr;
    retaddr = a1 ^ v16;
  }
  while ( (_BYTE *)a1 != v17 )
  {
    v30 = ++v36;
    LOBYTE(v28) = v10[v36];
    LOBYTE(a5) = v28 + (_BYTE)a5;
    v31 = (unsigned __int8)a5;
    v32 = v10[(unsigned __int8)a5];
    v10[(unsigned __int8)a5] = v28;
    v10[v30] = v32;
    if ( v15 < 0x400 )
    {
      ++v15;
    }
    else
    {
      v28 = (unsigned __int8)(v10[v31] + v32);
      *(_BYTE *)a1++ ^= v10[v28] ^ 0xDA;
    }
  }
  return v28;
}
