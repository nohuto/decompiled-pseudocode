/*
 * XREFs of RtlFindClearBitsAndSetEx @ 0x18013ABF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlSetBitsEx @ 0x18013BE30 (RtlSetBitsEx.c)
 */

unsigned __int64 __fastcall RtlFindClearBitsAndSetEx(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbp
  unsigned __int64 v5; // r14
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rbx
  unsigned __int64 i; // r15
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rdi
  unsigned __int64 *v14; // rdx
  signed __int64 v15; // r8
  unsigned int v16; // ecx
  bool v17; // zf
  unsigned __int64 *v18; // rax
  unsigned __int64 *v19; // r8
  __int64 v20; // rax
  unsigned int v21; // r10d
  unsigned __int64 *v22; // rbx
  __int64 v23; // rax
  unsigned int v24; // r10d
  __int64 v25; // rbx
  __int64 v26; // rcx
  unsigned int v27; // eax
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // r9
  __int64 v31; // rax
  unsigned __int64 v32; // rax

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
    v14 = (unsigned __int64 *)(v5 + 8 * (i >> 6));
    v15 = *v14 | ((1LL << (i & 0x3F)) - 1);
    if ( a2 <= 0x7F )
    {
      if ( a2 < 0x40 )
      {
        if ( a2 > 1 )
        {
          v21 = 0;
          v8 >>= 6;
          v22 = (unsigned __int64 *)(v5 + 8 * v8);
          while ( v15 != -1 )
          {
LABEL_39:
            v17 = !_BitScanForward64((unsigned __int64 *)&v23, v15);
            if ( v17 )
              LODWORD(v23) = 64;
            if ( v21 + (unsigned int)v23 >= a2 )
            {
              v25 = -(__int64)v21;
LABEL_73:
              v9 = ((__int64)((__int64)v14 - v5) >> 3 << 6) + v25;
              goto LABEL_74;
            }
            v24 = a2;
            v8 = ~v15;
            while ( 1 )
            {
              v8 &= v8 >> (v24 >> 1);
              if ( !v8 )
                break;
              v24 -= v24 >> 1;
              if ( v24 <= 1 )
              {
                _BitScanForward64((unsigned __int64 *)&v25, v8);
                goto LABEL_73;
              }
            }
            if ( v14 == v22 )
              goto LABEL_8;
            v17 = !_BitScanReverse64((unsigned __int64 *)&v31, v15);
            if ( v17 )
              v21 = 64;
            else
              v21 = 63 - v31;
            v15 = *++v14;
          }
          while ( 1 )
          {
            if ( (unsigned __int64)++v14 > v13 )
              goto LABEL_8;
            v15 = *v14;
            if ( *v14 != -1LL )
            {
              v21 = 0;
              goto LABEL_39;
            }
          }
        }
        while ( v15 == -1 )
        {
          if ( (unsigned __int64)++v14 > v13 )
            goto LABEL_8;
          v15 = *v14;
        }
        _BitScanForward64(&v32, ~v15);
        v9 = v32 + ((__int64)((__int64)v14 - v5) >> 3 << 6);
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
            v15 = *v14;
          }
          v17 = !_BitScanReverse64((unsigned __int64 *)&v26, v15);
          if ( v17 )
            v27 = 64;
          else
            v27 = 63 - v26;
          v9 = ((((__int64)((__int64)v14 - v5) >> 3) + 1) << 6) - v27;
          if ( v9 > v12 )
            goto LABEL_8;
          v28 = a2 - v27;
          if ( a2 == v27 )
            goto LABEL_61;
          ++v14;
          v8 = 64LL;
          v15 = *v14;
          if ( v28 >= 0x40 )
            break;
LABEL_58:
          v17 = !_BitScanForward64(&v29, v15);
          if ( v17 )
            v29 = 64LL;
          if ( v29 >= v28 )
            goto LABEL_61;
        }
        if ( !v15 )
        {
          v28 -= 64LL;
          if ( !v28 )
            goto LABEL_61;
          v15 = *++v14;
          goto LABEL_58;
        }
      }
    }
    v8 = v13 + 8;
    if ( (v12 & 0x3F) == 0 )
      v8 = v5 + 8 * (v12 >> 6);
    if ( v15 )
    {
      if ( *++v14 )
        goto LABEL_16;
      v17 = !_BitScanReverse64((unsigned __int64 *)&v18, v15);
LABEL_19:
      if ( v17 )
        v16 = 64;
      else
        v16 = 63 - (_DWORD)v18;
    }
    else
    {
      v16 = 0;
    }
    v9 = ((__int64)((__int64)v14 - v5) >> 3 << 6) - v16;
    if ( v9 > v12 )
      goto LABEL_8;
    v19 = &v14[(a2 - v16) >> 6];
    while ( ++v14 != v19 )
    {
      if ( *v14 )
        goto LABEL_16;
    }
    if ( (((_BYTE)a2 - (_BYTE)v16) & 0x3F) != 0 )
    {
      v17 = !_BitScanForward64((unsigned __int64 *)&v20, *v14);
      if ( v17 )
        LODWORD(v20) = 64;
      if ( (unsigned int)v20 < (((_BYTE)a2 - (_BYTE)v16) & 0x3Fu) )
      {
LABEL_16:
        while ( 1 )
        {
          v18 = v14;
          if ( (unsigned __int64)v14 > v8 )
            goto LABEL_8;
          if ( !*++v14 )
          {
            v17 = !_BitScanReverse64((unsigned __int64 *)&v18, *v18);
            goto LABEL_19;
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
    v30 = a2 + a3;
    if ( a2 + a3 > v3 )
      v30 = v3;
    v8 = v30 - 1;
  }
LABEL_3:
  if ( v9 != -1LL )
LABEL_4:
    RtlSetBitsEx(a1, v9, a2, v8);
  return v9;
}
