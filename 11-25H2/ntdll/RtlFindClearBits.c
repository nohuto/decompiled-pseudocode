/*
 * XREFs of RtlFindClearBits @ 0x1800CAAB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindClearBits(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r14d
  unsigned int v4; // ebp
  __int64 v7; // r8
  unsigned int v8; // r9d
  __int64 v9; // rcx
  int v10; // r12d
  unsigned int v11; // r11d
  unsigned int v12; // edx
  __int64 v13; // rsi
  unsigned int v14; // r15d
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rax
  __int64 v17; // r10
  unsigned __int64 *v18; // r8
  int v19; // ecx
  unsigned __int64 *v20; // r11
  bool v21; // zf
  __int64 v22; // rax
  unsigned int v23; // r9d
  unsigned __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  unsigned int v27; // ecx
  unsigned int v28; // r9d
  unsigned __int64 v29; // rax
  unsigned int v30; // r9d
  __int64 v31; // rax
  __int64 v33; // rax
  int v34; // edx
  unsigned int v35; // r9d
  __int64 v36; // rax
  __int64 v37; // rax
  unsigned __int64 v38; // rdx
  __int64 v39; // rax
  int v40; // r9d
  unsigned __int64 *v41; // rax
  __int64 v42; // rcx
  unsigned __int64 v43; // rax
  char v44; // r9
  unsigned __int64 *v45; // r10
  __int64 v46; // [rsp+40h] [rbp+8h]
  __int64 v47; // [rsp+58h] [rbp+20h]

  v3 = *(_DWORD *)a1;
  v4 = 0;
  if ( a3 < *(_DWORD *)a1 )
    v4 = a3;
  v7 = *(_QWORD *)(a1 + 8);
  v46 = v7;
  v8 = v3 - 1;
  if ( a2 )
  {
    v9 = v7 & 4;
    v47 = v9;
    v10 = (unsigned int)v9 != 0LL ? 0x20 : 0;
    while ( 1 )
    {
      v11 = v10 + v8;
      v12 = v10 + v4;
      v13 = v7 - (v9 != 0 ? 4 : 0);
      if ( v8 - v4 + 1 >= a2 )
        break;
      v27 = -1;
LABEL_28:
      if ( !v4 )
        return v27;
      v9 = v47;
      v28 = a2 + a3;
      v4 = 0;
      if ( a2 + a3 > v3 )
        v28 = v3;
      v8 = v28 - 1;
    }
    v14 = v11 - a2 + 1;
    v15 = v13 + 8 * ((unsigned __int64)v14 >> 6);
    v16 = (unsigned __int64)v12 >> 6;
    v17 = *(_QWORD *)(v13 + 8 * v16) | ((1LL << (v12 & 0x3F)) - 1);
    v18 = (unsigned __int64 *)(v13 + 8 * v16);
    if ( a2 > 0x7F )
    {
      v38 = v15 + 8;
      if ( (v14 & 0x3F) == 0 )
        v38 = v13 + 8 * ((unsigned __int64)(v11 - a2 + 1) >> 6);
      if ( v17 )
      {
        if ( *++v18 )
          goto LABEL_67;
        v21 = !_BitScanReverse64((unsigned __int64 *)&v39, v17);
        if ( v21 )
          v40 = 64;
        else
          v40 = 63 - v39;
      }
      else
      {
        v40 = 0;
      }
      while ( 1 )
      {
        v27 = ((unsigned int)(((__int64)v18 - v13) >> 3) << 6) - v40;
        if ( v27 > v14 )
          break;
        v43 = a2 - v40;
        v44 = a2 - v40;
        v45 = &v18[v43 >> 6];
        while ( ++v18 != v45 )
        {
          if ( *v18 )
            goto LABEL_67;
        }
        v30 = v44 & 0x3F;
        if ( !v30 )
          goto LABEL_42;
        v21 = !_BitScanForward64((unsigned __int64 *)&v31, *v18);
        if ( v21 )
          LODWORD(v31) = 64;
        if ( (unsigned int)v31 >= v30 )
          goto LABEL_42;
        do
        {
LABEL_67:
          v41 = v18;
          if ( (unsigned __int64)v18 > v38 )
            goto LABEL_26;
          ++v18;
        }
        while ( *v18 );
        v21 = !_BitScanReverse64((unsigned __int64 *)&v42, *v41);
        if ( v21 )
          v40 = 64;
        else
          v40 = 63 - v42;
      }
      v27 = -1;
LABEL_27:
      v7 = v46;
      goto LABEL_28;
    }
    if ( a2 < 0x40 )
    {
      if ( a2 <= 1 )
      {
        while ( v17 == -1 )
        {
          if ( (unsigned __int64)++v18 > v15 )
            goto LABEL_26;
          v17 = *v18;
        }
        _BitScanForward64(&v29, ~v17);
        v27 = v29 + ((unsigned int)(((__int64)v18 - v13) >> 3) << 6);
        if ( v27 <= v14 )
        {
LABEL_42:
          if ( v27 != -1 )
          {
            v27 -= v10;
            return v27;
          }
        }
        else
        {
          v27 = -1;
        }
      }
      else
      {
        v19 = 0;
        v20 = (unsigned __int64 *)(v13 + 8 * ((unsigned __int64)v11 >> 6));
        while ( 1 )
        {
          if ( v17 == -1 )
          {
            while ( 1 )
            {
              if ( (unsigned __int64)++v18 > v15 )
                goto LABEL_26;
              v17 = *v18;
              if ( *v18 != -1LL )
              {
                v19 = 0;
                break;
              }
            }
          }
          v21 = !_BitScanForward64((unsigned __int64 *)&v22, v17);
          if ( v21 )
            LODWORD(v22) = 64;
          if ( v19 + (int)v22 >= a2 )
            break;
          v23 = a2;
          v24 = ~v17;
          while ( 1 )
          {
            v24 &= v24 >> (v23 >> 1);
            if ( !v24 )
              break;
            v23 -= v23 >> 1;
            if ( v23 <= 1 )
            {
              _BitScanForward64((unsigned __int64 *)&v25, v24);
              goto LABEL_25;
            }
          }
          if ( v18 == v20 )
            goto LABEL_26;
          v21 = !_BitScanReverse64((unsigned __int64 *)&v26, v17);
          v17 = v18[1];
          if ( v21 )
          {
            ++v18;
            v19 = 64;
          }
          else
          {
            v19 = 63 - v26;
            ++v18;
          }
        }
        LODWORD(v25) = -v19;
LABEL_25:
        v27 = ((unsigned int)(((__int64)v18 - v13) >> 3) << 6) + v25;
        if ( v27 <= v14 )
          goto LABEL_42;
LABEL_26:
        v27 = -1;
      }
      goto LABEL_27;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        while ( v17 < 0 )
        {
          if ( (unsigned __int64)++v18 > v15 )
            goto LABEL_26;
          v17 = *v18;
        }
        v21 = !_BitScanReverse64((unsigned __int64 *)&v33, v17);
        if ( v21 )
          v34 = 64;
        else
          v34 = 63 - v33;
        v27 = (((unsigned int)(((__int64)v18 - v13) >> 3) + 1) << 6) - v34;
        if ( v27 > v14 )
          goto LABEL_26;
        v35 = a2 - v34;
        if ( a2 == v34 )
          goto LABEL_42;
        v36 = v18[1];
        ++v18;
        v17 = v36;
        if ( v35 >= 0x40 )
          break;
LABEL_54:
        v21 = !_BitScanForward64((unsigned __int64 *)&v37, v17);
        if ( v21 )
          LODWORD(v37) = 64;
        if ( (unsigned int)v37 >= v35 )
          goto LABEL_42;
      }
      if ( !v36 )
      {
        v35 -= 64;
        if ( !v35 )
          goto LABEL_42;
        v17 = v18[1];
        ++v18;
        goto LABEL_54;
      }
    }
  }
  return v4 & 0xFFFFFFF8;
}
