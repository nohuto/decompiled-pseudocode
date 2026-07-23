/*
 * XREFs of MiFinishVadDeletion @ 0x1404438BC
 * Callers:
 *     MiDeleteVad @ 0x140895840 (MiDeleteVad.c)
 * Callees:
 *     MiDecrementVadsBeingDeleted @ 0x140229A10 (MiDecrementVadsBeingDeleted.c)
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeSignalGate @ 0x140314A48 (KeSignalGate.c)
 *     MiUnlockAndDereferenceVad @ 0x1403626E0 (MiUnlockAndDereferenceVad.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     MiGetVadWakeList @ 0x140443B20 (MiGetVadWakeList.c)
 *     MiRemoveVadCharges @ 0x14099A074 (MiRemoveVadCharges.c)
 *     MiReturnVadQuota @ 0x140A0B2E4 (MiReturnVadQuota.c)
 *     MiDeleteVadHotPatchState @ 0x140AAD494 (MiDeleteVadHotPatchState.c)
 */

void __fastcall MiFinishVadDeletion(_DWORD *P, __int64 a2, unsigned __int64 a3, char a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  int v6; // eax
  _KPROCESS *Process; // rsi
  int v9; // r14d
  _BOOL8 v10; // r8
  int v11; // ecx
  __int64 v12; // rdi
  unsigned int v13; // ecx
  bool v14; // zf
  __int64 v15; // rsi
  __int64 VadWakeList; // rax
  int v17; // ecx
  __int64 v18; // rbx

  CurrentThread = KeGetCurrentThread();
  v6 = P[12];
  Process = CurrentThread->ApcState.Process;
  if ( (v6 & 4) != 0 )
  {
    v10 = 0LL;
    v9 = 1;
    if ( (v6 & 0x200000) == 0 )
      v10 = ((unsigned int)P[13] | ((unsigned __int64)*((unsigned __int8 *)P + 34) << 32)) < 0x7FFFFFFFDLL;
  }
  else
  {
    v9 = 0;
    v10 = 0LL;
  }
  if ( a3 <= *(_QWORD *)&Process[1].PrimaryGroup && (a4 & 1) == 0 )
    *(_QWORD *)&Process[1].AutoBoostState.TreeCount = a2 + *(_QWORD *)&Process[1].AutoBoostState.TreeCount - a3 - 1;
  v11 = P[12];
  v12 = (__int64)&Process[2].ActiveProcessors[2].StaticBitmap[29];
  if ( (v11 & 0x200000) == 0 && (v11 & 0x70) == 0x20 && (v11 & 0x400000) != 0 )
    --Process[2].ActiveProcessors[4].StaticBitmap[3];
  if ( v9 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v12 + 232), 1u);
    v13 = P[12];
    if ( MiVadPageSizes[(v13 >> 19) & 3] == 16 )
    {
      if ( (v13 & 0x200000) != 0 )
        --*(_QWORD *)(v12 + 400);
      else
        --*(_QWORD *)(v12 + 408);
    }
    MiReturnVadQuota(P, Process, v10);
    MiRemoveVadCharges(P, Process);
  }
  LODWORD(CurrentThread[1].Queue) &= ~1u;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].BasePriority, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&Process[1].BasePriority);
  KeAbPostRelease((ULONG_PTR)&Process[1].BasePriority);
  v14 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v14 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  v15 = 0LL;
  if ( v9 )
  {
    VadWakeList = MiGetVadWakeList(P, 1LL);
    *((_QWORD *)P + 2) = -1LL;
    v15 = VadWakeList;
    if ( VadWakeList )
      --CurrentThread->KernelApcDisable;
    v17 = P[12];
    if ( (v17 & 0x200000) == 0 && (v17 & 0x70) == 0x20 && (v17 & 0x1800000) != 0 )
      MiDeleteVadHotPatchState(P);
  }
  MiUnlockAndDereferenceVad(P);
  if ( v15 )
  {
    do
    {
      v18 = *(_QWORD *)v15;
      KeSignalGate((volatile signed __int32 *)(v15 + 8), 1LL);
      v15 = v18;
    }
    while ( v18 );
    KeLeaveCriticalRegionThread();
  }
  if ( v9 )
    MiDecrementVadsBeingDeleted(v12);
}
