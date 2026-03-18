/*
 * XREFs of MiGetNextPageTable @ 0x14037D8BC
 * Callers:
 *     MiMoveDirtyBitsToPfns @ 0x1402A52C8 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x1402A5800 (NtGetWriteWatch.c)
 *     MiMakeHyperRangeAccessible @ 0x1402B94E0 (MiMakeHyperRangeAccessible.c)
 *     MiCloneVads @ 0x1402CC944 (MiCloneVads.c)
 *     MiCountSharedPages @ 0x14037DA64 (MiCountSharedPages.c)
 *     MiComputePageCommitment @ 0x14037DDA4 (MiComputePageCommitment.c)
 *     MiFlushDirtyBitsToPfn @ 0x140388960 (MiFlushDirtyBitsToPfn.c)
 *     NtLockVirtualMemory @ 0x140388E00 (NtLockVirtualMemory.c)
 *     MiSplitPrivatePage @ 0x1404672C0 (MiSplitPrivatePage.c)
 *     MiIsCfgBitMapPageShared @ 0x14047031C (MiIsCfgBitMapPageShared.c)
 *     MiCloneCaptureVadCommit @ 0x1404B369C (MiCloneCaptureVadCommit.c)
 *     MiCheckCommitReleaseFromVad @ 0x14065DD60 (MiCheckCommitReleaseFromVad.c)
 *     MiGetNextNonGapPfnPage @ 0x140661A84 (MiGetNextNonGapPfnPage.c)
 *     MiQueryVaPhysicalContiguity @ 0x1406755A0 (MiQueryVaPhysicalContiguity.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14068156C (MiMakeVaRangePhysicallyContiguous.c)
 * Callees:
 *     MiWalkPageTables @ 0x1402468A0 (MiWalkPageTables.c)
 *     MiFastLockLeafPageTable @ 0x1402AF390 (MiFastLockLeafPageTable.c)
 *     MiGetLeafVa @ 0x1402B5480 (MiGetLeafVa.c)
 *     MiGetAnyMultiplexedVm @ 0x1404423A0 (MiGetAnyMultiplexedVm.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MiGetNextPageTable(__int64 a1, __int64 a2, char a3, char a4, _DWORD *a5)
{
  unsigned __int64 v9; // rbx
  __int64 v10; // rsi
  int v11; // eax
  unsigned __int64 LeafVa; // rax
  struct _LIST_ENTRY **p_Blink; // rdi
  int v14; // eax
  int v15; // edx
  __int64 v16; // rbx
  __int64 result; // rax
  __int128 v18; // [rsp+28h] [rbp-91h] BYREF
  int v19; // [rsp+38h] [rbp-81h] BYREF
  unsigned int v20; // [rsp+3Ch] [rbp-7Dh]
  char v21; // [rsp+41h] [rbp-78h]
  struct _LIST_ENTRY **v22; // [rsp+58h] [rbp-61h]
  unsigned __int64 v23; // [rsp+60h] [rbp-59h]
  __int64 v24; // [rsp+68h] [rbp-51h]
  __int64 (__fastcall *v25)(); // [rsp+E8h] [rbp+2Fh]
  __int128 *v26; // [rsp+F0h] [rbp+37h]

  v18 = 0LL;
  memset_0(&v19, 0, 0xC0uLL);
  v9 = a1 << 25 >> 16;
  v10 = a2 << 25 >> 16;
  v11 = 8289;
  if ( (a4 & 1) != 0 )
    v11 = 8417;
  v19 = v11;
  if ( (a4 & 2) != 0 )
    v19 = v11 | 0x200;
  LeafVa = MiGetLeafVa(v9);
  if ( LeafVa < 0xFFFF800000000000uLL || LeafVa >= qword_140E2F040 && LeafVa <= qword_140E2F050 )
    p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  else
    p_Blink = (struct _LIST_ENTRY **)MiGetAnyMultiplexedVm(2LL);
  if ( (a4 & 4) != 0 )
    goto LABEL_12;
  v14 = MiFastLockLeafPageTable((__int64)p_Blink, v9, 0);
  if ( !v14 )
  {
    v19 |= 4u;
LABEL_12:
    v22 = p_Blink;
    v26 = &v18;
    v21 = a3;
    v23 = v9;
    v20 = v20 & 0xFFFFFE3F | 0x40;
    v25 = MiGetNextPageTableTail;
    v24 = v10;
    MiWalkPageTables(&v19);
    v15 = v18;
    v16 = *((_QWORD *)&v18 + 1);
    goto LABEL_10;
  }
  v15 = v14 - 1;
  v16 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
LABEL_10:
  result = v16;
  *a5 = v15;
  return result;
}
