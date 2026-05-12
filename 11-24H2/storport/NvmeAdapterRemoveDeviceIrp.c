/*
 * XREFs of NvmeAdapterRemoveDeviceIrp @ 0x14019B714
 * Callers:
 *     NvmeAdapterPnpIrp @ 0x1400D4884 (NvmeAdapterPnpIrp.c)
 * Callees:
 *     RaForwardIrpSynchronous @ 0x140015500 (RaForwardIrpSynchronous.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     RaCallMiniportCompleteServiceIrp @ 0x140056004 (RaCallMiniportCompleteServiceIrp.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     DeleteNvmeAdapter @ 0x1400CB320 (DeleteNvmeAdapter.c)
 *     NvmeAdapterDeleteChildren @ 0x1400CE554 (NvmeAdapterDeleteChildren.c)
 *     NvmeAdapterDisableDeviceInterface @ 0x1400CF764 (NvmeAdapterDisableDeviceInterface.c)
 *     NvmeAdapterReleaseRemoveLockAndWait @ 0x1400D65A4 (NvmeAdapterReleaseRemoveLockAndWait.c)
 *     NvmeAdapterDisableNonPoFxMiniportInterface @ 0x14012E604 (NvmeAdapterDisableNonPoFxMiniportInterface.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     NvmeAdapterReleaseResources @ 0x14019B0CC (NvmeAdapterReleaseResources.c)
 */

