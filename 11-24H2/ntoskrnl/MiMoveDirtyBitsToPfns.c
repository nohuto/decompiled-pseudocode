/*
 * XREFs of MiMoveDirtyBitsToPfns @ 0x1404F32E4
 * Callers:
 *     MiBeginHoldingDirtyFaults @ 0x14067CE94 (MiBeginHoldingDirtyFaults.c)
 *     MiProcessVaRangesInfoClass @ 0x1409E9914 (MiProcessVaRangesInfoClass.c)
 *     NtResetWriteWatch @ 0x140A3C540 (NtResetWriteWatch.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiInitializeTbFlushList @ 0x140233BB0 (MiInitializeTbFlushList.c)
 *     MiGetNextPageTable @ 0x140235DA0 (MiGetNextPageTable.c)
 *     MiReleaseProcessorFlushList @ 0x14023FFD0 (MiReleaseProcessorFlushList.c)
 *     RtlClearBitsEx @ 0x140261AD0 (RtlClearBitsEx.c)
 *     MiGetProcessorFlushList @ 0x1402894BC (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 *     KeShouldYieldProcessor @ 0x1402DA180 (KeShouldYieldProcessor.c)
 *     MiGetLeafVa @ 0x1402DEE20 (MiGetLeafVa.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     MiLocateLockedVadEvent @ 0x1403CDE38 (MiLocateLockedVadEvent.c)
 *     MiWorkingSetIsContended @ 0x1403D01B0 (MiWorkingSetIsContended.c)
 *     MiMakePteClean @ 0x1404326A0 (MiMakePteClean.c)
 *     MiGetVadMandatoryPageSize @ 0x140458234 (MiGetVadMandatoryPageSize.c)
 */

