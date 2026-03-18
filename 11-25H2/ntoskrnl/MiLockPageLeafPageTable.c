/*
 * XREFs of MiLockPageLeafPageTable @ 0x1402ADA90
 * Callers:
 *     MmProbeAndLockSelectedPages @ 0x1402AABA0 (MmProbeAndLockSelectedPages.c)
 *     MiProbeAndLockPacket @ 0x1402AC750 (MiProbeAndLockPacket.c)
 *     MmStoreProbeAndLockPages @ 0x1402CB0A0 (MmStoreProbeAndLockPages.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiFastLockLeafPageTable @ 0x1402AF390 (MiFastLockLeafPageTable.c)
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1402BBC90 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     MiLockNestedPageTable @ 0x1402FB780 (MiLockNestedPageTable.c)
 *     MiFaultInProbeAddress @ 0x1402FC28C (MiFaultInProbeAddress.c)
 */

__int64 __fastcall MiLockPageLeafPageTable(__int64 a1)
{
  unsigned __int64 v1; // r15
  __int64 v2; // r14
  unsigned __int64 v4; // rdx
  int v5; // eax
  __int64 v6; // rax
  __int64 result; // rax
  int v8; // ebx
  _KPROCESS *Process; // rdx
  unsigned __int64 KernelWaitTime; // r8
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rax
  char v15; // bp
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  char v19; // al
  __int64 v20; // rcx
  __int64 v21; // r9
  __int64 v22; // r10
  __int16 v23; // ax
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // [rsp+20h] [rbp-48h]
  unsigned __int64 v27; // [rsp+28h] [rbp-40h]
  unsigned __int64 v28; // [rsp+30h] [rbp-38h]
  __int64 v29; // [rsp+38h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_QWORD *)(a1 + 104);
  *(_QWORD *)(a1 + 48) = CLFS_LSN_NULL_EXT;
  v26 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v27 = ((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v28 = ((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v29 = ((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v4 = *(_QWORD *)(a1 + 40);
  if ( v4 )
  {
    if ( v4 == ((*(_QWORD *)(a1 + 24) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
      goto LABEL_6;
    MiUnlockPageTable(v2, v4);
    *(_DWORD *)(a1 + 72) &= ~0x20u;
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  v5 = MiFastLockLeafPageTable(v2, v1, 4LL);
  if ( !v5 )
  {
    v8 = 3;
    *(_QWORD *)(a1 + 40) = 0xFFFFF6FB7DBEDF68uLL;
    MiLockNestedPageTable(v2, 0xFFFFF6FB7DBEDF68uLL);
    goto LABEL_26;
  }
  *(_QWORD *)(a1 + 40) = *(&v26 + v5);
  if ( v5 != 1 )
  {
    v8 = v5 - 1;
    goto LABEL_26;
  }
LABEL_6:
  v6 = *(_QWORD *)v26;
  if ( v26 >= 0xFFFFF6FB7DBED000uLL && v26 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    if ( (v6 & 1) == 0 )
      goto LABEL_12;
    if ( ((v6 & 0x42) == 0 || (v6 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy != 1 )
      {
        KernelWaitTime = Process[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v11 = *(_QWORD *)(KernelWaitTime + 8 * ((v26 >> 3) & 0x1FF));
          if ( (v11 & 0x20) != 0 )
            v6 |= 0x20uLL;
          v12 = v6;
          v6 |= 0x42uLL;
          if ( (v11 & 0x42) == 0 )
            v6 = v12;
        }
      }
    }
  }
  if ( (v6 & 1) == 0 )
  {
LABEL_12:
    result = MiFaultInProbeAddress(a1);
    if ( (int)result < 0 )
    {
LABEL_37:
      ++dword_140E2FEBC;
      return result;
    }
    *(_QWORD *)(a1 + 40) = 0xFFFFF6FB7DBEDF68uLL;
    MiLockNestedPageTable(v2, 0xFFFFF6FB7DBEDF68uLL);
    v8 = 3;
    while ( 1 )
    {
      v13 = *(&v26 + v8);
      v14 = MI_READ_PTE_LOCK_FREE(v13);
      if ( (v14 & 1) == 0 )
      {
        result = MiFaultInProbeAddress(a1);
        if ( (int)result < 0 )
          goto LABEL_37;
        *(_QWORD *)(a1 + 40) = 0xFFFFF6FB7DBEDF68uLL;
        MiLockNestedPageTable(v2, 0xFFFFF6FB7DBEDF68uLL);
        v8 = 4;
        goto LABEL_25;
      }
      if ( (v14 & 0x80u) != 0LL )
      {
        if ( *(_DWORD *)(a1 + 96) == 1 && (v14 & 0x800) == 0 )
        {
          ++dword_140E2FEC4;
          return 3221225477LL;
        }
        v21 = (v14 >> 12) & 0xFFFFFFFFFFLL;
        v15 = 1;
        v1 >>= 12;
        v22 = 1LL;
        do
        {
          v23 = v1;
          v1 >>= 9;
          v24 = v22 * (v23 & 0x1FF);
          v22 <<= 9;
          v21 += v24;
          --v8;
        }
        while ( v8 );
        v25 = *(_QWORD *)(a1 + 8);
        *(_QWORD *)(a1 + 136) = v21;
        *(_QWORD *)(a1 + 152) = v25 & ~((v22 << 12) - 1);
        *(_QWORD *)(a1 + 160) = (~((v22 << 12) - 1) & ((v22 << 12) + v25)) - 1;
        *(_DWORD *)(a1 + 72) |= 0x20u;
        *(_QWORD *)(a1 + 168) = v21 & ~(v22 - 1);
      }
      else
      {
        v15 = 0;
      }
      MiLockNestedPageTable(v2, v13);
      v16 = *(_QWORD *)(a1 + 40);
      if ( v16 == 0xFFFFF6FB7DBEDF68uLL )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v19 = *(_DWORD *)(v2 + 184) & 0xF;
        if ( !v19 )
        {
          v20 = 2LL;
LABEL_44:
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&CurrentPrcb->SelfmapLockHandle[v20]);
          goto LABEL_24;
        }
        if ( v19 != 7 )
        {
          v20 = 3LL;
          if ( v19 == 5 )
            v20 = 0LL;
          goto LABEL_44;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&CurrentPrcb->SelfmapLockHandle[1]);
      }
      else if ( (*(_DWORD *)(v2 + 184) & 0xF) != 0
             || v16 < 0xFFFFF6FB7DBED000uLL
             || v16 > 0xFFFFF6FB7DBEDFFFuLL
             || (v17 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) == 0 )
      {
        if ( (*(_DWORD *)(v2 + 184) & 0xF) != 0 && v16 >= 0xFFFFF6FB7DBED000uLL && v16 <= 0xFFFFF6FB7DBEDFFFuLL )
          _InterlockedAnd(
            &dword_140E2EE6C[(unsigned __int64)(2 * (unsigned int)((__int64)(v16 + 0x90482413000LL) >> 3)) >> 5],
            ~(2 << ((2 * ((__int64)(v16 + 0x90482413000LL) >> 3)) & 0x1F)) & ~(1 << ((2
                                                                                    * ((__int64)(v16 + 0x90482413000LL) >> 3)) & 0x1F)));
        else
          _InterlockedAnd64((volatile signed __int64 *)v16, 0xCFFFFFFFFFFFFFFFuLL);
      }
      else
      {
        ExReleaseSpinLockRegardlessFromDpcLevel(v17 + 4 * ((v16 >> 3) & 0x1FF));
      }
LABEL_24:
      *(_QWORD *)(a1 + 40) = v13;
      if ( v15 )
        return 0LL;
LABEL_25:
      --v8;
LABEL_26:
      if ( !v8 )
        goto LABEL_6;
    }
  }
  *(_QWORD *)(a1 + 48) = v6;
  return 0LL;
}
