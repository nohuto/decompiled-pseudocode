/*
 * XREFs of MiComputePageCommitment @ 0x140238A7C
 * Callers:
 *     MiCommitExistingVad @ 0x140213020 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140236630 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x140237480 (MiProtectPrivateMemory.c)
 *     MiPerformVadSplitting @ 0x140405FC8 (MiPerformVadSplitting.c)
 *     MiCountCommittedPages @ 0x140492104 (MiCountCommittedPages.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetNextPageTable @ 0x140235DA0 (MiGetNextPageTable.c)
 *     MiIsPteDecommittedPage @ 0x140238E20 (MiIsPteDecommittedPage.c)
 *     MiIsPrototypePteVadLookup @ 0x140303270 (MiIsPrototypePteVadLookup.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     MiLocateCloneAddress @ 0x1403E3608 (MiLocateCloneAddress.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x14040E5F0 (MI_PROTO_FORMAT_COMBINED.c)
 */

__int64 __fastcall MiComputePageCommitment(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        char a4,
        char a5,
        _QWORD *a6,
        _QWORD *a7)
{
  char v7; // r10
  int v8; // ebx
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // r12
  __int64 v11; // rdi
  _QWORD *v12; // r13
  __int64 NextPageTable; // rax
  __int64 v14; // r15
  unsigned __int64 v15; // rsi
  _QWORD *v16; // r14
  __int64 v17; // rax
  int IsPteDecommittedPage; // eax
  unsigned __int64 v19; // r8
  int v20; // ecx
  unsigned int v21; // ecx
  int v22; // r9d
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 CloneAddress; // rax
  __int64 v31; // r11
  struct _LIST_ENTRY **p_Blink; // [rsp+30h] [rbp-58h]
  unsigned int v33; // [rsp+90h] [rbp+8h] BYREF
  volatile _KAFFINITY_EX *ActiveProcessors; // [rsp+98h] [rbp+10h]
  _KPROCESS *Process; // [rsp+A0h] [rbp+18h]
  char v36; // [rsp+A8h] [rbp+20h]

  v36 = a4;
  v33 = 0;
  v7 = a4;
  v8 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  p_Blink = &Process[2].ReadyListHead.Blink;
  ActiveProcessors = Process[2].ActiveProcessors;
  v9 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (*(_DWORD *)(a3 + 48) & 0x2000000) != 0 )
  {
    v8 = 2;
    v11 = ((__int64)(v10 - v9) >> 3) + 1;
  }
  else
  {
    v11 = 0LL;
  }
  v12 = a6;
  if ( a6 )
    *a6 = 0LL;
LABEL_5:
  if ( v9 <= v10 )
  {
    NextPageTable = MiGetNextPageTable(v9, v10, v7, a5, &v33);
    v9 = NextPageTable;
    if ( NextPageTable )
    {
      v14 = 1LL;
      v15 = NextPageTable;
      if ( v33 )
      {
        v26 = v33;
        do
        {
          v15 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v14 <<= 9;
          --v26;
        }
        while ( v26 );
      }
      a6 = (_QWORD *)(((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v16 = a7;
      while ( 1 )
      {
        v17 = MI_READ_PTE_LOCK_FREE(v15);
        if ( v17 )
          break;
LABEL_18:
        v15 += 8LL;
        v9 += 8 * v14;
        if ( (v15 & 0xFFF) == 0 || v9 > v10 )
        {
          v7 = v36;
          if ( (a5 & 4) == 0 )
          {
            MiUnlockPageTableInternal(p_Blink, a6);
            v7 = v36;
          }
          goto LABEL_5;
        }
      }
      IsPteDecommittedPage = MiIsPteDecommittedPage(v17);
      v20 = v8;
      v8 |= 1u;
      v21 = v20 & 0xFFFFFFFE;
      if ( !IsPteDecommittedPage )
        v8 = v21;
      v22 = v8 & 1;
      if ( (v8 & 2) != 0 )
      {
        v24 = v11 - v14;
        if ( (v8 & 1) == 0 )
          v24 = v11;
        v11 = v24;
      }
      else if ( (v8 & 1) == 0 )
      {
        v11 += v14;
      }
      if ( v12 && ActiveProcessors[4].Bitmap[0] && (v8 & 1) == 0 )
      {
        if ( (v19 & 1) != 0 )
        {
          v25 = 48 * ((v19 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
          if ( *(__int64 *)(v25 + 40) < 0
            && ((*(_QWORD *)(v25 + 40) & 0x10000000000LL) != 0 || *(__int64 *)(v25 + 8) <= 0) )
          {
            v27 = *(_QWORD *)(v25 + 8) | 0x8000000000000000uLL;
LABEL_49:
            CloneAddress = MiLocateCloneAddress(Process, v27, v19);
            if ( CloneAddress && *(_QWORD *)(v31 + 1064) > *(_QWORD *)(CloneAddress + 96) )
              ++*v12;
          }
        }
        else if ( (v19 & 0x400) != 0
               && !(unsigned int)MiIsPrototypePteVadLookup(v19)
               && !(unsigned __int8)MI_PROTO_FORMAT_COMBINED(v19, v28, v19) )
        {
          v29 = v19;
          if ( qword_140E2DB80 )
          {
            if ( (v19 & 0x10) != 0 )
              v29 = v19 & 0xFFFFFFFFFFFFFFEFuLL;
            else
              v29 = v19 & ~qword_140E2DB80;
          }
          v27 = v29 >> 16;
          goto LABEL_49;
        }
      }
      if ( v16
        && !v22
        && *(_QWORD *)(*((_QWORD *)qword_140E2FF88
                       + ((*(_QWORD *)(48 * ((v19 >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFD8LL) >> 43) & 0x3FFLL))
                     + 184LL) != *v16 )
      {
        *v16 = 0LL;
      }
      goto LABEL_18;
    }
  }
  return v11;
}
