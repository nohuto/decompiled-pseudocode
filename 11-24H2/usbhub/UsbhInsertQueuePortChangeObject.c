/*
 * XREFs of UsbhInsertQueuePortChangeObject @ 0x140003F90
 * Callers:
 *     Usbh_PCE_QueueDriverReset_Action @ 0x140001FF0 (Usbh_PCE_QueueDriverReset_Action.c)
 *     Usbh_PCE_Resume_Action @ 0x140002820 (Usbh_PCE_Resume_Action.c)
 *     Usbh_PCE_QueueChange_Action @ 0x140003220 (Usbh_PCE_QueueChange_Action.c)
 *     Usbh_PCE_Suspend_Action @ 0x1400129AC (Usbh_PCE_Suspend_Action.c)
 * Callees:
 *     UsbhLatchPdo @ 0x14000ABA0 (UsbhLatchPdo.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhUnlatchPdo @ 0x140020FA0 (UsbhUnlatchPdo.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x14003DB54 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_dd @ 0x14003DC1C (WPP_RECORDER_SF_dd.c)
 *     _guard_dispatch_icall @ 0x140060F80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbhInsertQueuePortChangeObject(__int64 a1, unsigned __int16 a2, _DWORD *a3, __int64 a4, __int64 a5)
{
  int v5; // r15d
  __int64 v6; // r14
  unsigned int v9; // esi
  void *v10; // rdx
  __int64 v11; // rdx
  _DWORD *Pool2; // rbx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rbp
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  int v28; // eax
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // rax
  _QWORD *v32; // rbx
  _QWORD *v33; // rcx
  __int64 v35; // rax
  _DWORD v36[13]; // [rsp+44h] [rbp-34h] BYREF

  v5 = a4;
  v6 = a2;
  v9 = -1073741670;
  v10 = &WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      49,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v6);
  FdoExt(a1, v10, a3, a4);
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, 56LL, 1112885333LL);
  if ( Pool2 )
  {
    v9 = 0;
    if ( (UsbhLogMask & 8) != 0 )
    {
      if ( a1 )
      {
        v11 = *(_QWORD *)(a1 + 64);
        if ( v11 )
        {
          v15 = *(_QWORD *)(v11 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
          *(_DWORD *)v15 = 1413771367;
          *(_QWORD *)(v15 + 8) = 0LL;
          *(_QWORD *)(v15 + 16) = v6;
          *(_QWORD *)(v15 + 24) = 0LL;
        }
      }
    }
    if ( !(_WORD)v6 )
      goto LABEL_32;
    v16 = FdoExt(a1, v11, v13, v14);
    if ( (unsigned __int16)v6 > *(unsigned __int8 *)(FdoExt(a1, v17, v18, v19) + 2938) )
      goto LABEL_32;
    v23 = *(_QWORD *)(v16 + 3056);
    if ( !v23 )
      goto LABEL_32;
    v24 = v23 + 2928 * v6 - 2928;
    if ( (UsbhLogMask & 8) != 0 )
    {
      if ( a1 )
      {
        v20 = *(_QWORD *)(a1 + 64);
        if ( v20 )
        {
          v25 = *(_QWORD *)(v20 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v20 + 880)) & *(_DWORD *)(v20 + 884));
          *(_DWORD *)v25 = 1044672615;
          *(_QWORD *)(v25 + 8) = 0LL;
          *(_QWORD *)(v25 + 16) = v6;
          *(_QWORD *)(v25 + 24) = v24;
        }
      }
    }
    if ( !v24 )
    {
LABEL_32:
      ExFreePoolWithTag(Pool2, 0);
      v9 = -1073741811;
      goto LABEL_33;
    }
    *((_WORD *)Pool2 + 2) = v6;
    Pool2[2] = *a3;
    *Pool2 = 1145332592;
    v36[0] = 0;
    v26 = FdoExt(a1, v20, v21, v22);
    if ( *(_QWORD *)(v26 + 4592) )
    {
      (*(void (__fastcall **)(_QWORD, _DWORD *))(v26 + 4592))(*(_QWORD *)(v26 + 4560), v36);
      v28 = v36[0];
    }
    else
    {
      v28 = 0;
    }
    v29 = (unsigned int)Pool2[2];
    *((_QWORD *)Pool2 + 5) = a5;
    Pool2[8] = v28;
    Pool2[12] = v5;
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      if ( a1 )
      {
        v27 = *(_QWORD *)(a1 + 64);
        if ( v27 )
        {
          v30 = *(_QWORD *)(v27 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v27 + 880)) & *(_DWORD *)(v27 + 884));
          *(_DWORD *)v30 = 1145262193;
          *(_QWORD *)(v30 + 8) = 0LL;
          *(_QWORD *)(v30 + 16) = v24;
          *(_QWORD *)(v30 + 24) = v29;
        }
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dD(
        WPP_GLOBAL_Control->DeviceExtension,
        v27,
        v29,
        50,
        (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
        v6,
        Pool2[2]);
    if ( v5 == 1 )
    {
      v35 = UsbhLatchPdo(a1, (unsigned __int16)v6, Pool2, 1230065731LL);
      if ( !v35 )
      {
        v9 = -1073741811;
        goto LABEL_43;
      }
      if ( v35 != a5 )
      {
        v9 = -1073741811;
        UsbhUnlatchPdo(a1, v35, Pool2, 1230065731LL);
        goto LABEL_43;
      }
    }
    if ( (Pool2[2] & 0x16) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v24 + 2876));
    if ( (Pool2[2] & 1) == 0 )
    {
      v31 = v24 + 456;
      v32 = Pool2 + 4;
      v33 = *(_QWORD **)(v24 + 464);
      if ( *v33 == v24 + 456 )
      {
LABEL_31:
        *v32 = v31;
        v32[1] = v33;
        *v33 = v32;
        *(_QWORD *)(v31 + 8) = v32;
        KeSetEvent((PRKEVENT)(v24 + 496), 0, 0);
        goto LABEL_33;
      }
LABEL_39:
      __fastfail(3u);
    }
    if ( !*(_BYTE *)(v24 + 2839) )
    {
      v31 = v24 + 456;
      *(_BYTE *)(v24 + 2839) = 1;
      v33 = *(_QWORD **)(v24 + 464);
      v32 = Pool2 + 4;
      if ( *v33 == v24 + 456 )
        goto LABEL_31;
      goto LABEL_39;
    }
LABEL_43:
    ExFreePoolWithTag(Pool2, 0);
  }
LABEL_33:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dd(
      WPP_GLOBAL_Control->DeviceExtension,
      v11,
      1,
      51,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v6,
      v9);
  return v9;
}
