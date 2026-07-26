/*
 * XREFs of ?insertSorted@?$KArray@ULwfBindProperties@@$00@Rtl@@QEAA_N$$QEAULwfBindProperties@@P6A_NAEBU3@1@Z@Z @ 0x14015038C
 * Callers:
 *     ?ndisReadLwfById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z @ 0x1401512E4 (-ndisReadLwfById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z.c)
 * Callees:
 *     ?grow@?$KArray@ULwfBindProperties@@$00@Rtl@@AEAA_N_K@Z @ 0x140150230 (-grow@-$KArray@ULwfBindProperties@@$00@Rtl@@AEAA_N_K@Z.c)
 *     ?insertAt@?$KArray@ULwfBindProperties@@$00@Rtl@@QEAA_N_K$$QEAULwfBindProperties@@@Z @ 0x1401502B8 (-insertAt@-$KArray@ULwfBindProperties@@$00@Rtl@@QEAA_N_K$$QEAULwfBindProperties@@@Z.c)
 *     ndisLwfSortPredicate @ 0x14015128C (ndisLwfSortPredicate.c)
 */

char __fastcall Rtl::KArray<LwfBindProperties,1>::insertSorted(__int64 a1, __int64 a2)
{
  char v2; // bl
  unsigned __int64 v4; // rbp
  __int64 i; // r14
  unsigned __int64 v7; // rax
  unsigned __int64 v9; // rcx

  v2 = 0;
  v4 = 0LL;
  for ( i = 0LL; ; i += 64LL )
  {
    v7 = *(unsigned int *)(a1 + 4);
    if ( v4 >= v7 )
      break;
    if ( !(unsigned __int8)ndisLwfSortPredicate(i + *(_QWORD *)(a1 + 8), a2) )
      return Rtl::KArray<LwfBindProperties,1>::insertAt(a1, v4, a2);
    ++v4;
  }
  if ( Rtl::KArray<LwfBindProperties,1>::grow((unsigned int *)a1, (unsigned int)(v7 + 1)) )
  {
    v9 = *(_QWORD *)(a1 + 8) + ((unsigned __int64)*(unsigned int *)(a1 + 4) << 6);
    *(_OWORD *)v9 = *(_OWORD *)a2;
    *(_DWORD *)(v9 + 16) = *(_DWORD *)(a2 + 16);
    *(_DWORD *)(v9 + 20) = *(_DWORD *)(a2 + 20);
    *(_QWORD *)(v9 + 24) = *(_QWORD *)(a2 + 24);
    *(_QWORD *)(a2 + 24) = 0LL;
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_DWORD *)(v9 + 32) = *(_DWORD *)(a2 + 32);
    *(_DWORD *)(v9 + 36) = *(_DWORD *)(a2 + 36);
    *(_QWORD *)(v9 + 40) = *(_QWORD *)(a2 + 40);
    *(_QWORD *)(a2 + 40) = 0LL;
    *(_QWORD *)(a2 + 32) = 0LL;
    v2 = 1;
    *(_DWORD *)(v9 + 48) = *(_DWORD *)(a2 + 48);
    *(_BYTE *)(v9 + 52) = *(_BYTE *)(a2 + 52);
    *(_DWORD *)(v9 + 56) = *(_DWORD *)(a2 + 56);
    ++*(_DWORD *)(a1 + 4);
  }
  return v2;
}
