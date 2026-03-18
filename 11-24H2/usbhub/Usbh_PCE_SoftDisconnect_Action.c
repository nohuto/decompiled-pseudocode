/*
 * XREFs of Usbh_PCE_SoftDisconnect_Action @ 0x140044B14
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x140008E90 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhUnlockPcqWithTag @ 0x140001F30 (UsbhUnlockPcqWithTag.c)
 *     UsbhLockPcqWithTag @ 0x1400026C0 (UsbhLockPcqWithTag.c)
 *     UsbhFlushPortChangeQueue @ 0x14000481C (UsbhFlushPortChangeQueue.c)
 *     UsbhPCE_Disable @ 0x140006878 (UsbhPCE_Disable.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     WPP_RECORDER_SF_dq @ 0x14003DE14 (WPP_RECORDER_SF_dq.c)
 *     UsbhPCE_SD_Resume @ 0x140043748 (UsbhPCE_SD_Resume.c)
 *     UsbhSoftDisconnectPdo @ 0x1400478C0 (UsbhSoftDisconnectPdo.c)
 */

void __fastcall Usbh_PCE_SoftDisconnect_Action(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rax
  KIRQL v20; // r8
  int v21; // ebx
  int v22; // ebx
  int v23; // ebx
  int v24; // ebx
  int v25; // ebx
  int v26; // ebx
  int v27; // ebx
  int v28; // ebx
  __int64 v29; // rax
  KIRQL v30; // r8
  __int64 v31; // r9
  KIRQL v32; // [rsp+68h] [rbp+10h] BYREF

  v32 = 0;
  FdoExt(a1);
  v6 = (int)UsbhLockPcqWithTag(a1, a2, 8, &v32, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      *(unsigned __int16 *)(a2 + 4),
      v7,
      0xDu,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      *(unsigned __int16 *)(a2 + 4),
      a2);
  Log(a1, 512, 1597534256, v6, *(unsigned __int16 *)(a2 + 4));
  if ( (int)v6 > 10 )
  {
    v21 = v6 - 11;
    if ( !v21 )
      goto LABEL_27;
    v22 = v21 - 1;
    if ( !v22 )
      goto LABEL_14;
    v23 = v22 - 1;
    if ( !v23 )
      goto LABEL_14;
    v24 = v23 - 1;
    if ( !v24 )
    {
LABEL_26:
      Log(a1, 512, 1597534259, v8, *(unsigned __int16 *)(a2 + 4));
      UsbhUnlockPcqWithTag(a1, a2, v32, 0);
      UsbhPCE_Disable(a1, *(unsigned __int16 *)(a2 + 4), a3, v31);
      Log(a1, 512, 1597534260, a3, *(unsigned __int16 *)(a2 + 4));
      UsbhSoftDisconnectPdo(a1, 22LL, a3);
      UsbhPCE_SD_Resume(a1, a2, a3);
      return;
    }
    v25 = v24 - 1;
    if ( v25 )
    {
      v26 = v25 - 1;
      if ( !v26 )
        goto LABEL_14;
      v27 = v26 - 1;
      if ( !v27 )
        goto LABEL_14;
      v28 = v27 - 1;
      if ( v28 )
      {
        if ( v28 != 2 )
        {
LABEL_25:
          v29 = *(unsigned int *)(a2 + 2400);
          v30 = v32;
          *(_DWORD *)(a2 + 12) = 19;
          *(_DWORD *)(32 * v29 + a2 + 1384) = 19;
          UsbhUnlockPcqWithTag(a1, a2, v30, 0);
          return;
        }
      }
    }
LABEL_27:
    Log(a1, 512, 1597534258, v8, *(unsigned __int16 *)(a2 + 4));
    UsbhUnlockPcqWithTag(a1, a2, v32, 0);
    v18 = 21LL;
    goto LABEL_28;
  }
  if ( (_DWORD)v6 == 10 )
    goto LABEL_14;
  v9 = v6 - 1;
  if ( !v9 )
    goto LABEL_27;
  v10 = v9 - 1;
  if ( !v10 )
    goto LABEL_26;
  v11 = v10 - 1;
  if ( !v11 )
    goto LABEL_26;
  v12 = v11 - 1;
  if ( !v12 )
    goto LABEL_26;
  v13 = v12 - 1;
  if ( !v13 )
    goto LABEL_14;
  v14 = v13 - 1;
  if ( !v14 )
    goto LABEL_27;
  v15 = v14 - 1;
  if ( !v15 )
  {
    Log(a1, 512, 1597534257, v8, *(unsigned __int16 *)(a2 + 4));
    v19 = *(unsigned int *)(a2 + 2400);
    v20 = v32;
    *(_DWORD *)(a2 + 12) = 1;
    *(_DWORD *)(a2 + 400) = 0;
    *(_DWORD *)(32 * v19 + a2 + 1384) = 1;
    UsbhUnlockPcqWithTag(a1, a2, v20, 0);
    v18 = 20LL;
    goto LABEL_28;
  }
  if ( (unsigned int)(v15 - 1) > 1 )
    goto LABEL_25;
LABEL_14:
  Log(a1, 512, 1597534261, v8, *(unsigned __int16 *)(a2 + 4));
  UsbhFlushPortChangeQueue(a1, a2, v16, v17);
  UsbhUnlockPcqWithTag(a1, a2, v32, 0);
  v18 = 23LL;
LABEL_28:
  UsbhSoftDisconnectPdo(a1, v18, a3);
}
