/*
 * XREFs of VidSchSuspendResumeDevice @ 0x14002BAF0
 * Callers:
 *     VidSchiSuspendResumeDevicesForPowerTransition @ 0x14002B9A4 (VidSchiSuspendResumeDevicesForPowerTransition.c)
 *     VidSchMarkDeviceAsError @ 0x14002BEA0 (VidSchMarkDeviceAsError.c)
 *     ?BeginVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x140092C18 (-BeginVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?EndVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x14009335C (-EndVirtualCopyExclusiveAccess@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z @ 0x1400B7DB4 (-SuspendResumeProcessGpuMmuContexts@VIDMM_PROCESS@@QEAAXI_N@Z.c)
 *     ?FullySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1400E0408 (-FullySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1400E0C88 (-IndefinitelySuspend@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     ?Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z @ 0x1400E0E38 (-Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z.c)
 *     ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1400E1B20 (-PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400E1C28 (-Resume@VIDMM_DEVICE@@QEAAJ_NPEA_NPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?TransferOwnershipToProcess@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@PEAU2@1@Z @ 0x1400E5AD0 (-TransferOwnershipToProcess@VIDMM_GLOBAL@@QEAAPEAUVIDMM_LOCAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@PEA.c)
 *     ?ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x140104E20 (-ResumeSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ?SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ @ 0x140104EA0 (-SuspendSchedulerDevice@VIDMM_DEVICE@@QEAAXXZ.c)
 * Callees:
 *     VidSchiUpdateContextStatus @ 0x1400260E0 (VidSchiUpdateContextStatus.c)
 *     VidSchiUnwaitContext @ 0x140026D2C (VidSchiUnwaitContext.c)
 *     ?VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z @ 0x14002BFA8 (-VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z.c)
 *     VidSchWaitForEvents @ 0x1400495EC (VidSchWaitForEvents.c)
 *     memset @ 0x140056780 (memset.c)
 *     VidSchSubmitGlobalCommand @ 0x1400E4C08 (VidSchSubmitGlobalCommand.c)
 */

