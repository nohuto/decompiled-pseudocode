/*
 * XREFs of MiCountSharedPages @ 0x1402100F4
 * Callers:
 *     MiSetProtectionOnSection @ 0x1402107C0 (MiSetProtectionOnSection.c)
 *     MiPerformVadSplitting @ 0x1403C877C (MiPerformVadSplitting.c)
 *     MiPrepareImagePagesForHotPatch @ 0x14067E494 (MiPrepareImagePagesForHotPatch.c)
 * Callees:
 *     MiGetNextPageTable @ 0x14020FF30 (MiGetNextPageTable.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiGetProtoPteAddress @ 0x14030BEC0 (MiGetProtoPteAddress.c)
 *     MiPteNeedsCommitCharge @ 0x14030CCA0 (MiPteNeedsCommitCharge.c)
 *     MiIsPrototypePteVadLookup @ 0x14030D150 (MiIsPrototypePteVadLookup.c)
 */

__int64 __fastcall MiCountSharedPages(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rdi
  struct _LIST_ENTRY **p_Blink; // r15
  __int64 v8; // rdx
  char v9; // r14
  unsigned __int64 NextPageTable; // rax
  __int64 v11; // r8
  unsigned __int64 v12; // rbx
  __int64 v13; // rbp
  int v14; // ecx
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rbx
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rbx
  bool v23; // zf
  int v24; // eax
  __int64 v25; // rcx
  char v26; // [rsp+78h] [rbp+10h]
  int v27; // [rsp+80h] [rbp+18h] BYREF

  v4 = 0LL;
  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v9 = MiLockWorkingSetShared(p_Blink);
  v26 = v9;
LABEL_2:
  if ( a2 <= a3 )
  {
    NextPageTable = MiGetNextPageTable(a2, a3, v9, 0, &v27);
    v12 = NextPageTable;
    if ( NextPageTable )
    {
      v13 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    }
    else
    {
      v13 = 0LL;
      v12 = a3 + 8;
    }
    v14 = *(_DWORD *)(a1 + 48) >> 7;
    if ( (*(_DWORD *)(a1 + 48) & 0x70) != 0x20 || (v14 & 0x1F) == 1 )
    {
      if ( (v14 & 5) != 5 )
        v4 += (__int64)(v12 - a2) >> 3;
      a2 = v12;
    }
    else
    {
      while ( a2 < v12 )
      {
        v24 = MiPteNeedsCommitCharge(a1, a2);
        v25 = v4 + 1;
        if ( !v24 )
          v25 = v4;
        a2 += 8LL;
        v4 = v25;
      }
    }
    if ( a2 != a3 + 8 )
    {
      v15 = (__int64)(a2 << 25) >> 16;
      while ( 1 )
      {
        v16 = MI_READ_PTE_LOCK_FREE(a2, v8, v11);
        v17 = v16;
        if ( !v16 )
        {
          v20 = MiPteNeedsCommitCharge(a1, a2);
          v21 = v4 + 1;
          if ( !v20 )
            v21 = v4;
          v4 = v21;
          goto LABEL_14;
        }
        if ( (v16 & 1) != 0 )
          break;
        if ( (v16 & 0x400) != 0 )
        {
          if ( (unsigned int)MiIsPrototypePteVadLookup(v16, v8) )
          {
            v23 = (v17 & 0xA0) == 0xA0;
          }
          else
          {
            if ( qword_140E2DCC0 )
            {
              if ( (v17 & 0x10) != 0 )
                v17 &= ~0x10uLL;
              else
                v17 &= ~qword_140E2DCC0;
            }
            if ( v17 >> 16 != MiGetProtoPteAddress(a1, v15 >> 12, 0LL, &v27) )
              goto LABEL_14;
            if ( (*(_DWORD *)(a1 + 48) & 0x70) != 0x20 )
              goto LABEL_27;
            v23 = (unsigned int)MiPteNeedsCommitCharge(a1, a2) == 0;
          }
          if ( !v23 )
            goto LABEL_27;
        }
LABEL_14:
        a2 += 8LL;
        v15 += 4096LL;
        if ( (a2 & 0xFFF) == 0 || a2 > a3 )
        {
          MiUnlockPageTableInternal(p_Blink, v13);
          v9 = v26;
          goto LABEL_2;
        }
      }
      if ( (v16 & 0x200) != 0 )
        goto LABEL_14;
      v18 = 48 * ((v16 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      if ( *(__int64 *)(v18 + 40) >= 0 )
        goto LABEL_14;
      v22 = *(_QWORD *)(v18 + 8);
      if ( (v22 | 0x8000000000000000uLL) != MiGetProtoPteAddress(a1, v15 >> 12, 0LL, &v27) )
        goto LABEL_14;
LABEL_27:
      ++v4;
      goto LABEL_14;
    }
    if ( v13 )
      MiUnlockPageTableInternal(p_Blink, v13);
  }
  LOBYTE(v8) = v9;
  MiUnlockWorkingSetShared(p_Blink, v8);
  return v4;
}
