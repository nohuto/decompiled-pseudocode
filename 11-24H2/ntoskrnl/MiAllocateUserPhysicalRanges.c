/*
 * XREFs of MiAllocateUserPhysicalRanges @ 0x140AAFD18
 * Callers:
 *     MiAllocateUserPhysicalPages @ 0x1407F8C38 (MiAllocateUserPhysicalPages.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MmAllocateMemoryRanges @ 0x1407EB700 (MmAllocateMemoryRanges.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

_DWORD *__fastcall MiAllocateUserPhysicalRanges(__int64 a1, unsigned __int64 a2, int a3, int a4, _DWORD *a5)
{
  __int64 v5; // r15
  unsigned __int64 v6; // rsi
  _DWORD *v10; // r14
  _DWORD *v11; // rdi
  __int64 Pool; // rax
  __int64 v13; // rax
  int v14; // ecx
  _QWORD *v15; // r10
  _QWORD *v16; // r8
  int v17; // ecx
  unsigned __int64 v18; // r9
  __int64 v19; // r11
  __int64 v20; // rdx
  __int64 v21; // rax
  __int128 v23; // [rsp+20h] [rbp-40h] BYREF
  __int128 v24; // [rsp+30h] [rbp-30h]
  __int128 v25; // [rsp+40h] [rbp-20h]
  PVOID P; // [rsp+50h] [rbp-10h]

  v5 = (__int64)a5;
  v6 = a2 >> 18;
  P = 0LL;
  v10 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  if ( a5 )
  {
    v11 = a5;
  }
  else
  {
    Pool = MiAllocatePool(0x40uLL, 8 * v6 + 48, 1917873485);
    v11 = (_DWORD *)Pool;
    if ( !Pool )
      goto LABEL_14;
    *(_QWORD *)Pool = 0LL;
    *(_WORD *)(Pool + 8) = 8 * (v6 + 6);
    *(_DWORD *)(Pool + 40) = (_DWORD)v6 << 12;
    *(_WORD *)(Pool + 10) = 0;
    *(_QWORD *)(Pool + 32) = 0LL;
    *(_DWORD *)(Pool + 44) = 0;
  }
  v13 = *(_QWORD *)(a1 + 184);
  v14 = DWORD1(v23) | 1;
  LODWORD(v23) = 1;
  *((_QWORD *)&v24 + 1) = 0x40000000LL;
  *((_QWORD *)&v23 + 1) = v13;
  LODWORD(v25) = a3;
  *(_QWORD *)&v24 = v6;
  if ( !a4 )
    v14 = DWORD1(v23) | 3;
  DWORD1(v23) = v14 | 4;
  if ( (int)MmAllocateMemoryRanges((ULONG_PTR)&v23) >= 0 )
  {
    v15 = v11 + 12;
    v16 = P;
    v17 = 0;
    v18 = 0LL;
    if ( *((_QWORD *)&v25 + 1) )
    {
      do
      {
        v19 = 0LL;
        v20 = *v16 % *((_QWORD *)&v24 + 1) + 1LL;
        v17 += v20;
        do
        {
          v21 = v19 + (*v16 >> 12);
          v19 += 0x40000LL;
          *v15++ = v21;
          --v20;
        }
        while ( v20 );
        ++v16;
        ++v18;
      }
      while ( v18 < *((_QWORD *)&v25 + 1) );
      v5 = (__int64)a5;
    }
    v10 = v11;
    v11[10] = v17 << 12;
    v11 = 0LL;
  }
LABEL_14:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v11 && v11 != (_DWORD *)v5 )
    ExFreePoolWithTag(v11, 0);
  return v10;
}
