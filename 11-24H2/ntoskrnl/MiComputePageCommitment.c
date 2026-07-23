/*
 * XREFs of MiComputePageCommitment @ 0x140212C0C
 * Callers:
 *     MiSetProtectionOnSection @ 0x1402107C0 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x140211610 (MiProtectPrivateMemory.c)
 *     MiCommitExistingVad @ 0x140306380 (MiCommitExistingVad.c)
 *     MiPerformVadSplitting @ 0x1403C877C (MiPerformVadSplitting.c)
 *     MiCountCommittedPages @ 0x14048CFA4 (MiCountCommittedPages.c)
 * Callees:
 *     MiGetNextPageTable @ 0x14020FF30 (MiGetNextPageTable.c)
 *     MiIsPteDecommittedPage @ 0x140213A80 (MiIsPteDecommittedPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x140269F40 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiIsPrototypePteVadLookup @ 0x14030D150 (MiIsPrototypePteVadLookup.c)
 *     MiLocateCloneAddress @ 0x1403C9CE8 (MiLocateCloneAddress.c)
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
  __int64 v14; // rdx
  unsigned __int64 v15; // r8
  __int64 v16; // r15
  unsigned __int64 v17; // rsi
  _QWORD *v18; // r14
  __int64 v19; // rax
  int IsPteDecommittedPage; // eax
  int v21; // ecx
  unsigned int v22; // ecx
  int v23; // r9d
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 CloneAddress; // rax
  __int64 v30; // r11
  struct _LIST_ENTRY **p_Blink; // [rsp+30h] [rbp-58h]
  unsigned int v32; // [rsp+90h] [rbp+8h] BYREF
  volatile _KAFFINITY_EX *ActiveProcessors; // [rsp+98h] [rbp+10h]
  _KPROCESS *Process; // [rsp+A0h] [rbp+18h]
  char v35; // [rsp+A8h] [rbp+20h]

  v35 = a4;
  v32 = 0;
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
    NextPageTable = MiGetNextPageTable(v9, v10, v7, a5, &v32);
    v9 = NextPageTable;
    if ( NextPageTable )
    {
      v16 = 1LL;
      v17 = NextPageTable;
      if ( v32 )
      {
        v26 = v32;
        v14 = 0x7FFFFFFFF8LL;
        do
        {
          v17 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v16 <<= 9;
          --v26;
        }
        while ( v26 );
      }
      a6 = (_QWORD *)(((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v18 = a7;
      while ( 1 )
      {
        v19 = MI_READ_PTE_LOCK_FREE(v17, v14, v15);
        v15 = v19;
        if ( v19 )
          break;
LABEL_18:
        v17 += 8LL;
        v9 += 8 * v16;
        if ( (v17 & 0xFFF) == 0 || v9 > v10 )
        {
          v7 = v35;
          if ( (a5 & 4) == 0 )
          {
            MiUnlockPageTableInternal(p_Blink, a6);
            v7 = v35;
          }
          goto LABEL_5;
        }
      }
      IsPteDecommittedPage = MiIsPteDecommittedPage(v19, v14, v19);
      v21 = v8;
      v8 |= 1u;
      v22 = v21 & 0xFFFFFFFE;
      if ( !IsPteDecommittedPage )
        v8 = v22;
      v23 = v8 & 1;
      if ( (v8 & 2) != 0 )
      {
        v25 = v11 - v16;
        if ( (v8 & 1) == 0 )
          v25 = v11;
        v11 = v25;
      }
      else if ( (v8 & 1) == 0 )
      {
        v11 += v16;
      }
      if ( v12 && ActiveProcessors[4].Bitmap[0] && (v8 & 1) == 0 )
      {
        if ( (v15 & 1) != 0 )
        {
          v14 = 48 * ((v15 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
          if ( *(__int64 *)(v14 + 40) < 0
            && ((*(_QWORD *)(v14 + 40) & 0x10000000000LL) != 0 || *(__int64 *)(v14 + 8) <= 0) )
          {
            v27 = *(_QWORD *)(v14 + 8) | 0x8000000000000000uLL;
LABEL_49:
            CloneAddress = MiLocateCloneAddress(Process, v27);
            if ( CloneAddress && *(_QWORD *)(v30 + 1064) > *(_QWORD *)(CloneAddress + 96) )
              ++*v12;
          }
        }
        else if ( (v15 & 0x400) != 0
               && !(unsigned int)MiIsPrototypePteVadLookup(v15, v14)
               && !(unsigned __int8)MI_PROTO_FORMAT_COMBINED(v15) )
        {
          v28 = v15;
          if ( qword_140E2DCC0 )
          {
            if ( (v15 & 0x10) != 0 )
              v28 = v15 & 0xFFFFFFFFFFFFFFEFuLL;
            else
              v28 = v15 & ~qword_140E2DCC0;
          }
          v27 = v28 >> 16;
          goto LABEL_49;
        }
      }
      if ( v18 )
      {
        if ( !v23 )
        {
          v15 = (v15 >> 12) & 0xFFFFFFFFFFLL;
          v14 = *((_QWORD *)qword_140E300C8 + ((*(_QWORD *)(48 * v15 - 0x21FFFFFFFFD8LL) >> 43) & 0x3FFLL));
          if ( *(_QWORD *)(v14 + 184) != *v18 )
            *v18 = 0LL;
        }
      }
      goto LABEL_18;
    }
  }
  return v11;
}
