/*
 * XREFs of MiComputeFaultCluster @ 0x1402E5DF8
 * Callers:
 *     MiResolveMappedFileFault @ 0x140239490 (MiResolveMappedFileFault.c)
 *     MiResolvePageFileFault @ 0x1402F783C (MiResolvePageFileFault.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsPteInStore @ 0x1402E5460 (MiIsPteInStore.c)
 *     MiGetPagingFileOffset @ 0x1402E5A60 (MiGetPagingFileOffset.c)
 *     MiAdvanceFaultList @ 0x1402E5FE0 (MiAdvanceFaultList.c)
 */

__int64 __fastcall MiComputeFaultCluster(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // rdi
  char v7; // r15
  unsigned __int64 v8; // r14
  int v9; // r13d
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r11
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  int v18; // r12d
  unsigned __int64 v19; // rbx
  __int64 v20; // rcx
  unsigned __int64 v21; // r11
  __int64 v23; // rax
  unsigned __int16 v24; // dx
  __int64 v25; // [rsp+20h] [rbp-48h]
  __int64 v26; // [rsp+28h] [rbp-40h]
  unsigned __int64 v28; // [rsp+78h] [rbp+10h]

  v25 = a2[3];
  v26 = a2[4];
  v6 = a2[2];
  v7 = a4;
  v28 = v6;
  v8 = *(_QWORD *)(a2[1] + 16 * v25) + (v26 << 12);
  v9 = a4 & 1;
  MiAdvanceFaultList(a2, v26, a3, a4);
  v14 = 1LL;
  if ( a2[3] < v6 )
  {
    v15 = 256LL;
    if ( v9 )
    {
      v16 = *(unsigned int *)(a1 + 1208);
      if ( v16 < 0x100 )
        v15 = (unsigned int)v16;
    }
    if ( v13 )
    {
      v17 = (*(unsigned int *)(v13 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v13 + 33) << 32)) - (v8 >> 12);
      if ( v15 > v17 + 1 )
        v15 = v17 + 1;
    }
    v18 = 0;
    v19 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x97FFFFFFFF8LL;
    if ( (v7 & 2) != 0 )
    {
      v18 = 1;
      if ( v13 )
      {
        v20 = *(unsigned int *)(v13 + 52);
        v10 = -(__int64)(v20 | ((unsigned __int64)*(unsigned __int8 *)(v13 + 34) << 32));
        v19 &= -(__int64)((v20 | ((unsigned __int64)*(unsigned __int8 *)(v13 + 34) << 32)) != 0);
      }
    }
    if ( v15 > 1 )
    {
      while ( 1 )
      {
        if ( v19 )
        {
          if ( (v19 & 0xFFF) == 0 )
            break;
          v23 = MI_READ_PTE_LOCK_FREE(v19);
          v10 = v23;
          if ( (v23 & 1) != 0 )
            break;
          if ( v18 )
          {
            if ( (v23 & 0x400) == 0 )
              break;
          }
          else if ( (v23 & 0xC00) != 0 || !(unsigned int)MiGetPagingFileOffset(v23) || v9 != MiIsPteInStore(a1, v24) )
          {
            break;
          }
          v19 += 8LL;
        }
        if ( ((*(_QWORD *)(a2[1] + 16LL * a2[3]) + (a2[4] << 12)) & 0xFFFFFFFFFFFFF000uLL) - 4096 == (v8 & 0xFFFFFFFFFFFFF000uLL) )
        {
          ++v14;
          MiAdvanceFaultList(a2, v10, v11, v12);
          if ( a2[3] != v28 )
          {
            v8 = v21;
            if ( v14 < v15 )
              continue;
          }
        }
        break;
      }
    }
  }
  a2[3] = v25;
  a2[4] = v26;
  return (unsigned int)v14;
}
