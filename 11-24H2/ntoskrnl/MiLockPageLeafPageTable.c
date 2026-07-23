/*
 * XREFs of MiLockPageLeafPageTable @ 0x140238FF0
 * Callers:
 *     MiProbeAndLockPacket @ 0x140237CC0 (MiProbeAndLockPacket.c)
 *     MmStoreProbeAndLockPages @ 0x1402E9990 (MmStoreProbeAndLockPages.c)
 *     MmProbeAndLockSelectedPages @ 0x140390AC0 (MmProbeAndLockSelectedPages.c)
 * Callees:
 *     MiLockNestedPageTable @ 0x140201F50 (MiLockNestedPageTable.c)
 *     MiFaultInProbeAddress @ 0x14020ABF4 (MiFaultInProbeAddress.c)
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x14020BE60 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     MiFastLockLeafPageTable @ 0x14023A9C0 (MiFastLockLeafPageTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 */

__int64 __fastcall MiLockPageLeafPageTable(__int64 a1)
{
  unsigned __int64 v1; // r15
  __int64 v2; // r14
  __int64 v4; // rdx
  int v5; // eax
  unsigned __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 result; // rax
  int v10; // ebx
  _KPROCESS *Process; // rdx
  unsigned __int64 KernelWaitTime; // r8
  __int64 v13; // rcx
  __int64 v14; // rdx
  ULONG_PTR v15; // rsi
  unsigned __int64 v16; // rax
  char v17; // bp
  __int64 v18; // r9
  struct _KPRCB *CurrentPrcb; // rdx
  char v20; // al
  __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  __int64 v23; // r9
  __int64 v24; // r10
  __int16 v25; // ax
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned __int64 v28; // [rsp+20h] [rbp-48h]
  unsigned __int64 v29; // [rsp+28h] [rbp-40h]
  unsigned __int64 v30; // [rsp+30h] [rbp-38h]
  __int64 v31; // [rsp+38h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_QWORD *)(a1 + 104);
  *(_QWORD *)(a1 + 48) = CLFS_LSN_NULL_EXT;
  v28 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v29 = ((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v30 = ((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v31 = ((v30 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v4 = *(_QWORD *)(a1 + 40);
  if ( v4 )
  {
    if ( v4 == ((*(_QWORD *)(a1 + 24) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
      goto LABEL_4;
    MiUnlockPageTableInternal(v2, v4);
    *(_DWORD *)(a1 + 72) &= ~0x20u;
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  v5 = MiFastLockLeafPageTable(v2, v1, 4LL);
  if ( !v5 )
  {
    v10 = 3;
    *(_QWORD *)(a1 + 40) = 0xFFFFF6FB7DBEDF68uLL;
    MiLockNestedPageTable(v2, 0xFFFFF6FB7DBEDF68uLL);
    goto LABEL_26;
  }
  *(_QWORD *)(a1 + 40) = *(&v28 + v5);
  if ( v5 != 1 )
  {
    v10 = v5 - 1;
    goto LABEL_26;
  }
LABEL_4:
  v8 = *(_QWORD *)v28;
  if ( v28 >= 0xFFFFF6FB7DBED000uLL && v28 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    if ( (v8 & 1) == 0 )
    {
LABEL_11:
      result = MiFaultInProbeAddress(a1);
      if ( (int)result < 0 )
      {
LABEL_29:
        ++dword_140E30244;
        return result;
      }
      *(_QWORD *)(a1 + 40) = 0xFFFFF6FB7DBEDF68uLL;
      MiLockNestedPageTable(v2, 0xFFFFF6FB7DBEDF68uLL);
      v10 = 3;
      while ( 1 )
      {
        v15 = *(&v28 + v10);
        v16 = MI_READ_PTE_LOCK_FREE(v15, v6, v7);
        if ( (v16 & 1) == 0 )
        {
          result = MiFaultInProbeAddress(a1);
          if ( (int)result < 0 )
            goto LABEL_29;
          *(_QWORD *)(a1 + 40) = 0xFFFFF6FB7DBEDF68uLL;
          MiLockNestedPageTable(v2, 0xFFFFF6FB7DBEDF68uLL);
          v10 = 4;
          goto LABEL_25;
        }
        if ( (v16 & 0x80u) != 0LL )
        {
          if ( *(_DWORD *)(a1 + 96) == 1 && (v16 & 0x800) == 0 )
          {
            ++dword_140E3024C;
            return 3221225477LL;
          }
          v23 = (v16 >> 12) & 0xFFFFFFFFFFLL;
          v17 = 1;
          v1 >>= 12;
          v24 = 1LL;
          do
          {
            v25 = v1;
            v1 >>= 9;
            v26 = v24 * (v25 & 0x1FF);
            v24 <<= 9;
            v23 += v26;
            --v10;
          }
          while ( v10 );
          v27 = *(_QWORD *)(a1 + 8);
          *(_QWORD *)(a1 + 136) = v23;
          *(_QWORD *)(a1 + 152) = v27 & ~((v24 << 12) - 1);
          *(_QWORD *)(a1 + 160) = (~((v24 << 12) - 1) & ((v24 << 12) + v27)) - 1;
          *(_DWORD *)(a1 + 72) |= 0x20u;
          *(_QWORD *)(a1 + 168) = v23 & ~(v24 - 1);
        }
        else
        {
          v17 = 0;
        }
        MiLockNestedPageTable(v2, v15);
        v6 = *(_QWORD *)(a1 + 40);
        if ( v6 == 0xFFFFF6FB7DBEDF68uLL )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v20 = *(_DWORD *)(v2 + 184) & 0xF;
          if ( !v20 )
          {
            v21 = 2LL;
LABEL_40:
            KxReleaseQueuedSpinLock(&CurrentPrcb->SelfmapLockHandle[v21]);
            goto LABEL_24;
          }
          if ( v20 != 7 )
          {
            v21 = 3LL;
            if ( v20 == 5 )
              v21 = 0LL;
            goto LABEL_40;
          }
          KxReleaseQueuedSpinLock(&CurrentPrcb->SelfmapLockHandle[1]);
        }
        else if ( (*(_DWORD *)(v2 + 184) & 0xF) != 0
               || v6 < 0xFFFFF6FB7DBED000uLL
               || v6 > 0xFFFFF6FB7DBEDFFFuLL
               || (v22 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) == 0 )
        {
          if ( (*(_DWORD *)(v2 + 184) & 0xF) != 0 && v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBEDFFFuLL )
          {
            v7 = 2 * (unsigned int)((__int64)(v6 + 0x90482413000LL) >> 3);
            v6 = (unsigned int)~(2 << ((2 * ((__int64)(v6 + 0x90482413000LL) >> 3)) & 0x1F));
            LODWORD(v6) = v6 & ~(1 << (v7 & 0x1F));
            _InterlockedAnd(&dword_140E2F1EC[(unsigned __int64)(unsigned int)v7 >> 5], v6);
          }
          else
          {
            _InterlockedAnd64((volatile signed __int64 *)v6, 0xCFFFFFFFFFFFFFFFuLL);
          }
        }
        else
        {
          ExReleaseSpinLockRegardlessFromDpcLevel(
            (volatile signed __int32 *)(v22 + 4 * ((v6 >> 3) & 0x1FF)),
            (v6 >> 3) & 0x1FF,
            v7,
            v18);
        }
LABEL_24:
        *(_QWORD *)(a1 + 40) = v15;
        if ( v17 )
          return 0LL;
LABEL_25:
        --v10;
LABEL_26:
        if ( !v10 )
          goto LABEL_4;
      }
    }
    if ( ((v8 & 0x42) == 0 || (v8 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy != 1 )
      {
        KernelWaitTime = Process[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v13 = *(_QWORD *)(KernelWaitTime + 8 * ((v28 >> 3) & 0x1FF));
          if ( (v13 & 0x20) != 0 )
            v8 |= 0x20uLL;
          v14 = v8;
          v8 |= 0x42uLL;
          if ( (v13 & 0x42) == 0 )
            v8 = v14;
        }
      }
    }
  }
  if ( (v8 & 1) == 0 )
    goto LABEL_11;
  *(_QWORD *)(a1 + 48) = v8;
  return 0LL;
}
