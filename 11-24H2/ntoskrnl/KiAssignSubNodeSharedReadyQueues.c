/*
 * XREFs of KiAssignSubNodeSharedReadyQueues @ 0x1405B35D0
 * Callers:
 *     KiConfigureNodeSchedulingInformation @ 0x1405B3CEC (KiConfigureNodeSchedulingInformation.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140405740 (KeEnumerateNextProcessor.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiFreeLocalSharedReadyQueue @ 0x1405B415C (KiFreeLocalSharedReadyQueue.c)
 *     KiInitializePriorityState @ 0x1405C05B0 (KiInitializePriorityState.c)
 *     KiComputeSharedReadyQueueAssignments @ 0x1405C5E30 (KiComputeSharedReadyQueueAssignments.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     KeDetectHeterogeneousSets @ 0x140738C88 (KeDetectHeterogeneousSets.c)
 */

__int64 __fastcall KiAssignSubNodeSharedReadyQueues(__int64 a1)
{
  unsigned int v1; // ebx
  __int16 v3; // ax
  int i; // eax
  unsigned __int8 CurrentIrql; // bl
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rcx
  _BYTE *v15; // r8
  unsigned __int64 *v16; // rdx
  char v17; // al
  __int64 result; // rax
  int v19; // [rsp+20h] [rbp-79h] BYREF
  unsigned __int16 *v20; // [rsp+28h] [rbp-71h] BYREF
  __int64 v21; // [rsp+30h] [rbp-69h]
  __int16 v22; // [rsp+38h] [rbp-61h]
  int v23; // [rsp+3Ah] [rbp-5Fh]
  __int16 v24; // [rsp+3Eh] [rbp-5Bh]
  _BYTE v25[64]; // [rsp+50h] [rbp-49h] BYREF
  _BYTE v26[64]; // [rsp+90h] [rbp-9h] BYREF

  v1 = KiMaximumSharedReadyQueueSize;
  v19 = 0;
  v23 = 0;
  v24 = 0;
  if ( KiMaximumSharedReadyQueueSize )
  {
    if ( (KiMaximumSharedReadyQueueSize & 0x100) != 0 )
    {
      v1 = KiMaximumSharedReadyQueueSize & 0xFFFFFEFF;
      if ( (unsigned int)KeDetectHeterogeneousSets(0LL) )
        v1 *= 2;
    }
    if ( v1 > 0x40 )
      v1 = 64;
  }
  else
  {
    v1 = 1;
  }
  memset_0(v25, 255, sizeof(v25));
  v3 = *(_WORD *)(a1 + 136);
  v21 = *(_QWORD *)(a1 + 128);
  v22 = v3;
  v20 = 0LL;
  for ( i = KeEnumerateNextProcessor(&v19, &v20); !i; i = KeEnumerateNextProcessor(&v19, &v20) )
    v25[*(unsigned __int8 *)(KiProcessorBlock[v19] + 209)] = *(_BYTE *)(KiProcessorBlock[v19] + 35336);
  KiComputeSharedReadyQueueAssignments(*(_QWORD *)(a1 + 128), v1, v25, v26);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  v6 = *(_QWORD *)(a1 + 128);
  v22 = *(_WORD *)(a1 + 136);
  v21 = v6;
  v20 = 0LL;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v19, &v20) )
  {
    v7 = KiProcessorBlock[v19];
    v8 = KiProcessorBlock[*((unsigned int *)qword_140F22998
                          + 64 * (unsigned __int64)*(unsigned __int16 *)(a1 + 136)
                          + (unsigned __int8)v26[*(unsigned __int8 *)(v7 + 209)])];
    v9 = *(_QWORD *)(v8 + 36424);
    if ( v8 != v7 )
    {
      v10 = *(_QWORD *)(v7 + 200);
      *(_QWORD *)(v7 + 36424) = v9;
      *(_QWORD *)(v9 + 712) |= v10;
      ++*(_BYTE *)(v9 + 708);
      v11 = v9 + 576 + *(unsigned __int8 *)(v7 + 209) - (unsigned int)*(unsigned __int8 *)(v9 + 705);
      v12 = *(_QWORD *)(v7 + 16);
      *(_QWORD *)(v7 + 56) = v11;
      if ( !v12 )
        v12 = *(_QWORD *)(v7 + 8);
      KiInitializePriorityState(v11, v7, v12);
    }
  }
  v13 = *(_QWORD *)(a1 + 128);
  v22 = *(_WORD *)(a1 + 136);
  v21 = v13;
  v20 = 0LL;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v19, &v20) )
  {
    v14 = KiProcessorBlock[v19];
    v15 = *(_BYTE **)(v14 + 36424);
    v16 = (unsigned __int64 *)(v15 + 712);
    if ( v15[708] > 1u )
      *(_QWORD *)(v14 + 36416) = *v16;
    v17 = *(_BYTE *)(v14 + 209);
    if ( v17 == v15[705] && v15[708] > 1u )
    {
      *(_DWORD *)(v14 + 36432) = 1;
      v15[709] = v17;
      _BitScanReverse64((unsigned __int64 *)&v16, *v16);
      LOBYTE(v16) = (_BYTE)v16 - v15[705] + 1;
      v15[704] = (_BYTE)v16;
    }
    if ( *(_QWORD *)(v14 + 36424) != *(_QWORD *)(v14 + 37888) )
      KiFreeLocalSharedReadyQueue(v14, v16);
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
