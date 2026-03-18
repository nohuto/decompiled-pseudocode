/*
 * XREFs of UsbhIoctlGetNodeConnectionInfoExApi @ 0x14000E640
 * Callers:
 *     UsbhFdoDeviceControl @ 0x140009180 (UsbhFdoDeviceControl.c)
 *     UsbhIoctlGetNodeConnectionInfo @ 0x14004D38C (UsbhIoctlGetNodeConnectionInfo.c)
 * Callees:
 *     UsbhException @ 0x1400094F8 (UsbhException.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhDecHubBusy @ 0x14000F560 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x14000F6F0 (UsbhIncHubBusy.c)
 *     UsbhIoctlValidateParameters @ 0x14000FC10 (UsbhIoctlValidateParameters.c)
 *     Usb_Disconnected @ 0x1400155D4 (Usb_Disconnected.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhGetNodeConnectionInfoForPdo @ 0x1400312E0 (UsbhGetNodeConnectionInfoForPdo.c)
 *     UsbhTrapFatal_Dbg @ 0x14003964C (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x14003D980 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x14003DC1C (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF__HEX_ @ 0x14004DA08 (WPP_RECORDER_SF__HEX_.c)
 *     log_xstr @ 0x14004DB24 (log_xstr.c)
 *     memset @ 0x140061340 (memset.c)
 */

