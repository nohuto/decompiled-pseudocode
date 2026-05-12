/*
 * XREFs of NvmeNamespaceProcessSetDevicePowerIrpComplete @ 0x1401347A8
 * Callers:
 *     NvmeNamespaceProcessSetDevicePowerIrp @ 0x14013476C (NvmeNamespaceProcessSetDevicePowerIrp.c)
 * Callees:
 *     StorSetDevicePowerState @ 0x14003C60C (StorSetDevicePowerState.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     NvmeNamespaceCheckAndAcquirePoFx @ 0x1400F9E9C (NvmeNamespaceCheckAndAcquirePoFx.c)
 *     NvmeNamespaceReleasePoFx @ 0x1400F9EFC (NvmeNamespaceReleasePoFx.c)
 *     NvmeNamespaceUnlockIoQueue @ 0x1401152B4 (NvmeNamespaceUnlockIoQueue.c)
 *     StorRestartDeviceIoQueue @ 0x140127E4C (StorRestartDeviceIoQueue.c)
 *     StorRestartDeviceIoQueue2 @ 0x140127EA8 (StorRestartDeviceIoQueue2.c)
 *     StorRestartDeviceIoQueue3WithReason @ 0x140127F18 (StorRestartDeviceIoQueue3WithReason.c)
 *     NvmeAdapterPoFxSetDeviceIdleTimeout @ 0x14012F064 (NvmeAdapterPoFxSetDeviceIdleTimeout.c)
 *     NvmeNamespacePoFxD0Completion @ 0x140133980 (NvmeNamespacePoFxD0Completion.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeNamespaceProcessSetDevicePowerIrpComplete(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  int v5; // edi
  _QWORD *v6; // r14
  POWER_STATE *v7; // rax
  POWER_STATE v8; // ebx
  int v9; // ecx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r8
  unsigned int v15; // edx
  __int64 v16; // rdx
  bool v17; // zf
  unsigned __int64 v18; // rcx
  __int64 v19; // rdx
  int *v20; // rax
  const EVENT_DESCRIPTOR *v21; // rdx
  unsigned __int64 v22; // rdx
  char v23; // r14
  _BYTE *v24; // r9
  unsigned __int8 v25; // r10
  char v26; // r11
  char v27; // r13
  char v28; // r12
  char *v29; // rbx
  unsigned int v30; // r15d
  unsigned __int64 v31; // rbp
  __int64 v32; // r8
  int v33; // ecx
  char v34; // cl
  char v35; // r8
  _BYTE *v36; // rax
  unsigned int v37; // eax
  char v38; // al
  char v40; // [rsp+60h] [rbp-78h]
  unsigned int v41; // [rsp+64h] [rbp-74h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-70h] BYREF
  GUID v43; // [rsp+80h] [rbp-58h] BYREF

  v3 = *(_QWORD *)(a1 + 16);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = 0;
  v6 = *(_QWORD **)(v3 + 128);
  v7 = *(POWER_STATE **)(a2 + 184);
  *(_DWORD *)(a2 + 48) = 0;
  v8.SystemState = v7[6].SystemState;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 128) + 88LL), &LockHandle);
  *(POWER_STATE *)(*(_QWORD *)(a1 + 128) + 72LL) = v8;
  StorSetDevicePowerState(*(struct _DEVICE_OBJECT **)(a1 + 8), v8);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v9 = *(_DWORD *)(*(_QWORD *)(a1 + 128) + 72LL);
  if ( v9 == 1 )
  {
    NvmeNamespaceUnlockIoQueue(a1);
    if ( FeatureFixTRIMAddSCSIPassthrough )
    {
      StorRestartDeviceIoQueue3WithReason(v10, 0);
    }
    else if ( FeatureFixFUAForReadIoPerf )
    {
      StorRestartDeviceIoQueue2(v10);
    }
    else
    {
      StorRestartDeviceIoQueue(*(_QWORD *)(a1 + 256));
    }
    if ( NvmeNamespaceCheckAndAcquirePoFx(a1) )
    {
      NvmeNamespacePoFxD0Completion(v12, v11, v13, a1);
      _InterlockedDecrement((volatile signed __int32 *)(v6[20] + 116LL));
      if ( (*(_DWORD *)(v6[20] + 176LL) & 0x20) == 0 )
      {
LABEL_16:
        NvmeNamespaceReleasePoFx(a1);
        goto LABEL_17;
      }
      v15 = -1;
LABEL_15:
      NvmeAdapterPoFxSetDeviceIdleTimeout(v6, v15, v14, 1);
      goto LABEL_16;
    }
  }
  else if ( v9 == 4 && NvmeNamespaceCheckAndAcquirePoFx(a1) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6[20] + 116LL));
    v16 = v6[20];
    if ( (*(_DWORD *)(v16 + 176) & 0x20) == 0 || *(_DWORD *)(v16 + 116) != *(_DWORD *)(*(_QWORD *)(a1 + 16) + 656LL) )
      goto LABEL_16;
    v15 = 0;
    goto LABEL_15;
  }
LABEL_17:
  v17 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = 0;
  if ( v17 )
    goto LABEL_79;
  v43 = 0LL;
  IoGetActivityIdIrp(a2, &v43);
  v19 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v19 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_79;
    v21 = &EventNonReadWriteRequestComplete;
    goto LABEL_78;
  }
  if ( *(_BYTE *)v19 != 15 )
  {
    if ( *(_BYTE *)v19 != 27 )
      goto LABEL_79;
    if ( *(_BYTE *)(v19 + 1) == 7 && !*(_DWORD *)(v19 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v20 = *(int **)(a2 + 56);
        if ( v20 )
          v5 = *v20;
        McTemplateK0pqd_EtwWriteTransfer(v18, v19, &v43, a2, v5, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_79;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_79;
    v21 = &EventPnpRequestComplete;
LABEL_78:
    McTemplateK0pd_EtwWriteTransfer(v18, v21, &v43, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_79;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_79;
  v22 = *(_QWORD *)(v19 + 8);
  v23 = 0;
  v24 = 0LL;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  if ( *(_BYTE *)(v22 + 2) != 40 )
  {
    v34 = *(_BYTE *)(v22 + 72);
    v24 = *(_BYTE **)(v22 + 32);
    v25 = *(_BYTE *)(v22 + 11);
    v23 = *(_BYTE *)(v22 + 4);
    if ( *(_BYTE *)(v22 + 2) )
      goto LABEL_79;
LABEL_57:
    LOBYTE(v18) = v34 - 8;
    if ( (v18 & 0x5D) != 0 )
      goto LABEL_79;
    v35 = *(_BYTE *)(v22 + 3);
    if ( v35 == 1 || !v24 || !v25 )
      goto LABEL_74;
    LOBYTE(v22) = 0;
    v18 = (unsigned __int64)&v24[v25];
    v36 = v24 + 8;
    if ( (unsigned __int8)((*v24 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v36 > v18 )
        goto LABEL_72;
      v27 = v24[2];
      v26 = v24[1] & 0xF;
      v28 = v24[3];
    }
    else
    {
      if ( (unsigned __int64)v36 > v18 )
        goto LABEL_72;
      v26 = v24[2] & 0xF;
      v37 = v25;
      if ( (unsigned int)(unsigned __int8)v24[7] + 8 <= v25 )
        v37 = (unsigned __int8)v24[7] + 8;
      v18 = (unsigned __int64)(v24 + 13);
      v22 = (unsigned __int64)&v24[v37];
      if ( (unsigned __int64)(v24 + 13) <= v22 )
        v27 = v24[12];
      if ( (unsigned __int64)(v24 + 14) <= v22 )
        v28 = *(_BYTE *)v18;
    }
    LOBYTE(v22) = 1;
LABEL_72:
    if ( (_BYTE)v22 )
    {
      LOBYTE(v5) = v27;
      v38 = v28;
LABEL_75:
      McTemplateK0pduuuuup_EtwWriteTransfer(v18, v22, &v43, a2, *(_DWORD *)(a2 + 48), v35, v23, v26, v5, v38, a2);
      goto LABEL_79;
    }
LABEL_74:
    v26 = 0;
    v38 = 0;
    goto LABEL_75;
  }
  v29 = 0LL;
  v40 = 0;
  if ( *(_DWORD *)(v22 + 20) )
    goto LABEL_79;
  v30 = 0;
  v41 = *(_DWORD *)(v22 + 56);
  if ( !v41 )
    goto LABEL_54;
  while ( 1 )
  {
    v18 = *(unsigned int *)(v22 + 4LL * v30 + 120);
    if ( (unsigned int)v18 >= 0x80 )
    {
      v31 = *(unsigned int *)(v22 + 16);
      if ( (unsigned int)v18 < (unsigned int)v31 )
        break;
    }
LABEL_48:
    if ( ++v30 >= v41 )
      goto LABEL_54;
  }
  v32 = (unsigned int)v18;
  v33 = *(_DWORD *)(v18 + v22) - 64;
  if ( v33 )
  {
    v18 = (unsigned int)(v33 - 1);
    if ( (_DWORD)v18 )
    {
      if ( (_DWORD)v18 == 1 )
      {
        v18 = v32 + 40;
        if ( v32 + 40 <= v31 )
        {
          if ( *(_DWORD *)(v32 + v22 + 12) )
            v29 = (char *)(v32 + v22 + 32);
          v24 = *(_BYTE **)(v32 + v22 + 24);
          goto LABEL_53;
        }
      }
    }
    else
    {
      v18 = v32 + 56;
      if ( v32 + 56 <= v31 )
      {
        v40 = 1;
        if ( *(_BYTE *)(v32 + v22 + 10) )
          v29 = (char *)(v32 + v22 + 24);
        v23 = *(_BYTE *)(v32 + v22 + 8);
        v24 = *(_BYTE **)(v32 + v22 + 16);
        v25 = *(_BYTE *)(v32 + v22 + 9);
      }
    }
    goto LABEL_47;
  }
  v18 = v32 + 40;
  if ( v32 + 40 > v31 )
  {
LABEL_47:
    if ( v40 )
      goto LABEL_54;
    goto LABEL_48;
  }
  if ( *(_BYTE *)(v32 + v22 + 10) )
    v29 = (char *)(v32 + v22 + 24);
  v24 = *(_BYTE **)(v32 + v22 + 16);
LABEL_53:
  v25 = *(_BYTE *)(v32 + v22 + 9);
  v23 = *(_BYTE *)(v32 + v22 + 8);
LABEL_54:
  if ( v29 )
  {
    v34 = *v29;
    goto LABEL_57;
  }
LABEL_79:
  IofCompleteRequest((PIRP)a2, 0);
  return 0LL;
}
