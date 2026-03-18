/*
 * XREFs of MiFreeEmptyBootPageTable @ 0x140C403C0
 * Callers:
 *     MxCreateFreePfns @ 0x140C4131C (MxCreateFreePfns.c)
 * Callees:
 *     MiLockAndInsertPageInFreeList @ 0x140223D04 (MiLockAndInsertPageInFreeList.c)
 *     MiDecreaseUsedPtesInPfn @ 0x1402274AC (MiDecreaseUsedPtesInPfn.c)
 *     MiGetLeafVa @ 0x1402B5480 (MiGetLeafVa.c)
 */

unsigned __int64 __fastcall MiFreeEmptyBootPageTable(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // rbx
  _QWORD *v3; // rdi
  unsigned __int64 result; // rax
  __int64 v5; // rsi
  int v6; // [rsp+50h] [rbp+8h]

  v1 = a1;
  v2 = 48 * a1 - 0x220000000000LL;
  v3 = (_QWORD *)(*(_QWORD *)(v2 + 8) | 0x8000000000000000uLL);
  *(_QWORD *)(v2 + 24) = (*(_QWORD *)(v2 + 24) - 1LL) ^ (*(_QWORD *)(v2 + 24) ^ (*(_QWORD *)(v2 + 24) - 1LL)) & 0xC000000000000000uLL;
  for ( result = MiDecreaseUsedPtesInPfn(v2, 1uLL); !(_DWORD)result; result = MiDecreaseUsedPtesInPfn(v2, 1uLL) )
  {
    result = MiGetLeafVa((unsigned __int64)v3);
    if ( result >= MiLowHalVa )
      break;
    if ( v3 == (_QWORD *)((((unsigned __int64)MxPhase0ScratchPte >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) )
      MxPhase0ScratchPte = 0LL;
    *(_QWORD *)(v2 + 24) &= 0xC000000000000000uLL;
    HIWORD(v6) = HIWORD(*(_DWORD *)(v2 + 32));
    LOWORD(v6) = 0;
    *(_DWORD *)(v2 + 32) = v6;
    v5 = *(_QWORD *)(v2 + 40) & 0xFFFFFFFFFFLL;
    *v3 = CLFS_LSN_NULL_EXT;
    result = MiLockAndInsertPageInFreeList(v2);
    if ( v5 == v1 )
      break;
    v1 = v5;
    v2 = 48 * v5 - 0x220000000000LL;
    v3 = (_QWORD *)(*(_QWORD *)(v2 + 8) | 0x8000000000000000uLL);
    *(_QWORD *)(v2 + 24) = (*(_QWORD *)(v2 + 24) - 1LL) ^ (*(_QWORD *)(v2 + 24) ^ (*(_QWORD *)(v2 + 24) - 1LL)) & 0xC000000000000000uLL;
  }
  return result;
}
