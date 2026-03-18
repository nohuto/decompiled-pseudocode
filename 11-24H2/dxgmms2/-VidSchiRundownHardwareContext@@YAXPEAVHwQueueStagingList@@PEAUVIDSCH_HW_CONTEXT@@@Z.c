/*
 * XREFs of ?VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z @ 0x1400351E0
 * Callers:
 *     VidSchiMarkDeviceAsError @ 0x14001FF30 (VidSchiMarkDeviceAsError.c)
 *     ?VidSchiRundownHardwareScheduledContexts@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x140049DB4 (-VidSchiRundownHardwareScheduledContexts@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 * Callees:
 *     VidSchiCheckPendingDeviceCommand @ 0x140015574 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiSignalRegisteredEvent @ 0x14001DB80 (VidSchiSignalRegisteredEvent.c)
 *     ?VidSchiCheckHwSchNodeProgress@@YAEPEAU_VIDSCH_NODE@@_N@Z @ 0x14001DC70 (-VidSchiCheckHwSchNodeProgress@@YAEPEAU_VIDSCH_NODE@@_N@Z.c)
 *     ?VidSchiNotifyReadyQueueRemoved@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x140035468 (-VidSchiNotifyReadyQueueRemoved@@YAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     ?VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x140051E80 (-VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_H.c)
 */

void __fastcall VidSchiRundownHardwareContext(struct HwQueueStagingList *a1, struct VIDSCH_HW_CONTEXT *a2)
{
  char *v2; // r15
  char *i; // rdi
  _QWORD *v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rax
  _QWORD *v12; // r14
  _QWORD *v13; // rdx
  _QWORD *v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // rdi

  v2 = (char *)a2 + 288;
  for ( i = (char *)*((_QWORD *)a2 + 36); i != v2; i = *(char **)i )
  {
    v12 = i + 152;
    *((_QWORD *)i + 25) = i + 152;
    while ( (_QWORD *)*v12 != v12 )
      VidSchiRundownHardwarePacket(a1, (struct _VIDSCH_QUEUE_PACKET *)(*v12 - 32LL), (struct VIDSCH_HW_QUEUE *)(i - 8));
    v6 = i + 16;
    v7 = *((_QWORD *)i + 2);
    if ( v7 )
    {
      if ( *(_QWORD **)(v7 + 8) != v6 || (v13 = (_QWORD *)*((_QWORD *)i + 3), (_QWORD *)*v13 != v6) )
LABEL_23:
        __fastfail(3u);
      *v13 = v7;
      *(_QWORD *)(v7 + 8) = v13;
      *v6 = 0LL;
      *((_QWORD *)i + 3) = 0LL;
    }
    v8 = i + 184;
    v9 = *((_QWORD *)i + 23);
    if ( v9 )
    {
      if ( *(_QWORD **)(v9 + 8) != v8 )
        goto LABEL_23;
      v14 = (_QWORD *)*((_QWORD *)i + 24);
      if ( (_QWORD *)*v14 != v8 )
        goto LABEL_23;
      *v14 = v9;
      *(_QWORD *)(v9 + 8) = v14;
      *v8 = 0LL;
      *((_QWORD *)i + 24) = 0LL;
    }
    v10 = *((_DWORD *)i + 29);
    if ( v10 )
    {
      if ( v10 == 1 && !*(_BYTE *)(*((_QWORD *)i + 4) + 144LL) )
        VidSchiNotifyReadyQueueRemoved((struct VIDSCH_HW_QUEUE *)(i - 8));
      *((_DWORD *)i + 29) = 0;
    }
  }
  v11 = *((_QWORD *)a2 + 28);
  if ( *((_QWORD *)a2 + 29) != v11 )
  {
    v15 = *((_QWORD *)a2 + 1);
    v16 = *(_QWORD *)(v15 + 32);
    *((_QWORD *)a2 + 29) = v11;
    --*(_DWORD *)(v16 + 72);
    --*(_DWORD *)(*((_QWORD *)a2 + 2) + 1736LL);
    VidSchiCheckHwSchNodeProgress(*((struct _VIDSCH_NODE **)a2 + 2), 0);
    VidSchiSignalRegisteredEvent(v16, (struct _KEVENT **)(v15 + 168));
  }
  VidSchiCheckPendingDeviceCommand(*((_QWORD **)a2 + 1));
}
