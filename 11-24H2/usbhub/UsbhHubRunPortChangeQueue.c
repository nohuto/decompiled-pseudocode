/*
 * XREFs of UsbhHubRunPortChangeQueue @ 0x1400083A0
 * Callers:
 *     Usbh_PCE_wRun_Action @ 0x140001010 (Usbh_PCE_wRun_Action.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     UsbhHubDispatchPortEvent @ 0x140007260 (UsbhHubDispatchPortEvent.c)
 *     UsbhDispatch_PortChangeQueueNullEvent @ 0x140008E28 (UsbhDispatch_PortChangeQueueNullEvent.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x140008E90 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     UsbhException @ 0x1400094F8 (UsbhException.c)
 *     UsbhQueryPortState @ 0x140009A20 (UsbhQueryPortState.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     Usb_Disconnected @ 0x1400155D4 (Usb_Disconnected.c)
 *     UsbhPCE_psSUSPEND @ 0x1400351E0 (UsbhPCE_psSUSPEND.c)
 *     UsbhHubProcessTimeoutObj @ 0x140038DCC (UsbhHubProcessTimeoutObj.c)
 *     UsbhTrapFatal_Dbg @ 0x14003964C (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dq @ 0x14003DE14 (WPP_RECORDER_SF_dq.c)
 *     UsbhPCE_wChangeERROR @ 0x1400438F8 (UsbhPCE_wChangeERROR.c)
 */

