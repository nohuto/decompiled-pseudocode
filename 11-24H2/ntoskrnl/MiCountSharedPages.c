/*
 * XREFs of MiCountSharedPages @ 0x140235F64
 * Callers:
 *     MiSetProtectionOnSection @ 0x140236630 (MiSetProtectionOnSection.c)
 *     MiPerformVadSplitting @ 0x140405FC8 (MiPerformVadSplitting.c)
 *     MiPrepareImagePagesForHotPatch @ 0x14067D29C (MiPrepareImagePagesForHotPatch.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetNextPageTable @ 0x140235DA0 (MiGetNextPageTable.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiGetProtoPteAddress @ 0x140301740 (MiGetProtoPteAddress.c)
 *     MiPteNeedsCommitCharge @ 0x140302DC0 (MiPteNeedsCommitCharge.c)
 *     MiIsPrototypePteVadLookup @ 0x140303270 (MiIsPrototypePteVadLookup.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiCountSharedPages(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rdi
  struct _LIST_ENTRY **p_Blink; // r15
  __int64 v8; // rdx
  char v9; // r14
  unsigned __int64 NextPageTable; // rax
  unsigned __int64 v11; // rbx
  __int64 v12; // rbp
  int v13; // ecx
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rbx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rbx
  bool v22; // zf
  int v23; // eax
  __int64 v24; // rcx
  char v25; // [rsp+78h] [rbp+10h]
  int v26; // [rsp+80h] [rbp+18h] BYREF

  v4 = 0LL;
  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v9 = MiLockWorkingSetShared(p_Blink);
  v25 = v9;
LABEL_2:
  if ( a2 <= a3 )
  {
    NextPageTable = MiGetNextPageTable(a2, a3, v9, 0, &v26);
    v11 = NextPageTable;
    if ( NextPageTable )
    {
      v12 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    }
    else
    {
      v12 = 0LL;
      v11 = a3 + 8;
    }
    v13 = *(_DWORD *)(a1 + 48) >> 7;
    if ( (*(_DWORD *)(a1 + 48) & 0x70) != 0x20 || (v13 & 0x1F) == 1 )
    {
      if ( (v13 & 5) != 5 )
        v4 += (__int64)(v11 - a2) >> 3;
      a2 = v11;
    }
    else
    {
      while ( a2 < v11 )
      {
        v23 = MiPteNeedsCommitCharge(a1, a2);
        v24 = v4 + 1;
        if ( !v23 )
          v24 = v4;
        a2 += 8LL;
        v4 = v24;
      }
    }
    if ( a2 != a3 + 8 )
    {
      v14 = (__int64)(a2 << 25) >> 16;
      while ( 1 )
      {
        v15 = MI_READ_PTE_LOCK_FREE(a2);
        v16 = v15;
        if ( !v15 )
        {
          v19 = MiPteNeedsCommitCharge(a1, a2);
          v20 = v4 + 1;
          if ( !v19 )
            v20 = v4;
          v4 = v20;
          goto LABEL_14;
        }
        if ( (v15 & 1) != 0 )
          break;
        if ( (v15 & 0x400) != 0 )
        {
          if ( (unsigned int)MiIsPrototypePteVadLookup(v15) )
          {
            v22 = (v16 & 0xA0) == 0xA0;
          }
          else
          {
            if ( qword_140E2DB80 )
            {
              if ( (v16 & 0x10) != 0 )
                v16 &= ~0x10uLL;
              else
                v16 &= ~qword_140E2DB80;
            }
            if ( v16 >> 16 != MiGetProtoPteAddress(a1, v14 >> 12, 0LL, &v26) )
              goto LABEL_14;
            if ( (*(_DWORD *)(a1 + 48) & 0x70) != 0x20 )
              goto LABEL_27;
            v22 = (unsigned int)MiPteNeedsCommitCharge(a1, a2) == 0;
          }
          if ( !v22 )
            goto LABEL_27;
        }
LABEL_14:
        a2 += 8LL;
        v14 += 4096LL;
        if ( (a2 & 0xFFF) == 0 || a2 > a3 )
        {
          MiUnlockPageTableInternal(p_Blink, v12);
          v9 = v25;
          goto LABEL_2;
        }
      }
      if ( (v15 & 0x200) != 0 )
        goto LABEL_14;
      v17 = 48 * ((v15 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      if ( *(__int64 *)(v17 + 40) >= 0 )
        goto LABEL_14;
      v21 = *(_QWORD *)(v17 + 8);
      if ( (v21 | 0x8000000000000000uLL) != MiGetProtoPteAddress(a1, v14 >> 12, 0LL, &v26) )
        goto LABEL_14;
LABEL_27:
      ++v4;
      goto LABEL_14;
    }
    if ( v12 )
      MiUnlockPageTableInternal(p_Blink, v12);
  }
  LOBYTE(v8) = v9;
  MiUnlockWorkingSetShared(p_Blink, v8);
  return v4;
}
