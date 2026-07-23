/*
 * XREFs of MxCreatePfnsForPtes @ 0x140C549C0
 * Callers:
 *     MiInitializePfnsForValidMappings @ 0x140C53A8C (MiInitializePfnsForValidMappings.c)
 * Callees:
 *     MiGetLeafVa @ 0x140240700 (MiGetLeafVa.c)
 *     MiWriteValidPteNewProtection @ 0x140245FB0 (MiWriteValidPteNewProtection.c)
 *     MiGetContainingPageTable @ 0x14034E470 (MiGetContainingPageTable.c)
 *     MiIncreaseUsedPtesInPfn @ 0x1403916FC (MiIncreaseUsedPtesInPfn.c)
 *     MiIsRegularMemory @ 0x140C53BB8 (MiIsRegularMemory.c)
 *     MxCreatePfn @ 0x140C54874 (MxCreatePfn.c)
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
  __int64 v10; // r8
  __int64 v11; // r10
  __int64 v12; // r11
  unsigned __int64 v13; // r13
  __int64 v14; // rbp
  unsigned __int64 v15; // rdx
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // r14
  __int64 v21; // [rsp+30h] [rbp-48h]
  int v22; // [rsp+88h] [rbp+10h]
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
    v21 = *(_QWORD *)v7;
    ContainingPageTable = MiGetContainingPageTable((unsigned __int64)a2);
    v13 = v4 + 8;
    v14 = 48 * ContainingPageTable - 0x220000000000LL;
    v22 = 0;
    if ( !(_DWORD)v5 || (v11 & 0x80u) != 0LL )
    {
      if ( v8 )
      {
        v15 = v11 & 0xFFFFFFFFFFFFF7FBuLL | 0x800;
        if ( (v11 & 0x42) == 0 )
          v15 = v11 & 0xFFFFFFFFFFFFFFFBuLL;
        v6 = v15 | 0x20;
        if ( (v15 & 0x20) != 0 )
          v6 = v15;
        if ( ((v6 >> 8) & 1) != (unsigned __int8)word_140E2EEC4 )
          v6 = ((unsigned __int64)(unsigned __int8)word_140E2EEC4 << 8) ^ (((unsigned __int64)(unsigned __int8)word_140E2EEC4 << 8) ^ v6) & 0xFFFFFFFFFFFFFEFFuLL;
        if ( v6 != v11 )
        {
          MiWriteValidPteNewProtection(v4, v6, v10);
          v12 = v21;
        }
      }
      if ( (_DWORD)v5 )
      {
        v22 = 1;
        v16 = 1LL;
        if ( (int)v5 > 0 )
        {
          v17 = v5;
          do
          {
            v16 <<= 9;
            --v17;
          }
          while ( v17 );
        }
        v4 = ((MiGetLeafVa(v4) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v13 = v4 + 8 * v18;
      }
    }
    if ( v4 < v13 )
    {
      v19 = 48 * v9 - 0x21FFFFFFFFE0LL;
      do
      {
        if ( MiIsRegularMemory(v12, v9) && v8 )
          MxCreatePfn(v9, v4, v6, ContainingPageTable, v22);
        v12 = v21;
        ++v9;
        v19 += 48LL;
        v4 += 8LL;
      }
      while ( v4 < v13 );
    }
    if ( v8 )
    {
      MiIncreaseUsedPtesInPfn(v14, 1);
      *(_QWORD *)(v14 + 24) = (*(_QWORD *)(v14 + 24) + 1LL) ^ (*(_QWORD *)(v14 + 24) ^ (*(_QWORD *)(v14 + 24) + 1LL)) & 0xC000000000000000uLL;
    }
  }
  else if ( v3 )
  {
    *a2 = CLFS_LSN_NULL_EXT;
  }
  return 0LL;
}
