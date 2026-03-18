/*
 * XREFs of MiFlowThroughInsertNode @ 0x1404AA7FC
 * Callers:
 *     MiFinishMdlForMappedFileFault @ 0x14034EE44 (MiFinishMdlForMappedFileFault.c)
 *     MiResolvePageFileFault @ 0x14037AA3C (MiResolvePageFileFault.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14045316C (MiCopyFileOnlyGlobalSubsectionPage.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x1402A8320 (RtlAvlInsertNodeEx.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetPagingFileOffset @ 0x14037C4CC (MiGetPagingFileOffset.c)
 */

_QWORD *__fastcall MiFlowThroughInsertNode(__int64 a1, _QWORD *a2)
{
  _QWORD *result; // rax
  __int64 v5; // r8
  _QWORD *v6; // rdx
  int PagingFileOffset; // eax
  __int64 v8; // rdx
  unsigned __int16 v9; // r8
  __int64 v10; // rsi
  bool v11; // r8
  _QWORD *v12; // rdx
  unsigned int v13; // ecx
  _QWORD *v14; // rax

  if ( (a2[2] & 0x400LL) != 0 )
  {
    *(_QWORD *)(a1 + 336) = 0LL;
    goto LABEL_3;
  }
  PagingFileOffset = MiGetPagingFileOffset(a2[2]);
  v10 = *(_QWORD *)(*((_QWORD *)qword_140E2FD48 + ((*(_QWORD *)(v8 + 40) >> 43) & 0x3FFLL)) + 8LL * (v9 >> 12) + 18528);
  *(_QWORD *)(a1 + 336) = v10;
  *(_DWORD *)(a1 + 344) = PagingFileOffset;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v10 + 200));
  v11 = 0;
  v12 = *(_QWORD **)(v10 + 208);
  if ( !v12 )
    goto LABEL_14;
  v13 = *(_DWORD *)(a1 + 344);
  while ( v13 < *((_DWORD *)v12 - 2) || v13 <= *((_DWORD *)v12 - 2) && a1 + 352 <= (unsigned __int64)v12 )
  {
    v14 = (_QWORD *)*v12;
    if ( !*v12 )
      goto LABEL_14;
LABEL_11:
    v12 = v14;
  }
  v14 = (_QWORD *)v12[1];
  if ( v14 )
    goto LABEL_11;
  v11 = 1;
LABEL_14:
  RtlAvlInsertNodeEx((unsigned __int64 *)(v10 + 208), (unsigned __int64)v12, v11, (_QWORD *)(a1 + 352));
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v10 + 200));
LABEL_3:
  *(_DWORD *)(a1 + 192) |= 0x40u;
  result = (_QWORD *)(a1 + 16);
  v5 = *a2 - 32LL;
  v6 = *(_QWORD **)(v5 + 24);
  if ( *v6 != v5 + 16 )
    __fastfail(3u);
  *result = v5 + 16;
  *(_QWORD *)(a1 + 24) = v6;
  *v6 = result;
  *(_QWORD *)(v5 + 24) = result;
  *(_QWORD *)(a1 + 328) = v5;
  return result;
}
