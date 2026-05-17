/*
 * XREFs of RtlFindSetBitsAndClearEx @ 0x18013D490
 * Callers:
 *     <none>
 * Callees:
 *     RtlClearBitsEx @ 0x18013C730 (RtlClearBitsEx.c)
 */

unsigned __int64 __fastcall RtlFindSetBitsAndClearEx(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbp
  unsigned __int64 v5; // r14
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rbx
  unsigned __int64 i; // r15
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rdi
  _QWORD *v14; // rdx
  signed __int64 v15; // r8
  unsigned __int64 v16; // r9
  unsigned int v17; // ecx
  bool v18; // zf
  __int64 v19; // rax
  _QWORD *v20; // rcx
  __int64 v21; // r8
  _QWORD *v22; // r8
  unsigned int v23; // r8d
  __int64 v24; // rcx
  unsigned int v25; // r10d
  _QWORD *v26; // rbx
  __int64 v27; // rax
  unsigned int v28; // r10d
  unsigned __int64 v29; // r9
  __int64 v30; // rbx
  __int64 v31; // rcx
  unsigned int v32; // eax
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // r9
  __int64 v36; // rax
  unsigned __int64 v37; // rax

  v3 = *a1;
  v5 = a1[1];
  v8 = *a1 - 1;
  if ( !a2 )
  {
    v9 = a3 & -(__int64)(a3 < *a1) & 0xFFFFFFFFFFFFFFF8uLL;
    goto LABEL_3;
  }
  for ( i = a3 & -(__int64)(a3 < *a1); ; i = 0LL )
  {
    if ( v8 - i + 1 < a2 )
    {
LABEL_8:
      v9 = -1LL;
      goto LABEL_62;
    }
    v12 = v8 - a2 + 1;
    v13 = v5 + 8 * (v12 >> 6);
    v14 = (_QWORD *)(v5 + 8 * (i >> 6));
    v15 = ~*v14 | ((1LL << (i & 0x3F)) - 1);
    if ( a2 <= 0x7F )
    {
      if ( a2 < 0x40 )
      {
        if ( a2 > 1 )
        {
          v25 = 0;
          v26 = (_QWORD *)(v5 + 8 * (v8 >> 6));
          while ( v15 != -1 )
          {
LABEL_39:
            v18 = !_BitScanForward64((unsigned __int64 *)&v27, v15);
            if ( v18 )
              LODWORD(v27) = 64;
            if ( v25 + (unsigned int)v27 >= a2 )
            {
              v30 = -(__int64)v25;
LABEL_73:
              v9 = ((__int64)((__int64)v14 - v5) >> 3 << 6) + v30;
              goto LABEL_74;
            }
            v28 = a2;
            v29 = ~v15;
            while ( 1 )
            {
              v29 &= v29 >> (v28 >> 1);
              if ( !v29 )
                break;
              v28 -= v28 >> 1;
              if ( v28 <= 1 )
              {
                _BitScanForward64((unsigned __int64 *)&v30, v29);
                goto LABEL_73;
              }
            }
            if ( v14 == v26 )
              goto LABEL_8;
            v18 = !_BitScanReverse64((unsigned __int64 *)&v36, v15);
            if ( v18 )
              v25 = 64;
            else
              v25 = 63 - v36;
            v15 = ~*++v14;
          }
          while ( 1 )
          {
            if ( (unsigned __int64)++v14 > v13 )
              goto LABEL_8;
            v15 = ~*v14;
            if ( v15 != -1 )
            {
              v25 = 0;
              goto LABEL_39;
            }
          }
        }
        while ( v15 == -1 )
        {
          if ( (unsigned __int64)++v14 > v13 )
            goto LABEL_8;
          v15 = ~*v14;
        }
        _BitScanForward64(&v37, ~v15);
        v9 = v37 + ((__int64)((__int64)v14 - v5) >> 3 << 6);
LABEL_74:
        if ( v9 > v12 )
          goto LABEL_8;
        goto LABEL_61;
      }
      while ( 1 )
      {
        while ( 1 )
        {
          while ( v15 < 0 )
          {
            if ( (unsigned __int64)++v14 > v13 )
              goto LABEL_8;
            v15 = ~*v14;
          }
          v18 = !_BitScanReverse64((unsigned __int64 *)&v31, v15);
          if ( v18 )
            v32 = 64;
          else
            v32 = 63 - v31;
          v9 = ((((__int64)((__int64)v14 - v5) >> 3) + 1) << 6) - v32;
          if ( v9 > v12 )
            goto LABEL_8;
          v33 = a2 - v32;
          if ( a2 == v32 )
            goto LABEL_61;
          v15 = ~*++v14;
          if ( v33 >= 0x40 )
            break;
LABEL_58:
          v18 = !_BitScanForward64(&v34, v15);
          if ( v18 )
            v34 = 64LL;
          if ( v34 >= v33 )
            goto LABEL_61;
        }
        if ( *v14 == -1LL )
        {
          v33 -= 64LL;
          if ( !v33 )
            goto LABEL_61;
          v15 = ~*++v14;
          goto LABEL_58;
        }
      }
    }
    v16 = v13 + 8;
    if ( (v12 & 0x3F) == 0 )
      v16 = v5 + 8 * (v12 >> 6);
    if ( v15 )
    {
      if ( *++v14 != -1LL )
        goto LABEL_18;
      v18 = !_BitScanReverse64((unsigned __int64 *)&v19, v15);
      if ( v18 )
LABEL_16:
        v17 = 64;
      else
        v17 = 63 - v19;
    }
    else
    {
      v17 = 0;
    }
LABEL_22:
    v9 = ((__int64)((__int64)v14 - v5) >> 3 << 6) - v17;
    if ( v9 > v12 )
      goto LABEL_8;
    v22 = &v14[(a2 - v17) >> 6];
    while ( ++v14 != v22 )
    {
      if ( *v14 != -1LL )
        goto LABEL_18;
    }
    v23 = ((_BYTE)a2 - (_BYTE)v17) & 0x3F;
    if ( (((_BYTE)a2 - (_BYTE)v17) & 0x3F) != 0 )
    {
      v18 = !_BitScanForward64((unsigned __int64 *)&v24, ~*v14);
      if ( v18 )
        LODWORD(v24) = 64;
      if ( (unsigned int)v24 < v23 )
      {
LABEL_18:
        while ( 1 )
        {
          v20 = v14;
          if ( (unsigned __int64)v14 > v16 )
            goto LABEL_8;
          if ( *++v14 == -1LL )
          {
            v18 = !_BitScanReverse64((unsigned __int64 *)&v21, ~*v20);
            if ( v18 )
              goto LABEL_16;
            v17 = 63 - v21;
            goto LABEL_22;
          }
        }
      }
    }
LABEL_61:
    if ( v9 != -1LL )
      goto LABEL_4;
LABEL_62:
    if ( !i )
      break;
    v35 = a2 + a3;
    if ( a2 + a3 > v3 )
      v35 = v3;
    v8 = v35 - 1;
  }
LABEL_3:
  if ( v9 != -1LL )
LABEL_4:
    RtlClearBitsEx((__int64)a1, v9, a2);
  return v9;
}
