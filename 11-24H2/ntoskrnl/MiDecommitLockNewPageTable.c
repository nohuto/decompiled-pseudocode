/*
 * XREFs of MiDecommitLockNewPageTable @ 0x1402999C0
 * Callers:
 *     MiDecommitPages @ 0x140297F00 (MiDecommitPages.c)
 * Callees:
 *     MiLockNestedPageTable @ 0x140201F50 (MiLockNestedPageTable.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x14020BF58 (MiLockWorkingSetSharedAtDpc.c)
 *     MiWalkPageTables @ 0x14020F7D0 (MiWalkPageTables.c)
 *     MiFastLockLeafPageTable @ 0x14023A9C0 (MiFastLockLeafPageTable.c)
 *     MiGetLeafVa @ 0x140240700 (MiGetLeafVa.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x140244700 (MiMakeSystemAddressValid.c)
 *     MiLockLowestValidPageTableEx @ 0x1402454B0 (MiLockLowestValidPageTableEx.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiDecommitComputeCheckPte @ 0x140406A40 (MiDecommitComputeCheckPte.c)
 *     MiGetAnyMultiplexedVm @ 0x140439200 (MiGetAnyMultiplexedVm.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiDecommitLockNewPageTable(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v4; // zf
  __int64 v6; // rcx
  int v7; // ecx
  char v8; // r13
  unsigned __int64 v9; // rdi
  __int64 v10; // r12
  unsigned __int64 LeafVa; // rax
  struct _LIST_ENTRY **p_Blink; // r14
  int v13; // eax
  int v14; // ecx
  unsigned __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned int v18; // r14d
  unsigned int v19; // eax
  __int64 result; // rax
  __int64 v21; // rcx
  ULONG_PTR v22; // rdx
  unsigned int v23; // r14d
  unsigned __int64 valid; // rax
  __int64 v25; // rdx
  unsigned __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rcx
  __int128 v29; // [rsp+20h] [rbp-F8h] BYREF
  int v30; // [rsp+30h] [rbp-E8h] BYREF
  unsigned int v31; // [rsp+34h] [rbp-E4h] BYREF
  char v32; // [rsp+39h] [rbp-DFh]
  struct _LIST_ENTRY **v33; // [rsp+50h] [rbp-C8h]
  unsigned __int64 v34; // [rsp+58h] [rbp-C0h]
  __int64 v35; // [rsp+60h] [rbp-B8h]
  __int64 (__fastcall *v36)(); // [rsp+E0h] [rbp-38h]
  __int128 *v37; // [rsp+E8h] [rbp-30h]
  ULONG_PTR v38; // [rsp+120h] [rbp+8h] BYREF

  v4 = *(_DWORD *)(a1 + 40) == 6;
  v6 = *(_QWORD *)(a1 + 32);
  if ( v4 && KeGetCurrentIrql() == 2 )
  {
    *(_BYTE *)(a1 + 44) = 2;
    MiLockWorkingSetSharedAtDpc(v6);
  }
  else
  {
    *(_BYTE *)(a1 + 44) = MiLockWorkingSetShared(v6, a2, a3, a4);
  }
  v7 = *(_DWORD *)(a1 + 40);
  if ( ((v7 - 3) & 0xFFFFFFFC) == 0 && v7 != 5 )
  {
    v21 = *(_QWORD *)(a1 + 32);
    v22 = ((*(_QWORD *)(a1 + 88) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(_QWORD *)(a1 + 64) = v22;
    MiLockNestedPageTable(v21, v22);
    return 1LL;
  }
  if ( v7 == 2 )
  {
    v23 = 0;
    while ( *(_QWORD *)(a1 + 72) <= *(_QWORD *)(a1 + 80) )
    {
      valid = MiLockLowestValidPageTableEx(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 88), &v38, 0);
      v25 = (*(_QWORD *)(a1 + 72) >> 9) & 0x7FFFFFFFF8LL;
      *(_QWORD *)(a1 + 64) = valid;
      if ( valid == v25 - 0x98000000000LL )
        return 1;
      MiUnlockPageTableInternal(*(_QWORD *)(a1 + 32), valid);
      v26 = *(_QWORD *)(a1 + 72) & 0xFFFFFFFFFFFFF000uLL;
      *(_QWORD *)(a1 + 64) = 0LL;
      MiDecommitComputeCheckPte(a1, v26 + 4096, v27);
    }
    return v23;
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
    v8 = *(_BYTE *)(a1 + 44);
    v29 = 0LL;
    memset_0(&v31, 0, 0xBCuLL);
    v9 = (__int64)(*(_QWORD *)(a1 + 72) << 25) >> 16;
    v10 = (__int64)(*(_QWORD *)(a1 + 80) << 25) >> 16;
    v30 = 8289;
    LeafVa = MiGetLeafVa(v9);
    if ( LeafVa < 0xFFFF800000000000uLL || LeafVa >= qword_140E2F3C0 && LeafVa <= qword_140E2F3D0 )
      p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
    else
      p_Blink = (struct _LIST_ENTRY **)MiGetAnyMultiplexedVm(2LL);
    v13 = MiFastLockLeafPageTable((__int64)p_Blink, v9, 0);
    if ( v13 )
    {
      v14 = v13 - 1;
      v15 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    }
    else
    {
      v30 |= 4u;
      v37 = &v29;
      v33 = p_Blink;
      v32 = v8;
      v31 = v31 & 0xFFFFFE3F | 0x40;
      v36 = MiGetNextPageTableTail;
      v34 = v9;
      v35 = v10;
      MiWalkPageTables(&v30);
      v14 = v29;
      v15 = *((_QWORD *)&v29 + 1);
    }
    v16 = *(_QWORD *)(a1 + 24);
    v17 = *(_QWORD *)(a1 + 72);
    *(_DWORD *)(a1 + 200) = v14;
    if ( v15 )
    {
      v18 = 0;
      *(_QWORD *)(v16 + 24) += (__int64)(v15 - v17) >> 3;
      *(_QWORD *)(a1 + 72) = v15;
      *(_QWORD *)(a1 + 56) = (__int64)(v15 << 25) >> 16;
      v19 = *(_DWORD *)(a1 + 204);
      if ( v19 <= 1 )
      {
        v28 = 2 - v19;
        v18 = 2 - v19;
        do
        {
          v15 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v28;
        }
        while ( v28 );
      }
      *(_QWORD *)(a1 + 88) = v15;
      *(_DWORD *)(a1 + 96) = v18;
      goto LABEL_14;
    }
    *(_QWORD *)(v16 + 24) += 1 + ((*(_QWORD *)(a1 + 80) - v17) >> 3);
    return 0LL;
  }
}