__int64 __fastcall NvmeAdapterRemoveDeviceIrp(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  struct _DEVICE_OBJECT *v5; // rsi
  __int64 v6; // r8
  int v7; // ebx
  bool v8; // zf
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  int *v11; // rax
  const EVENT_DESCRIPTOR *v12; // rdx
  unsigned __int64 v13; // rdx
  char v14; // r15
  _BYTE *v15; // r9
  unsigned __int8 v16; // r10
  char v17; // bp
  char v18; // r11
  char v19; // r12
  char *v20; // r11
  char v21; // r13
  unsigned int v22; // r14d
  unsigned __int64 v23; // rsi
  __int64 v24; // r8
  int v25; // ecx
  char v26; // cl
  char v27; // r8
  _BYTE *v28; // rax
  unsigned int v29; // eax
  char v30; // al
  char v32; // [rsp+60h] [rbp-78h]
  struct _DEVICE_OBJECT *v33; // [rsp+68h] [rbp-70h]
  unsigned int v34; // [rsp+70h] [rbp-68h]
  struct _DEVICE_OBJECT *DeviceObject; // [rsp+78h] [rbp-60h]
  GUID v36; // [rsp+80h] [rbp-58h] BYREF

  RaCallMiniportCompleteServiceIrp(a1 + 168, (*(_DWORD *)(a1 + 144) & 0x1000LL) != 0);
  v5 = *(struct _DEVICE_OBJECT **)(a1 + 24);
  DeviceObject = *(struct _DEVICE_OBJECT **)(a1 + 8);
  v33 = v5;
  if ( (unsigned int)(_InterlockedExchange((volatile __int32 *)(a1 + 84), 6) - 5) > 1 )
  {
    NvmeAdapterDisableDeviceInterface(a1, v4);
    NvmeAdapterDisableNonPoFxMiniportInterface(a1);
    NvmeAdapterReleaseRemoveLockAndWait(a1);
    NvmeAdapterReleaseResources(a1, a2, v6);
  }
  NvmeAdapterDeleteChildren(a1);
  DeleteNvmeAdapter(a1);
  RaForwardIrpSynchronous(v5, (IRP *)a2);
  v7 = 0;
  *(_BYTE *)(a2 + 141) = -84;
  v8 = StorEtwLoggingEnabled == 0;
  *(_DWORD *)(a2 + 48) = 0;
  if ( v8 )
    goto LABEL_68;
  v36 = 0LL;
  IoGetActivityIdIrp(a2, &v36);
  v10 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v10 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_68;
    v12 = &EventNonReadWriteRequestComplete;
    goto LABEL_67;
  }
  if ( *(_BYTE *)v10 != 15 )
  {
    if ( *(_BYTE *)v10 != 27 )
      goto LABEL_68;
    if ( *(_BYTE *)(v10 + 1) == 7 && !*(_DWORD *)(v10 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v11 = *(int **)(a2 + 56);
        if ( v11 )
          v7 = *v11;
        McTemplateK0pqd_EtwWriteTransfer(v9, v10, &v36, a2, v7, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_68;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_68;
    v12 = &EventPnpRequestComplete;
LABEL_67:
    McTemplateK0pd_EtwWriteTransfer(v9, v12, &v36, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_68;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_68;
  v13 = *(_QWORD *)(v10 + 8);
  v14 = 0;
  v15 = 0LL;
  v32 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  if ( *(_BYTE *)(v13 + 2) != 40 )
  {
    v26 = *(_BYTE *)(v13 + 72);
    v15 = *(_BYTE **)(v13 + 32);
    v16 = *(_BYTE *)(v13 + 11);
    v14 = *(_BYTE *)(v13 + 4);
    if ( !*(_BYTE *)(v13 + 2) )
      goto LABEL_44;
    goto LABEL_68;
  }
  v20 = 0LL;
  v21 = 0;
  if ( *(_DWORD *)(v13 + 20) )
    goto LABEL_68;
  v22 = 0;
  v34 = *(_DWORD *)(v13 + 56);
  if ( !v34 )
    goto LABEL_41;
  while ( 1 )
  {
    v9 = *(unsigned int *)(v13 + 4LL * v22 + 120);
    if ( (unsigned int)v9 >= 0x80 )
    {
      v23 = *(unsigned int *)(v13 + 16);
      if ( (unsigned int)v9 < (unsigned int)v23 )
        break;
    }
LABEL_34:
    if ( ++v22 >= v34 )
      goto LABEL_40;
  }
  v24 = (unsigned int)v9;
  v25 = *(_DWORD *)(v9 + v13) - 64;
  if ( v25 )
  {
    v9 = (unsigned int)(v25 - 1);
    if ( (_DWORD)v9 )
    {
      if ( (_DWORD)v9 == 1 )
      {
        v9 = v24 + 40;
        if ( v24 + 40 <= v23 )
        {
          if ( *(_DWORD *)(v24 + v13 + 12) )
            v20 = (char *)(v24 + v13 + 32);
          v15 = *(_BYTE **)(v24 + v13 + 24);
          goto LABEL_39;
        }
      }
    }
    else
    {
      v9 = v24 + 56;
      if ( v24 + 56 <= v23 )
      {
        v21 = 1;
        if ( *(_BYTE *)(v24 + v13 + 10) )
          v20 = (char *)(v24 + v13 + 24);
        v14 = *(_BYTE *)(v24 + v13 + 8);
        v15 = *(_BYTE **)(v24 + v13 + 16);
        v16 = *(_BYTE *)(v24 + v13 + 9);
      }
    }
    goto LABEL_33;
  }
  v9 = v24 + 40;
  if ( v24 + 40 > v23 )
  {
LABEL_33:
    if ( v21 )
      goto LABEL_40;
    goto LABEL_34;
  }
  if ( *(_BYTE *)(v24 + v13 + 10) )
    v20 = (char *)(v24 + v13 + 24);
  v15 = *(_BYTE **)(v24 + v13 + 16);
LABEL_39:
  v16 = *(_BYTE *)(v24 + v13 + 9);
  v14 = *(_BYTE *)(v24 + v13 + 8);
LABEL_40:
  v5 = v33;
LABEL_41:
  if ( v20 )
  {
    v26 = *v20;
    v18 = 0;
LABEL_44:
    LOBYTE(v9) = v26 - 8;
    if ( (v9 & 0x5D) == 0 )
    {
      v27 = *(_BYTE *)(v13 + 3);
      if ( v27 == 1 || !v15 || !v16 )
        goto LABEL_63;
      LOBYTE(v13) = 0;
      v9 = (unsigned __int64)&v15[v16];
      v28 = v15 + 8;
      if ( (unsigned __int8)((*v15 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v28 <= v9 )
        {
          LOBYTE(v13) = 1;
          v18 = v15[2];
          v17 = v15[1] & 0xF;
          v19 = v15[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v28 <= v9 )
        {
          v17 = v15[2] & 0xF;
          v29 = v16;
          if ( (unsigned int)(unsigned __int8)v15[7] + 8 <= v16 )
            v29 = (unsigned __int8)v15[7] + 8;
          v9 = (unsigned __int64)(v15 + 13);
          v13 = (unsigned __int64)&v15[v29];
          if ( (unsigned __int64)(v15 + 13) > v13 )
            v32 = 0;
          else
            v32 = v15[12];
          if ( (unsigned __int64)(v15 + 14) <= v13 )
            v19 = *(_BYTE *)v9;
          LOBYTE(v13) = 1;
        }
        v18 = v32;
      }
      if ( (_BYTE)v13 )
      {
        LOBYTE(v7) = v18;
        v30 = v19;
      }
      else
      {
LABEL_63:
        v17 = 0;
        v30 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(v9, v13, &v36, a2, *(_DWORD *)(a2 + 48), v27, v14, v17, v7, v30, a2);
    }
  }
LABEL_68:
  IofCompleteRequest((PIRP)a2, 0);
  IoDetachDevice(v5);
  IoDeleteDevice(DeviceObject);
  return 0LL;
}
