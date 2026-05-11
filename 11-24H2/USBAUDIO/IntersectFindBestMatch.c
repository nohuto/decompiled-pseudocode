/*
 * XREFs of IntersectFindBestMatch @ 0x140030D0C
 * Callers:
 *     IntersectFindDataRange @ 0x14003AC1C (IntersectFindDataRange.c)
 * Callees:
 *     IntersectGetMaxSampleRate @ 0x14003DE8C (IntersectGetMaxSampleRate.c)
 */

__int64 __fastcall IntersectFindBestMatch(__int64 *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // ebp
  unsigned int v4; // r15d
  unsigned int v5; // r12d
  __int64 *v7; // r11
  __int64 *v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // r10
  __int64 *v12; // rdx
  __int64 v13; // rax
  unsigned int v14; // ecx
  __int64 v15; // r8
  unsigned int v16; // ecx
  __int64 *v17; // rdx
  __int64 v18; // r9
  __int64 *v19; // rdx
  __int64 v20; // r8
  unsigned int v21; // eax
  unsigned int v22; // edx
  __int64 *v23; // rax
  unsigned int v24; // edx
  __int64 *v25; // rax
  __int64 v26; // rax
  __int64 *v27; // rcx

  v3 = 0;
  v4 = 0;
  v5 = 0;
  v7 = a1;
  if ( a2 )
  {
    v8 = a1;
    v9 = a2;
    v10 = a2;
    do
    {
      IntersectGetMaxSampleRate(*v8++, a3);
      --v10;
    }
    while ( v10 );
    v12 = v7;
    do
    {
      v13 = *v12++;
      v14 = *(_DWORD *)(v13 + 100);
      if ( v14 <= v3 )
        v14 = v3;
      v3 = v14;
      --v9;
    }
    while ( v9 );
    v15 = v11;
    v16 = v11;
    v17 = v7;
    do
    {
      if ( *(_DWORD *)(*v17 + 100) < v3 )
      {
        *v17 = 0LL;
        --v16;
      }
      ++v17;
      --v15;
    }
    while ( v15 );
    v18 = v11;
    v19 = v7;
    do
    {
      v20 = *v19;
      if ( *v19 )
      {
        v21 = *(_DWORD *)(v20 + 64);
        if ( v21 <= v4 )
          v21 = v4;
        v4 = v21;
        if ( *(_DWORD *)(v20 + 104) > v5 )
          v5 = *(_DWORD *)(v20 + 104);
      }
      ++v19;
      --v18;
    }
    while ( v18 );
    v22 = 0;
    v23 = v7;
    do
    {
      if ( v16 <= 1 )
        break;
      if ( *v23 && *(_DWORD *)(*v23 + 64) < v4 )
      {
        *v23 = 0LL;
        --v16;
      }
      ++v22;
      ++v23;
    }
    while ( v22 < (unsigned int)v11 );
    v24 = 0;
    v25 = v7;
    do
    {
      if ( v16 <= 1 )
        break;
      if ( *v25 && *(_DWORD *)(*v25 + 104) < v5 )
      {
        *v25 = 0LL;
        --v16;
      }
      ++v24;
      ++v25;
    }
    while ( v24 < (unsigned int)v11 );
    v26 = 0LL;
    if ( (_DWORD)v11 )
    {
      v27 = v7;
      do
      {
        if ( *v27 )
          break;
        v26 = (unsigned int)(v26 + 1);
        ++v27;
      }
      while ( (unsigned int)v26 < (unsigned int)v11 );
    }
  }
  else
  {
    v26 = 0LL;
  }
  return v7[v26];
}
