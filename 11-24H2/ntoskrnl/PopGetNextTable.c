/*
 * XREFs of PopGetNextTable @ 0x1405D0B64
 * Callers:
 *     PopCompressHiberBlocks @ 0x140B5E674 (PopCompressHiberBlocks.c)
 *     PopWriteHiberImage @ 0x140B60960 (PopWriteHiberImage.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x1402932D0 (MmGetPhysicalAddress.c)
 *     MmMapMemoryDumpMdlEx2 @ 0x1404F6068 (MmMapMemoryDumpMdlEx2.c)
 */

__int64 __fastcall PopGetNextTable(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, unsigned __int64 a6)
{
  unsigned int v6; // ebp
  unsigned __int64 *v7; // r13
  __int64 v9; // r14
  __int64 v10; // r11
  unsigned __int16 v11; // r10
  unsigned int v12; // esi
  __int64 v13; // r12
  unsigned int v14; // ecx
  __int64 v15; // r9
  unsigned int v16; // ecx
  __int64 v17; // r8
  unsigned int v18; // edi
  __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // rax
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  unsigned __int16 i; // r15
  unsigned int v24; // edi
  unsigned int *v25; // rax
  unsigned int v26; // edi
  unsigned int v27; // ecx
  __int64 v28; // r10
  __int64 v29; // r12
  unsigned int v30; // r8d
  unsigned __int64 v31; // rbp
  _DWORD *v32; // r9
  int v33; // r11d
  _DWORD *j; // rax
  unsigned int v35; // r11d
  __int64 v36; // rcx
  unsigned __int64 k; // rax
  unsigned int *v38; // rax
  unsigned int v39; // r8d
  __int64 v40; // rax
  unsigned __int64 v41; // r9
  unsigned __int16 v43; // [rsp+80h] [rbp+8h]
  _BYTE *v44; // [rsp+88h] [rbp+10h]

  v44 = (_BYTE *)a2;
  v6 = 0;
  v7 = (unsigned __int64 *)(a4 + 48);
  v43 = 0;
  v9 = a4;
  *(_DWORD *)a2 = 0;
  v10 = a3;
  v11 = 0;
  v12 = 0;
  while ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 4), 1, 0) )
  {
    do
      _mm_pause();
    while ( *(_DWORD *)(a1 + 4) );
  }
  v13 = a1 + 80;
  if ( *(_QWORD *)(a1 + 120) != a1 + 80 )
  {
    v14 = *(_DWORD *)(a1 + 316);
    if ( v14 )
    {
      do
      {
        a2 = *(_QWORD *)(a1 + 120);
        if ( a2 == v13 )
          break;
        v15 = *(_QWORD *)(a1 + 128);
        v16 = v14 - v12;
        v17 = v15 + *(_QWORD *)(a2 + 24);
        v18 = *(_DWORD *)(a2 + 32) - v17;
        v19 = *(_QWORD *)(a2 + 40) + (v15 << 12);
        if ( v18 <= v16 )
        {
          *(_QWORD *)(a1 + 120) = *(_QWORD *)a2;
          v20 = 0LL;
        }
        else
        {
          v20 = v15 + v16;
          v18 = v16;
        }
        *(_QWORD *)(a1 + 128) = v20;
        v21 = v11++;
        v43 = v11;
        *(_QWORD *)(v10 + 8 * v21) = (16 * v17) | ((_BYTE)v18 - 1) & 0xF;
        if ( v18 )
        {
          v12 += v18;
          do
          {
            PhysicalAddress = MmGetPhysicalAddress((PVOID)(v19 + ((unsigned __int64)v6++ << 12)));
            *v7++ = (unsigned __int64)PhysicalAddress.QuadPart >> 12;
            --v18;
          }
          while ( v18 );
          v11 = v43;
          v13 = a1 + 80;
          v10 = a3;
        }
        v14 = *(_DWORD *)(a1 + 316);
        v6 = 0;
      }
      while ( v12 < v14 );
      v9 = a4;
    }
  }
  for ( i = v43; ; ++i )
  {
    v24 = *(_DWORD *)(a1 + 316);
    if ( v12 >= v24 )
      break;
    v25 = *(unsigned int **)(a1 + 112);
    v26 = v24 - v12;
    v27 = *(_DWORD *)(a1 + 128);
    v28 = *v25;
    if ( (unsigned int)v28 <= v27 )
      goto LABEL_40;
    v29 = *((_QWORD *)v25 + 1);
    v30 = 0;
    v31 = v29 + 4 * ((unsigned __int64)(unsigned int)(v28 - 1) >> 5);
    v32 = (_DWORD *)(v29 + 4 * ((unsigned __int64)v27 >> 5));
    v33 = ((1 << (v27 & 0x1F)) - 1) | *v32;
    for ( j = v32 + 1; ; ++j )
    {
      v35 = ~v33;
      if ( v35 )
        break;
      if ( (unsigned __int64)j > v31 )
        goto LABEL_24;
      v33 = *++v32;
    }
    _BitScanForward64((unsigned __int64 *)&v36, v35);
    a2 = (unsigned int)v36 + 32 * (unsigned int)(((__int64)v32 - v29) >> 2);
    if ( (unsigned int)a2 > (unsigned int)v28 )
    {
LABEL_24:
      a2 = (unsigned int)v28;
      goto LABEL_36;
    }
    for ( k = ~(v35 | ((1 << v36) - 1)); !(_DWORD)k; k = *v38 )
    {
      if ( v30 > v26 || (v30 += 32, v38 = v32 + 1, (unsigned __int64)(v32 + 1) > v31) )
      {
        LODWORD(k) = 32;
        goto LABEL_32;
      }
      ++v32;
    }
    _BitScanForward64(&k, k);
LABEL_32:
    v39 = k + 32 * (((__int64)v32 - v29) >> 2);
    if ( v39 > (unsigned int)v28 )
      v39 = v28;
    v30 = v39 - a2;
    if ( v30 > v26 )
      v30 = v26;
LABEL_36:
    if ( !v30 )
    {
LABEL_40:
      *(_QWORD *)(a1 + 128) = v28;
      break;
    }
    *(_QWORD *)(a1 + 128) = (unsigned int)a2 + v30;
    v12 += v30;
    v40 = 16LL * (unsigned int)a2;
    v41 = (unsigned int)a2;
    a2 = a3;
    *(_QWORD *)(a3 + 8LL * i) = v40 | ((_BYTE)v30 - 1) & 0xF;
    do
    {
      *v7++ = v41++;
      --v30;
    }
    while ( v30 );
  }
  *(_DWORD *)(a1 + 4) = 0;
  if ( v12 )
  {
    *v44 = i;
    *(_QWORD *)v9 = 0LL;
    *(_WORD *)(v9 + 10) = 0;
    *(_DWORD *)(v9 + 40) = v12 << 12;
    *(_WORD *)(v9 + 8) = 8 * (v12 + 6);
    *(_QWORD *)(v9 + 32) = 0LL;
    *(_DWORD *)(v9 + 44) = 0;
    MmMapMemoryDumpMdlEx2(a6, a2, v9, a5 == 0);
  }
  return v12;
}
