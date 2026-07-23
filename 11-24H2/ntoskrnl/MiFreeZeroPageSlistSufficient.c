/*
 * XREFs of MiFreeZeroPageSlistSufficient @ 0x14041DD40
 * Callers:
 *     MiPageFreeToZero @ 0x140220160 (MiPageFreeToZero.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiFreeZeroPageSlistSufficient(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // r9
  unsigned int v5; // esi
  unsigned int v6; // r13d
  unsigned __int64 v7; // rcx
  __int64 v8; // rbp
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // r12
  __int64 v12; // r10
  __int64 *v13; // rdx
  __int64 *v14; // r8
  __int64 v15; // r11
  __int64 v16; // r9
  __int64 *v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v22; // [rsp+30h] [rbp+8h]

  v3 = *(_QWORD *)(a1 + 14984);
  if ( (*(_DWORD *)(v3 + 4) & 0x10) != 0
    || *(unsigned __int16 *)(*(_QWORD *)(a1 + 8LL * a3 + 14944) + 16LL * (unsigned __int8)a2) >= *(int *)(v3 + 16976) )
  {
    return 1LL;
  }
  v5 = 0;
  v6 = (a2 >> 8) & 1;
  v22 = a3 != 0;
  v7 = 0LL;
  v8 = 0LL;
  v9 = a1 + 928 + 8LL * v6;
  do
  {
    if ( (unsigned __int8)MmNumberOfChannels > 1u )
      v10 = *(_QWORD *)(a1 + 8 * (v8 + 2LL * v6) + 15152);
    else
      v10 = *(_QWORD *)(a1 + 8 * v8 + 3848);
    v11 = v7 + v10;
    v12 = 0LL;
    v13 = MiPageSizes;
    v14 = (__int64 *)v9;
    v15 = 3LL;
    do
    {
      v16 = 0LL;
      v17 = v14;
      v18 = 2LL;
      do
      {
        v19 = *v17;
        v17 += 4;
        v16 += v19;
        --v18;
      }
      while ( v18 );
      v20 = v16 * *v13++;
      v14 += 160;
      v12 += v20;
      --v15;
    }
    while ( v15 );
    ++v8;
    v7 = v11 + v12;
    v9 += 16LL;
  }
  while ( v8 <= v22 );
  LOBYTE(v5) = v7 <= 0x40;
  return v5;
}
