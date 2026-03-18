/*
 * XREFs of MiFinishVadDeletion @ 0x1402A3AE0
 * Callers:
 *     MiDeleteVad @ 0x1408B4F54 (MiDeleteVad.c)
 * Callees:
 *     KeSignalGate @ 0x140225608 (KeSignalGate.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x1402A3CEC (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiGetVadWakeList @ 0x1402A3D60 (MiGetVadWakeList.c)
 *     MiDecrementVadsBeingDeleted @ 0x1402A3F10 (MiDecrementVadsBeingDeleted.c)
 *     MiUnlockAndDereferenceVad @ 0x1403205C0 (MiUnlockAndDereferenceVad.c)
 *     MiRemoveVadCharges @ 0x140901C48 (MiRemoveVadCharges.c)
 *     MiReturnVadQuota @ 0x140A0A8D0 (MiReturnVadQuota.c)
 *     MiDeleteVadHotPatchState @ 0x140AAD48C (MiDeleteVadHotPatchState.c)
 */

__int64 __fastcall MiFinishVadDeletion(_DWORD *P, __int64 a2, unsigned __int64 a3, char a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  int v6; // eax
  _KPROCESS *Process; // rsi
  int v9; // r14d
  _BOOL8 v10; // r8
  int v11; // ecx
  __int64 v12; // rdi
  unsigned int v13; // ecx
  __int64 v14; // rsi
  __int64 VadWakeList; // rax
  int v16; // ecx
  __int64 result; // rax
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
  UNLOCK_ADDRESS_SPACE_UNORDERED(CurrentThread, Process);
  v14 = 0LL;
  if ( v9 )
  {
    VadWakeList = MiGetVadWakeList(P, 1LL);
    *((_QWORD *)P + 2) = -1LL;
    v14 = VadWakeList;
    if ( VadWakeList )
      --CurrentThread->KernelApcDisable;
    v16 = P[12];
    if ( (v16 & 0x200000) == 0 && (v16 & 0x70) == 0x20 && (v16 & 0x1800000) != 0 )
      MiDeleteVadHotPatchState(P);
  }
  result = MiUnlockAndDereferenceVad(P);
  if ( v14 )
  {
    do
    {
      v18 = *(_QWORD *)v14;
      KeSignalGate((_DWORD *)(v14 + 8), 1);
      v14 = v18;
    }
    while ( v18 );
    result = KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  if ( v9 )
    return MiDecrementVadsBeingDeleted(v12);
  return result;
}
