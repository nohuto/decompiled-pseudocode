/*
 * XREFs of VidSchiResetEngines @ 0x1400A690C
 * Callers:
 *     VidSchWaitForCompletionEvent @ 0x1400B5584 (VidSchWaitForCompletionEvent.c)
 *     VidSchiCheckHwProgress @ 0x1400B5C20 (VidSchiCheckHwProgress.c)
 * Callees:
 *     VidSchIsTDRPending @ 0x140034DF0 (VidSchIsTDRPending.c)
 *     VidSchiSchedulerNodeToDriverEngine @ 0x140036F0C (VidSchiSchedulerNodeToDriverEngine.c)
 *     VidSchiDriverNodeEngineToSchedulerNode @ 0x14003827C (VidSchiDriverNodeEngineToSchedulerNode.c)
 *     VidSchiCompletePreemption @ 0x14003B40C (VidSchiCompletePreemption.c)
 *     VidSchiResetEngine @ 0x140047318 (VidSchiResetEngine.c)
 *     VidSchiResetHwEngine @ 0x140052878 (VidSchiResetHwEngine.c)
 */

char __fastcall VidSchiResetEngines(__int64 a1, unsigned __int64 a2)
{
  __int64 v5; // rsi
  __int64 v6; // r13
  char v7; // bp
  unsigned int v8; // eax
  unsigned __int64 v9; // rdi
  unsigned int v10; // r12d
  unsigned int v11; // eax
  __int64 *v12; // r15
  __int64 v13; // r15
  int v14; // ebx
  unsigned int v15; // eax
  __int64 *v16; // rcx
  unsigned int v17; // [rsp+50h] [rbp+8h]

  if ( TdrAllowToDebugEngineTimeout((struct _VIDSCH_NODE *)a1, *(struct DXGADAPTER **)(*(_QWORD *)(a1 + 24) + 16LL)) )
    return 1;
  v5 = *(_QWORD *)(a1 + 24);
  v6 = a2;
  v7 = 1;
  v8 = VidSchiSchedulerNodeToDriverEngine(v5, *(unsigned __int16 *)(a1 + 4));
  v9 = 0LL;
  v17 = v8;
  v10 = 0;
  *(_QWORD *)(v5 + 3256) = a1;
  if ( !a2 )
    goto LABEL_16;
  while ( (a2 & 1) == 0 )
  {
LABEL_14:
    ++v10;
    a2 >>= 1;
    if ( !a2 )
      goto LABEL_15;
  }
  v11 = VidSchiDriverNodeEngineToSchedulerNode(v5, v10, v8);
  v12 = *(__int64 **)(v5 + 688);
  if ( v11 < *(_DWORD *)(v5 + 760) )
    v12 += v11;
  v13 = *v12;
  if ( (*(_DWORD *)(v13 + 12) & 2) != 0 )
  {
    ExAcquireResourceExclusiveLite((PERESOURCE)(v13 + 1784), 1u);
    v7 = VidSchiResetHwEngine((struct _VIDSCH_NODE *)v13, v6);
    ExReleaseResourceLite((PERESOURCE)(v13 + 1784));
  }
  else
  {
    v7 = VidSchiResetEngine((struct _VIDSCH_NODE *)v13, v6);
  }
  if ( v7 )
  {
    if ( (*(_DWORD *)(v13 + 12) & 2) == 0 )
      _bittestandset64((__int64 *)&v9, v10);
    v8 = v17;
    goto LABEL_14;
  }
LABEL_15:
  v8 = v17;
LABEL_16:
  *(_QWORD *)(v5 + 3256) = 0LL;
  if ( v7 )
  {
    v14 = 0;
    while ( v9 )
    {
      if ( (v9 & 1) != 0 )
      {
        v15 = VidSchiDriverNodeEngineToSchedulerNode(v5, v14, v8);
        v16 = *(__int64 **)(v5 + 688);
        if ( v15 < *(_DWORD *)(v5 + 760) )
          v16 += v15;
        VidSchiCompletePreemption(*v16);
        if ( VidSchIsTDRPending(v5) )
          return 0;
      }
      v8 = v17;
      ++v14;
      v9 >>= 1;
    }
  }
  return v7;
}
