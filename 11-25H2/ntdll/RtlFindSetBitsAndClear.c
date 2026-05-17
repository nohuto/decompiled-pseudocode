/*
 * XREFs of RtlFindSetBitsAndClear @ 0x18013E7F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlClearBits @ 0x1800B8440 (RtlClearBits.c)
 */

__int64 __fastcall RtlFindSetBitsAndClear(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r13d
  int v6; // ebx
  int v7; // r9d
  unsigned int v8; // ebx
  __int64 v9; // rcx
  int v10; // eax
  int v11; // r15d
  unsigned int v12; // edx
  unsigned int v13; // r10d
  __int64 v14; // r14
  unsigned int v15; // ebp
  __int64 v16; // r8
  unsigned __int64 v17; // rsi
  _QWORD *v18; // rdx
  signed __int64 v19; // r8
  unsigned __int64 v20; // r9
  int v21; // ecx
  bool v22; // zf
  __int64 v23; // rax
  _QWORD *v24; // rcx
  __int64 v25; // r8
  char v26; // r8
  _QWORD *v27; // rcx
  unsigned int v28; // r8d
  __int64 v29; // rcx
  int v30; // ebx
  _QWORD *v31; // rdi
  __int64 v32; // rax
  unsigned int v33; // r10d
  unsigned __int64 v34; // r9
  __int64 v35; // rbx
  __int64 v36; // rax
  int v37; // r8d
  unsigned int v38; // ecx
  __int64 v39; // rax
  unsigned int v40; // r9d
  __int64 v41; // rax
  bool v42; // cc
  unsigned __int64 v43; // rax
  int v45; // [rsp+78h] [rbp+10h]
  unsigned int v46; // [rsp+80h] [rbp+18h]
  __int64 v47; // [rsp+88h] [rbp+20h]

  v46 = a3;
  v3 = *(_DWORD *)a1;
  v6 = a3 < *(_DWORD *)a1 ? a3 : 0;
  v7 = *(_DWORD *)a1 - 1;
  if ( !a2 )
  {
    v8 = v6 & 0xFFFFFFF8;
    goto LABEL_79;
  }
  v9 = *(_QWORD *)(a1 + 8) & 4LL;
  v47 = v9;
  v10 = v6;
  v11 = (unsigned int)v9 != 0LL ? 0x20 : 0;
  while ( 1 )
  {
    v12 = v11 + v10;
    v13 = v11 + v7;
    v45 = v10;
    v14 = *(_QWORD *)(a1 + 8) - (v9 != 0 ? 4 : 0);
    if ( v7 - v10 + 1 < a2 )
    {
      v8 = -1;
      goto LABEL_60;
    }
    v15 = v13 - a2 + 1;
    v16 = (1LL << (v12 & 0x3F)) - 1;
    v17 = v14 + 8 * ((unsigned __int64)v15 >> 6);
    v18 = (_QWORD *)(v14 + 8 * ((unsigned __int64)v12 >> 6));
    v19 = ~*v18 | v16;
    if ( a2 <= 0x7F )
    {
      if ( a2 < 0x40 )
      {
        if ( a2 > 1 )
        {
          v30 = 0;
          v31 = (_QWORD *)(v14 + 8 * ((unsigned __int64)v13 >> 6));
          while ( v19 != -1 )
          {
LABEL_36:
            v22 = !_BitScanForward64((unsigned __int64 *)&v32, v19);
            if ( v22 )
              LODWORD(v32) = 64;
            if ( v30 + (int)v32 >= a2 )
            {
              LODWORD(v35) = -v30;
LABEL_71:
              v8 = ((unsigned int)(((__int64)v18 - v14) >> 3) << 6) + v35;
              v42 = v8 <= v15;
              goto LABEL_72;
            }
            v33 = a2;
            v34 = ~v19;
            while ( 1 )
            {
              v34 &= v34 >> (v33 >> 1);
              if ( !v34 )
                break;
              v33 -= v33 >> 1;
              if ( v33 <= 1 )
              {
                _BitScanForward64((unsigned __int64 *)&v35, v34);
                goto LABEL_71;
              }
            }
            if ( v18 == v31 )
              goto LABEL_69;
            v22 = !_BitScanReverse64((unsigned __int64 *)&v41, v19);
            if ( v22 )
              v30 = 64;
            else
              v30 = 63 - v41;
            v19 = ~*++v18;
          }
          while ( 1 )
          {
            if ( (unsigned __int64)++v18 > v17 )
              goto LABEL_69;
            v19 = ~*v18;
            if ( *v18 )
            {
              v30 = 0;
              goto LABEL_36;
            }
          }
        }
        while ( v19 == -1 )
        {
          if ( (unsigned __int64)++v18 > v17 )
            goto LABEL_69;
          v19 = ~*v18;
        }
        _BitScanForward64(&v43, ~v19);
        v8 = v43 + ((unsigned int)(((__int64)v18 - v14) >> 3) << 6);
        v42 = v8 <= v15;
LABEL_72:
        if ( !v42 )
          goto LABEL_69;
        goto LABEL_58;
      }
      while ( 1 )
      {
        while ( 1 )
        {
          while ( v19 < 0 )
          {
            if ( (unsigned __int64)++v18 > v17 )
              goto LABEL_69;
            v19 = ~*v18;
          }
          v22 = !_BitScanReverse64((unsigned __int64 *)&v36, v19);
          if ( v22 )
            v37 = 64;
          else
            v37 = 63 - v36;
          v8 = (((unsigned int)(((__int64)v18 - v14) >> 3) + 1) << 6) - v37;
          if ( v8 > v15 )
            goto LABEL_69;
          v38 = a2 - v37;
          if ( a2 == v37 )
            goto LABEL_58;
          v19 = ~*++v18;
          if ( v38 >= 0x40 )
            break;
LABEL_55:
          v22 = !_BitScanForward64((unsigned __int64 *)&v39, v19);
          if ( v22 )
            LODWORD(v39) = 64;
          if ( (unsigned int)v39 >= v38 )
            goto LABEL_58;
        }
        if ( *v18 == -1LL )
        {
          v38 -= 64;
          if ( !v38 )
            goto LABEL_58;
          v19 = ~*++v18;
          goto LABEL_55;
        }
      }
    }
    v20 = v17 + 8;
    if ( (v15 & 0x3F) == 0 )
      v20 = v14 + 8 * ((unsigned __int64)(v13 - a2 + 1) >> 6);
    if ( v19 )
    {
      if ( *++v18 != -1LL )
        goto LABEL_15;
      v22 = !_BitScanReverse64((unsigned __int64 *)&v23, v19);
      if ( v22 )
LABEL_13:
        v21 = 64;
      else
        v21 = 63 - v23;
    }
    else
    {
      v21 = 0;
    }
LABEL_19:
    v8 = ((unsigned int)(((__int64)v18 - v14) >> 3) << 6) - v21;
    if ( v8 > v15 )
      goto LABEL_69;
    v26 = a2 - v21;
    v27 = &v18[(unsigned __int64)(a2 - v21) >> 6];
    while ( ++v18 != v27 )
    {
      if ( *v18 != -1LL )
        goto LABEL_15;
    }
    v28 = v26 & 0x3F;
    if ( v28 )
    {
      v22 = !_BitScanForward64((unsigned __int64 *)&v29, ~*v18);
      if ( v22 )
        LODWORD(v29) = 64;
      if ( (unsigned int)v29 < v28 )
      {
LABEL_15:
        while ( 1 )
        {
          v24 = v18;
          if ( (unsigned __int64)v18 > v20 )
            break;
          if ( *++v18 == -1LL )
          {
            v22 = !_BitScanReverse64((unsigned __int64 *)&v25, ~*v24);
            if ( v22 )
              goto LABEL_13;
            v21 = 63 - v25;
            goto LABEL_19;
          }
        }
LABEL_69:
        v8 = -1;
        goto LABEL_59;
      }
    }
LABEL_58:
    if ( v8 != -1 )
      break;
LABEL_59:
    a3 = v46;
LABEL_60:
    if ( !v45 )
      goto LABEL_79;
    v9 = v47;
    v40 = a2 + a3;
    if ( a2 + a3 > v3 )
      v40 = v3;
    v7 = v40 - 1;
    v10 = 0;
  }
  v8 -= v11;
LABEL_79:
  if ( v8 != -1 )
    RtlClearBits(a1, v8, a2);
  return v8;
}
