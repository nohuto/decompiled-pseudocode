/*
 * XREFs of RtlFindSetBitsEx @ 0x1800F2A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlFindSetBitsEx(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbp
  unsigned __int64 v5; // r14
  unsigned __int64 v7; // r10
  unsigned __int64 i; // r15
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rbx
  _QWORD *v11; // rdx
  signed __int64 v12; // r8
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r9
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r10
  unsigned int v19; // ecx
  bool v20; // zf
  __int64 v21; // rax
  _QWORD *v22; // rcx
  __int64 v23; // r8
  _QWORD *v24; // r8
  unsigned int v25; // r8d
  __int64 v26; // rcx
  __int64 v27; // rcx
  unsigned int v28; // eax
  unsigned __int64 v29; // rax
  __int64 v30; // r9
  _QWORD *v31; // rdi
  __int64 v32; // rax
  unsigned int v33; // r10d
  unsigned __int64 v34; // r9
  __int64 v35; // rax

  v3 = *a1;
  v5 = a1[1];
  v7 = *a1 - 1;
  if ( !a2 )
    return a3 & -(__int64)(a3 < *a1) & 0xFFFFFFFFFFFFFFF8uLL;
  for ( i = a3 & -(__int64)(a3 < *a1); ; i = 0LL )
  {
    if ( v7 - i + 1 < a2 )
      goto LABEL_13;
    v9 = v7 - a2 + 1;
    v10 = v5 + 8 * (v9 >> 6);
    v11 = (_QWORD *)(v5 + 8 * (i >> 6));
    v12 = ~*v11 | ((1LL << (i & 0x3F)) - 1);
    if ( a2 > 0x7F )
    {
      v18 = v10 + 8;
      if ( (v9 & 0x3F) == 0 )
        v18 = v5 + 8 * (v9 >> 6);
      if ( !v12 )
      {
        v19 = 0;
        goto LABEL_39;
      }
      if ( *++v11 != -1LL )
        goto LABEL_35;
      v20 = !_BitScanReverse64((unsigned __int64 *)&v21, v12);
      if ( !v20 )
      {
        v19 = 63 - v21;
        goto LABEL_39;
      }
LABEL_34:
      v19 = 64;
LABEL_39:
      while ( 1 )
      {
        v14 = ((__int64)((__int64)v11 - v5) >> 3 << 6) - v19;
        if ( v14 > v9 )
          goto LABEL_13;
        v24 = &v11[(a2 - v19) >> 6];
        while ( ++v11 != v24 )
        {
          if ( *v11 != -1LL )
            goto LABEL_35;
        }
        v25 = ((_BYTE)a2 - (_BYTE)v19) & 0x3F;
        if ( (((_BYTE)a2 - (_BYTE)v19) & 0x3F) == 0 )
          goto LABEL_10;
        v20 = !_BitScanForward64((unsigned __int64 *)&v26, ~*v11);
        if ( v20 )
          LODWORD(v26) = 64;
        if ( (unsigned int)v26 >= v25 )
          goto LABEL_10;
        do
        {
LABEL_35:
          v22 = v11;
          if ( (unsigned __int64)v11 > v18 )
            goto LABEL_13;
          ++v11;
        }
        while ( *v11 != -1LL );
        v20 = !_BitScanReverse64((unsigned __int64 *)&v23, ~*v22);
        if ( v20 )
          goto LABEL_34;
        v19 = 63 - v23;
      }
    }
    if ( a2 >= 0x40 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( v12 < 0 )
          {
            if ( (unsigned __int64)++v11 > v10 )
              goto LABEL_13;
            v12 = ~*v11;
          }
          v20 = !_BitScanReverse64((unsigned __int64 *)&v27, v12);
          if ( v20 )
            v28 = 64;
          else
            v28 = 63 - v27;
          v14 = ((((__int64)((__int64)v11 - v5) >> 3) + 1) << 6) - v28;
          if ( v14 > v9 )
            goto LABEL_13;
          v17 = a2 - v28;
          if ( a2 == v28 )
            goto LABEL_10;
          v12 = ~*++v11;
          if ( v17 >= 0x40 )
            break;
LABEL_54:
          v20 = !_BitScanForward64(&v29, v12);
          if ( v20 )
            v29 = 64LL;
          if ( v29 >= v17 )
            goto LABEL_10;
        }
        if ( *v11 == -1LL )
        {
          v17 -= 64LL;
          if ( !v17 )
            goto LABEL_10;
          v12 = ~*++v11;
          goto LABEL_54;
        }
      }
    }
    if ( a2 > 1 )
    {
      v30 = 0LL;
      v31 = (_QWORD *)(v5 + 8 * (v7 >> 6));
      while ( v12 != -1 )
      {
LABEL_63:
        v20 = !_BitScanForward64((unsigned __int64 *)&v32, v12);
        if ( v20 )
          LODWORD(v32) = 64;
        if ( (unsigned int)(v30 + v32) >= a2 )
        {
          v34 = -v30;
LABEL_77:
          v14 = ((__int64)((__int64)v11 - v5) >> 3 << 6) + v34;
          goto LABEL_9;
        }
        v33 = a2;
        v34 = ~v12;
        while ( 1 )
        {
          v34 &= v34 >> (v33 >> 1);
          if ( !v34 )
            break;
          v33 -= v33 >> 1;
          if ( v33 <= 1 )
          {
            _BitScanForward64(&v34, v34);
            goto LABEL_77;
          }
        }
        if ( v11 == v31 )
          goto LABEL_13;
        v20 = !_BitScanReverse64((unsigned __int64 *)&v35, v12);
        if ( v20 )
          v30 = 64LL;
        else
          v30 = (unsigned int)(63 - v35);
        v12 = ~*++v11;
      }
      while ( 1 )
      {
        if ( (unsigned __int64)++v11 > v10 )
          goto LABEL_13;
        v12 = ~*v11;
        if ( *v11 )
        {
          v30 = 0LL;
          goto LABEL_63;
        }
      }
    }
    while ( v12 == -1 )
    {
      if ( (unsigned __int64)++v11 > v10 )
        goto LABEL_13;
      v12 = ~*v11;
    }
    _BitScanForward64(&v13, ~v12);
    v14 = v13 + ((__int64)((__int64)v11 - v5) >> 3 << 6);
LABEL_9:
    if ( v14 <= v9 )
      break;
LABEL_13:
    v14 = -1LL;
LABEL_14:
    if ( !i )
      return v14;
    v16 = a2 + a3;
    if ( a2 + a3 > v3 )
      v16 = v3;
    v7 = v16 - 1;
  }
LABEL_10:
  if ( v14 == -1LL )
    goto LABEL_14;
  return v14;
}