__int64 __fastcall UsbhHubRunPortChangeQueue(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  void *v11; // rdx
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r15
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // r10
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // r14
  __int64 v27; // r14
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  _BYTE *v33; // r15
  unsigned int v34; // r13d
  int v35; // edx
  int v36; // eax
  int v37; // r12d
  int v38; // edx
  int v39; // r8d
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 result; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r15
  __int64 v50; // rdx
  __int64 v51; // rcx
  KIRQL v52; // r13
  __int64 v53; // r8
  __int64 v54; // rdx
  struct _KEVENT *v55; // r15
  struct _KEVENT *v56; // rdx
  _LIST_ENTRY **p_Blink; // r10
  __int64 v58; // r8
  __int64 v59; // rcx
  int Blink; // eax
  struct _KEVENT *v61; // rcx
  _LIST_ENTRY *Flink; // rax
  int v63; // [rsp+70h] [rbp-29h] BYREF
  __int64 v64; // [rsp+78h] [rbp-21h] BYREF
  __int64 v65; // [rsp+80h] [rbp-19h]
  _OWORD v66[3]; // [rsp+88h] [rbp-11h] BYREF
  __int64 v67; // [rsp+B8h] [rbp+1Fh]
  int v69; // [rsp+118h] [rbp+7Fh] BYREF
  int v70; // [rsp+11Ch] [rbp+83h]

  v70 = HIDWORD(a4);
  v4 = a3;
  v69 = 0;
  v63 = 0;
  v65 = FdoExt(a1, a2, a3, a4);
  if ( !v4 || *(_DWORD *)a2 != 1146120296 )
    UsbhTrapFatal_Dbg(a1, a1);
  v8 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v9 = *(_QWORD *)(a1 + 64);
      if ( v9 )
      {
        v10 = *(_QWORD *)(v9 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 880)) & *(_DWORD *)(v9 + 884));
        *(_DWORD *)v10 = 1466458992;
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)(v10 + 16) = a2;
        *(_QWORD *)(v10 + 24) = v8;
      }
    }
  }
  v11 = &WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      (unsigned int)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v8,
      98,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      *(_WORD *)(a2 + 4),
      v4);
  *(_DWORD *)(a2 + 8) = 1;
  while ( 1 )
  {
    v12 = *(unsigned __int16 *)(a2 + 4);
    v64 = 0LL;
    FdoExt(a1, v11, v8, v7);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dq(
        WPP_GLOBAL_Control->DeviceExtension,
        v13,
        v14,
        74,
        (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
        v12,
        v4);
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      if ( a1 )
      {
        v13 = *(_QWORD *)(a1 + 64);
        if ( v13 )
        {
          v16 = *(_QWORD *)(v13 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
          *(_DWORD *)v16 = 909198672;
          *(_QWORD *)(v16 + 8) = 0LL;
          *(_QWORD *)(v16 + 16) = 0LL;
          *(_QWORD *)(v16 + 24) = v12;
        }
      }
    }
    if ( (UsbhLogMask & 8) != 0 )
    {
      if ( a1 )
      {
        v13 = *(_QWORD *)(a1 + 64);
        if ( v13 )
        {
          v17 = *(_QWORD *)(v13 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
          *(_DWORD *)v17 = 1413771367;
          *(_QWORD *)(v17 + 8) = 0LL;
          *(_QWORD *)(v17 + 16) = v12;
          *(_QWORD *)(v17 + 24) = 0LL;
        }
      }
    }
    if ( !(_WORD)v12 )
      goto LABEL_109;
    v18 = FdoExt(a1, v13, v14, v15);
    if ( (unsigned __int16)v12 > *(unsigned __int8 *)(FdoExt(a1, v19, v20, v21) + 2938) )
      goto LABEL_109;
    v22 = *(_QWORD *)(v18 + 3056);
    if ( !v22 )
      goto LABEL_109;
    v23 = v22 + 2928 * v12 - 2928;
    if ( (UsbhLogMask & 8) != 0 )
    {
      if ( a1 )
      {
        v13 = *(_QWORD *)(a1 + 64);
        if ( v13 )
        {
          v24 = *(_QWORD *)(v13 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
          *(_DWORD *)v24 = 1044672615;
          *(_QWORD *)(v24 + 8) = 0LL;
          *(_QWORD *)(v24 + 16) = v12;
          *(_QWORD *)(v24 + 24) = v23;
        }
      }
    }
    if ( v23 )
    {
      v25 = UsbhDispatch_PortChangeQueueEventEx(a1, v23, 16, v4, 0LL, 0, 0LL, (__int64)&v64);
      v64 = v25;
    }
    else
    {
LABEL_109:
      v25 = v64;
    }
    if ( !v25 )
      break;
    *(_QWORD *)(a2 + 376) = v4;
    v26 = v64;
    *(_QWORD *)(v4 + 24) = KeGetCurrentThread();
    v27 = v26 - 16;
    v28 = *(unsigned __int16 *)(a2 + 4);
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      if ( a1 )
      {
        v29 = *(_QWORD *)(a1 + 64);
        if ( v29 )
        {
          v30 = *(_QWORD *)(v29 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v29 + 880)) & *(_DWORD *)(v29 + 884));
          *(_DWORD *)v30 = 1313891184;
          *(_QWORD *)(v30 + 8) = 0LL;
          *(_QWORD *)(v30 + 16) = v28;
          *(_QWORD *)(v30 + 24) = 0LL;
        }
      }
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        if ( a1 )
        {
          v31 = *(_QWORD *)(a1 + 64);
          if ( v31 )
          {
            v32 = *(_QWORD *)(v31 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v31 + 880)) & *(_DWORD *)(v31 + 884));
            *(_DWORD *)v32 = 1145332592;
            *(_QWORD *)(v32 + 8) = 0LL;
            *(_QWORD *)(v32 + 16) = a2;
            *(_QWORD *)(v32 + 24) = v27;
          }
        }
      }
    }
    if ( (*(_DWORD *)(v27 + 8) & 0x16) != 0 )
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 2876));
    v33 = (_BYTE *)(a2 + 2840);
    if ( (*(_DWORD *)(v27 + 8) & 1) != 0 )
    {
      *v33 = 1;
      *(_BYTE *)(a2 + 2839) = 0;
    }
    v34 = UsbhQueryPortState(a1, *(unsigned __int16 *)(a2 + 4), &v69, &v63);
    if ( v34 >> 30 == 3 )
      v69 = 0;
    v35 = *(_DWORD *)(v27 + 48);
    if ( v34 >> 30 != 3 )
    {
      if ( v35 == 2 )
        v36 = UsbhHubProcessTimeoutObj(a1, a2, v27, &v69);
      else
        v36 = UsbhHubDispatchPortEvent(a1, a2, v27, (unsigned __int16 *)&v69);
      v37 = v36;
      goto LABEL_51;
    }
    v67 = 0LL;
    memset(v66, 0, sizeof(v66));
    if ( v35 == 2 )
    {
      UsbhHubProcessTimeoutObj(a1, a2, v27, &v69);
LABEL_112:
      UsbhPCE_wChangeERROR(a1, a2, *(_QWORD *)(v27 + 8), a3, 0, 0LL);
      goto LABEL_113;
    }
    if ( v35 != 1 )
      goto LABEL_112;
    UsbhPCE_wChangeERROR(a1, a2, *(_QWORD *)(v27 + 8), a3, 1, *(_QWORD *)(v27 + 40));
