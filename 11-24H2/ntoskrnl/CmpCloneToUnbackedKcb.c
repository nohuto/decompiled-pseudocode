/*
 * XREFs of CmpCloneToUnbackedKcb @ 0x1407DB018
 * Callers:
 *     CmpPrepareDiscardReplacePost @ 0x1407E1890 (CmpPrepareDiscardReplacePost.c)
 * Callees:
 *     CmpDereferenceNameControlBlockWithLock @ 0x140875130 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14087F300 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpFreeKeyControlBlock @ 0x1409C69A0 (CmpFreeKeyControlBlock.c)
 *     CmpAllocateKeyControlBlock @ 0x1409DE440 (CmpAllocateKeyControlBlock.c)
 */

__int64 __fastcall CmpCloneToUnbackedKcb(__int64 a1, ULONG_PTR *a2)
{
  __int64 KeyControlBlock; // rax
  ULONG_PTR v5; // rbx
  unsigned int v6; // edi
  _QWORD *v7; // rax
  int *v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax

  KeyControlBlock = CmpAllocateKeyControlBlock();
  v5 = KeyControlBlock;
  if ( KeyControlBlock )
  {
    v7 = (_QWORD *)(KeyControlBlock + 120);
    v7[1] = v7;
    *v7 = v7;
    *(_OWORD *)(v5 + 136) = 0LL;
    *(_OWORD *)(v5 + 152) = 0LL;
    *(_QWORD *)v5 = 1LL;
    *(_QWORD *)(v5 + 32) = *(_QWORD *)(a1 + 32);
    *(_DWORD *)(v5 + 40) = -1;
    LODWORD(v7) = *(_DWORD *)(a1 + 16);
    *(_QWORD *)(v5 + 48) = 0LL;
    *(_DWORD *)(v5 + 16) = (_DWORD)v7;
    *(_QWORD *)(v5 + 216) = v5 + 208;
    *(_QWORD *)(v5 + 208) = v5 + 208;
    *(_QWORD *)(v5 + 232) = v5 + 224;
    *(_QWORD *)(v5 + 224) = v5 + 224;
    *(_QWORD *)(v5 + 240) = 0LL;
    *(_DWORD *)(v5 + 248) = 0;
    *(_QWORD *)(v5 + 256) = 0LL;
    *(_DWORD *)(v5 + 264) = 0;
    *(_QWORD *)(v5 + 272) = 0LL;
    *(_DWORD *)(v5 + 280) = 0;
    *(_QWORD *)(v5 + 288) = 0LL;
    *(_DWORD *)(v5 + 284) = -1;
    v8 = *(int **)(a1 + 80);
    if ( (*v8 & 0xFFFFFFFE) == 0xFFFFFFFE )
    {
      v9 = *(_QWORD *)(v5 + 80);
      v6 = -1073741670;
      if ( v9 )
      {
        CmpDereferenceNameControlBlockWithLock(v9);
        *(_QWORD *)(v5 + 80) = 0LL;
      }
      *(_DWORD *)(v5 + 8) |= 0x80000u;
      CmpFreeKeyControlBlock(v5);
    }
    else
    {
      *(_QWORD *)(v5 + 80) = v8;
      *v8 = (*v8 + 2) ^ ((unsigned __int8)*v8 ^ (unsigned __int8)(*(_BYTE *)v8 + 2)) & 1;
      v10 = *(_QWORD *)(a1 + 72);
      if ( v10 )
      {
        *(_BYTE *)(v5 + 65) = ((*(_BYTE *)(v10 + 65) - 1) & 0xFD) == 0;
        CmpReferenceKeyControlBlockUnsafe(*(_QWORD *)(a1 + 72));
        *(_QWORD *)(v5 + 72) = *(_QWORD *)(a1 + 72);
      }
      v11 = *(_QWORD *)(v5 + 32);
      *(_DWORD *)(v5 + 8) ^= (*(_DWORD *)(a1 + 8) ^ *(_DWORD *)(v5 + 8)) & 0x7FE00000;
      if ( *(_BYTE *)(v11 + 2944) == 1 )
        *(_WORD *)(v5 + 8) |= 0x20u;
      *a2 = v5;
      return 0;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}
