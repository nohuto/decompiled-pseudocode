/*
 * XREFs of IopLiveDumpCorralProcessors @ 0x1405975E0
 * Callers:
 *     IopLiveDumpEnterCorralledState @ 0x140597900 (IopLiveDumpEnterCorralledState.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KeSetSystemGroupAffinityThread @ 0x140318B30 (KeSetSystemGroupAffinityThread.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     KeEnumerateNextProcessor @ 0x140405740 (KeEnumerateNextProcessor.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x140495FD4 (IopLiveDumpGetMillisecondCounter.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1404F8284 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpInitiateCorralStateChange @ 0x14059891C (IopLiveDumpInitiateCorralStateChange.c)
 *     IopLiveDumpTraceCorralProcessorsDuration @ 0x14059A714 (IopLiveDumpTraceCorralProcessorsDuration.c)
 *     IopLiveDumpTraceNoArgs @ 0x1405A0300 (IopLiveDumpTraceNoArgs.c)
 */

__int64 __fastcall IopLiveDumpCorralProcessors(__int64 *a1)
{
  __int64 v1; // r13
  _DWORD *v2; // r12
  int v3; // edi
  volatile signed __int32 *v4; // r14
  _GROUP_AFFINITY *v6; // rdx
  unsigned int v7; // ecx
  int v8; // edx
  __int64 *v9; // rcx
  _DWORD *v10; // r15
  unsigned __int8 CurrentIrql; // si
  volatile signed __int32 v12; // r15d
  __int64 result; // rax
  __int64 v14; // [rsp+30h] [rbp-48h] BYREF
  __int64 v15; // [rsp+38h] [rbp-40h] BYREF
  volatile signed __int32 *v16; // [rsp+40h] [rbp-38h]
  _GROUP_AFFINITY Affinity; // [rsp+48h] [rbp-30h] BYREF
  unsigned __int16 *v18[2]; // [rsp+58h] [rbp-20h] BYREF
  __int16 v19; // [rsp+68h] [rbp-10h]
  int v20; // [rsp+6Ah] [rbp-Eh]
  __int16 v21; // [rsp+6Eh] [rbp-Ah]
  int v22; // [rsp+C0h] [rbp+48h] BYREF
  unsigned int v23; // [rsp+C8h] [rbp+50h] BYREF
  __int64 MillisecondCounter; // [rsp+D0h] [rbp+58h]
  __int64 v25; // [rsp+D8h] [rbp+60h] BYREF

  v1 = *a1;
  v2 = a1 + 14;
  v3 = 0;
  v4 = (volatile signed __int32 *)(a1 + 2);
  *((_DWORD *)a1 + 2) = 0;
  v20 = 0;
  v21 = 0;
  Affinity = 0LL;
  v22 = 0;
  v23 = 0;
  v6 = (_GROUP_AFFINITY *)(a1 + 12);
  v15 = 0LL;
  v14 = 0LL;
  v25 = 0LL;
  *((_DWORD *)a1 + 3) = 0;
  *((_DWORD *)a1 + 4) = 0;
  *((_DWORD *)a1 + 5) = 0;
  a1[14] = 0LL;
  *((_DWORD *)a1 + 30) = 0;
  MillisecondCounter = 0LL;
  v7 = *(_DWORD *)KiGlobalState;
  Affinity.Reserved[1] = 0;
  Affinity.Reserved[2] = 0;
  *(_DWORD *)&Affinity.Group = (unsigned __int16)(v7 >> 6);
  Affinity.Mask = 1LL << (v7 & 0x3F);
  KeSetSystemGroupAffinityThread(&Affinity, v6);
  *((_DWORD *)a1 + 29) = 0;
  *v2 = 0;
  *((_DWORD *)a1 + 3) = 1;
  if ( IopLiveDumpIsTracingEnabled() )
  {
    v9 = LIVEDUMP_EVENT_SIZING_WORKFLOW_SYSTEM_QUIESCE_START;
    if ( (*(_DWORD *)(v1 + 80) & 1) == 0 )
      v9 = LIVEDUMP_EVENT_CAPTURE_PAGES_WORKFLOW_SYSTEM_QUIESCE_START;
    IopLiveDumpTraceNoArgs(v9);
    v10 = a1 + 14;
  }
  else
  {
    v10 = v2;
  }
  v16 = (volatile signed __int32 *)(a1 + 2);
  if ( (*(_DWORD *)(v1 + 80) & 0x80u) != 0 )
  {
    v4 = v16;
    v2 = v10;
    MillisecondCounter = IopLiveDumpGetMillisecondCounter(0);
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v8) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v8);
  }
  *((_BYTE *)a1 + 88) = CurrentIrql;
  a1[6] = (__int64)IopLiveDumpCorralDpc;
  *((_DWORD *)a1 + 6) = 275;
  a1[7] = (__int64)a1;
  a1[10] = 0LL;
  a1[5] = 0LL;
  *((_BYTE *)a1 + 25) = 2;
  v18[1] = (unsigned __int16 *)KeActiveProcessors.Bitmap[0];
  v18[0] = (unsigned __int16 *)&KeActiveProcessors;
  v19 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v22, v18) )
  {
    if ( v22 == *v2 )
    {
      _InterlockedIncrement(v4);
    }
    else
    {
      v12 = *v4;
      if ( !a1[10] )
        *((_WORD *)a1 + 13) = v22 + 2048;
      KeInsertQueueDpc((PRKDPC)(a1 + 3), 0LL, 0LL);
      v23 = 0;
      while ( v12 == *v4 )
        KeYieldProcessorEx(&v23);
    }
  }
  *((_DWORD *)a1 + 5) = *((_DWORD *)a1 + 4);
  if ( (*(_DWORD *)(v1 + 80) & 0x80u) != 0 )
    v3 = IopLiveDumpGetMillisecondCounter(0) - MillisecondCounter;
  if ( (*(_DWORD *)(v1 + 80) & 0x100) == 0 )
    IopLiveDumpInitiateCorralStateChange(a1, 2LL, &v15);
  PoAllProcIntrDisabled = 1;
  IopLiveDumpInitiateCorralStateChange(a1, 7LL, &v14);
  IopLiveDumpInitiateCorralStateChange(a1, 3LL, &v25);
  *((_DWORD *)a1 + 2) |= 1u;
  result = *(unsigned int *)(v1 + 80);
  if ( (result & 0x80u) != 0LL )
    return IopLiveDumpTraceCorralProcessorsDuration(*a1, v3, v15, v14, v25);
  return result;
}