LABEL_113:
    WORD2(v66[0]) = *(_WORD *)(a2 + 4);
    LODWORD(v66[0]) = 1145332592;
    DWORD2(v66[0]) = 0x80000;
    v37 = UsbhHubDispatchPortEvent(a1, a2, (__int64)v66, (unsigned __int16 *)&v69);
    if ( !(unsigned __int8)Usb_Disconnected(v34) && !*(_BYTE *)(v65 + 5268) )
      UsbhException(a1, *(unsigned __int16 *)(a2 + 4), 1, v27, 56, v34, v63, (__int64)usbfile_pchange_c, 6038, 1);
    v33 = (_BYTE *)(a2 + 2840);
LABEL_51:
    *v33 = 0;
    if ( *(_DWORD *)(v27 + 48) == 1 )
    {
      v49 = *(_QWORD *)(v27 + 40);
      if ( (UsbhLogMask & 0x100) != 0 )
      {
        if ( a1 )
        {
          v50 = *(_QWORD *)(a1 + 64);
          if ( v50 )
          {
            v51 = *(_QWORD *)(v50 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v50 + 880)) & *(_DWORD *)(v50 + 884));
            *(_DWORD *)v51 = 1329877109;
            *(_QWORD *)(v51 + 8) = 0LL;
            *(_QWORD *)(v51 + 16) = v49;
            *(_QWORD *)(v51 + 24) = 1230065731LL;
          }
        }
      }
      v52 = KeAcquireSpinLockRaiseToDpc(&HubG);
      qword_14006F5E0 = (__int64)&dword_14006F5E8;
      if ( (UsbhLogMask & 0x100) != 0 )
      {
        if ( a1 )
        {
          v53 = *(_QWORD *)(a1 + 64);
          if ( v53 )
          {
            v54 = *(_QWORD *)(v53 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v53 + 880)) & *(_DWORD *)(v53 + 884));
            *(_DWORD *)v54 = 1348891236;
            *(_QWORD *)(v54 + 8) = 0LL;
            *(_QWORD *)(v54 + 16) = v49;
            *(_QWORD *)(v54 + 24) = 1230065731LL;
          }
        }
      }
      v55 = (struct _KEVENT *)PdoExt(v49);
      v56 = *(struct _KEVENT **)&v55[53].Header.Lock;
      if ( v56 == &v55[53] )
      {
LABEL_96:
        Blink = (int)v55[53].Header.WaitListHead.Blink;
        if ( Blink )
          LODWORD(v55[53].Header.WaitListHead.Blink) = Blink - 1;
      }
      else
      {
        while ( 1 )
        {
          p_Blink = &v56[-1].Header.WaitListHead.Blink;
          if ( (UsbhLogMask & 0x100) != 0 )
          {
            if ( a1 )
            {
              v58 = *(_QWORD *)(a1 + 64);
              if ( v58 )
              {
                v59 = *(_QWORD *)(v58 + 888)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v58 + 880)) & *(_DWORD *)(v58 + 884));
                *(_DWORD *)v59 = 1064591724;
                *(_QWORD *)(v59 + 8) = 0LL;
                *(_QWORD *)(v59 + 16) = v55;
                *(_QWORD *)(v59 + 24) = 1230065731LL;
              }
            }
          }
          if ( *((_DWORD *)p_Blink + 6) == 1230065731 && p_Blink[5] == (_LIST_ENTRY *)v27 )
            break;
          v56 = *(struct _KEVENT **)&v56->Header.Lock;
          if ( v56 == &v55[53] )
            goto LABEL_96;
        }
        v61 = *(struct _KEVENT **)&v56->Header.Lock;
        if ( *(struct _KEVENT **)(*(_QWORD *)&v56->Header.Lock + 8LL) != v56
          || (Flink = v56->Header.WaitListHead.Flink, (struct _KEVENT *)Flink->Flink != v56) )
        {
          __fastfail(3u);
        }
        Flink->Flink = (_LIST_ENTRY *)v61;
        v61->Header.WaitListHead.Flink = Flink;
        ExFreePoolWithTag(p_Blink, 0);
      }
      if ( *(struct _KEVENT **)&v55[53].Header.Lock == &v55[53] && !LODWORD(v55[53].Header.WaitListHead.Blink) )
        KeSetEvent(v55 + 54, 0, 0);
      qword_14006F5E0 = 0LL;
      KeReleaseSpinLock(&HubG, v52);
    }
    ExFreePoolWithTag((PVOID)v27, 0);
    *(_QWORD *)(a2 + 376) = 0LL;
    if ( v37 == 5 )
    {
      v4 = a3;
      UsbhPCE_psSUSPEND(a1, a2, a3);
      break;
    }
    if ( *(int *)(a2 + 2876) > 50 )
    {
      UsbhException(a1, 0, 139, 0, 0, -1073741823, -1073704960, (__int64)usbfile_pchange_c, 6117, 1);
LABEL_57:
      *(_DWORD *)(a2 + 400) = 4;
LABEL_58:
      FdoExt(a1, v11, v8, v7);
      v4 = a3;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dq(
          WPP_GLOBAL_Control->DeviceExtension,
          v38,
          v39,
          71,
          (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
          *(_WORD *)(a2 + 4),
          a3);
      v40 = *(unsigned __int16 *)(a2 + 4);
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        if ( a1 )
        {
          v41 = *(_QWORD *)(a1 + 64);
          if ( v41 )
          {
            v42 = *(_QWORD *)(v41 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v41 + 880)) & *(_DWORD *)(v41 + 884));
            *(_DWORD *)v42 = 959530320;
            *(_QWORD *)(v42 + 8) = 0LL;
            *(_QWORD *)(v42 + 16) = 0LL;
            *(_QWORD *)(v42 + 24) = v40;
          }
        }
      }
      UsbhDispatch_PortChangeQueueNullEvent(a1, a2, 19LL, a3);
      break;
    }
    if ( v37 == 3 )
      goto LABEL_57;
    if ( v37 == 4 )
      goto LABEL_58;
    v4 = a3;
  }
  *(_DWORD *)(a2 + 8) = 0;
  FdoExt(a1, v13, v14, v15);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      58,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      *(_WORD *)(a2 + 4));
  v43 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v44 = *(_QWORD *)(a1 + 64);
      if ( v44 )
      {
        v45 = *(_QWORD *)(v44 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v44 + 880)) & *(_DWORD *)(v44 + 884));
        *(_DWORD *)v45 = 909133136;
        *(_QWORD *)(v45 + 8) = 0LL;
        *(_QWORD *)(v45 + 16) = 0LL;
        *(_QWORD *)(v45 + 24) = v43;
      }
    }
  }
  result = UsbhDispatch_PortChangeQueueNullEvent(a1, a2, 6LL, v4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v47 = *(_QWORD *)(a1 + 64);
      if ( v47 )
      {
        result = 762017649LL;
        v48 = *(_QWORD *)(v47 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v47 + 880)) & *(_DWORD *)(v47 + 884));
        *(_DWORD *)v48 = 762017649;
        *(_QWORD *)(v48 + 8) = 0LL;
        *(_QWORD *)(v48 + 16) = a2;
        *(_QWORD *)(v48 + 24) = 0LL;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return WPP_RECORDER_SF_d(
               WPP_GLOBAL_Control->DeviceExtension,
               0,
               1,
               99,
               (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
               *(_WORD *)(a2 + 4));
  }
  return result;
}
