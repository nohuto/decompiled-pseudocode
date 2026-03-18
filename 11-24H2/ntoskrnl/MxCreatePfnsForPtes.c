/*
 * XREFs of MxCreatePfnsForPtes @ 0x140C52830
 * Callers:
 *     MiInitializePfnsForValidMappings @ 0x140C518FC (MiInitializePfnsForValidMappings.c)
 * Callees:
 *     MiWriteValidPteNewProtection @ 0x140219260 (MiWriteValidPteNewProtection.c)
 *     MiGetLeafVa @ 0x1402DEE20 (MiGetLeafVa.c)
 *     MiGetContainingPageTable @ 0x1402ECE30 (MiGetContainingPageTable.c)
 *     MiIncreaseUsedPtesInPfn @ 0x140396FF4 (MiIncreaseUsedPtesInPfn.c)
 *     MiIsRegularMemory @ 0x140C51A28 (MiIsRegularMemory.c)
 *     MxCreatePfn @ 0x140C526E4 (MxCreatePfn.c)
 */

__int64 __fastcall MxCreatePfnsForPtes(__int64 a1, unsigned __int64 *a2, unsigned int a3)
{
  unsigned __int64 v3; // r10
  unsigned __int64 v4; // rdi
  __int64 v5; // r14
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  int v8; // r12d
  __int64 v9; // r15
  __int64 v10; // r10
  __int64 v11; // r11
  unsigned __int64 v12; // r13
  __int64 v13; // rbp
  unsigned __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // r14
  __int64 v20; // [rsp+30h] [rbp-48h]
  int v21; // [rsp+88h] [rbp+10h]
  __int64 ContainingPageTable; // [rsp+98h] [rbp+20h]

  v3 = *a2;
  v4 = (unsigned __int64)a2;
  v5 = a3;
  v6 = *a2;
  if ( (*a2 & 1) != 0 )
  {
    v7 = *(_QWORD *)(a1 + 184);
    v8 = *(_DWORD *)(v7 + 8);
    v9 = (v3 >> 12) & 0xFFFFFFFFFFLL;
    v20 = *(_QWORD *)v7;
    ContainingPageTable = MiGetContainingPageTable((unsigned __int64)a2);
    v12 = v4 + 8;
    v13 = 48 * ContainingPageTable - 0x220000000000LL;
    v21 = 0;
    if ( !(_DWORD)v5 || (v10 & 0x80u) != 0LL )
    {
      if ( v8 )
      {
        v14 = v10 & 0xFFFFFFFFFFFFF7FBuLL | 0x800;
        if ( (v10 & 0x42) == 0 )
          v14 = v10 & 0xFFFFFFFFFFFFFFFBuLL;
        v6 = v14 | 0x20;
        if ( (v14 & 0x20) != 0 )
          v6 = v14;
        if ( ((v6 >> 8) & 1) != (unsigned __int8)word_140E2ED84 )
          v6 = ((unsigned __int64)(unsigned __int8)word_140E2ED84 << 8) ^ (((unsigned __int64)(unsigned __int8)word_140E2ED84 << 8) ^ v6) & 0xFFFFFFFFFFFFFEFFuLL;
        if ( v6 != v10 )
        {
          MiWriteValidPteNewProtection(v4, v6);
          v11 = v20;
        }
      }
      if ( (_DWORD)v5 )
      {
        v21 = 1;
        v15 = 1LL;
        if ( (int)v5 > 0 )
        {
          v16 = v5;
          do
          {
            v15 <<= 9;
            --v16;
          }
          while ( v16 );
        }
        v4 = ((MiGetLeafVa(v4) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v12 = v4 + 8 * v17;
      }
    }
    if ( v4 < v12 )
    {
      v18 = 48 * v9 - 0x21FFFFFFFFE0LL;
      do
      {
        if ( MiIsRegularMemory(v11, v9) && v8 )
          MxCreatePfn(v9, v4, v6, ContainingPageTable, v21);
        v11 = v20;
        ++v9;
        v18 += 48LL;
        v4 += 8LL;
      }
      while ( v4 < v12 );
    }
    if ( v8 )
    {
      MiIncreaseUsedPtesInPfn(v13, 1);
      *(_QWORD *)(v13 + 24) = (*(_QWORD *)(v13 + 24) + 1LL) ^ (*(_QWORD *)(v13 + 24) ^ (*(_QWORD *)(v13 + 24) + 1LL)) & 0xC000000000000000uLL;
    }
  }
  else if ( v3 )
  {
    *a2 = CLFS_LSN_NULL_EXT;
  }
  return 0LL;
}