__int64 __fastcall UsbhIoctlGetNodeConnectionInfoExApi(__int64 a1, IRP *a2, __int64 a3, char a4)
{
  char v8; // si
  _IRP *MasterIrp; // r8
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  _DWORD *v16; // rax
  _DWORD *v17; // rdi
  _DWORD *v18; // rsi
  __int64 v19; // rdx
  int v20; // ecx
  __int64 v21; // rcx
  __int64 v22; // r10
  int NodeConnectionInfoForPdo; // r12d
  __int64 v24; // rcx
  __int64 Type; // rdi
  __int64 v26; // rcx
  _DWORD *v27; // rsi
  __int64 v28; // rcx
  __int64 v29; // r12
  __int64 v30; // rcx
  __int64 v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  _DWORD *v36; // rsi
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rdi
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdi
  __int64 v43; // rsi
  __int64 Pool2; // rax
  _QWORD *v45; // rax
  _QWORD *v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rcx
  KIRQL v49; // r13
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rsi
  __int64 *v53; // rdi
  __int64 *v54; // r9
  __int64 v55; // rdx
  __int64 v56; // rcx
  _DWORD *v57; // rcx
  int v58; // eax
  __int64 *v59; // rcx
  __int64 **v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  _DWORD *v63; // rsi
  struct _KSEMAPHORE *v64; // rdi
  struct _KEVENT *v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rcx
  unsigned int *p_MajorFunction; // rax
  _IRP *v69; // r11
  __int64 v70; // r10
  __int64 v71; // rsi
  __int64 v72; // r13
  __int64 v73; // rcx
  __int64 v74; // rcx
  unsigned __int64 Information; // r8
  __int64 Status; // r9
  __int64 v77; // rcx
  int v78; // edi
  __int64 v79; // rdx
  __int64 v81; // r8
  __int64 v82; // rdx
  __int64 v83; // rcx
  int v84; // eax
  __int128 *v85; // rax
  __int64 v86; // r10
  __int64 v87; // rcx
  int v88; // edx
  _IRP *v89; // [rsp+50h] [rbp-19h]
  unsigned int Size; // [rsp+58h] [rbp-11h] BYREF
  int Size_4; // [rsp+5Ch] [rbp-Dh] BYREF
  __int64 v92; // [rsp+60h] [rbp-9h]
  __int128 v93; // [rsp+70h] [rbp+7h] BYREF
  char v94[64]; // [rsp+80h] [rbp+17h] BYREF
  KIRQL v95; // [rsp+D8h] [rbp+6Fh]
  _IRP *v96; // [rsp+D8h] [rbp+6Fh]

  v8 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      2,
      44,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids);
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v10 = 274;
  v89 = MasterIrp;
  if ( !a4 )
    v10 = 259;
  Size_4 = v10;
  Size = *(_DWORD *)(a3 + 8);
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v11 = *(_QWORD *)(a1 + 64);
      if ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
        *(_DWORD *)v12 = 827879015;
        *(_QWORD *)(v12 + 8) = 0LL;
        *(_QWORD *)(v12 + 16) = a2;
        *(_QWORD *)(v12 + 24) = MasterIrp;
      }
    }
  }
  v13 = (unsigned int)FdoExt(a1);
  v92 = UsbhIncHubBusy(a1, v13 + 1736, (_DWORD)a2, 1430414185, 1);
  if ( v92 )
  {
    if ( (UsbhLogMask & 0x20) != 0 )
    {
      if ( a1 )
      {
        v14 = *(_QWORD *)(a1 + 64);
        if ( v14 )
        {
          v15 = *(_QWORD *)(v14 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
          *(_DWORD *)v15 = 724652097;
          *(_QWORD *)(v15 + 8) = 0LL;
          *(_QWORD *)(v15 + 16) = 0LL;
          *(_QWORD *)(v15 + 24) = 4027383812LL;
        }
      }
    }
    v16 = FdoExt(a1);
    KeWaitForSingleObject(v16 + 1230, Executive, 0, 0, 0LL);
    v17 = FdoExt(a1) + 434;
    v18 = FdoExt(a1);
    KeWaitForSingleObject(v18 + 1240, Executive, 0, 0, 0LL);
    v17[14] = v18[340];
    v17[15] = 11;
    v17[12] = 827278406;
    *((_QWORD *)v17 + 3) = KeGetCurrentThread();
    v20 = v18[6];
    *((_QWORD *)v18 + 166) = v17;
    v21 = ((_BYTE)v20 + 1) & 7;
    v18[6] = v21;
    v21 *= 32LL;
    *(_DWORD *)((char *)v18 + v21 + 28) = 11;
    *(_DWORD *)((char *)v18 + v21 + 32) = v18[340];
    *(_DWORD *)((char *)v18 + v21 + 36) = v18[340];
    *(_DWORD *)((char *)v18 + v21 + 40) = -267583484;
    v22 = (int)v18[340];
    v8 = 1;
    if ( (_DWORD)v22 == 5 )
    {
      NodeConnectionInfoForPdo = 0;
    }
    else
    {
      if ( (_DWORD)v22 == 6 )
        Log(a1, 32, 1095774563, 0, 4027383812LL);
      NodeConnectionInfoForPdo = -1073741810;
    }
    if ( (UsbhLogMask & 0x20) != 0 )
    {
      if ( a1 )
      {
        v19 = *(_QWORD *)(a1 + 64);
        if ( v19 )
        {
          v24 = *(_QWORD *)(v19 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v19 + 880)) & *(_DWORD *)(v19 + 884));
          *(_DWORD *)v24 = 556879937;
          *(_QWORD *)(v24 + 16) = NodeConnectionInfoForPdo;
          *(_QWORD *)(v24 + 8) = 0LL;
          *(_QWORD *)(v24 + 24) = v22;
        }
      }
    }
    if ( (NodeConnectionInfoForPdo & 0xC0000000) == 0xC0000000
      || (NodeConnectionInfoForPdo = UsbhIoctlValidateParameters(a1, 259, (_DWORD)a2, a3, 4, 35),
          (NodeConnectionInfoForPdo & 0xC0000000) == 0xC0000000) )
    {
LABEL_83:
      if ( (NodeConnectionInfoForPdo & 0xC0000000) != 0xC0000000 )
        goto LABEL_84;
      goto LABEL_143;
    }
    Type = (unsigned __int16)v89->Type;
    if ( (UsbhLogMask & 8) != 0 )
    {
      if ( a1 )
      {
        v19 = *(_QWORD *)(a1 + 64);
        if ( v19 )
        {
          v26 = *(_QWORD *)(v19 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v19 + 880)) & *(_DWORD *)(v19 + 884));
          LODWORD(v19) = 0;
          *(_DWORD *)v26 = 1413771367;
          *(_QWORD *)(v26 + 8) = 0LL;
          *(_QWORD *)(v26 + 16) = Type;
          *(_QWORD *)(v26 + 24) = 0LL;
        }
      }
    }
    if ( !(_WORD)Type )
      goto LABEL_150;
    v27 = FdoExt(a1);
    if ( (unsigned __int16)Type > *((unsigned __int8 *)FdoExt(a1) + 2938) )
      goto LABEL_150;
    v28 = *((_QWORD *)v27 + 382);
    if ( !v28 )
      goto LABEL_150;
    v29 = v28 + 2928 * Type - 2928;
    if ( (UsbhLogMask & 8) != 0 )
    {
      if ( a1 )
      {
        v19 = *(_QWORD *)(a1 + 64);
        if ( v19 )
        {
          v30 = *(_QWORD *)(v19 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v19 + 880)) & *(_DWORD *)(v19 + 884));
          *(_DWORD *)v30 = 1044672615;
          *(_QWORD *)(v30 + 8) = 0LL;
          *(_QWORD *)(v30 + 16) = Type;
          *(_QWORD *)(v30 + 24) = v29;
        }
      }
    }
    if ( !v29 )
    {
LABEL_150:
      NodeConnectionInfoForPdo = -1073741811;
LABEL_82:
      v8 = 1;
      goto LABEL_83;
    }
    v31 = (unsigned __int16)v89->Type;
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      if ( a1 )
      {
        v32 = *(_QWORD *)(a1 + 64);
        if ( v32 )
        {
          v33 = *(_QWORD *)(v32 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v32 + 880)) & *(_DWORD *)(v32 + 884));
          *(_DWORD *)v33 = 1329877100;
          *(_QWORD *)(v33 + 8) = 0LL;
          *(_QWORD *)(v33 + 16) = v31;
          *(_QWORD *)(v33 + 24) = 1232023604LL;
        }
      }
    }
    v95 = KeAcquireSpinLockRaiseToDpc(&HubG);
    qword_14006F5E0 = (__int64)&dword_14006F5E8;
    if ( (UsbhLogMask & 8) != 0 )
    {
      if ( a1 )
      {
        v34 = *(_QWORD *)(a1 + 64);
        if ( v34 )
        {
          v35 = *(_QWORD *)(v34 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v34 + 880)) & *(_DWORD *)(v34 + 884));
          *(_DWORD *)v35 = 1413771367;
          *(_QWORD *)(v35 + 8) = 0LL;
          *(_QWORD *)(v35 + 16) = v31;
          *(_QWORD *)(v35 + 24) = 0LL;
        }
      }
    }
    if ( !(_WORD)v31 )
      goto LABEL_130;
    v36 = FdoExt(a1);
    if ( (unsigned __int16)v31 > *((unsigned __int8 *)FdoExt(a1) + 2938) )
      goto LABEL_130;
    v37 = *((_QWORD *)v36 + 382);
    if ( !v37 )
      goto LABEL_130;
    v38 = v31;
    v39 = v37 + 2928 * v31 - 2928;
    if ( (UsbhLogMask & 8) != 0 )
    {
      if ( a1 )
      {
        v40 = *(_QWORD *)(a1 + 64);
        if ( v40 )
        {
          v41 = *(_QWORD *)(v40 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v40 + 880)) & *(_DWORD *)(v40 + 884));
          *(_DWORD *)v41 = 1044672615;
          *(_QWORD *)(v41 + 8) = 0LL;
          *(_QWORD *)(v41 + 16) = v38;
          *(_QWORD *)(v41 + 24) = v39;
        }
      }
    }
    if ( !v39 || (v42 = *(_QWORD *)(v39 + 392)) == 0 )
    {
LABEL_130:
      qword_14006F5E0 = 0LL;
      KeReleaseSpinLock(&HubG, v95);
      v81 = *(unsigned __int16 *)(v29 + 4);
      if ( (UsbhLogMask & 0x20) != 0 )
      {
        if ( a1 )
        {
          v82 = *(_QWORD *)(a1 + 64);
          if ( v82 )
          {
            v83 = *(_QWORD *)(v82 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v82 + 880)) & *(_DWORD *)(v82 + 884));
            *(_DWORD *)v83 = 1886279783;
            *(_QWORD *)(v83 + 8) = 0LL;
            *(_QWORD *)(v83 + 16) = v81;
            *(_QWORD *)(v83 + 24) = v89;
          }
        }
      }
      memset(v89, 0, Size);
      v84 = *(unsigned __int16 *)(v29 + 4);
      NodeConnectionInfoForPdo = 0;
      *(_DWORD *)&v89->Type = v84;
      *(_DWORD *)((char *)&v89->AssociatedIrp.SystemBuffer + 7) = 0;
      a2->IoStatus.Information = 35LL;
      goto LABEL_82;
    }
    v43 = *(_QWORD *)(v42 + 64);
    if ( !v43 )
      UsbhTrapFatal_Dbg(v42, 0LL);
    if ( *(_DWORD *)v43 != 1329877064 )
      UsbhTrapFatal_Dbg(v42, *(_QWORD *)(v42 + 64));
    Pool2 = ExAllocatePool2(64LL, 48LL, 1112885333LL);
    if ( Pool2 )
    {
      *(_DWORD *)Pool2 = 1668571500;
      *(_QWORD *)(Pool2 + 32) = v42;
      *(_DWORD *)(Pool2 + 24) = 1232023604;
      *(_QWORD *)(Pool2 + 40) = a2;
      v45 = (_QWORD *)(Pool2 + 8);
      v46 = *(_QWORD **)(v43 + 1280);
      if ( *v46 != v43 + 1272 )
        goto LABEL_149;
      *v45 = v43 + 1272;
      v45[1] = v46;
      *v46 = v45;
      *(_QWORD *)(v43 + 1280) = v45;
    }
    else
    {
      ++*(_DWORD *)(v43 + 1288);
    }
    qword_14006F5E0 = 0LL;
    KeReleaseSpinLock(&HubG, v95);
    NodeConnectionInfoForPdo = UsbhGetNodeConnectionInfoForPdo(a1, (int)a2, v29, v42, v89, (__int64)&Size, a4);
    a2->IoStatus.Information = Size;
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      if ( a1 )
      {
        v47 = *(_QWORD *)(a1 + 64);
        if ( v47 )
        {
          v48 = *(_QWORD *)(v47 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v47 + 880)) & *(_DWORD *)(v47 + 884));
          *(_DWORD *)v48 = 1329877109;
          *(_QWORD *)(v48 + 8) = 0LL;
          *(_QWORD *)(v48 + 16) = v42;
          *(_QWORD *)(v48 + 24) = 1232023604LL;
        }
      }
    }
    v49 = KeAcquireSpinLockRaiseToDpc(&HubG);
    qword_14006F5E0 = (__int64)&dword_14006F5E8;
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
          *(_DWORD *)v51 = 1348891236;
          *(_QWORD *)(v51 + 8) = 0LL;
          *(_QWORD *)(v51 + 16) = v42;
          *(_QWORD *)(v51 + 24) = 1232023604LL;
        }
      }
    }
    v52 = *(_QWORD *)(v42 + 64);
    if ( !v52 )
      UsbhTrapFatal_Dbg(v42, 0LL);
    if ( *(_DWORD *)v52 != 1329877064 )
      UsbhTrapFatal_Dbg(v42, *(_QWORD *)(v42 + 64));
    v53 = (__int64 *)(v52 + 1272);
    v54 = *(__int64 **)(v52 + 1272);
    if ( v54 == (__int64 *)(v52 + 1272) )
    {
LABEL_74:
      v57 = (_DWORD *)(v52 + 1288);
      v58 = *(_DWORD *)(v52 + 1288);
      if ( v58 )
        *v57 = v58 - 1;
      goto LABEL_80;
    }
    while ( 1 )
    {
      if ( (UsbhLogMask & 0x100) != 0 )
      {
        if ( a1 )
        {
          v55 = *(_QWORD *)(a1 + 64);
          if ( v55 )
          {
            v56 = *(_QWORD *)(v55 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v55 + 880)) & *(_DWORD *)(v55 + 884));
            *(_DWORD *)v56 = 1064591724;
            *(_QWORD *)(v56 + 8) = 0LL;
            *(_QWORD *)(v56 + 16) = v52;
            *(_QWORD *)(v56 + 24) = 1232023604LL;
          }
        }
      }
      if ( *((_DWORD *)v54 + 4) == 1232023604 && (IRP *)v54[4] == a2 )
        break;
      v54 = (__int64 *)*v54;
      if ( v54 == v53 )
        goto LABEL_74;
    }
    v59 = (__int64 *)*v54;
    if ( *(__int64 **)(*v54 + 8) == v54 )
    {
      v60 = (__int64 **)v54[1];
      if ( *v60 == v54 )
      {
        *v60 = v59;
        v59[1] = (__int64)v60;
        ExFreePoolWithTag(v54 - 1, 0);
        v57 = (_DWORD *)(v52 + 1288);
LABEL_80:
        if ( (__int64 *)*v53 == v53 && !*v57 )
          KeSetEvent((PRKEVENT)(v52 + 1296), 0, 0);
        qword_14006F5E0 = 0LL;
        KeReleaseSpinLock(&HubG, v49);
        goto LABEL_82;
      }
    }
