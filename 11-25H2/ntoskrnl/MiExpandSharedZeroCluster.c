/*
 * XREFs of MiExpandSharedZeroCluster @ 0x14037C52C
 * Callers:
 *     MiResolveDemandZeroFault @ 0x140241160 (MiResolveDemandZeroFault.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x1402454D0 (MiGetProtoPteAddress.c)
 *     MiIsPteEvaluated @ 0x14024A588 (MiIsPteEvaluated.c)
 *     MiMakePrototypePteDirect @ 0x1402A69A0 (MiMakePrototypePteDirect.c)
 *     MiGetPagingFileOffset @ 0x14037C4CC (MiGetPagingFileOffset.c)
 *     MiMakePrototypePteVadLookup @ 0x14037DD10 (MiMakePrototypePteVadLookup.c)
 *     MiComputeZeroClusterMaximum @ 0x1403C2038 (MiComputeZeroClusterMaximum.c)
 *     MiUpdatePageTableUseCount @ 0x1403DEED0 (MiUpdatePageTableUseCount.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MiExpandSharedZeroCluster(__int64 a1)
{
  __int64 v2; // rdi
  unsigned int v3; // r15d
  unsigned __int64 v4; // rbx
  __int16 *v5; // rcx
  _QWORD *v6; // rsi
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r14
  unsigned __int64 *v10; // r12
  unsigned __int64 *v11; // rbx
  unsigned __int64 ProtoPteAddress; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned __int64 v16; // rdi
  unsigned int v17; // r15d
  unsigned __int64 *v18; // rsi
  unsigned int v19; // r12d
  __int64 v20; // rcx
  __int64 PrototypePteDirect; // rax
  __int64 v22; // rbx
  __int64 v23; // rax
  unsigned __int64 v25; // [rsp+20h] [rbp-89h]
  unsigned __int64 v26; // [rsp+28h] [rbp-81h]
  __int128 v27; // [rsp+30h] [rbp-79h] BYREF
  __int16 v28; // [rsp+40h] [rbp-69h] BYREF
  __int128 *v29; // [rsp+48h] [rbp-61h]
  __int64 v30; // [rsp+50h] [rbp-59h]
  __int64 v31; // [rsp+58h] [rbp-51h]
  __int64 v32; // [rsp+60h] [rbp-49h]
  char v33; // [rsp+110h] [rbp+67h]
  unsigned __int64 v34; // [rsp+118h] [rbp+6Fh]
  unsigned __int64 *v35; // [rsp+120h] [rbp+77h] BYREF
  unsigned __int64 v36; // [rsp+128h] [rbp+7Fh]

  memset_0(&v28, 0, 0x78uLL);
  v2 = *(_QWORD *)(a1 + 64);
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(__int16 **)(a1 + 56);
  v27 = 0LL;
  v6 = *(_QWORD **)(v2 + 120);
  v35 = 0LL;
  v33 = 0;
  v36 = v4;
  if ( (__int64)v6 < 0 )
    v7 = (unsigned __int64)(*v6 - 1LL) >> 12;
  else
    v7 = -1LL;
  v8 = *(unsigned int *)(v2 + 48);
  if ( (v8 & 0x200000) == 0 && MiVadPageSizes[(v8 >> 19) & 3] == 16 )
  {
    v4 &= 0xFFFFFFFFFFFF0000uLL;
    *((_QWORD *)&v27 + 1) = 0x10000LL;
    *(_QWORD *)&v27 = v4;
    if ( v4 >> 12 < (*(unsigned int *)(v2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 32) << 32))
      || (v4 + 0xFFFF) >> 12 > (*(unsigned int *)(v2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 33) << 32)) )
    {
      return 1LL;
    }
    v28 = 2;
    v29 = &v27;
    v5 = &v28;
    v30 = 1LL;
    v31 = 0LL;
    v32 = 0LL;
    v33 = 1;
  }
  v26 = MiComputeZeroClusterMaximum(v5, &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink, v2);
  v9 = 0LL;
  v10 = 0LL;
  v34 = v4 >> 12;
  v11 = (unsigned __int64 *)(((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( !v26 )
    return 1LL;
  do
  {
    if ( (unsigned int)MiIsPteEvaluated(v11, *(unsigned int *)(a1 + 32)) )
      break;
    ProtoPteAddress = MiGetProtoPteAddress(v2, v34, 12, &v35);
    v25 = ProtoPteAddress;
    if ( !ProtoPteAddress || !v35 || v10 && v35 != v10 )
      break;
    if ( ((*(_QWORD *)(a1 + 24) ^ ProtoPteAddress) & 0xFFFFFFFFFFFFF000uLL) != 0 )
      break;
    if ( !v10 )
      v10 = v35;
    if ( v34 - (*(unsigned int *)(v2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v2 + 32) << 32)) > v7 )
      break;
    v13 = MI_READ_PTE_LOCK_FREE(ProtoPteAddress);
    if ( (v13 & 1) != 0 || !v13 || (v13 & 0xC00) != 0 || (unsigned int)MiGetPagingFileOffset(v13) )
      break;
    if ( !v3 )
      v9 = v25;
    ++v3;
    ++v34;
    ++v11;
  }
  while ( v3 < v26 );
  if ( v3 <= 1 || v33 && (unsigned __int64)v11 <= ((v36 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
    return 1LL;
  LODWORD(v14) = 0;
  v15 = -(__int64)v3;
  v16 = v3;
  v17 = 0;
  v18 = &v11[v15];
  do
  {
    v19 = v14;
    MI_READ_PTE_LOCK_FREE(v9);
    v20 = *(unsigned int *)(a1 + 32);
    if ( (_DWORD)v20 == 256 )
      PrototypePteDirect = MiMakePrototypePteDirect(v9);
    else
      PrototypePteDirect = MiMakePrototypePteVadLookup(v20);
    v22 = PrototypePteDirect;
    v23 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v18);
    if ( !v23 )
      *v18 = v22;
    v14 = v19 + 1;
    if ( v23 )
      v14 = v19;
    ++v17;
    ++v18;
    v9 += 8LL;
  }
  while ( v17 < v16 );
  if ( (_DWORD)v14 )
    MiUpdatePageTableUseCount(v36, v14);
  return v16;
}
