/*
 * XREFs of MiCanFlushMakeProgress @ 0x140261320
 * Callers:
 *     MiWaitForFreePage @ 0x140260F64 (MiWaitForFreePage.c)
 *     MiFlushAllStoreSwapPages @ 0x1402611E0 (MiFlushAllStoreSwapPages.c)
 *     MiFlushAllPagesWorker @ 0x140263A34 (MiFlushAllPagesWorker.c)
 *     MiCheckSystemTrimEndCriteria @ 0x1402F33B8 (MiCheckSystemTrimEndCriteria.c)
 *     MiUserFault @ 0x140307CE0 (MiUserFault.c)
 * Callees:
 *     MiIsStoreVirtualPagefileFull @ 0x14049DEC8 (MiIsStoreVirtualPagefileFull.c)
 */

__int64 __fastcall MiCanFlushMakeProgress(__int64 a1, int a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r10
  __int64 v5; // r11
  unsigned int v6; // ebp
  __int64 i; // rbx
  __int64 v8; // r14
  unsigned __int64 v9; // rdi
  __int16 v10; // ax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // rax

  v3 = 0LL;
  v5 = a1;
  if ( !a2 )
  {
    v3 = (*(_QWORD *)(a1 + 19392) - *(_QWORD *)(a1 + 19616)) & -(__int64)(*(_QWORD *)(a1 + 19616) < *(_QWORD *)(a1 + 19392));
    if ( v3 >= a3 )
      return 1LL;
  }
  v6 = *(_DWORD *)(a1 + 18520);
  if ( v6 )
  {
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= v6 )
        return 0LL;
      v8 = *(_QWORD *)(v5 + 8 * i + 18528);
      v9 = *(unsigned int *)(v8 + 12);
      v10 = *(_WORD *)(v8 + 172);
      if ( (v10 & 0x40) != 0 )
      {
        if ( *(_DWORD *)(v5 + 1220) || (unsigned int)MiIsStoreVirtualPagefileFull(v5) )
          continue;
        v11 = *(unsigned int *)(v5 + 1212);
        if ( ((*(_QWORD *)(v5 + 16840) + 0x3FFFFLL) & 0xFFFFFFFFFFFC0000uLL) <= v11 )
          LODWORD(v11) = (*(_DWORD *)(v5 + 16840) + 0x3FFFF) & 0xFFFC0000;
        if ( (unsigned int)v11 > *(_DWORD *)v8 )
          LODWORD(v9) = v11 - *(_DWORD *)v8 + v9;
        v12 = *(_QWORD *)(88 * ((*(_WORD *)(v8 + 172) & 0xF) + 48LL) + v5) + *(_QWORD *)(v5 + 4096);
        if ( v12 >= (unsigned int)v9 )
          v12 = (unsigned int)v9;
      }
      else
      {
        v12 = *(unsigned int *)(v8 + 12);
        if ( (v10 & 0x10) != 0 )
        {
          v13 = 88 * ((v10 & 0xF) + 48LL);
          if ( *(_QWORD *)(v13 + v5) < v9 )
            v12 = *(_QWORD *)(v13 + v5);
        }
      }
      v3 += v12;
      if ( v3 >= a3 )
        return 1LL;
    }
  }
  return 0LL;
}
