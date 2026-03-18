/*
 * XREFs of VidSchiUnwaitNativeFenceWaiters @ 0x1400458E8
 * Callers:
 *     VidSchSubmitWaitFromCpu @ 0x14000DF30 (VidSchSubmitWaitFromCpu.c)
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KPEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x14000EF50 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 *     VidSchiCompleteSignalSyncObject @ 0x14000F8C0 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchiProcessCrossAdapterSignaledSyncObjects @ 0x14001FBBC (VidSchiProcessCrossAdapterSignaledSyncObjects.c)
 *     ?UnwaitFencesFromNativeFenceSignaledDpc@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_NODE@@PEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400518DC (-UnwaitFencesFromNativeFenceSignaledDpc@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VID.c)
 * Callees:
 *     VidSchiCheckPendingDeviceCommand @ 0x140015574 (VidSchiCheckPendingDeviceCommand.c)
 *     ?UnblockCpuWaiter@@YA_NPEAUVIDSCH_CPU_WAITER@@PEAU_VIDSCH_SYNC_OBJECT@@PEA_K@Z @ 0x1400342D0 (-UnblockCpuWaiter@@YA_NPEAUVIDSCH_CPU_WAITER@@PEAU_VIDSCH_SYNC_OBJECT@@PEA_K@Z.c)
 *     VidSchiUnblockUnorderedWaitQueuePacket @ 0x140037F88 (VidSchiUnblockUnorderedWaitQueuePacket.c)
 *     VidSchiUpdateNativeFenceMonitoredValue @ 0x140045ECC (VidSchiUpdateNativeFenceMonitoredValue.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x140048284 (VidSchiUnwaitWaitQueuePacket.c)
 */

__int64 __fastcall VidSchiUnwaitNativeFenceWaiters(HwQueueStagingList *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // rax
  HwQueueStagingList *v6; // r9
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r15
  _QWORD *v9; // r13
  __int64 result; // rax
  _QWORD *v11; // r14
  __int64 v12; // rbp
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  _QWORD *v15; // r12
  _QWORD *v16; // rsi
  char *v17; // rcx
  unsigned __int64 v19; // [rsp+68h] [rbp+10h] BYREF
  __int64 v20; // [rsp+78h] [rbp+20h]

  v20 = a4;
  v4 = *(unsigned int **)(a2 + 72);
  v6 = a1;
  v7 = -1LL;
  if ( *(_DWORD *)(a2 + 48) == 6 || *(_BYTE *)(a2 + 30) )
    v8 = *(_QWORD *)v4;
  else
    v8 = *v4;
  v9 = (_QWORD *)(a2 + 176);
  result = a2;
  v11 = *(_QWORD **)(a2 + 176);
  if ( v11 != (_QWORD *)(a2 + 176) )
  {
    do
    {
      v12 = (__int64)(v11 - 98);
      v13 = v11[2];
      v11 = (_QWORD *)*v11;
      if ( !*(_BYTE *)(a2 + 29) )
      {
        if ( *(_DWORD *)(a2 + 48) == 6 || *(_BYTE *)(result + 30) )
        {
          if ( v8 < v13 )
            goto LABEL_13;
        }
        else if ( (int)v8 - (int)v13 < 0 )
        {
LABEL_13:
          if ( v13 < v7 )
            v7 = v13;
          goto LABEL_20;
        }
      }
      v14 = *(_QWORD *)(v12 + 88);
      if ( v14 )
        v15 = *(_QWORD **)(v14 + 104);
      else
        v15 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v12 + 96) + 40LL) + 8LL);
      if ( (*(_DWORD *)(v12 + 752) & 4) != 0 )
        VidSchiUnblockUnorderedWaitQueuePacket(v6, v12, 0);
      VidSchiUnwaitWaitQueuePacket(a1);
      VidSchiCheckPendingDeviceCommand(v15);
      v6 = a1;
LABEL_20:
      result = a2;
    }
    while ( v11 != v9 );
  }
  v16 = *(_QWORD **)(a2 + 224);
  while ( v16 != (_QWORD *)(a2 + 224) )
  {
    v17 = (char *)v16[2];
    v16 = (_QWORD *)*v16;
    v19 = -1LL;
    result = UnblockCpuWaiter(v17, (struct _VIDSCH_SYNC_OBJECT *)a2, &v19);
    if ( !(_BYTE)result && v19 < v7 )
      v7 = v19;
  }
  if ( v7 == -1LL )
  {
    if ( !*(_BYTE *)(a2 + 28) )
    {
      if ( g_NativeFenceDebugTest )
      {
        result = *(_QWORD *)(a2 + 120);
        *(_QWORD *)result = -1LL;
      }
      else
      {
        return VidSchiUpdateNativeFenceMonitoredValue(*(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 160), -1LL);
      }
    }
  }
  else
  {
    result = *(_QWORD *)(a2 + 120);
    if ( v7 > *(_QWORD *)result )
    {
      result = WdLogSingleEntry3(4LL, v8, *(_QWORD *)result, v7);
      WdLogGlobalForLineNumber = 27509;
    }
  }
  return result;
}
