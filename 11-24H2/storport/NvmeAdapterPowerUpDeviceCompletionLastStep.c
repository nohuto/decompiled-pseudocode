/*
 * XREFs of NvmeAdapterPowerUpDeviceCompletionLastStep @ 0x14012FE8C
 * Callers:
 *     NvmeAdapterPowerUpDeviceCompletion @ 0x14012FD70 (NvmeAdapterPowerUpDeviceCompletion.c)
 *     NvmeAdapterPowerUpDeviceLastStepWorkItemRoutine @ 0x140130440 (NvmeAdapterPowerUpDeviceLastStepWorkItemRoutine.c)
 * Callees:
 *     StorSetDevicePowerState @ 0x14003C60C (StorSetDevicePowerState.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeAdapterRestart @ 0x1400D6CDC (NvmeAdapterRestart.c)
 *     NvmeAdapterUnlock @ 0x1400DAC44 (NvmeAdapterUnlock.c)
 *     NvmeAdapterStorMQPowerUpDeviceLastStepA @ 0x140131F44 (NvmeAdapterStorMQPowerUpDeviceLastStepA.c)
 *     NvmeAdapterStorMQPowerUpDeviceLastStepB @ 0x140132028 (NvmeAdapterStorMQPowerUpDeviceLastStepB.c)
 *     NvmeNamespaceIdleState @ 0x140133760 (NvmeNamespaceIdleState.c)
 *     NvmeNamespaceProcessSetDevicePowerIrp @ 0x14013476C (NvmeNamespaceProcessSetDevicePowerIrp.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

void __fastcall NvmeAdapterPowerUpDeviceCompletionLastStep(__int64 a1, __int64 a2)
{
  bool v2; // zf
  POWER_STATE v5; // ebx
  __int64 *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned int *v9; // rax
  __int64 v10; // rcx
  const EVENT_DESCRIPTOR *v11; // rdx
  unsigned __int64 v12; // rdx
  char v13; // r14
  unsigned __int8 v14; // r11
  _BYTE *v15; // r9
  unsigned __int8 v16; // r10
  char v17; // r15
  char *v18; // r11
  char v19; // r12
  unsigned int v20; // r13d
  __int64 v21; // r14
  __int64 v22; // rcx
  unsigned __int64 v23; // rbx
  __int64 v24; // r8
  int v25; // ecx
  int v26; // ecx
  char v27; // bl
  char v28; // cl
  char v29; // r8
  _BYTE *v30; // rcx
  _BYTE *v31; // rax
  unsigned int v32; // eax
  char v33; // al
  unsigned __int8 v34; // al
  char v35; // al
  __int64 v36; // rcx
  PSLIST_ENTRY v37; // rax
  PSLIST_ENTRY v38; // rbx
  _SLIST_ENTRY *Next; // rcx
  char v40; // al
  __int64 v41; // rdx
  __int64 v42; // rbx
  char v43; // [rsp+60h] [rbp-29h]
  unsigned __int8 v44; // [rsp+61h] [rbp-28h]
  char v45; // [rsp+62h] [rbp-27h]
  int v46; // [rsp+64h] [rbp-25h]
  _DWORD v47[2]; // [rsp+68h] [rbp-21h] BYREF
  __int64 v48; // [rsp+70h] [rbp-19h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-11h] BYREF
  GUID v50; // [rsp+90h] [rbp+7h] BYREF

  v2 = (*(_BYTE *)(a1 + 416) & 0x40) == 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !v2 && *(int *)(a2 + 48) >= 0 )
    NvmeAdapterStorMQPowerUpDeviceLastStepA();
  NvmeAdapterUnlock(a1);
  NvmeAdapterRestart(a1);
  v5.SystemState = *(_SYSTEM_POWER_STATE *)(*(_QWORD *)(a2 + 184) + 24LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 160) + 120LL), &LockHandle);
  *(POWER_STATE *)(*(_QWORD *)(a1 + 160) + 68LL) = v5;
  StorSetDevicePowerState(*(struct _DEVICE_OBJECT **)(a1 + 8), v5);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 160) + 176LL) & 0x200) != 0 )
  {
    v6 = *(__int64 **)(a1 + 584);
    v47[1] = 0;
    v47[0] = *((_DWORD *)v6 + 3);
    v48 = *v6;
    IoReportInterruptActive(v47);
  }
  v2 = StorEtwLoggingEnabled == 0;
  v46 = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(a2 + 48) = v46;
  *(_BYTE *)(a2 + 141) = -84;
  if ( !v2 )
  {
    v50 = 0LL;
    IoGetActivityIdIrp(a2, &v50);
    v8 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v8 == 14 )
    {
      if ( (byte_140171462 & 8) == 0 )
        goto LABEL_73;
      v11 = &EventNonReadWriteRequestComplete;
      goto LABEL_72;
    }
    if ( *(_BYTE *)v8 != 15 )
    {
      if ( *(_BYTE *)v8 != 27 )
        goto LABEL_73;
      if ( *(_BYTE *)(v8 + 1) == 7 && !*(_DWORD *)(v8 + 8) )
      {
        if ( (byte_140171462 & 0x40) != 0 )
        {
          v9 = *(unsigned int **)(a2 + 56);
          if ( v9 )
            v10 = *v9;
          else
            v10 = 0LL;
          McTemplateK0pqd_EtwWriteTransfer(v10, v8, &v50, a2, v10, *(_DWORD *)(a2 + 48));
        }
        goto LABEL_73;
      }
      if ( (byte_140171462 & 0x20) == 0 )
        goto LABEL_73;
      v11 = &EventPnpRequestComplete;
LABEL_72:
      McTemplateK0pd_EtwWriteTransfer(v7, v11, &v50, a2, *(_DWORD *)(a2 + 48));
      goto LABEL_73;
    }
    if ( byte_140171461 >= 0 )
      goto LABEL_73;
    v12 = *(_QWORD *)(v8 + 8);
    v13 = 0;
    v14 = 0;
    v43 = 0;
    v15 = 0LL;
    v45 = 0;
    v16 = 0;
    v44 = 0;
    v17 = 0;
    if ( *(_BYTE *)(v12 + 2) != 40 )
    {
      v28 = *(_BYTE *)(v12 + 72);
      v15 = *(_BYTE **)(v12 + 32);
      v16 = *(_BYTE *)(v12 + 11);
      v27 = *(_BYTE *)(v12 + 4);
      if ( *(_BYTE *)(v12 + 2) )
        goto LABEL_73;
      goto LABEL_48;
    }
    v18 = 0LL;
    v19 = 0;
    if ( !*(_DWORD *)(v12 + 20) )
    {
      v20 = *(_DWORD *)(v12 + 56);
      v21 = 0LL;
      if ( v20 )
      {
        do
        {
          v22 = *(unsigned int *)(v12 + 4 * v21 + 120);
          if ( (unsigned int)v22 >= 0x80 )
          {
            v23 = *(unsigned int *)(v12 + 16);
            if ( (unsigned int)v22 < (unsigned int)v23 )
            {
              v24 = (unsigned int)v22;
              v25 = *(_DWORD *)(v22 + v12) - 64;
              if ( v25 )
              {
                v26 = v25 - 1;
                if ( v26 )
                {
                  if ( v26 == 1 && v24 + 40 <= v23 )
                  {
                    if ( *(_DWORD *)(v24 + v12 + 12) )
                      v18 = (char *)(v24 + v12 + 32);
                    v15 = *(_BYTE **)(v24 + v12 + 24);
LABEL_32:
                    v27 = *(_BYTE *)(v24 + v12 + 8);
                    v16 = *(_BYTE *)(v24 + v12 + 9);
                    goto LABEL_41;
                  }
                }
                else if ( v24 + 56 <= v23 )
                {
                  v19 = 1;
                  if ( *(_BYTE *)(v24 + v12 + 10) )
                    v18 = (char *)(v24 + v12 + 24);
                  v15 = *(_BYTE **)(v24 + v12 + 16);
                  v16 = *(_BYTE *)(v24 + v12 + 9);
                  v43 = *(_BYTE *)(v24 + v12 + 8);
                }
              }
              else if ( v24 + 40 <= v23 )
              {
                if ( *(_BYTE *)(v24 + v12 + 10) )
                  v18 = (char *)(v24 + v12 + 24);
                v15 = *(_BYTE **)(v24 + v12 + 16);
                goto LABEL_32;
              }
              if ( v19 )
                break;
            }
          }
          v21 = (unsigned int)(v21 + 1);
        }
        while ( (unsigned int)v21 < v20 );
        v27 = v43;
      }
      else
      {
        v27 = 0;
      }
LABEL_41:
      if ( v18 )
      {
        v28 = *v18;
        v13 = 0;
        v14 = 0;
LABEL_48:
        if ( ((v28 - 8) & 0x5D) == 0 )
        {
          v29 = *(_BYTE *)(v12 + 3);
          if ( v29 == 1 || !v15 || !v16 )
            goto LABEL_68;
          LOBYTE(v12) = 0;
          v30 = &v15[v16];
          v31 = v15 + 8;
          if ( (unsigned __int8)((*v15 & 0x7F) - 114) <= 1u )
          {
            if ( v31 <= v30 )
            {
              LOBYTE(v12) = 1;
              v13 = v15[2];
              v17 = v15[1] & 0xF;
              v14 = v15[3];
            }
          }
          else
          {
            if ( v31 <= v30 )
            {
              v17 = v15[2] & 0xF;
              v32 = v16;
              if ( (unsigned int)(unsigned __int8)v15[7] + 8 <= v16 )
                v32 = (unsigned __int8)v15[7] + 8;
              v12 = (unsigned __int64)&v15[v32];
              if ( (unsigned __int64)(v15 + 13) > v12 )
                v33 = 0;
              else
                v33 = v15[12];
              v45 = v33;
              if ( (unsigned __int64)(v15 + 14) > v12 )
                v34 = 0;
              else
                v34 = v15[13];
              v44 = v34;
              LOBYTE(v12) = 1;
            }
            v14 = v44;
            v13 = v45;
          }
          if ( (_BYTE)v12 )
          {
            v35 = v13;
            v36 = v14;
          }
          else
          {
LABEL_68:
            v17 = 0;
            v35 = 0;
            v36 = 0LL;
          }
          McTemplateK0pduuuuup_EtwWriteTransfer(v36, v12, &v50, a2, *(_DWORD *)(a2 + 48), v29, v27, v17, v35, v36, a2);
        }
      }
    }
  }
LABEL_73:
  IofCompleteRequest((PIRP)a2, 0);
  if ( v46 >= 0 )
  {
    while ( 1 )
    {
      v37 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*(_QWORD *)(a1 + 160) + 96LL));
      if ( !v37 )
        break;
      v38 = v37 - 9;
      Next = v37[-1].Next;
      v40 = BYTE2(Next[3].Next);
      if ( (v40 & 2) != 0 )
      {
        v41 = *((_QWORD *)&Next[3].Next + 1);
        BYTE2(Next[3].Next) = v40 & 0xFD;
        *((_QWORD *)&v38[8].Next[3].Next + 1) = 0LL;
        NvmeNamespaceProcessSetDevicePowerIrp(v38, v41, 1LL);
        ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)&v38[7].Next + 1));
      }
      else if ( (v40 & 1) != 0 )
      {
        BYTE2(Next[3].Next) = v40 & 0xFE;
        NvmeNamespaceIdleState(v38, 0LL, LOWORD(v38[8].Next[3].Next));
      }
    }
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 400) + 184LL) & 0x40000000) != 0 )
    {
      v42 = *(_QWORD *)(a1 + 1136);
      if ( FeatureFixTRIMAddSCSIPassthrough )
        **(_QWORD **)(*(_QWORD *)(v42 + 1288) + 40LL) = KeQueryUnbiasedInterruptTime();
      if ( !_InterlockedCompareExchange(
              (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v42 + 1288) + 40LL) + 192LL),
              1,
              0) )
        KeSetCoalescableTimer(
          (PKTIMER)(*(_QWORD *)(*(_QWORD *)(v42 + 1288) + 40LL) + 128LL),
          (LARGE_INTEGER)-50000000LL,
          0x7D0u,
          0x12Cu,
          (PKDPC)(*(_QWORD *)(*(_QWORD *)(v42 + 1288) + 40LL) + 64LL));
    }
    else if ( (*(_BYTE *)(a1 + 416) & 0x40) != 0 )
    {
      NvmeAdapterStorMQPowerUpDeviceLastStepB(a1);
    }
  }
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 152));
}
