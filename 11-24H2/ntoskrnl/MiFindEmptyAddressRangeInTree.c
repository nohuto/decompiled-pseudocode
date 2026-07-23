/*
 * XREFs of MiFindEmptyAddressRangeInTree @ 0x140A136BC
 * Callers:
 *     MiFindEmptyAddressRange @ 0x140918570 (MiFindEmptyAddressRange.c)
 * Callees:
 *     MiHonorRangeStraddleRequirement @ 0x14044EA18 (MiHonorRangeStraddleRequirement.c)
 */

__int64 __fastcall MiFindEmptyAddressRangeInTree(
        _QWORD **a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        _QWORD *a7)
{
  unsigned __int64 v7; // r8
  unsigned int v8; // r11d
  __int64 v9; // r12
  unsigned __int64 v11; // rbp
  __int64 v12; // r13
  unsigned __int64 v13; // rbx
  __int64 v14; // rax
  unsigned __int64 v15; // rsi
  _QWORD *v16; // rax
  unsigned __int64 i; // rdi
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  _QWORD **v20; // rax
  unsigned __int64 v21; // rcx
  _QWORD *v22; // rcx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  unsigned __int64 v29; // [rsp+60h] [rbp+18h]

  v7 = a3 >> 12;
  v8 = 0;
  v9 = a4 >> 12;
  v11 = (unsigned __int64)(a2 + 4095) >> 12;
  v29 = v7;
  v12 = ~(v7 - 1);
  v13 = v12 & ((a5 >> 12) + v7 - 1);
  if ( a4 >> 12 )
  {
    v14 = MiHonorRangeStraddleRequirement(v13, (unsigned __int64)(a2 + 4095) >> 12, v9, 0);
    v7 = v29;
    v13 = v14;
  }
  v15 = a6 >> 12;
  if ( v13 > a6 >> 12 || v11 > v15 - v13 + 1 )
    return (unsigned int)-1073741801;
  v16 = *a1;
  if ( !*a1 )
    goto LABEL_36;
  do
  {
    i = (unsigned __int64)v16;
    v16 = (_QWORD *)*v16;
  }
  while ( v16 );
  v18 = i;
  v19 = *(unsigned int *)(i + 24) | ((unsigned __int64)*(unsigned __int8 *)(i + 32) << 32);
  if ( v19 > v13 && v11 <= v19 - v13 )
    goto LABEL_36;
  while ( 1 )
  {
    v20 = *(_QWORD ***)(i + 8);
    v21 = i;
    if ( v20 )
    {
      v22 = *v20;
      for ( i = *(_QWORD *)(i + 8); v22; v22 = (_QWORD *)*v22 )
        i = (unsigned __int64)v22;
    }
    else
    {
      while ( 1 )
      {
        i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !i || *(_QWORD *)i == v21 )
          break;
        v21 = i;
      }
    }
    v23 = v7 + (*(unsigned int *)(v18 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v18 + 33) << 32));
    if ( !i )
      break;
    if ( (v12 & (v23 - 1)) < v13 )
    {
      if ( (*(unsigned int *)(i + 24) | ((unsigned __int64)*(unsigned __int8 *)(i + 32) << 32)) <= v13 )
        goto LABEL_22;
      v24 = v13;
    }
    else
    {
      v24 = v12 & v23;
    }
    if ( v9 )
    {
      v25 = MiHonorRangeStraddleRequirement(v24, v11, v9, 0);
      v7 = v29;
      v24 = v25;
    }
    if ( v24 > v15 )
      return (unsigned int)-1073741801;
    v26 = *(unsigned int *)(i + 24) | ((unsigned __int64)*(unsigned __int8 *)(i + 32) << 32);
    if ( v26 > v24 && v11 <= v26 - v24 && v11 <= v15 - v24 + 1 )
    {
      *a7 = v24 << 12;
      return v8;
    }
LABEL_22:
    v18 = i;
  }
  v27 = v12 & v23;
  if ( v27 >= v13 )
    v13 = v27;
  if ( v9 )
    v13 = MiHonorRangeStraddleRequirement(v13, v11, v9, 0);
  if ( v15 < v13 || v11 > v15 - v13 + 1 )
    return (unsigned int)-1073741801;
LABEL_36:
  *a7 = v13 << 12;
  return v8;
}
