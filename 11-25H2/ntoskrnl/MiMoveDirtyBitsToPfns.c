/*
 * XREFs of MiMoveDirtyBitsToPfns @ 0x1402A52C8
 * Callers:
 *     MiBeginHoldingDirtyFaults @ 0x140671680 (MiBeginHoldingDirtyFaults.c)
 *     MiProcessVaRangesInfoClass @ 0x1409FD8CC (MiProcessVaRangesInfoClass.c)
 *     NtResetWriteWatch @ 0x140A37110 (NtResetWriteWatch.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiReleaseProcessorFlushList @ 0x140237CC0 (MiReleaseProcessorFlushList.c)
 *     MiMakePteClean @ 0x140239F0C (MiMakePteClean.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiUnlockVadCore @ 0x1402A3820 (MiUnlockVadCore.c)
 *     MiLockVadCore @ 0x1402A3860 (MiLockVadCore.c)
 *     MiGetVadMandatoryPageSize @ 0x1402A57A0 (MiGetVadMandatoryPageSize.c)
 *     MiLocateLockedVadEvent @ 0x1402A57D4 (MiLocateLockedVadEvent.c)
 *     RtlClearBitsEx @ 0x1402A9FB0 (RtlClearBitsEx.c)
 *     KeShouldYieldProcessor @ 0x1402B0440 (KeShouldYieldProcessor.c)
 *     MiGetLeafVa @ 0x1402B5480 (MiGetLeafVa.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 *     MiWorkingSetIsContended @ 0x140338960 (MiWorkingSetIsContended.c)
 *     MiGetNextPageTable @ 0x14037D8BC (MiGetNextPageTable.c)
 *     MiGetProcessorFlushList @ 0x140381500 (MiGetProcessorFlushList.c)
 *     MiInitializeTbFlushList @ 0x140388790 (MiInitializeTbFlushList.c)
 */

