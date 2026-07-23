/*
 * XREFs of MiExpandSharedZeroCluster @ 0x14034162C
 * Callers:
 *     MiResolveDemandZeroFault @ 0x140342E30 (MiResolveDemandZeroFault.c)
 * Callees:
 *     MiMakePrototypePteDirect @ 0x140203600 (MiMakePrototypePteDirect.c)
 *     MiMakePrototypePteVadLookup @ 0x1402104D0 (MiMakePrototypePteVadLookup.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsPteEvaluated @ 0x140305E8C (MiIsPteEvaluated.c)
 *     MiGetProtoPteAddress @ 0x14030BEC0 (MiGetProtoPteAddress.c)
 *     MiGetPagingFileOffset @ 0x140341C00 (MiGetPagingFileOffset.c)
 *     MiUpdatePageTableUseCount @ 0x1403D1B50 (MiUpdatePageTableUseCount.c)
 *     MiComputeZeroClusterMaximum @ 0x14043CB7C (MiComputeZeroClusterMaximum.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiExpandSharedZeroCluster(__int64 a1)
{
  __int64 v2; // r9
  __int64 v3; // rdi
  unsigned int v4; // r15d
  unsigned __int64 v5; // rbx
  __int16 *v6; // rcx
  _QWORD *v7; // rsi
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r14
  __int64 v11; // r12
  __int64 *v12; // rbx
  unsigned __int64 ProtoPteAddress; // rax
  __int64 v14; // rax
  int v15; // edx
  __int64 v16; // rax
  unsigned __int64 v17; // rdi
  unsigned int v18; // r15d
  __int64 *v19; // rsi
  int v20; // r12d
  int v21; // ecx
  unsigned __int64 PrototypePteDirect; // rax
  unsigned __int64 v23; // rbx
  __int64 v24; // rax
  unsigned __int64 v26; // [rsp+20h] [rbp-89h]
  unsigned __int64 v27; // [rsp+28h] [rbp-81h]
  __int128 v28; // [rsp+30h] [rbp-79h] BYREF
  __int16 v29; // [rsp+40h] [rbp-69h] BYREF
  __int128 *v30; // [rsp+48h] [rbp-61h]
  __int64 v31; // [rsp+50h] [rbp-59h]
  __int64 v32; // [rsp+58h] [rbp-51h]
  __int64 v33; // [rsp+60h] [rbp-49h]
  char v34; // [rsp+110h] [rbp+67h]
  __int64 v35; // [rsp+118h] [rbp+6Fh]
  __int64 v36; // [rsp+120h] [rbp+77h] BYREF
  unsigned __int64 v37; // [rsp+128h] [rbp+7Fh]

  memset_0(&v29, 0, 0x78uLL);
  v3 = *(_QWORD *)(a1 + 64);
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 16);
  v6 = *(__int16 **)(a1 + 56);
  v28 = 0LL;
  v7 = *(_QWORD **)(v3 + 120);
  v36 = 0LL;
  v34 = 0;
  v37 = v5;
  if ( (__int64)v7 < 0 )
    v8 = (unsigned __int64)(*v7 - 1LL) >> 12;
  else
    v8 = -1LL;
  v9 = *(unsigned int *)(v3 + 48);
  if ( (v9 & 0x200000) == 0 && MiVadPageSizes[(v9 >> 19) & 3] == 16 )
  {
    v5 &= 0xFFFFFFFFFFFF0000uLL;
    *((_QWORD *)&v28 + 1) = 0x10000LL;
    *(_QWORD *)&v28 = v5;
    if ( v5 >> 12 < (*(unsigned int *)(v3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 32) << 32))
      || (v5 + 0xFFFF) >> 12 > (*(unsigned int *)(v3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 33) << 32)) )
    {
      return 1LL;
    }
    v29 = 2;
    v30 = &v28;
    v6 = &v29;
    v31 = 1LL;
    v32 = 0LL;
    v33 = 0LL;
    v34 = 1;
  }
  v27 = MiComputeZeroClusterMaximum(v6, &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink, v3, v2);
  v10 = 0LL;
  v11 = 0LL;
  v35 = v5 >> 12;
  v12 = (__int64 *)(((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( !v27 )
    return 1LL;
  do
  {
    if ( (unsigned int)MiIsPteEvaluated(v12, *(unsigned int *)(a1 + 32)) )
      break;
    ProtoPteAddress = MiGetProtoPteAddress(v3, v35, 0xCu, &v36);
    v26 = ProtoPteAddress;
    if ( !ProtoPteAddress || !v36 || v11 && v36 != v11 )
      break;
    if ( ((*(_QWORD *)(a1 + 24) ^ ProtoPteAddress) & 0xFFFFFFFFFFFFF000uLL) != 0 )
      break;
    if ( !v11 )
      v11 = v36;
    if ( v35 - (*(unsigned int *)(v3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 32) << 32)) > v8 )
      break;
    v14 = MI_READ_PTE_LOCK_FREE(ProtoPteAddress);
    if ( (v14 & 1) != 0 || !v14 || (v14 & 0xC00) != 0 || (unsigned int)MiGetPagingFileOffset(v14) )
      break;
    if ( !v4 )
      v10 = v26;
    ++v4;
    ++v35;
    ++v12;
  }
  while ( v4 < v27 );
  if ( v4 <= 1 || v34 && (unsigned __int64)v12 <= ((v37 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
    return 1LL;
  v15 = 0;
  v16 = -(__int64)v4;
  v17 = v4;
  v18 = 0;
  v19 = &v12[v16];
  do
  {
    v20 = v15;
    MI_READ_PTE_LOCK_FREE(v10);
    v21 = *(_DWORD *)(a1 + 32);
    if ( v21 == 256 )
      PrototypePteDirect = MiMakePrototypePteDirect(v10);
    else
      PrototypePteDirect = MiMakePrototypePteVadLookup(v21);
    v23 = PrototypePteDirect;
    v24 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v19);
    if ( !v24 )
      *v19 = v23;
    v15 = v20 + 1;
    if ( v24 )
      v15 = v20;
    ++v18;
    ++v19;
    v10 += 8LL;
  }
  while ( v18 < v17 );
  if ( v15 )
    MiUpdatePageTableUseCount(v37);
  return v17;
}
