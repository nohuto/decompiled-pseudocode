/*
 * XREFs of MiZeroInflectionPointReached @ 0x140694DA8
 * Callers:
 *     MiZeroPageCalibrateLastDpcProcessorDone @ 0x140695538 (MiZeroPageCalibrateLastDpcProcessorDone.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiZeroInflectionPointReached(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // r10
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  __int64 v9; // rsi
  unsigned __int64 v10; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r11
  unsigned __int64 v16; // rsi
  unsigned int v17; // r15d
  __int64 v18; // r11
  bool v19; // zf
  unsigned int v20; // r11d
  int v21; // edx
  unsigned int *v22; // r8
  __int64 v23; // r10
  __int64 v24; // rax
  __int64 v25; // rcx

  v1 = *(int *)(a1 + 8);
  if ( !*(_BYTE *)(v1 + a1 + 38) )
  {
    v3 = *(unsigned int *)(a1 + 192);
    if ( (unsigned int)v3 < 4 && (_DWORD)v3 != *(_DWORD *)(a1 + 32) )
      return 0LL;
    v4 = *(_QWORD *)(a1 + 80);
    v5 = -1LL;
    v6 = 0LL;
    v7 = -1LL;
    v8 = v4;
    if ( (_DWORD)v3 )
    {
      v9 = v3;
      do
      {
        v10 = *(_QWORD *)(v8 + 8 * v1);
        if ( v10 < v7 )
          v6 = v8;
        else
          v10 = v7;
        v8 += 16LL;
        v7 = v10;
        --v9;
      }
      while ( v9 );
    }
    if ( (unsigned int)((__int64)(v6 - v4) >> 4) + 4 > (unsigned int)v3 && (_DWORD)v3 != *(_DWORD *)(a1 + 32) )
      return 0LL;
    v12 = v7 + v7 / 0xA;
    if ( v6 > v4 )
    {
      v13 = v6 - 16;
      v14 = ((v6 - v4 - 1) >> 4) + 1;
      do
      {
        v15 = *(_QWORD *)(v13 + 8 * v1);
        if ( v15 && v15 < v12 )
          v6 = v13;
        v13 -= 16LL;
        --v14;
      }
      while ( v14 );
    }
    v16 = v4;
    v17 = 0;
    v18 = (__int64)(v6 - v4) >> 4;
    v19 = (_DWORD)v18 == -1;
    v20 = v18 + 1;
    *(_DWORD *)(a1 + 4 * v1 + 72) = v20;
    if ( !v19 )
    {
      do
      {
        ++v17;
        if ( *(_QWORD *)(v16 + 8 * v1) > *(_QWORD *)(v4 + 8 * v1) / (unsigned __int64)v17
                                       + *(_QWORD *)(v4 + 8 * v1) / (unsigned __int64)v17 / 7 )
          break;
        v6 = v16;
        v16 += 16LL;
      }
      while ( v17 < v20 );
    }
    *(_DWORD *)(a1 + 4 * v1 + 64) = ((__int64)(v6 - v4) >> 4) + 1;
    if ( (_DWORD)v3 != *(_DWORD *)(a1 + 32) )
      *(_BYTE *)(v1 + a1 + 38) = 1;
    v21 = 0;
    v22 = (unsigned int *)(a1 + 64);
    v23 = 0LL;
    do
    {
      v24 = *v22;
      if ( (_DWORD)v24 )
      {
        v25 = v23 + 2 * v24;
        if ( *(_QWORD *)(v4 + 8 * v25 - 16) < v5 )
        {
          v5 = *(_QWORD *)(v4 + 8 * v25 - 16);
          *(_BYTE *)(a1 + 36) = v21;
        }
      }
      ++v21;
      ++v23;
      ++v22;
    }
    while ( v21 <= 1 );
  }
  return 1LL;
}
