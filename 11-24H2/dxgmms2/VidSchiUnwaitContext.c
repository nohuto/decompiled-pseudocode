/*
 * XREFs of VidSchiUnwaitContext @ 0x14001B8CC
 * Callers:
 *     ?VidSchiUnwaitAllContextsInList@@YAXPEAU_LIST_ENTRY@@@Z @ 0x14001BCCC (-VidSchiUnwaitAllContextsInList@@YAXPEAU_LIST_ENTRY@@@Z.c)
 *     VidSchSuspendResumeDevice @ 0x140020380 (VidSchSuspendResumeDevice.c)
 *     VidSchiDelayReadyRoutine @ 0x14003EA50 (VidSchiDelayReadyRoutine.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x140048284 (VidSchiUnwaitWaitQueuePacket.c)
 * Callees:
 *     VidSchiUpdateContextStatus @ 0x14001AC80 (VidSchiUpdateContextStatus.c)
 */

bool __fastcall VidSchiUnwaitContext(__int64 a1, unsigned int a2)
{
  char v2; // si
  __int64 v5; // rax
  int v7; // edx
  __int64 v8; // r8
  char v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( (*(_DWORD *)(a1 + 184) & 0x100) != 0 )
    return v2;
  if ( (*(_DWORD *)(a1 + 184) & 0x200) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 184) & 2) != 0 )
      return v2;
    v7 = 10;
    v8 = 25351LL;
    goto LABEL_17;
  }
  if ( *(_QWORD *)(a1 + 664) == a1 + 664 )
  {
    v7 = 0;
    v8 = 25368LL;
    goto LABEL_17;
  }
  if ( !*(_DWORD *)(a1 + 780) )
  {
    v7 = 1;
    v8 = 25434LL;
LABEL_17:
    VidSchiUpdateContextStatus(a1, v7, v8);
    return v2;
  }
  if ( (*(_DWORD *)(a1 + 184) & 0x20) != 0 )
  {
    v8 = a2;
    v7 = 4;
    goto LABEL_17;
  }
  if ( (*(_DWORD *)(a1 + 184) & 0x80u) != 0 )
  {
    v8 = a2;
    v7 = 8;
    goto LABEL_17;
  }
  if ( (*(_DWORD *)(a1 + 184) & 0x10) != 0 )
  {
    v8 = a2;
    v7 = 3;
    goto LABEL_17;
  }
  if ( (*(_DWORD *)(a1 + 184) & 0x40) != 0 )
  {
    v8 = a2;
    v7 = 7;
    goto LABEL_17;
  }
  if ( (*(_DWORD *)(a1 + 184) & 8) != 0 )
  {
    v8 = a2;
    v7 = 2;
    goto LABEL_17;
  }
  if ( (*(_DWORD *)(a1 + 184) & 1) == 0 && (*(_DWORD *)(a1 + 184) & 0x100) == 0 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 436), 0, 0) == 2 )
    {
      v5 = *(_QWORD *)(a1 + 96);
      v9 = 0;
      DpSynchronizeExecution(
        *(_QWORD *)(*(_QWORD *)(v5 + 24) + 24LL),
        VidSchiResetContextQuantumAtISR,
        a1,
        *(unsigned int *)(*(_QWORD *)(v5 + 24) + 32LL),
        &v9);
    }
    return (unsigned int)VidSchiUpdateContextStatus(a1, 5, a2) != 0;
  }
  return v2;
}
