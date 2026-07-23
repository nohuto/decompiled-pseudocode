/*
 * XREFs of MiMoveDirtyBitsToPfns @ 0x1404F0C98
 * Callers:
 *     MiBeginHoldingDirtyFaults @ 0x14067E020 (MiBeginHoldingDirtyFaults.c)
 *     MiProcessVaRangesInfoClass @ 0x1409E48D4 (MiProcessVaRangesInfoClass.c)
 *     NtResetWriteWatch @ 0x140A31D20 (NtResetWriteWatch.c)
 * Callees:
 *     MiMakePteClean @ 0x140200C78 (MiMakePteClean.c)
 *     MiReleaseProcessorFlushList @ 0x140208120 (MiReleaseProcessorFlushList.c)
 *     MiGetNextPageTable @ 0x14020FF30 (MiGetNextPageTable.c)
 *     MiInitializeTbFlushList @ 0x140214780 (MiInitializeTbFlushList.c)
 *     KeShouldYieldProcessor @ 0x14023BA60 (KeShouldYieldProcessor.c)
 *     MiGetLeafVa @ 0x140240700 (MiGetLeafVa.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiLocateLockedVadEvent @ 0x14026757C (MiLocateLockedVadEvent.c)
 *     RtlClearBitsEx @ 0x1402920E0 (RtlClearBitsEx.c)
 *     MiGetProcessorFlushList @ 0x1402990BC (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiWorkingSetIsContended @ 0x1403915E0 (MiWorkingSetIsContended.c)
 *     MiGetVadMandatoryPageSize @ 0x14044D544 (MiGetVadMandatoryPageSize.c)
 */

