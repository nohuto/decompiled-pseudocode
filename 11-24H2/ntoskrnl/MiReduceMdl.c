/*
 * XREFs of MiReduceMdl @ 0x14043D420
 * Callers:
 *     MiResolvePageFileFault @ 0x14033FD3C (MiResolvePageFileFault.c)
 *     MiPfPutPagesInTransition @ 0x140347F6C (MiPfPutPagesInTransition.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiReduceMdl(__int64 a1)
{
  char *v1; // r9
  __int64 v2; // r8
  char *v3; // rbx
  unsigned int v4; // eax
  unsigned __int64 v5; // r10
  __int64 v6; // rsi
  unsigned int v7; // edi
  __int64 v8; // rbx
  int v10; // edx
  unsigned int v11; // r8d
  char *v12; // rbx
  __int64 v13; // r8
  signed __int64 v14; // rdx

  v1 = (char *)(a1 + 48);
  v2 = *(unsigned int *)(a1 + 40);
  v3 = (char *)(a1 + 48);
  v4 = 0;
  v5 = ((unsigned __int64)((*(_DWORD *)(a1 + 32) + *(_DWORD *)(a1 + 44)) & 0xFFF) + v2 + 4095) >> 12;
  v6 = 0LL;
  v7 = 0;
  if ( v5 != 1 )
  {
    do
    {
      if ( *(_QWORD *)v3 != qword_140E37478 )
        break;
      ++v7;
      ++v6;
      v3 += 8;
    }
    while ( v7 < v5 - 1 );
  }
  if ( v6 )
  {
    *(_WORD *)(a1 + 8) -= 8 * v6;
    v14 = v1 - v3;
    *(_DWORD *)(a1 + 40) = v2 - ((_DWORD)v6 << 12);
    do
    {
      ++v7;
      *(_QWORD *)&v3[v14] = *(_QWORD *)v3;
      v3 += 8;
    }
    while ( v7 < v5 );
    v5 -= v6;
  }
  v8 = a1 + 8 * v5;
  if ( *(_QWORD *)(v8 + 40) == qword_140E37478 )
  {
    v10 = *(_DWORD *)(a1 + 40);
    *(_WORD *)(a1 + 8) -= 8;
    v11 = v10 & 0xFFFFF000;
    if ( (v10 & 0xFFF) == 0 )
      v11 = v10 - 4096;
    v12 = (char *)(v8 + 32);
    *(_DWORD *)(a1 + 40) = v11;
    v13 = 0LL;
    if ( v12 != v1 )
    {
      do
      {
        if ( *(_QWORD *)v12 != qword_140E37478 )
          break;
        ++v13;
        v12 -= 8;
      }
      while ( v12 != v1 );
      if ( v13 )
      {
        *(_WORD *)(a1 + 8) -= 8 * v13;
        *(_DWORD *)(a1 + 40) -= (_DWORD)v13 << 12;
      }
    }
    v5 += -1 - v13;
  }
  *(_WORD *)(a1 + 10) |= 0x4000u;
  while ( v4 < v5 )
  {
    if ( *(_QWORD *)v1 == qword_140E37478 )
    {
      *(_WORD *)(a1 + 10) &= ~0x4000u;
      return v6;
    }
    ++v4;
    v1 += 8;
  }
  return v6;
}