LABEL_149:
    __fastfail(3u);
  }
  NodeConnectionInfoForPdo = -1073741670;
LABEL_143:
  if ( !(unsigned __int8)Usb_Disconnected((unsigned int)NodeConnectionInfoForPdo) )
    UsbhException(a1, 0LL, 91LL, &Size_4, 4u, NodeConnectionInfoForPdo, 0, usbfile_ioctl_c, 2215, 0);
LABEL_84:
  if ( v8 )
  {
    if ( (UsbhLogMask & 0x20) != 0 )
    {
      if ( a1 )
      {
        v61 = *(_QWORD *)(a1 + 64);
        if ( v61 )
        {
          v62 = *(_QWORD *)(v61 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v61 + 880)) & *(_DWORD *)(v61 + 884));
          *(_DWORD *)v62 = 758206529;
          *(_QWORD *)(v62 + 8) = 0LL;
          *(_QWORD *)(v62 + 16) = 0LL;
          *(_QWORD *)(v62 + 24) = 4027383812LL;
        }
      }
    }
    v63 = FdoExt(a1);
    v64 = (struct _KSEMAPHORE *)FdoExt(a1);
    FdoExt(*((_QWORD *)v63 + 218));
    v63[446] = 1734964085;
    v64[41].Header.WaitListHead.Blink = 0LL;
    KeReleaseSemaphore(v64 + 155, 16, 1, 0);
    v65 = (struct _KEVENT *)FdoExt(a1);
    KeSetEvent(v65 + 205, 0, 0);
  }
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v19 = *(_QWORD *)(a1 + 64);
      if ( v19 )
      {
        v66 = *(_QWORD *)(v19 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v19 + 880)) & *(_DWORD *)(v19 + 884));
        *(_DWORD *)v66 = 844656231;
        *(_QWORD *)(v66 + 24) = NodeConnectionInfoForPdo;
        *(_QWORD *)(v66 + 8) = 0LL;
        *(_QWORD *)(v66 + 16) = a2;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      2,
      45,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids,
      NodeConnectionInfoForPdo);
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v19 = *(_QWORD *)(a1 + 64);
      if ( v19 )
      {
        v67 = *(_QWORD *)(v19 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v19 + 880)) & *(_DWORD *)(v19 + 884));
        *(_DWORD *)v67 = 1415802729;
        *(_QWORD *)(v67 + 8) = 0LL;
        *(_QWORD *)(v67 + 16) = 0LL;
        *(_QWORD *)(v67 + 24) = a2;
      }
    }
  }
  p_MajorFunction = (unsigned int *)&a2->Tail.Overlay.CurrentStackLocation->MajorFunction;
  v69 = a2->AssociatedIrp.MasterIrp;
  v96 = v69;
  v70 = p_MajorFunction[6];
  v71 = p_MajorFunction[2];
  v72 = p_MajorFunction[4];
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v19 = *(_QWORD *)(a1 + 64);
      if ( v19 )
      {
        v73 = *(_QWORD *)(v19 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v19 + 880)) & *(_DWORD *)(v19 + 884));
        *(_DWORD *)v73 = 829714281;
        *(_QWORD *)(v73 + 8) = 0LL;
        *(_QWORD *)(v73 + 16) = v71;
        *(_QWORD *)(v73 + 24) = v72;
      }
    }
  }
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v19 = *(_QWORD *)(a1 + 64);
      if ( v19 )
      {
        v74 = *(_QWORD *)(v19 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v19 + 880)) & *(_DWORD *)(v19 + 884));
        *(_DWORD *)v74 = 846491497;
        *(_QWORD *)(v74 + 8) = 0LL;
        *(_QWORD *)(v74 + 16) = v69;
        *(_QWORD *)(v74 + 24) = v70;
      }
    }
  }
  Information = a2->IoStatus.Information;
  Status = a2->IoStatus.Status;
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v19 = *(_QWORD *)(a1 + 64);
      if ( v19 )
      {
        v77 = *(_QWORD *)(v19 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v19 + 880)) & *(_DWORD *)(v19 + 884));
        *(_DWORD *)v77 = 863268713;
        *(_QWORD *)(v77 + 8) = 0LL;
        *(_QWORD *)(v77 + 16) = Status;
        *(_QWORD *)(v77 + 24) = Information;
      }
    }
  }
  v78 = a2->IoStatus.Information;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        2,
        10,
        (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids,
        v70);
      v69 = v96;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_dd(
          WPP_GLOBAL_Control->DeviceExtension,
          v19,
          2,
          11,
          (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids,
          v72,
          v71);
        v69 = v96;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_dd(
          WPP_GLOBAL_Control->DeviceExtension,
          v19,
          2,
          12,
          (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids,
          a2->IoStatus.Status,
          v78);
        v69 = v96;
      }
    }
  }
  if ( (_BYTE)v78 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v85 = (__int128 *)log_xstr(v94, (unsigned __int8)v78, v69, Status);
      v87 = *(_QWORD *)(v86 + 64);
      v93 = *v85;
      WPP_RECORDER_SF__HEX_(v87, v88, 2, 14, (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids, (__int64)&v93);
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      2,
      13,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids);
  }
  FdoExt(a1);
  UsbhDecHubBusy(a1, v79, v92);
  a2->IoStatus.Status = NodeConnectionInfoForPdo;
  IofCompleteRequest(a2, 0);
  return (unsigned int)NodeConnectionInfoForPdo;
}