void __fastcall VidSchSuspendResumeDevice(__int64 a1, bool a2, char a3, int a4)
{
  __int64 v4; // rsi
  struct _VIDSCH_DEVICE *v6; // rbx
  char v8; // di
  _DWORD *v9; // rdx
  int v10; // eax
  _QWORD *v11; // r13
  char v12; // cl
  _QWORD *v13; // r14
  int v14; // ebx
  _QWORD *v15; // rdi
  int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  __int64 v19; // rcx
  char v20; // [rsp+38h] [rbp-69h]
  char v21; // [rsp+39h] [rbp-68h]
  _KEVENT Event; // [rsp+40h] [rbp-61h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-49h] BYREF
  _QWORD v24[16]; // [rsp+78h] [rbp-29h] BYREF
  struct _VIDSCH_DEVICE *p_Event; // [rsp+108h] [rbp+67h] BYREF
  char v26; // [rsp+110h] [rbp+6Fh]
  int v27; // [rsp+120h] [rbp+7Fh]

  v27 = a4;
  p_Event = (struct _VIDSCH_DEVICE *)a1;
  v4 = *(_QWORD *)(a1 + 32);
  v26 = 0;
  v6 = (struct _VIDSCH_DEVICE *)a1;
  v21 = 0;
  v8 = 0;
  ExAcquireResourceExclusiveLite((PERESOURCE)(v4 + 3112), 1u);
  if ( a2 )
  {
    v9 = (_DWORD *)((char *)v6 + 1656);
    ++*((_DWORD *)v6 + 414);
    if ( a3 )
      *((_BYTE *)v6 + 1660) = 1;
    goto LABEL_9;
  }
  if ( !a3 )
  {
LABEL_7:
    v9 = (_DWORD *)((char *)v6 + 1656);
    v10 = *((_DWORD *)v6 + 414);
    if ( v10 > 0 )
      *v9 = v10 - 1;
    goto LABEL_9;
  }
  if ( *((_BYTE *)v6 + 1660) )
  {
    *((_BYTE *)v6 + 1660) = 0;
    goto LABEL_7;
  }
  v21 = 1;
  v9 = (_DWORD *)((char *)v6 + 1656);
LABEL_9:
  *((_BYTE *)v6 + 8 * *((unsigned int *)v6 + 424) + 1668) = a2;
  *((_DWORD *)v6 + 2 * *((unsigned int *)v6 + 424) + 416) = *v9;
  *((_DWORD *)v6 + 424) = ((unsigned __int8)*((_DWORD *)v6 + 424) + 1) & 3;
  if ( *((_DWORD *)v6 + 488) )
    goto LABEL_44;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1984), &LockHandle);
  v11 = (_QWORD *)((char *)v6 + 72);
  v12 = 0;
  v13 = (_QWORD *)*((_QWORD *)v6 + 9);
  v20 = 0;
  if ( v13 == (_QWORD *)((char *)v6 + 72) )
    goto LABEL_38;
  v14 = v27;
  do
  {
    v15 = v13 - 3;
    v16 = *((_DWORD *)v13 + 40);
    if ( !a2 )
    {
      if ( (v16 & 0x100) != 0 && (!a3 || (v15[23] & 0x800) != 0) )
      {
        *((_DWORD *)v15 + 46) &= ~0x100u;
        *((_DWORD *)v15 + 46) &= ~0x800u;
        v12 = VidSchiUnwaitContext((__int64)(v13 - 3), 0x10ACu) | v20;
        v20 = v12;
      }
      goto LABEL_34;
    }
    if ( (v16 & 0x100) == 0 )
    {
      v17 = *((_DWORD *)v15 + 28);
      if ( (v17 & 0x10) != 0 )
      {
        if ( v14 == 1 )
        {
          v18 = v17 >> 7;
        }
        else
        {
          if ( v14 != 2 )
          {
LABEL_21:
            if ( a3 )
              *((_DWORD *)v15 + 46) |= 0x800u;
            v19 = (__int64)(v13 - 3);
            if ( (((unsigned __int8)(*((_DWORD *)v15 + 46) >> 9) | *((_BYTE *)v15 + 184)) & 2) != 0 )
            {
              VidSchiUpdateContextStatus(v19, 9, 4219LL);
              WdLogSingleEntry2(4LL, v13 - 3, *((unsigned int *)v15 + 46));
              WdLogGlobalForLineNumber = 4223;
LABEL_28:
              v12 = v20;
              v8 = 1;
              v26 = 1;
              goto LABEL_35;
            }
            VidSchiUpdateContextStatus(v19, 10, 4228LL);
            if ( *(_BYTE *)(v4 + 52) && v15 == *(_QWORD **)(v15[12] + 224LL) )
            {
              WdLogSingleEntry1(4LL, v13 - 3);
              WdLogGlobalForLineNumber = 4233;
              goto LABEL_28;
            }
            v12 = v20;
            goto LABEL_34;
          }
          v18 = *(_DWORD *)(v15[12] + 12LL) >> 2;
        }
        if ( (v18 & 1) == 0 )
          goto LABEL_34;
        goto LABEL_21;
      }
    }
LABEL_34:
    v8 = v26;
LABEL_35:
    v13 = (_QWORD *)*v13;
  }
  while ( v13 != v11 );
  v6 = p_Event;
  if ( v12 )
  {
    *(_QWORD *)(v4 + 1480) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v4 + 1448), 0, 0);
  }
LABEL_38:
  if ( !a2 )
    *((_BYTE *)v6 + 1648) = 0;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v8 )
  {
    memset(&Event, 0, sizeof(Event));
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    memset(v24, 0, 0x50uLL);
    LODWORD(v24[5]) = 7;
    v24[3] = VidSchiSwitchFromSuspendedDevices;
    LODWORD(v24[0]) = 0;
    v24[4] = &Event;
    v24[6] = v4;
    VidSchSubmitGlobalCommand(v4, v24);
    p_Event = (struct _VIDSCH_DEVICE *)&Event;
    VidSchWaitForEvents(v4, 1LL, &p_Event, 0LL, 0);
  }
  if ( !v21 )
    VidSchiSuspendResumeHwContexts(v6, a2);
LABEL_44:
  ExReleaseResourceLite((PERESOURCE)(v4 + 3112));
}
