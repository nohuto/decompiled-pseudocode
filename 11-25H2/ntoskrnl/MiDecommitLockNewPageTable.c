/*
 * XREFs of MiDecommitLockNewPageTable @ 0x140383410
 * Callers:
 *     MiDecommitPages @ 0x140381AE0 (MiDecommitPages.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiWalkPageTables @ 0x1402468A0 (MiWalkPageTables.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiFastLockLeafPageTable @ 0x1402AF390 (MiFastLockLeafPageTable.c)
 *     MiGetLeafVa @ 0x1402B5480 (MiGetLeafVa.c)
 *     MiMakeSystemAddressValid @ 0x1402B67C0 (MiMakeSystemAddressValid.c)
 *     MiLockLowestValidPageTableEx @ 0x1402B7890 (MiLockLowestValidPageTableEx.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x1402FB704 (MiLockWorkingSetSharedAtDpc.c)
 *     MiLockNestedPageTable @ 0x1402FB780 (MiLockNestedPageTable.c)
 *     MiDecommitComputeCheckPte @ 0x1404114A0 (MiDecommitComputeCheckPte.c)
 *     MiGetAnyMultiplexedVm @ 0x1404423A0 (MiGetAnyMultiplexedVm.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MiDecommitLockNewPageTable(__int64 a1)
{
  bool v1; // zf
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // ecx
  char v7; // r13
  unsigned __int64 v8; // rdi
  __int64 v9; // r15
  unsigned __int64 LeafVa; // rax
  struct _LIST_ENTRY **p_Blink; // r14
  int v12; // eax
  int v13; // ecx
  unsigned __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r8
  unsigned int v17; // r14d
  unsigned int v18; // eax
  __int64 result; // rax
  __int64 v20; // rcx
  ULONG_PTR v21; // rdx
  unsigned int v22; // r14d
  unsigned __int64 valid; // rax
  __int64 v24; // rdx
  unsigned __int64 v25; // rdx
  __int64 v26; // rcx
  __int128 v27; // [rsp+20h] [rbp-F8h] BYREF
  int v28; // [rsp+30h] [rbp-E8h] BYREF
  unsigned int v29; // [rsp+34h] [rbp-E4h] BYREF
  char v30; // [rsp+39h] [rbp-DFh]
  struct _LIST_ENTRY **v31; // [rsp+50h] [rbp-C8h]
  unsigned __int64 v32; // [rsp+58h] [rbp-C0h]
  __int64 v33; // [rsp+60h] [rbp-B8h]
  __int64 (__fastcall *v34)(); // [rsp+E0h] [rbp-38h]
  __int128 *v35; // [rsp+E8h] [rbp-30h]
  ULONG_PTR v36; // [rsp+120h] [rbp+8h] BYREF

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
  v6 = *(_DWORD *)(a1 + 40);
  if ( ((v6 - 3) & 0xFFFFFFFC) != 0 || v6 == 5 )
  {
    if ( v6 == 2 )
    {
      v22 = 0;
      while ( *(_QWORD *)(a1 + 72) <= *(_QWORD *)(a1 + 80) )
      {
        valid = MiLockLowestValidPageTableEx(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 88), &v36, 0);
        v24 = (*(_QWORD *)(a1 + 72) >> 9) & 0x7FFFFFFFF8LL;
        *(_QWORD *)(a1 + 64) = valid;
        if ( valid == v24 - 0x98000000000LL )
          return 1;
        MiUnlockPageTable(*(_QWORD *)(a1 + 32), valid);
        v25 = *(_QWORD *)(a1 + 72) & 0xFFFFFFFFFFFFF000uLL;
        *(_QWORD *)(a1 + 64) = 0LL;
        MiDecommitComputeCheckPte(a1, v25 + 4096);
      }
      return v22;
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
LABEL_15:
        result = 1LL;
        *(_QWORD *)(a1 + 64) = ((*(_QWORD *)(a1 + 88) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        return result;
      }
      v7 = *(_BYTE *)(a1 + 44);
      v27 = 0LL;
      memset_0(&v29, 0, 0xBCuLL);
      v8 = (__int64)(*(_QWORD *)(a1 + 72) << 25) >> 16;
      v9 = (__int64)(*(_QWORD *)(a1 + 80) << 25) >> 16;
      v28 = 8289;
      LeafVa = MiGetLeafVa(v8);
      if ( LeafVa < 0xFFFF800000000000uLL || LeafVa >= qword_140E2F040 && LeafVa <= qword_140E2F050 )
        p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
      else
        p_Blink = (struct _LIST_ENTRY **)MiGetAnyMultiplexedVm(2LL);
      v12 = MiFastLockLeafPageTable((__int64)p_Blink, v8, 0);
      if ( v12 )
      {
        v13 = v12 - 1;
        v14 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      }
      else
      {
        v28 |= 4u;
        v35 = &v27;
        v31 = p_Blink;
        v30 = v7;
        v29 = v29 & 0xFFFFFE3F | 0x40;
        v34 = MiGetNextPageTableTail;
        v32 = v8;
        v33 = v9;
        MiWalkPageTables(&v28);
        v13 = v27;
        v14 = *((_QWORD *)&v27 + 1);
      }
      v15 = *(_QWORD *)(a1 + 24);
      v16 = *(_QWORD *)(a1 + 72);
      *(_DWORD *)(a1 + 200) = v13;
      if ( v14 )
      {
        v17 = 0;
        *(_QWORD *)(v15 + 24) += (__int64)(v14 - v16) >> 3;
        *(_QWORD *)(a1 + 72) = v14;
        *(_QWORD *)(a1 + 56) = (__int64)(v14 << 25) >> 16;
        v18 = *(_DWORD *)(a1 + 204);
        if ( v18 <= 1 )
        {
          v26 = 2 - v18;
          v17 = 2 - v18;
          do
          {
            v14 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            --v26;
          }
          while ( v26 );
        }
        *(_QWORD *)(a1 + 88) = v14;
        *(_DWORD *)(a1 + 96) = v17;
        goto LABEL_15;
      }
      *(_QWORD *)(v15 + 24) += 1 + ((*(_QWORD *)(a1 + 80) - v16) >> 3);
      return 0LL;
    }
  }
  else
  {
    v20 = *(_QWORD *)(a1 + 32);
    v21 = ((*(_QWORD *)(a1 + 88) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(_QWORD *)(a1 + 64) = v21;
    MiLockNestedPageTable(v20, v21, v4, v5);
    return 1LL;
  }
}