__int64 __fastcall MiMoveDirtyBitsToPfns(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rsi
  __int64 v5; // r8
  unsigned __int64 v6; // rbx
  int v7; // r13d
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // r15
  _KPROCESS *Process; // rcx
  __int64 p_Blink; // r12
  __int64 ProcessorFlushList; // r14
  __int64 v13; // rdx
  unsigned __int64 v14; // r8
  char v15; // di
  int v16; // esi
  __int64 v17; // r9
  unsigned __int64 NextPageTable; // r13
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 LeafVa; // rax
  __int64 v25; // r10
  unsigned __int64 v26; // r11
  __int64 v27; // r8
  unsigned __int64 v28; // rax
  __int64 v29; // r9
  __int64 v30; // r10
  unsigned __int64 v31; // r11
  unsigned __int64 v32; // rbp
  __int64 v33; // rbp
  ULONG_PTR v34; // rcx
  __int64 v36; // rdx
  unsigned __int64 v37; // rcx
  __int64 v38; // rdx
  _QWORD *v39; // rdi
  int v40; // [rsp+30h] [rbp-88h]
  int v41; // [rsp+34h] [rbp-84h]
  unsigned int v42; // [rsp+38h] [rbp-80h] BYREF
  __int64 LockedVadEvent; // [rsp+40h] [rbp-78h]
  int v44; // [rsp+48h] [rbp-70h]
  int v45; // [rsp+4Ch] [rbp-6Ch]
  unsigned __int64 *v46; // [rsp+50h] [rbp-68h]
  volatile _KAFFINITY_EX *ActiveProcessors; // [rsp+58h] [rbp-60h]
  unsigned __int64 v48; // [rsp+60h] [rbp-58h]
  char v49; // [rsp+C0h] [rbp+8h]
  unsigned __int64 v50; // [rsp+C8h] [rbp+10h]

  v4 = a3;
  v5 = 0LL;
  v42 = 0;
  v41 = 0;
  v40 = 0;
  v6 = 0LL;
  v7 = 0;
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v50 = v9;
  Process = KeGetCurrentThread()->ApcState.Process;
  p_Blink = (__int64)&Process[2].ReadyListHead.Blink;
  ActiveProcessors = Process[2].ActiveProcessors;
  v44 = a4 & 1;
  if ( (a4 & 1) != 0 )
  {
    LockedVadEvent = MiLocateLockedVadEvent(v4, 4LL);
    v46 = (unsigned __int64 *)(LockedVadEvent + (MmVadEventBlockFixEnabled != 0 ? 16LL : 8LL));
  }
  else
  {
    v46 = 0LL;
    LockedVadEvent = 0LL;
  }
  ProcessorFlushList = v5;
  v49 = MiLockWorkingSetShared(p_Blink);
  v15 = v49;
  if ( v8 <= v9 )
  {
    v16 = a4 & 2;
    v45 = v16;
    do
    {
      if ( v6 )
      {
        if ( ProcessorFlushList )
        {
          MiFlushTbList(ProcessorFlushList, v13, v14);
          MiReleaseProcessorFlushList();
          ProcessorFlushList = 0LL;
        }
        MiUnlockPageTable(p_Blink, v6);
        v6 = 0LL;
        if ( (unsigned int)MiWorkingSetIsContended(p_Blink, 0LL) || KeShouldYieldProcessor() )
        {
          LOBYTE(v36) = v15;
          MiUnlockWorkingSetShared(p_Blink, v36);
          MiLockWorkingSetShared(p_Blink);
        }
      }
      if ( v16 )
        _InterlockedIncrement64((volatile signed __int64 *)&ActiveProcessors[5].StaticBitmap[8]);
      LOBYTE(v14) = v15;
      NextPageTable = MiGetNextPageTable(v8, v9, v14, 1, (__int64)&v42);
      v19 = NextPageTable;
      if ( NextPageTable )
      {
        v14 = 0xFFFFF68000000000uLL;
        v17 = 0x7FFFFFFFF8LL;
        v13 = v42;
        v6 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v42 )
        {
          v19 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v37 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          if ( v42 > 1 )
          {
            v38 = v42 - 1;
            do
            {
              v19 = ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              v37 = ((v37 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              --v38;
            }
            while ( v38 );
          }
          v6 = ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v39 = (_QWORD *)(v19 + 8);
          v13 = 4095LL;
          while ( ((unsigned __int16)v39 & 0xFFF) != 0 && (unsigned __int64)v39 <= v37 && (*v39 & 0x81) == 0x81 )
            ++v39;
          v20 = (unsigned __int64)(v39 - 1);
        }
        else
        {
          v20 = v9;
          if ( (NextPageTable & 0xFFFFFFFFFFFFF000uLL) + 4088 <= v9 )
            v20 = (NextPageTable & 0xFFFFFFFFFFFFF000uLL) + 4088;
        }
      }
      else
      {
        v20 = v9;
      }
      if ( v44 )
      {
        MiGetVadMandatoryPageSize(a3);
        LeafVa = MiGetLeafVa(v8, v21, v22, v23);
        v48 = ((LeafVa >> 12) - v25) / v26;
        v28 = MiGetLeafVa(v20 + 8, ((LeafVa >> 12) - v25) % v26, v27, v48);
        if ( v28 > (((*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) << 12) | 0xFFF) )
          v32 = *v46;
        else
          v32 = ((v28 >> 12) - v30) / v31;
        v33 = v32 - v29;
        if ( MmVadEventBlockFixEnabled )
        {
          v40 = 1;
          ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(LockedVadEvent + 8));
        }
        else
        {
          v41 = 1;
          MiLockVadCore(a3, 1);
        }
        RtlClearBitsEx(v46, v48, v33);
      }
      if ( !NextPageTable )
        break;
      if ( v19 <= v20 )
      {
        do
        {
          LOBYTE(v13) = (*(_QWORD *)v19 & 0x42) != 0;
          if ( ((unsigned __int8)v13 & ((*(_QWORD *)v19 & 1) != 0)) != 0 )
          {
            v34 = a4;
            LOBYTE(v34) = a4 & 3;
            if ( (a4 & 3) != 2 || *(__int64 *)v19 >= 0 )
            {
              if ( !ProcessorFlushList )
              {
                ProcessorFlushList = MiGetProcessorFlushList(v34, v13, v14, v17);
                MiInitializeTbFlushList(ProcessorFlushList, p_Blink, *(_DWORD *)(ProcessorFlushList + 12), 0, 10);
              }
              MiMakePteClean(v34, v19, ProcessorFlushList);
            }
          }
          v19 += 8LL;
        }
        while ( v19 <= v20 );
        v9 = v50;
      }
      if ( MmVadEventBlockFixEnabled )
      {
        if ( v40 )
        {
          ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(LockedVadEvent + 8));
          v40 = 0;
        }
      }
      else if ( v41 )
      {
        MiUnlockVadCore(a3, 0x11u);
        v41 = 0;
      }
      v15 = v49;
      v8 = (((unsigned __int64)MiGetLeafVa(v19, v13, v14, v17) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v16 = v45;
    }
    while ( v8 <= v9 );
    if ( ProcessorFlushList )
    {
      MiFlushTbList(ProcessorFlushList, v13, v14);
      MiReleaseProcessorFlushList();
    }
    v4 = a3;
    v7 = v40;
    v15 = v49;
  }
  if ( MmVadEventBlockFixEnabled )
  {
    if ( v7 )
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(LockedVadEvent + 8));
  }
  else if ( v41 )
  {
    MiUnlockVadCore(v4, 0x11u);
  }
  if ( v6 )
    MiUnlockPageTable(p_Blink, v6);
  LOBYTE(v13) = v15;
  return MiUnlockWorkingSetShared(p_Blink, v13);
}
