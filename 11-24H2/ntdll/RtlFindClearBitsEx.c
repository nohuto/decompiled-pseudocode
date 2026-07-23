/*
 * XREFs of RtlFindClearBitsEx @ 0x18013AF70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlFindClearBitsEx(unsigned __int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbp
  unsigned __int64 v5; // r14
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // r9
  unsigned __int64 i; // r15
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rdi
  unsigned __int64 *v13; // rdx
  __int64 v14; // r8
  unsigned __int64 v15; // r10
  unsigned int v16; // ecx
  bool v17; // zf
  __int64 v18; // rax
  unsigned __int64 *v19; // rax
  __int64 v20; // r8
  unsigned __int64 *v21; // r8
  __int64 v22; // rax
  __int64 v23; // r9
  unsigned __int64 *v24; // rbx
  __int64 v25; // rax
  unsigned int v26; // r10d
  unsigned __int64 v27; // r9
  __int64 v28; // rcx
  unsigned int v29; // eax
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // r10
  __int64 v33; // rax
  unsigned __int64 v34; // rax

  v3 = *a1;
  v5 = a1[1];
  v7 = *a1 - 1;
  if ( a2 )
  {
    for ( i = a3 & -(__int64)(a3 < *a1); ; i = 0LL )
    {
      if ( v7 - i + 1 < a2 )
      {
LABEL_6:
        v8 = -1LL;
        goto LABEL_60;
      }
      v11 = v7 - a2 + 1;
      v12 = v5 + 8 * (v11 >> 6);
      v13 = (unsigned __int64 *)(v5 + 8 * (i >> 6));
      v14 = *v13 | ((1LL << (i & 0x3F)) - 1);
      if ( a2 <= 0x7F )
        break;
      v15 = v12 + 8;
      if ( (v11 & 0x3F) == 0 )
        v15 = v5 + 8 * (v11 >> 6);
      if ( v14 )
      {
        if ( *++v13 )
          goto LABEL_16;
        v17 = !_BitScanReverse64((unsigned __int64 *)&v18, v14);
        if ( v17 )
LABEL_14:
          v16 = 64;
        else
          v16 = 63 - v18;
      }
      else
      {
        v16 = 0;
      }
LABEL_20:
      v8 = ((__int64)((__int64)v13 - v5) >> 3 << 6) - v16;
      if ( v8 > v11 )
        goto LABEL_6;
      v21 = &v13[(a2 - v16) >> 6];
      while ( ++v13 != v21 )
      {
        if ( *v13 )
          goto LABEL_16;
      }
      if ( (((_BYTE)a2 - (_BYTE)v16) & 0x3F) != 0 )
      {
        v17 = !_BitScanForward64((unsigned __int64 *)&v22, *v13);
        if ( v17 )
          LODWORD(v22) = 64;
        if ( (unsigned int)v22 < (((_BYTE)a2 - (_BYTE)v16) & 0x3Fu) )
        {
LABEL_16:
          while ( 1 )
          {
            v19 = v13;
            if ( (unsigned __int64)v13 > v15 )
              goto LABEL_6;
            if ( !*++v13 )
            {
              v17 = !_BitScanReverse64((unsigned __int64 *)&v20, *v19);
              if ( v17 )
                goto LABEL_14;
              v16 = 63 - v20;
              goto LABEL_20;
            }
          }
        }
      }
LABEL_59:
      if ( v8 != -1LL )
        return v8;
LABEL_60:
      if ( !i )
        return v8;
      v32 = a2 + a3;
      if ( a2 + a3 > v3 )
        v32 = v3;
      v7 = v32 - 1;
    }
    if ( a2 < 0x40 )
    {
      if ( a2 > 1 )
      {
        v23 = 0LL;
        v24 = (unsigned __int64 *)(v5 + 8 * (v7 >> 6));
        while ( v14 != -1 )
        {
LABEL_37:
          v17 = !_BitScanForward64((unsigned __int64 *)&v25, v14);
          if ( v17 )
            LODWORD(v25) = 64;
          if ( (unsigned int)(v23 + v25) >= a2 )
          {
            v27 = -v23;
LABEL_71:
            v8 = ((__int64)((__int64)v13 - v5) >> 3 << 6) + v27;
            goto LABEL_72;
          }
          v26 = a2;
          v27 = ~v14;
          while ( 1 )
          {
            v27 &= v27 >> (v26 >> 1);
            if ( !v27 )
              break;
            v26 -= v26 >> 1;
            if ( v26 <= 1 )
            {
              _BitScanForward64(&v27, v27);
              goto LABEL_71;
            }
          }
          if ( v13 == v24 )
            goto LABEL_6;
          v17 = !_BitScanReverse64((unsigned __int64 *)&v33, v14);
          if ( v17 )
            v23 = 64LL;
          else
            v23 = (unsigned int)(63 - v33);
          v14 = *++v13;
        }
        while ( 1 )
        {
          if ( (unsigned __int64)++v13 > v12 )
            goto LABEL_6;
          v14 = *v13;
          if ( *v13 != -1LL )
          {
            v23 = 0LL;
            goto LABEL_37;
          }
        }
      }
      while ( v14 == -1 )
      {
        if ( (unsigned __int64)++v13 > v12 )
          goto LABEL_6;
        v14 = *v13;
      }
      _BitScanForward64(&v34, ~v14);
      v8 = v34 + ((__int64)((__int64)v13 - v5) >> 3 << 6);
LABEL_72:
      if ( v8 > v11 )
        goto LABEL_6;
      goto LABEL_59;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v14 < 0 )
        {
          if ( (unsigned __int64)++v13 > v12 )
            goto LABEL_6;
          v14 = *v13;
        }
        v17 = !_BitScanReverse64((unsigned __int64 *)&v28, v14);
        if ( v17 )
          v29 = 64;
        else
          v29 = 63 - v28;
        v8 = ((((__int64)((__int64)v13 - v5) >> 3) + 1) << 6) - v29;
        if ( v8 > v11 )
          goto LABEL_6;
        v30 = a2 - v29;
        if ( a2 == v29 )
          goto LABEL_59;
        v14 = *++v13;
        if ( v30 >= 0x40 )
          break;
LABEL_56:
        v17 = !_BitScanForward64(&v31, v14);
        if ( v17 )
          v31 = 64LL;
        if ( v31 >= v30 )
          goto LABEL_59;
      }
      if ( !v14 )
      {
        v30 -= 64LL;
        if ( !v30 )
          goto LABEL_59;
        v14 = *++v13;
        goto LABEL_56;
      }
    }
  }
  return a3 & -(__int64)(a3 < *a1) & 0xFFFFFFFFFFFFFFF8uLL;
}
