/*
 * XREFs of MiFinishPteChangesInPageTable @ 0x14046D518
 * Callers:
 *     MiWriteAwePtes @ 0x1404B4FD0 (MiWriteAwePtes.c)
 * Callees:
 *     MiReleaseProcessorFlushList @ 0x140208120 (MiReleaseProcessorFlushList.c)
 *     MiGetLeafVa @ 0x140240700 (MiGetLeafVa.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiUpdateAwePageTable @ 0x14046E1F0 (MiUpdateAwePageTable.c)
 *     MiFlushGraphicsPtes @ 0x1404CFF34 (MiFlushGraphicsPtes.c)
 *     MiApplyLazyStampToAwePtes @ 0x14068236C (MiApplyLazyStampToAwePtes.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void *__fastcall MiFinishPteChangesInPageTable(__int64 a1)
{
  int v2; // edi
  __int64 v3; // rcx
  void *result; // rax
  int v5; // ebp
  __int64 v6; // rcx
  unsigned __int64 v7; // rbp
  unsigned __int64 LeafVa; // rax
  __int64 v9; // r11
  __int64 v10; // r9
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // r9
  volatile signed __int32 *v14; // r8
  int v15; // r10d
  unsigned __int64 v16; // rcx
  unsigned int v17; // eax

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 64);
  if ( v3 )
  {
    MiFlushTbList(v3);
    MiReleaseProcessorFlushList();
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 168) + 8LL) & 0x10) != 0 && *(_QWORD *)(a1 + 48) )
    MiApplyLazyStampToAwePtes(a1);
  result = (void *)MiUpdateAwePageTable(*(_QWORD *)a1, *(_QWORD *)(a1 + 8), *(unsigned int *)(a1 + 16));
  v5 = (int)result;
  if ( *(_QWORD *)(a1 + 48) )
  {
    if ( *(_BYTE *)(a1 + 179) )
    {
      v6 = *(_QWORD *)(a1 + 24);
      if ( v6 )
      {
        MiFlushGraphicsPtes(v6, ((*(_QWORD *)(a1 + 32) - v6) >> 3) + 1);
        *(_QWORD *)(a1 + 24) = 0LL;
      }
    }
    MI_READ_PTE_LOCK_FREE(*(_QWORD *)a1);
    MiUnlockPageTableInternal(*(_QWORD *)(a1 + 40), *(_QWORD *)a1);
    if ( (*(_DWORD *)(a1 + 152) & 1) != 0 && !*(_DWORD *)(a1 + 156) && (v5 == 1 || v5 == 2 && !*(_BYTE *)(a1 + 177)) )
    {
      v7 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 48LL);
      if ( v7 )
      {
        LeafVa = MiGetLeafVa(*(_QWORD *)a1);
        v11 = (*(_DWORD *)(v10 + 24) & 0xFFFFFE00 | ((unsigned __int64)*(unsigned __int8 *)(v10 + 32) << 32)) << 12;
        v12 = ((LeafVa & 0xFFFFFFFFFFE00000uLL) - v11) >> 21;
        if ( v12 < v7 )
        {
          v13 = (((LeafVa & 0xFFFFFFFFFFE00000uLL) - v11) >> 21) & 0x1F;
          LOBYTE(v11) = 1;
          v14 = (volatile signed __int32 *)(*(_QWORD *)(v9 + 56) + 4 * (v12 >> 5));
          if ( v13 + 1 > 0x20 )
          {
            if ( (v12 & 0x1F) == 0 )
              goto LABEL_24;
            v15 = v12 & 0x1F;
            _InterlockedOr(v14++, ((1 << (32 - v15)) - 1) << v13);
            v11 = 1LL - (unsigned int)(32 - v15);
            if ( v11 >= 0x20 )
            {
              v16 = v11 >> 5;
              v11 += -32LL * (v11 >> 5);
              do
              {
                *v14++ = -1;
                --v16;
              }
              while ( v16 );
            }
            if ( v11 )
LABEL_24:
              _InterlockedOr(v14, (1 << v11) - 1);
          }
          else
          {
            _InterlockedOr(v14, 1 << v13);
          }
        }
      }
    }
    MiUnlockWorkingSetShared(*(_QWORD *)(a1 + 40), *(_BYTE *)(a1 + 176));
    *(_BYTE *)(a1 + 178) = 0;
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_DWORD *)(a1 + 16) = 0;
    v17 = *(_DWORD *)(a1 + 72);
    LOBYTE(v2) = (v17 & 0x1F) != 0;
    return memset_0(*(void **)(a1 + 80), 0, 4 * ((v17 >> 5) + v2));
  }
  return result;
}