char __fastcall MiMoveDirtyBitsToPfns(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  char v4; // si
  __int64 *v5; // r9
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // r15
  _KPROCESS *Process; // rcx
  volatile _KAFFINITY_EX *ActiveProcessors; // r13
  __int64 p_Blink; // r12
  __int64 *ProcessorFlushList; // r14
  char v13; // di
  int v14; // esi
  unsigned __int64 NextPageTable; // r13
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rcx
  __int64 v19; // rdx
  _QWORD *i; // rdi
  unsigned __int64 LeafVa; // rax
  __int64 v22; // r10
  unsigned __int64 v23; // r11
  unsigned __int64 v24; // rax
  __int64 v25; // r9
  __int64 v26; // r10
  unsigned __int64 v27; // r11
  unsigned __int64 v28; // rbp
  unsigned __int64 v29; // rbp
  __int64 v30; // rcx
  int v32; // [rsp+30h] [rbp-78h]
  unsigned int v33; // [rsp+34h] [rbp-74h] BYREF
  int v34; // [rsp+38h] [rbp-70h]
  int v35; // [rsp+3Ch] [rbp-6Ch]
  unsigned __int64 LockedVadEvent; // [rsp+40h] [rbp-68h]
  unsigned __int64 *v37; // [rsp+48h] [rbp-60h]
  unsigned __int64 v38; // [rsp+50h] [rbp-58h]
  volatile _KAFFINITY_EX *v39; // [rsp+58h] [rbp-50h]
  char v40; // [rsp+B0h] [rbp+8h]
  unsigned __int64 v41; // [rsp+B8h] [rbp+10h]

  v4 = a4;
  v5 = 0LL;
  v33 = 0;
  v32 = 0;
  v6 = 0LL;
  v7 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v41 = v8;
  Process = KeGetCurrentThread()->ApcState.Process;
  v34 = v4 & 1;
  ActiveProcessors = Process[2].ActiveProcessors;
  p_Blink = (__int64)&Process[2].ReadyListHead.Blink;
  v39 = ActiveProcessors;
  if ( (v4 & 1) != 0 )
  {
    LockedVadEvent = MiLocateLockedVadEvent(a3, 4);
    v37 = (unsigned __int64 *)(LockedVadEvent + 16);
    v4 = a4;
  }
  else
  {
    v37 = 0LL;
    LockedVadEvent = 0LL;
  }
  ProcessorFlushList = v5;
  v40 = MiLockWorkingSetShared(p_Blink);
  v13 = v40;
  if ( v7 <= v8 )
  {
    v14 = v4 & 2;
    v35 = v14;
    do
    {
      if ( v6 )
      {
        if ( ProcessorFlushList )
        {
          MiFlushTbList((__int64)ProcessorFlushList);
          MiReleaseProcessorFlushList();
          ProcessorFlushList = 0LL;
        }
        MiUnlockPageTableInternal(p_Blink, v6);
        v6 = 0LL;
        if ( (unsigned int)MiWorkingSetIsContended(p_Blink, 0) || KeShouldYieldProcessor() )
        {
          MiUnlockWorkingSetShared(p_Blink, v13);
          MiLockWorkingSetShared(p_Blink);
        }
      }
      if ( v14 )
        _InterlockedIncrement64((volatile signed __int64 *)&ActiveProcessors[5].StaticBitmap[8]);
      NextPageTable = MiGetNextPageTable(v7, v8, v13, 1, &v33);
      v16 = NextPageTable;
      if ( NextPageTable )
      {
        v6 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v33 )
        {
          v16 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v18 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          if ( v33 > 1 )
          {
            v19 = v33 - 1;
            do
            {
              v16 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              v18 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
              --v19;
            }
            while ( v19 );
          }
          v6 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          for ( i = (_QWORD *)(v16 + 8);
                ((unsigned __int16)i & 0xFFF) != 0 && (unsigned __int64)i <= v18 && (*i & 0x81) == 0x81;
                ++i )
          {
            ;
          }
          v17 = (unsigned __int64)(i - 1);
        }
        else
        {
          v17 = v8;
          if ( (NextPageTable & 0xFFFFFFFFFFFFF000uLL) + 4088 <= v8 )
            v17 = (NextPageTable & 0xFFFFFFFFFFFFF000uLL) + 4088;
        }
      }
      else
      {
        v17 = v8;
      }
      if ( v34 )
      {
        MiGetVadMandatoryPageSize(a3);
        LeafVa = MiGetLeafVa(v7);
        v38 = ((LeafVa >> 12) - v22) / v23;
        v24 = MiGetLeafVa(v17 + 8);
        if ( v24 <= (((*(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32)) << 12) | 0xFFF) )
          v28 = ((v24 >> 12) - v26) / v27;
        else
          v28 = *v37;
        v29 = v28 - v25;
        v32 = 1;
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(LockedVadEvent + 8));
        RtlClearBitsEx((__int64)v37, v38, v29);
      }
      if ( !NextPageTable )
        break;
      if ( v16 <= v17 )
      {
        do
        {
          if ( (*(_QWORD *)v16 & 0x42) != 0 && (*(_QWORD *)v16 & 1) != 0 )
          {
            v30 = a4;
            LOBYTE(v30) = a4 & 3;
            if ( (a4 & 3) != 2 || *(__int64 *)v16 >= 0 )
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
              MiMakePteClean(v30, v16, (__int64)ProcessorFlushList);
            }
          }
          v16 += 8LL;
        }
        while ( v16 <= v17 );
        v8 = v41;
      }
      if ( v32 )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(LockedVadEvent + 8));
        v32 = 0;
      }
      v13 = v40;
      v7 = ((MiGetLeafVa(v16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v14 = v35;
      ActiveProcessors = v39;
    }
    while ( v7 <= v8 );
    if ( ProcessorFlushList )
    {
      MiFlushTbList((__int64)ProcessorFlushList);
      MiReleaseProcessorFlushList();
    }
    if ( v32 )
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(LockedVadEvent + 8));
    if ( v6 )
      MiUnlockPageTableInternal(p_Blink, v6);
    v13 = v40;
  }
  return MiUnlockWorkingSetShared(p_Blink, v13);
}
