/*
 * XREFs of MiCountSharedPages @ 0x14037DA64
 * Callers:
 *     MiPerformVadSplitting @ 0x1402A3F44 (MiPerformVadSplitting.c)
 *     MiSetProtectionOnSection @ 0x14037E180 (MiSetProtectionOnSection.c)
 *     MiPrepareImagePagesForHotPatch @ 0x140671A88 (MiPrepareImagePagesForHotPatch.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x1402454D0 (MiGetProtoPteAddress.c)
 *     MiPteNeedsCommitCharge @ 0x140246380 (MiPteNeedsCommitCharge.c)
 *     MiIsPrototypePteVadLookup @ 0x140246860 (MiIsPrototypePteVadLookup.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiGetNextPageTable @ 0x14037D8BC (MiGetNextPageTable.c)
 */

__int64 __fastcall MiCountSharedPages(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rdi
  struct _LIST_ENTRY **p_Blink; // r15
  char v8; // r14
  unsigned __int64 NextPageTable; // rax
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rbp
  int v12; // ecx
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rbx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rbx
  bool v21; // zf
  int v22; // eax
  __int64 v23; // rcx
  char v24; // [rsp+78h] [rbp+10h]
  unsigned __int64 *v25; // [rsp+80h] [rbp+18h] BYREF

  v4 = 0LL;
  p_Blink = &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  v8 = MiLockWorkingSetShared((__int64)p_Blink);
  v24 = v8;
LABEL_2:
  if ( a2 <= a3 )
  {
    NextPageTable = MiGetNextPageTable(a2, a3, v8, 0, &v25);
    v10 = NextPageTable;
    if ( NextPageTable )
    {
      v11 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    }
    else
    {
      v11 = 0LL;
      v10 = a3 + 8;
    }
    v12 = *(_DWORD *)(a1 + 48) >> 7;
    if ( (*(_DWORD *)(a1 + 48) & 0x70) != 0x20 || (v12 & 0x1F) == 1 )
    {
      if ( (v12 & 5) != 5 )
        v4 += (__int64)(v10 - a2) >> 3;
      a2 = v10;
    }
    else
    {
      while ( a2 < v10 )
      {
        v22 = MiPteNeedsCommitCharge(a1, a2);
        v23 = v4 + 1;
        if ( !v22 )
          v23 = v4;
        a2 += 8LL;
        v4 = v23;
      }
    }
    if ( a2 != a3 + 8 )
    {
      v13 = (__int64)(a2 << 25) >> 16;
      while ( 1 )
      {
        v14 = MI_READ_PTE_LOCK_FREE(a2);
        v15 = v14;
        if ( !v14 )
        {
          v18 = MiPteNeedsCommitCharge(a1, a2);
          v19 = v4 + 1;
          if ( !v18 )
            v19 = v4;
          v4 = v19;
          goto LABEL_14;
        }
        if ( (v14 & 1) != 0 )
          break;
        if ( (v14 & 0x400) != 0 )
        {
          if ( MiIsPrototypePteVadLookup(v14) )
          {
            v21 = (v15 & 0xA0) == 0xA0;
          }
          else
          {
            if ( qword_140E2D940 )
            {
              if ( (v15 & 0x10) != 0 )
                v15 &= ~0x10uLL;
              else
                v15 &= ~qword_140E2D940;
            }
            if ( v15 >> 16 != MiGetProtoPteAddress(a1, v13 >> 12, 0, &v25) )
              goto LABEL_14;
            if ( (*(_DWORD *)(a1 + 48) & 0x70) != 0x20 )
              goto LABEL_27;
            v21 = (unsigned int)MiPteNeedsCommitCharge(a1, a2) == 0;
          }
          if ( !v21 )
            goto LABEL_27;
        }
LABEL_14:
        a2 += 8LL;
        v13 += 4096LL;
        if ( (a2 & 0xFFF) == 0 || a2 > a3 )
        {
          MiUnlockPageTable((__int64)p_Blink, v11);
          v8 = v24;
          goto LABEL_2;
        }
      }
      if ( (v14 & 0x200) != 0 )
        goto LABEL_14;
      v16 = 48 * ((v14 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      if ( *(__int64 *)(v16 + 40) >= 0 )
        goto LABEL_14;
      v20 = *(_QWORD *)(v16 + 8);
      if ( (v20 | 0x8000000000000000uLL) != MiGetProtoPteAddress(a1, v13 >> 12, 0, &v25) )
        goto LABEL_14;
LABEL_27:
      ++v4;
      goto LABEL_14;
    }
    if ( v11 )
      MiUnlockPageTable((__int64)p_Blink, v11);
  }
  MiUnlockWorkingSetShared((__int64)p_Blink, v8);
  return v4;
}
