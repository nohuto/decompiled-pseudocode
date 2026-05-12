/*
 * XREFs of RaidLogGetParm4 @ 0x140020FC0
 * Callers:
 *     RaidAdapterPostScatterGatherExecute @ 0x140012900 (RaidAdapterPostScatterGatherExecute.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RaidLogGetParm4(__int64 a1)
{
  __int64 v1; // r8
  int v2; // r9d
  unsigned __int8 v3; // r11
  unsigned __int8 v4; // r14
  unsigned __int8 v5; // bp
  unsigned __int8 v6; // bl
  unsigned __int8 v7; // di
  int v8; // r15d
  unsigned __int8 v9; // al
  int v10; // esi
  unsigned int v11; // r10d
  __int64 v12; // rdx
  unsigned int v13; // edi
  unsigned int *m; // rbx
  __int64 v15; // rax
  unsigned __int64 v16; // r8
  int v17; // ebp
  __int64 v18; // rsi
  unsigned __int8 *v20; // rax
  int v21; // ebp
  unsigned int v22; // ebx
  int v23; // r11d
  unsigned int v24; // ebx
  int v25; // r8d
  unsigned int *j; // r11
  __int64 v27; // rax
  unsigned __int64 v28; // r14
  __int64 v29; // rdi
  unsigned int v30; // r11d
  unsigned int *k; // r8
  __int64 v32; // rax
  unsigned __int64 v33; // rsi
  __int64 v34; // rbp
  unsigned int *i; // r8
  __int64 v36; // rax
  unsigned __int64 v37; // rsi
  __int64 v38; // rdi

  v1 = *(_QWORD *)(a1 + 168);
  v2 = 0;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 255;
  v9 = *(_BYTE *)(v1 + 2);
  v10 = 0;
  if ( v9 == 40 )
    v11 = *(_DWORD *)(v1 + 20);
  else
    v11 = *(unsigned __int8 *)(v1 + 2);
  v12 = *(_QWORD *)(a1 + 168);
  if ( v9 != 40 )
    v12 = 0LL;
  if ( v11 )
  {
    if ( v11 != 23 )
    {
      if ( v11 != 36 )
      {
        if ( v11 != 37 )
          return (unsigned __int64)v11 << 24;
        if ( v9 != 40 )
          return (unsigned __int8)*(_DWORD *)(v1 + 64) | (unsigned __int64)((*(_DWORD *)(v1 + 8) | (((v9 << 8) | (unsigned int)*(unsigned __int8 *)(v1 + 4)) << 8)) << 8);
        v22 = *(_DWORD *)(v12 + 56);
        v23 = 0;
        if ( v22 )
        {
          for ( i = (unsigned int *)(v12 + 120); ; ++i )
          {
            v36 = *i;
            if ( (unsigned int)v36 >= 0x80 )
            {
              v37 = *(unsigned int *)(v12 + 16);
              if ( (unsigned int)v36 <= (unsigned int)v37 )
              {
                v38 = v36 + v12;
                if ( *(_DWORD *)(v36 + v12) == 98 && (unsigned __int64)(unsigned int)v36 + 24 <= v37 )
                  break;
              }
            }
            if ( ++v23 >= v22 )
              return (unsigned __int8)v2 | (unsigned __int64)((v8 | ((((unsigned __int8)v11 << 8) | (unsigned int)v4) << 8)) << 8);
          }
          v4 = *(_BYTE *)(v38 + 8);
          v8 = *(_DWORD *)(v38 + 12);
          v2 = *(_DWORD *)(v38 + 16);
        }
        return (unsigned __int8)v2 | (unsigned __int64)((v8 | ((((unsigned __int8)v11 << 8) | (unsigned int)v4) << 8)) << 8);
      }
      if ( v9 != 40 )
        return *(unsigned __int8 *)(v1 + 4) | (unsigned __int64)((*(_DWORD *)(v1 + 64) | ((*(_DWORD *)(v1 + 8) | (v9 << 8)) << 8)) << 8);
      v24 = *(_DWORD *)(v12 + 56);
      v25 = 0;
      if ( v24 )
      {
        for ( j = (unsigned int *)(v12 + 120); ; ++j )
        {
          v27 = *j;
          if ( (unsigned int)v27 >= 0x80 )
          {
            v28 = *(unsigned int *)(v12 + 16);
            if ( (unsigned int)v27 <= (unsigned int)v28 )
            {
              v29 = v27 + v12;
              if ( *(_DWORD *)(v27 + v12) == 97 && (unsigned __int64)(unsigned int)v27 + 24 <= v28 )
                break;
            }
          }
          if ( ++v25 >= v24 )
            return v5 | (unsigned __int64)((v10 | ((v2 | ((unsigned __int8)v11 << 8)) << 8)) << 8);
        }
        v2 = *(_DWORD *)(v29 + 12);
        v10 = *(_DWORD *)(v29 + 16);
        v5 = *(_BYTE *)(v29 + 8);
      }
      return v5 | (unsigned __int64)((v10 | ((v2 | ((unsigned __int8)v11 << 8)) << 8)) << 8);
    }
    if ( v9 != 40 )
      return *(unsigned __int8 *)(v1 + 9) | (unsigned __int64)(((v9 << 8) | *(unsigned __int8 *)(v1 + 4)) << 16);
    v30 = *(_DWORD *)(v12 + 56);
    if ( v30 )
    {
      for ( k = (unsigned int *)(v12 + 120); ; ++k )
      {
        v32 = *k;
        if ( (unsigned int)v32 >= 0x80 )
        {
          v33 = *(unsigned int *)(v12 + 16);
          if ( (unsigned int)v32 <= (unsigned int)v33 )
          {
            v34 = v32 + v12;
            if ( *(_DWORD *)(v32 + v12) == 96 && (unsigned __int64)(unsigned int)v32 + 24 <= v33 )
              break;
          }
        }
        if ( ++v2 >= v30 )
          return v7 | (unsigned __int64)((v6 | 0x1700u) << 16);
      }
      v6 = *(_BYTE *)(v34 + 8);
      v7 = *(_BYTE *)(v34 + 9);
    }
    return v7 | (unsigned __int64)((v6 | 0x1700u) << 16);
  }
  if ( v9 != 40 )
    return *(unsigned __int8 *)(v1 + 8) | (unsigned __int64)(((((v9 << 8) | *(unsigned __int8 *)(v1 + 72)) << 8) | *(unsigned __int8 *)(v1 + 9)) << 8);
  if ( *(_BYTE *)(v12 + 2) != 40 )
    return (unsigned __int64)v3 << 16;
  if ( *(_DWORD *)(v12 + 20) )
    return (unsigned __int64)v3 << 16;
  v13 = *(_DWORD *)(v12 + 56);
  if ( !v13 )
    return (unsigned __int64)v3 << 16;
  for ( m = (unsigned int *)(v12 + 120); ; ++m )
  {
    v15 = *m;
    if ( (unsigned int)v15 < 0x80 )
      goto LABEL_15;
    v16 = *(unsigned int *)(v12 + 16);
    if ( (unsigned int)v15 >= (unsigned int)v16 )
      goto LABEL_15;
    v17 = *(_DWORD *)(v15 + v12);
    v18 = v15 + v12;
    if ( v17 == 64 )
    {
      if ( (unsigned __int64)(unsigned int)v15 + 40 <= v16 )
      {
        if ( !*(_BYTE *)(v18 + 10) )
          return (unsigned __int64)v3 << 16;
LABEL_21:
        v20 = (unsigned __int8 *)(v18 + 24);
        goto LABEL_22;
      }
      goto LABEL_15;
    }
    v21 = v17 - 65;
    if ( v21 )
      break;
    if ( (unsigned __int64)(unsigned int)v15 + 56 <= v16 )
    {
      if ( !*(_BYTE *)(v18 + 10) )
        return (unsigned __int64)v3 << 16;
      goto LABEL_21;
    }
LABEL_15:
    if ( ++v2 >= v13 )
      return (unsigned __int64)v3 << 16;
  }
  if ( v21 != 1 || (unsigned __int64)(unsigned int)v15 + 40 > v16 )
    goto LABEL_15;
  if ( !*(_DWORD *)(v18 + 12) )
    return (unsigned __int64)v3 << 16;
  v20 = (unsigned __int8 *)(v18 + 32);
LABEL_22:
  if ( v20 )
    v3 = *v20;
  return (unsigned __int64)v3 << 16;
}
