/*
 * XREFs of MiDecommitLockNewPageTable @ 0x140289DC0
 * Callers:
 *     MiDecommitPages @ 0x140288300 (MiDecommitPages.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x1402176A0 (MiMakeSystemAddressValid.c)
 *     MiLockLowestValidPageTableEx @ 0x140218760 (MiLockLowestValidPageTableEx.c)
 *     MiWalkPageTables @ 0x140235640 (MiWalkPageTables.c)
 *     MiLockNestedPageTable @ 0x140285190 (MiLockNestedPageTable.c)
 *     MiFastLockLeafPageTable @ 0x1402D90E0 (MiFastLockLeafPageTable.c)
 *     MiGetLeafVa @ 0x1402DEE20 (MiGetLeafVa.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x1402E3A1C (MiLockWorkingSetSharedAtDpc.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     MiDecommitComputeCheckPte @ 0x14040E840 (MiDecommitComputeCheckPte.c)
 *     MiGetAnyMultiplexedVm @ 0x140442630 (MiGetAnyMultiplexedVm.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall MiDecommitLockNewPageTable(__int64 a1)
{
  bool v1; // zf
  __int64 v3; // rcx
  int v4; // ecx
  char v5; // r13
  unsigned __int64 v6; // rdi
  __int64 v7; // r12
  unsigned __int64 LeafVa; // rax
  struct _LIST_ENTRY **p_Blink; // r14
  int v10; // eax
  int v11; // ecx
  unsigned __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned int v15; // r14d
  unsigned int v16; // eax
  __int64 result; // rax
  __int64 v18; // rcx
  ULONG_PTR v19; // rdx
  unsigned int v20; // r14d
  unsigned __int64 valid; // rax
  __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int128 v26; // [rsp+20h] [rbp-F8h] BYREF
  int v27; // [rsp+30h] [rbp-E8h] BYREF
  unsigned int v28; // [rsp+34h] [rbp-E4h] BYREF
  char v29; // [rsp+39h] [rbp-DFh]
  struct _LIST_ENTRY **v30; // [rsp+50h] [rbp-C8h]
  unsigned __int64 v31; // [rsp+58h] [rbp-C0h]
  __int64 v32; // [rsp+60h] [rbp-B8h]
  __int64 (__fastcall *v33)(); // [rsp+E0h] [rbp-38h]
  __int128 *v34; // [rsp+E8h] [rbp-30h]
  ULONG_PTR v35; // [rsp+120h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 40) == 6;
  v3 = *(_QWORD *)(a1 + 32);
  if ( v1 && KeGetCurrentIrql() == 2 )
  {
    *(_BYTE *)(a1 + 44) = 2;
    MiLockWorkingSetSharedAtDpc(v3);
  }
  else
  {
    *(_BYTE *)(a1 + 44) = MiLockWorkingSetShared(v3);
  }
  v4 = *(_DWORD *)(a1 + 40);
  if ( ((v4 - 3) & 0xFFFFFFFC) == 0 && v4 != 5 )
  {
    v18 = *(_QWORD *)(a1 + 32);
    v19 = ((*(_QWORD *)(a1 + 88) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(_QWORD *)(a1 + 64) = v19;
    MiLockNestedPageTable(v18, v19);
    return 1LL;
  }
  if ( v4 == 2 )
  {
    v20 = 0;
    while ( *(_QWORD *)(a1 + 72) <= *(_QWORD *)(a1 + 80) )
    {
      valid = MiLockLowestValidPageTableEx(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 88), &v35, 0);
      v22 = (*(_QWORD *)(a1 + 72) >> 9) & 0x7FFFFFFFF8LL;
      *(_QWORD *)(a1 + 64) = valid;
      if ( valid == v22 - 0x98000000000LL )
        return 1;
      MiUnlockPageTableInternal(*(_QWORD *)(a1 + 32), valid);
      v23 = *(_QWORD *)(a1 + 72) & 0xFFFFFFFFFFFFF000uLL;
      *(_QWORD *)(a1 + 64) = 0LL;
      MiDecommitComputeCheckPte(a1, v23 + 4096, v24);
    }
    return v20;
  }
  else
  {
    if ( !*(_DWORD *)(a1 + 152) )
    {
      MiMakeSystemAddressValid(
        *(_QWORD *)(a1 + 88),
        (*(_DWORD *)(*(_QWORD *)a1 + 48LL) >> 12) & 0x7F,
        *(_BYTE *)(a1 + 44),
        2 * ((*(_DWORD *)(a1 + 156) & 1) == 0));
LABEL_14:
      result = 1LL;
      *(_QWORD *)(a1 + 64) = ((*(_QWORD *)(a1 + 88) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      return result;
    }
    v5 = *(_BYTE *)(a1 + 44);
    v26 = 0LL;
    memset_0(&v28, 0, 0xBCuLL);
    v6 = (__int64)(*(_QWORD *)(a1 + 72) << 25) >> 16;
    v7 = (__int64)(*(_QWORD *)(a1 + 80) << 25) >> 16;
    v27 = 8289;
    LeafVa = MiGetLeafVa(v6);
    if ( LeafVa < 0xFFFF800000000000uLL || LeafVa >= qword_140E2F280 && LeafVa <= qword_140E2F290 )
      p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
    else
      p_Blink = (struct _LIST_ENTRY **)MiGetAnyMultiplexedVm(2LL);
    v10 = MiFastLockLeafPageTable(p_Blink, v6, 0LL);
    if ( v10 )
    {
      v11 = v10 - 1;
      v12 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    }
    else
    {
      v27 |= 4u;
      v34 = &v26;
      v30 = p_Blink;
      v29 = v5;
      v28 = v28 & 0xFFFFFE3F | 0x40;
      v33 = MiGetNextPageTableTail;
      v31 = v6;
      v32 = v7;
      MiWalkPageTables((__int64)&v27);
      v11 = v26;
      v12 = *((_QWORD *)&v26 + 1);
    }
    v13 = *(_QWORD *)(a1 + 24);
    v14 = *(_QWORD *)(a1 + 72);
    *(_DWORD *)(a1 + 200) = v11;
    if ( v12 )
    {
      v15 = 0;
      *(_QWORD *)(v13 + 24) += (__int64)(v12 - v14) >> 3;
      *(_QWORD *)(a1 + 72) = v12;
      *(_QWORD *)(a1 + 56) = (__int64)(v12 << 25) >> 16;
      v16 = *(_DWORD *)(a1 + 204);
      if ( v16 <= 1 )
      {
        v25 = 2 - v16;
        v15 = 2 - v16;
        do
        {
          v12 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v25;
        }
        while ( v25 );
      }
      *(_QWORD *)(a1 + 88) = v12;
      *(_DWORD *)(a1 + 96) = v15;
      goto LABEL_14;
    }
    *(_QWORD *)(v13 + 24) += 1 + ((*(_QWORD *)(a1 + 80) - v14) >> 3);
    return 0LL;
  }
}