char __fastcall MiMoveDirtyBitsToPfns(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  char v4; // si
  __int64 v5; // r9
  __int64 v7; // rdx
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // r15
  _KPROCESS *Process; // rcx
  volatile _KAFFINITY_EX *ActiveProcessors; // r13
  __int64 p_Blink; // r12
  __int64 *ProcessorFlushList; // r14
  char v15; // di
  int v16; // esi
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 NextPageTable; // r13
  ULONG_PTR v21; // rsi
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // rcx
  __int64 v24; // rdx
  _QWORD *i; // rdi
  unsigned __int64 LeafVa; // rax
  __int64 v27; // r10
  unsigned __int64 v28; // r11
  unsigned __int64 v29; // rax
  __int64 v30; // r9
  __int64 v31; // r10
  unsigned __int64 v32; // r11
  unsigned __int64 v33; // rbp
  unsigned __int64 v34; // rbp
  ULONG_PTR v35; // rcx
  int v37; // [rsp+30h] [rbp-78h]
  unsigned int v38; // [rsp+34h] [rbp-74h] BYREF
  int v39; // [rsp+38h] [rbp-70h]
  int v40; // [rsp+3Ch] [rbp-6Ch]
  unsigned __int64 LockedVadEvent; // [rsp+40h] [rbp-68h]
  unsigned __int64 *v42; // [rsp+48h] [rbp-60h]
  unsigned __int64 v43; // [rsp+50h] [rbp-58h]
  volatile _KAFFINITY_EX *v44; // [rsp+58h] [rbp-50h]
  char v45; // [rsp+B0h] [rbp+8h]
  unsigned __int64 v46; // [rsp+B8h] [rbp+10h]

  v4 = a4;
  v5 = 0LL;
  v38 = 0;
  v7 = 0x7FFFFFFFF8LL;
  v37 = 0;
  v8 = 0LL;
  v9 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v46 = v10;
  Process = KeGetCurrentThread()->ApcState.Process;
  v39 = v4 & 1;
  ActiveProcessors = Process[2].ActiveProcessors;
  p_Blink = (__int64)&Process[2].ReadyListHead.Blink;
  v44 = ActiveProcessors;
  if ( (v4 & 1) != 0 )
  {
    LockedVadEvent = MiLocateLockedVadEvent(a3, 4);
    v42 = (unsigned __int64 *)(LockedVadEvent + 16);
    v4 = a4;
  }
  else
  {
    v42 = 0LL;
    LockedVadEvent = 0LL;
  }
  ProcessorFlushList = (__int64 *)v5;
  v45 = MiLockWorkingSetShared(p_Blink, v7, a3, v5);
  v15 = v45;
  if ( v9 <= v10 )
  {
    v16 = v4 & 2;
    v40 = v16;
    do
    {
      if ( v8 )
      {
        if ( ProcessorFlushList )
        {
          MiFlushTbList((__int64)ProcessorFlushList);
          MiReleaseProcessorFlushList();
          ProcessorFlushList = 0LL;
        }
        MiUnlockPageTableInternal(p_Blink, v8);
        v8 = 0LL;
        if ( (unsigned int)MiWorkingSetIsContended(p_Blink, 0) || KeShouldYieldProcessor() )
        {
          MiUnlockWorkingSetShared(p_Blink, v15);
          MiLockWorkingSetShared(p_Blink, v17, v18, v19);
        }
      }
      if ( v16 )
        _InterlockedIncrement64((volatile signed __int64 *)&ActiveProcessors[5].StaticBitmap[8]);
      NextPageTable = MiGetNextPageTable(v9, v10, v15, 1, &v38);
      v21 = NextPageTable;
      if ( NextPageTable )
      {
        v8 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v38 )
        {
          v21 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v23 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          if ( v38 > 1 )
          {
            v24 = v38 - 1;
            do
            {
              v21 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              v23 = ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              --v24;
            }
            while ( v24 );
          }
          v8 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          for ( i = (_QWORD *)(v21 + 8);
                ((unsigned __int16)i & 0xFFF) != 0 && (unsigned __int64)i <= v23 && (*i & 0x81) == 0x81;
                ++i )
          {
            ;
          }
          v22 = (unsigned __int64)(i - 1);
        }
        else
        {
          v22 = v10;
          if ( (NextPageTable & 0xFFFFFFFFFFFFF000uLL) + 4088 <= v10 )
            v22 = (NextPageTable & 0xFFFFFFFFFFFFF000uLL) + 4088;
        }
      }
      else
      {
        v22 = v10;
      }
      if ( v39 )
      {
        MiGetVadMandatoryPageSize(a3);
        LeafVa = MiGetLeafVa(v9);
        v43 = ((LeafVa >> 12) - v27) / v28;
        v29 = MiGetLeafVa(v22 + 8);
        if ( v29 <= (((*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) << 12) | 0xFFF) )
          v33 = ((v29 >> 12) - v31) / v32;
        else
          v33 = *v42;
        v34 = v33 - v30;
        v37 = 1;
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(LockedVadEvent + 8));
        RtlClearBitsEx((__int64)v42, v43, v34);
      }
      if ( !NextPageTable )
        break;
      if ( v21 <= v22 )
      {
        do
        {
          if ( (*(_QWORD *)v21 & 0x42) != 0 && (*(_QWORD *)v21 & 1) != 0 )
          {
            v35 = a4;
            LOBYTE(v35) = a4 & 3;
            if ( (a4 & 3) != 2 || *(__int64 *)v21 >= 0 )
            {
              if ( !ProcessorFlushList )
              {
                ProcessorFlushList = MiGetProcessorFlushList();
                MiInitializeTbFlushList(
                  (__int64)ProcessorFlushList,
                  p_Blink,
                  *((_DWORD *)ProcessorFlushList + 3),
                  0,
                  10);
              }
              MiMakePteClean(v35, v21, (__int64)ProcessorFlushList);
            }
          }
          v21 += 8LL;
        }
        while ( v21 <= v22 );
        v10 = v46;
      }
      if ( v37 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(LockedVadEvent + 8));
        v37 = 0;
      }
      v15 = v45;
      v9 = ((MiGetLeafVa(v21) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v16 = v40;
      ActiveProcessors = v44;
    }
    while ( v9 <= v10 );
    if ( ProcessorFlushList )
    {
      MiFlushTbList((__int64)ProcessorFlushList);
      MiReleaseProcessorFlushList();
    }
    if ( v37 )
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(LockedVadEvent + 8));
    if ( v8 )
      MiUnlockPageTableInternal(p_Blink, v8);
    v15 = v45;
  }
  return MiUnlockWorkingSetShared(p_Blink, v15);
}
