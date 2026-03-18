/*
 * XREFs of ?QueryPagingProcessInfo@VIDMM_GLOBAL@@QEAAXPEA_KPEA_N@Z @ 0x14009B2FC
 * Callers:
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1400F71BC (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::QueryPagingProcessInfo(VIDMM_GLOBAL *this, unsigned __int64 *a2, bool *a3)
{
  unsigned int v3; // esi
  unsigned __int16 v6; // r10
  __int64 v7; // r12
  unsigned __int64 v8; // rcx
  char v9; // r9
  unsigned __int64 v10; // rdx
  char v11; // r14
  unsigned __int16 v12; // r8
  __int64 v13; // rax
  unsigned int v14; // ebp
  __int64 v15; // r15
  __int64 v16; // rdi
  unsigned __int64 v17; // rax

  v3 = *((_DWORD *)this + 1736);
  v6 = 0;
  if ( v3 )
  {
    v7 = *((_QWORD *)this + 5029);
    v8 = *a2;
    v9 = *a3;
    do
    {
      v10 = 0LL;
      v11 = 0;
      v12 = 0;
      v13 = *(_QWORD *)(v7 + 8LL * v6);
      v14 = *(_DWORD *)(v13 + 64);
      if ( v14 )
      {
        v15 = *(_QWORD *)(v13 + 1648);
        do
        {
          v16 = *(_QWORD *)(v15 + 8LL * v12);
          if ( (*(_DWORD *)(v16 + 104) & 0x1001) == 0 )
          {
            v17 = *(_QWORD *)(v16 + 72);
            if ( v17 <= v10 )
              v17 = v10;
            v10 = v17;
            if ( *(_DWORD *)(v16 + 416) == 0x10000 )
              v11 = 1;
          }
          ++v12;
        }
        while ( v12 < v14 );
      }
      if ( v8 <= v10 )
        v8 = v10;
      ++v6;
      v9 |= v11;
    }
    while ( v6 < v3 );
    *a2 = v8;
    *a3 = v9;
  }
}
