/*
 * XREFs of MiComputeFaultCluster @ 0x140341F24
 * Callers:
 *     MiResolveMappedFileFault @ 0x140214824 (MiResolveMappedFileFault.c)
 *     MiResolvePageFileFault @ 0x14033FD3C (MiResolvePageFileFault.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPagingFileOffset @ 0x140341C00 (MiGetPagingFileOffset.c)
 *     MiAdvanceFaultList @ 0x140342110 (MiAdvanceFaultList.c)
 *     MiIsPteInStore @ 0x140423310 (MiIsPteInStore.c)
 */

__int64 __fastcall MiComputeFaultCluster(__int64 a1, _QWORD *a2, __int64 a3, char a4)
{
  unsigned __int64 v6; // rdi
  unsigned __int64 v8; // r14
  int v9; // r13d
  __int64 v10; // r11
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  int v15; // r12d
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // r11
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // [rsp+20h] [rbp-48h]
  __int64 v22; // [rsp+28h] [rbp-40h]
  unsigned __int64 v24; // [rsp+78h] [rbp+10h]

  v21 = a2[3];
  v22 = a2[4];
  v6 = a2[2];
  v24 = v6;
  v8 = *(_QWORD *)(a2[1] + 16 * v21) + (v22 << 12);
  v9 = a4 & 1;
  MiAdvanceFaultList(a2);
  v11 = 1LL;
  if ( a2[3] < v6 )
  {
    v12 = 256LL;
    if ( v9 )
    {
      v13 = *(unsigned int *)(a1 + 1208);
      if ( v13 < 0x100 )
        v12 = (unsigned int)v13;
    }
    if ( v10 )
    {
      v14 = (*(unsigned int *)(v10 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 33) << 32)) - (v8 >> 12);
      if ( v12 > v14 + 1 )
        v12 = v14 + 1;
    }
    v15 = 0;
    v16 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x97FFFFFFFF8LL;
    if ( (a4 & 2) != 0 )
    {
      v15 = 1;
      if ( v10 )
        v16 &= -(__int64)((*(unsigned int *)(v10 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 34) << 32)) != 0);
    }
    if ( v12 > 1 )
    {
      while ( 1 )
      {
        if ( v16 )
        {
          if ( (v16 & 0xFFF) == 0 )
            break;
          v19 = MI_READ_PTE_LOCK_FREE(v16);
          if ( (v19 & 1) != 0 )
            break;
          if ( v15 )
          {
            if ( (v19 & 0x400) == 0 )
              break;
          }
          else if ( (v19 & 0xC00) != 0
                 || !(unsigned int)MiGetPagingFileOffset(v19)
                 || v9 != (unsigned int)MiIsPteInStore(a1, v20) )
          {
            break;
          }
          v16 += 8LL;
        }
        if ( ((*(_QWORD *)(a2[1] + 16LL * a2[3]) + (a2[4] << 12)) & 0xFFFFFFFFFFFFF000uLL) - 4096 == (v8 & 0xFFFFFFFFFFFFF000uLL) )
        {
          ++v11;
          MiAdvanceFaultList(a2);
          if ( a2[3] != v24 )
          {
            v8 = v17;
            if ( v11 < v12 )
              continue;
          }
        }
        break;
      }
    }
  }
  a2[3] = v21;
  a2[4] = v22;
  return (unsigned int)v11;
}
