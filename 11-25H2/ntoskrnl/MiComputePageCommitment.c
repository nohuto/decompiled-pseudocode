/*
 * XREFs of MiComputePageCommitment @ 0x14037DDA4
 * Callers:
 *     MiPerformVadSplitting @ 0x1402A3F44 (MiPerformVadSplitting.c)
 *     MiSetProtectionOnSection @ 0x14037E180 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x14037F8B0 (MiProtectPrivateMemory.c)
 *     MiCommitExistingVad @ 0x1403840D0 (MiCommitExistingVad.c)
 *     MiCountCommittedPages @ 0x140492B64 (MiCountCommittedPages.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsPrototypePteVadLookup @ 0x140246860 (MiIsPrototypePteVadLookup.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1402CF530 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiGetNextPageTable @ 0x14037D8BC (MiGetNextPageTable.c)
 *     MiIsPteDecommittedPage @ 0x14037DD50 (MiIsPteDecommittedPage.c)
 *     MiLocateCloneAddress @ 0x1403DE800 (MiLocateCloneAddress.c)
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
  unsigned __int64 v17; // rax
  BOOL IsPteDecommittedPage; // eax
  unsigned __int64 v19; // r8
  int v20; // ecx
  unsigned int v21; // ecx
  int v22; // r9d
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 CloneAddress; // rax
  __int64 v27; // r11
  __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 p_Blink; // [rsp+30h] [rbp-58h]
  unsigned int v32; // [rsp+90h] [rbp+8h] BYREF
  volatile _KAFFINITY_EX *ActiveProcessors; // [rsp+98h] [rbp+10h]
  _KPROCESS *Process; // [rsp+A0h] [rbp+18h]
  char v35; // [rsp+A8h] [rbp+20h]

  v35 = a4;
  v32 = 0;
  v7 = a4;
  v8 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  p_Blink = (__int64)&Process[2].ReadyListHead.Blink;
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
      v14 = 1LL;
      v15 = NextPageTable;
      if ( v32 )
      {
        v28 = v32;
        do
        {
          v15 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v14 <<= 9;
          --v28;
        }
        while ( v28 );
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
          v7 = v35;
          if ( (a5 & 4) == 0 )
          {
            MiUnlockPageTable(p_Blink, (unsigned __int64)a6);
            v7 = v35;
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
            v29 = *(_QWORD *)(v25 + 8) | 0x8000000000000000uLL;
LABEL_34:
            CloneAddress = MiLocateCloneAddress(Process, v29, v19);
            if ( CloneAddress && *(_QWORD *)(v27 + 1064) > *(_QWORD *)(CloneAddress + 96) )
              ++*v12;
          }
        }
        else if ( (v19 & 0x400) != 0 && !MiIsPrototypePteVadLookup(v19) && !MI_PROTO_FORMAT_COMBINED(v19) )
        {
          v30 = v19;
          if ( qword_140E2D940 )
          {
            if ( (v19 & 0x10) != 0 )
              v30 = v19 & 0xFFFFFFFFFFFFFFEFuLL;
            else
              v30 = v19 & ~qword_140E2D940;
          }
          v29 = v30 >> 16;
          goto LABEL_34;
        }
      }
      if ( v16
        && !v22
        && *(_QWORD *)(*((_QWORD *)qword_140E2FD48
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
