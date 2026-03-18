/*
 * XREFs of UsbhIoctlGetDescriptorFromNodeConnection @ 0x140010050
 * Callers:
 *     UsbhFdoDeviceControl @ 0x140009180 (UsbhFdoDeviceControl.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     UsbhException @ 0x1400094F8 (UsbhException.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhDecHubBusy @ 0x14000F560 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x14000F6F0 (UsbhIncHubBusy.c)
 *     UsbhIoctlValidateParameters @ 0x14000FC10 (UsbhIoctlValidateParameters.c)
 *     UsbhIoctlGetDescriptorForPDO @ 0x140012028 (UsbhIoctlGetDescriptorForPDO.c)
 *     Usb_Disconnected @ 0x1400155D4 (Usb_Disconnected.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhTrapFatal_Dbg @ 0x14003964C (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x14003D980 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x14003DC1C (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF__HEX_ @ 0x14004DA08 (WPP_RECORDER_SF__HEX_.c)
 *     log_xstr @ 0x14004DB24 (log_xstr.c)
 */

__int64 __fastcall UsbhIoctlGetDescriptorFromNodeConnection(__int64 a1, IRP *a2, __int64 a3)
{
  char v6; // si
  _IRP *MasterIrp; // r13
  __int64 v8; // rdx
  __int64 v9; // rcx
  _DWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  _DWORD *v14; // rax
  _DWORD *v15; // rdi
  _DWORD *v16; // rsi
  int v17; // ecx
  __int64 v18; // rcx
  __int64 v19; // r10
  __int64 DescriptorForPDO; // r14
  __int64 v21; // rcx
  int v22; // eax
  __int64 Type; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  KIRQL v26; // r13
  __int64 v27; // rcx
  __int64 v28; // rdx
  _DWORD *v29; // rsi
  __int64 v30; // rcx
  __int64 v31; // r13
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r13
  __int64 v35; // rdi
  __int64 Pool2; // rax
  _QWORD *v37; // rax
  _QWORD *v38; // rdx
  _DWORD *v39; // r14
  KSPIN_LOCK *v40; // rdi
  KIRQL v41; // al
  int v42; // ecx
  int v43; // esi
  _DWORD *v44; // rdi
  KIRQL v45; // dl
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  _DWORD *v53; // rsi
  __int64 *v54; // rdi
  __int64 *v55; // r9
  __int64 v56; // rdx
  __int64 v57; // rcx
  _DWORD *v58; // rcx
  int v59; // eax
  __int64 *v60; // rcx
  __int64 **v61; // rax
  KIRQL v62; // dl
  __int64 v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // rcx
  _DWORD *v66; // rsi
  struct _KSEMAPHORE *v67; // rdi
  struct _KEVENT *v68; // rax
  __int64 v69; // rcx
  unsigned int *p_MajorFunction; // rax
  _IRP *v71; // r11
  __int64 v72; // r10
  __int64 v73; // rsi
  __int64 v74; // r13
  __int64 v75; // rcx
  __int64 v76; // rcx
  unsigned __int64 Information; // r8
  __int64 Status; // r9
  __int64 v79; // rcx
  int v80; // edi
  __int64 v81; // rdx
  __int128 *v83; // rax
  __int64 v84; // r10
  __int64 v85; // rcx
  int v86; // edx
  int v87; // [rsp+54h] [rbp-15h] BYREF
  void *v88; // [rsp+58h] [rbp-11h]
  int v89[2]; // [rsp+60h] [rbp-9h]
  _QWORD *v90; // [rsp+68h] [rbp-1h]
  __int128 v91; // [rsp+70h] [rbp+7h] BYREF
  char v92[64]; // [rsp+80h] [rbp+17h] BYREF
  _IRP *v93; // [rsp+D8h] [rbp+6Fh]
  KIRQL v95; // [rsp+E0h] [rbp+77h]
  __int64 v96; // [rsp+E8h] [rbp+7Fh] BYREF

  v6 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      2,
      35,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids);
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  LOWORD(v96) = *(_WORD *)(a3 + 8);
  v87 = 260;
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
        *(_DWORD *)v9 = 1648258921;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 16) = a2;
        *(_QWORD *)(v9 + 24) = MasterIrp;
      }
    }
  }
  v10 = FdoExt(a1);
  v90 = (_QWORD *)UsbhIncHubBusy(a1, (__int64)(v10 + 434), (__int64)a2, 1430414185, 1);
  if ( !v90 )
  {
    LODWORD(DescriptorForPDO) = -1073741670;
    goto LABEL_73;
  }
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v12 = *(_QWORD *)(a1 + 64);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
        *(_DWORD *)v13 = 724652097;
        *(_QWORD *)(v13 + 8) = 0LL;
        *(_QWORD *)(v13 + 16) = 0LL;
        *(_QWORD *)(v13 + 24) = 4027383819LL;
      }
    }
  }
  v14 = FdoExt(a1);
  KeWaitForSingleObject(v14 + 1230, Executive, 0, 0, 0LL);
  v15 = FdoExt(a1) + 434;
  v16 = FdoExt(a1);
  KeWaitForSingleObject(v16 + 1240, Executive, 0, 0, 0LL);
  v15[14] = v16[340];
  v15[15] = 11;
  v15[12] = 827278406;
  *((_QWORD *)v15 + 3) = KeGetCurrentThread();
  v17 = v16[6];
  *((_QWORD *)v16 + 166) = v15;
  v18 = ((_BYTE)v17 + 1) & 7;
  v16[6] = v18;
  v18 *= 32LL;
  *(_DWORD *)((char *)v16 + v18 + 28) = 11;
  *(_DWORD *)((char *)v16 + v18 + 32) = v16[340];
  *(_DWORD *)((char *)v16 + v18 + 36) = v16[340];
  *(_DWORD *)((char *)v16 + v18 + 40) = -267583477;
  v19 = (int)v16[340];
  v6 = 1;
  if ( (_DWORD)v19 == 5 )
  {
    LODWORD(DescriptorForPDO) = 0;
  }
  else
  {
    if ( (_DWORD)v19 == 6 )
      Log(a1, 32, 1095774563, 0, 4027383819LL);
    LODWORD(DescriptorForPDO) = -1073741810;
  }
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v11 = *(_QWORD *)(a1 + 64);
      if ( v11 )
      {
        v21 = *(_QWORD *)(v11 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
        *(_DWORD *)v21 = 556879937;
        *(_QWORD *)(v21 + 16) = (int)DescriptorForPDO;
        *(_QWORD *)(v21 + 8) = 0LL;
        *(_QWORD *)(v21 + 24) = v19;
      }
    }
  }
  if ( (DescriptorForPDO & 0xC0000000) != 0xC0000000 )
  {
    v22 = UsbhIoctlValidateParameters(a1, 260, (__int64)a2, a3, 4u, 0xDu);
    LODWORD(DescriptorForPDO) = v22;
    if ( (v22 & 0xC0000000) == 0xC0000000 )
    {
      Log(a1, 32, 1764899938, v22, 0LL);
      LODWORD(DescriptorForPDO) = -1073741810;
      goto LABEL_73;
    }
    *(&MasterIrp->Size + 1) = 1664;
    Type = (unsigned __int16)MasterIrp->Type;
    *(_QWORD *)v89 = &MasterIrp->Size + 1;
    v88 = (char *)&MasterIrp->MdlAddress + 4;
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      if ( a1 )
      {
        v24 = *(_QWORD *)(a1 + 64);
        if ( v24 )
        {
          v25 = *(_QWORD *)(v24 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v24 + 880)) & *(_DWORD *)(v24 + 884));
          *(_DWORD *)v25 = 1329877100;
          *(_QWORD *)(v25 + 8) = 0LL;
          *(_QWORD *)(v25 + 16) = Type;
          *(_QWORD *)(v25 + 24) = 1232023650LL;
        }
      }
    }
    v26 = KeAcquireSpinLockRaiseToDpc(&HubG);
    v95 = v26;
    qword_14006F5E0 = (__int64)&dword_14006F5E8;
    if ( (UsbhLogMask & 8) != 0 )
    {
      if ( a1 )
      {
        v27 = *(_QWORD *)(a1 + 64);
        if ( v27 )
        {
          v28 = *(_QWORD *)(v27 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v27 + 880)) & *(_DWORD *)(v27 + 884));
          *(_DWORD *)v28 = 1413771367;
          *(_QWORD *)(v28 + 8) = 0LL;
          *(_QWORD *)(v28 + 16) = Type;
          *(_QWORD *)(v28 + 24) = 0LL;
        }
      }
    }
    if ( !(_WORD)Type )
    {
      qword_14006F5E0 = 0LL;
      KeReleaseSpinLock(&HubG, v26);
      goto LABEL_73;
    }
    v29 = FdoExt(a1);
    if ( (unsigned __int16)Type > *((unsigned __int8 *)FdoExt(a1) + 2938) )
    {
      v62 = v26;
      goto LABEL_72;
    }
    v30 = *((_QWORD *)v29 + 382);
    if ( !v30 )
    {
      v62 = v26;
      goto LABEL_72;
    }
    v31 = v30 + 2928 * Type - 2928;
    if ( (UsbhLogMask & 8) != 0 )
    {
      if ( a1 )
      {
        v32 = *(_QWORD *)(a1 + 64);
        if ( v32 )
        {
          v33 = *(_QWORD *)(v32 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v32 + 880)) & *(_DWORD *)(v32 + 884));
          *(_DWORD *)v33 = 1044672615;
          *(_QWORD *)(v33 + 8) = 0LL;
          *(_QWORD *)(v33 + 16) = Type;
          *(_QWORD *)(v33 + 24) = v31;
        }
      }
    }
    if ( !v31 || (v34 = *(_QWORD *)(v31 + 392)) == 0 )
    {
LABEL_71:
      v62 = v95;
LABEL_72:
      qword_14006F5E0 = 0LL;
      KeReleaseSpinLock(&HubG, v62);
      v6 = 1;
      goto LABEL_73;
    }
    v35 = *(_QWORD *)(v34 + 64);
    if ( !v35 )
      UsbhTrapFatal_Dbg(v34, 0LL);
    if ( *(_DWORD *)v35 != 1329877064 )
      UsbhTrapFatal_Dbg(v34, *(_QWORD *)(v34 + 64));
    Pool2 = ExAllocatePool2(64LL, 48LL, 1112885333LL);
    if ( Pool2 )
    {
      *(_DWORD *)Pool2 = 1668571500;
      *(_QWORD *)(Pool2 + 32) = v34;
      *(_DWORD *)(Pool2 + 24) = 1232023650;
      *(_QWORD *)(Pool2 + 40) = a2;
      v37 = (_QWORD *)(Pool2 + 8);
      v38 = *(_QWORD **)(v35 + 1280);
      if ( *v38 != v35 + 1272 )
        goto LABEL_135;
      *v37 = v35 + 1272;
      v37[1] = v38;
      *v38 = v37;
      *(_QWORD *)(v35 + 1280) = v37;
    }
    else
    {
      ++*(_DWORD *)(v35 + 1288);
    }
    qword_14006F5E0 = 0LL;
    KeReleaseSpinLock(&HubG, v95);
    v39 = FdoExt(a1) + 346;
    v40 = (KSPIN_LOCK *)FdoExt(a1);
    v41 = KeAcquireSpinLockRaiseToDpc(v40 + 632);
    v42 = *((_DWORD *)v40 + 1043);
    *((_BYTE *)v40 + 5064) = v41;
    v39[10] = v42;
    v39[11] = 126;
    v39[8] = 844055622;
    v39[9] = 1903322197;
    *((_QWORD *)v39 + 3) = KeGetCurrentThread();
    v40[168] = (KSPIN_LOCK)v39;
    v43 = PdoExt(v34)[282];
    v44 = FdoExt(a1);
    FdoExt(*((_QWORD *)v39 + 1));
    v39[8] = 1734964085;
    v45 = *((_BYTE *)v44 + 5064);
    *((_QWORD *)v44 + 168) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)v44 + 632, v45);
    LOWORD(v96) = v96 - 12;
    DescriptorForPDO = (int)UsbhIoctlGetDescriptorForPDO(a1, v34, (int)a2, v89[0], (__int64)&v96, v88, 1, v43 != 1);
    if ( (UsbhLogMask & 0x20) != 0 && a1 && (v46 = *(_QWORD *)(a1 + 64)) != 0 )
    {
      v47 = *(_QWORD *)(v46 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v46 + 880)) & *(_DWORD *)(v46 + 884));
      v48 = (unsigned __int16)v96;
      *(_DWORD *)v47 = 1648111977;
      *(_QWORD *)(v47 + 8) = 0LL;
      *(_QWORD *)(v47 + 16) = DescriptorForPDO;
      *(_QWORD *)(v47 + 24) = v48;
    }
    else
    {
      LOWORD(v48) = v96;
    }
    if ( (int)DescriptorForPDO >= 0 )
      a2->IoStatus.Information = (unsigned __int16)v48 + 12LL;
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      if ( a1 )
      {
        v49 = *(_QWORD *)(a1 + 64);
        if ( v49 )
        {
          v50 = *(_QWORD *)(v49 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v49 + 880)) & *(_DWORD *)(v49 + 884));
          *(_DWORD *)v50 = 1329877109;
          *(_QWORD *)(v50 + 8) = 0LL;
          *(_QWORD *)(v50 + 16) = v34;
          *(_QWORD *)(v50 + 24) = 1232023650LL;
        }
      }
    }
    v95 = KeAcquireSpinLockRaiseToDpc(&HubG);
    qword_14006F5E0 = (__int64)&dword_14006F5E8;
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      if ( a1 )
      {
        v51 = *(_QWORD *)(a1 + 64);
        if ( v51 )
        {
          v52 = *(_QWORD *)(v51 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v51 + 880)) & *(_DWORD *)(v51 + 884));
          *(_DWORD *)v52 = 1348891236;
          *(_QWORD *)(v52 + 8) = 0LL;
          *(_QWORD *)(v52 + 16) = v34;
          *(_QWORD *)(v52 + 24) = 1232023650LL;
        }
      }
    }
    v53 = PdoExt(v34);
    v54 = (__int64 *)(v53 + 318);
    v55 = (__int64 *)*((_QWORD *)v53 + 159);
    if ( v55 == (__int64 *)(v53 + 318) )
    {
LABEL_64:
      v58 = v53 + 322;
      v59 = v53[322];
      if ( v59 )
        *v58 = v59 - 1;
      goto LABEL_70;
    }
    while ( 1 )
    {
      if ( (UsbhLogMask & 0x100) != 0 )
      {
        if ( a1 )
        {
          v56 = *(_QWORD *)(a1 + 64);
          if ( v56 )
          {
            v57 = *(_QWORD *)(v56 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v56 + 880)) & *(_DWORD *)(v56 + 884));
            *(_DWORD *)v57 = 1064591724;
            *(_QWORD *)(v57 + 8) = 0LL;
            *(_QWORD *)(v57 + 16) = v53;
            *(_QWORD *)(v57 + 24) = 1232023650LL;
          }
        }
      }
      if ( *((_DWORD *)v55 + 4) == 1232023650 && (IRP *)v55[4] == a2 )
        break;
      v55 = (__int64 *)*v55;
      if ( v55 == v54 )
        goto LABEL_64;
    }
    v60 = (__int64 *)*v55;
    if ( *(__int64 **)(*v55 + 8) == v55 )
    {
      v61 = (__int64 **)v55[1];
      if ( *v61 == v55 )
      {
        *v61 = v60;
        v60[1] = (__int64)v61;
        ExFreePoolWithTag(v55 - 1, 0);
        v58 = v53 + 322;
LABEL_70:
        if ( (__int64 *)*v54 == v54 && !*v58 )
          KeSetEvent((PRKEVENT)v53 + 54, 0, 0);
        goto LABEL_71;
      }
    }
LABEL_135:
    __fastfail(3u);
  }
LABEL_73:
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v11 = *(_QWORD *)(a1 + 64);
      if ( v11 )
      {
        v63 = *(_QWORD *)(v11 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
        *(_DWORD *)v63 = 1648127849;
        *(_QWORD *)(v63 + 24) = (int)DescriptorForPDO;
        *(_QWORD *)(v63 + 8) = 0LL;
        *(_QWORD *)(v63 + 16) = a2;
      }
    }
  }
  if ( (DescriptorForPDO & 0xC0000000) == 0xC0000000
    && !(unsigned __int8)Usb_Disconnected((unsigned int)DescriptorForPDO) )
  {
    UsbhException(a1, 0LL, 91LL, &v87, 4u, DescriptorForPDO, 0, usbfile_ioctl_c, 1573, 0);
  }
  if ( v6 )
  {
    if ( (UsbhLogMask & 0x20) != 0 )
    {
      if ( a1 )
      {
        v64 = *(_QWORD *)(a1 + 64);
        if ( v64 )
        {
          v65 = *(_QWORD *)(v64 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v64 + 880)) & *(_DWORD *)(v64 + 884));
          *(_DWORD *)v65 = 758206529;
          *(_QWORD *)(v65 + 24) = 4027383819LL;
          *(_QWORD *)(v65 + 8) = 0LL;
          *(_QWORD *)(v65 + 16) = 0LL;
        }
      }
    }
    v66 = FdoExt(a1);
    v67 = (struct _KSEMAPHORE *)FdoExt(a1);
    FdoExt(*((_QWORD *)v66 + 218));
    v66[446] = 1734964085;
    v67[41].Header.WaitListHead.Blink = 0LL;
    KeReleaseSemaphore(v67 + 155, 16, 1, 0);
    v68 = (struct _KEVENT *)FdoExt(a1);
    KeSetEvent(v68 + 205, 0, 0);
  }
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v11 = *(_QWORD *)(a1 + 64);
      if ( v11 )
      {
        v69 = *(_QWORD *)(v11 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
        *(_DWORD *)v69 = 1415802729;
        *(_QWORD *)(v69 + 8) = 0LL;
        *(_QWORD *)(v69 + 16) = 0LL;
        *(_QWORD *)(v69 + 24) = a2;
      }
    }
  }
  p_MajorFunction = (unsigned int *)&a2->Tail.Overlay.CurrentStackLocation->MajorFunction;
  v71 = a2->AssociatedIrp.MasterIrp;
  v93 = v71;
  v72 = p_MajorFunction[6];
  v73 = p_MajorFunction[2];
  v74 = p_MajorFunction[4];
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v11 = *(_QWORD *)(a1 + 64);
      if ( v11 )
      {
        v75 = *(_QWORD *)(v11 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
        *(_DWORD *)v75 = 829714281;
        *(_QWORD *)(v75 + 8) = 0LL;
        *(_QWORD *)(v75 + 16) = v73;
        *(_QWORD *)(v75 + 24) = v74;
      }
    }
  }
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v11 = *(_QWORD *)(a1 + 64);
      if ( v11 )
      {
        v76 = *(_QWORD *)(v11 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
        *(_DWORD *)v76 = 846491497;
        *(_QWORD *)(v76 + 8) = 0LL;
        *(_QWORD *)(v76 + 16) = v71;
        *(_QWORD *)(v76 + 24) = v72;
      }
    }
  }
  Information = a2->IoStatus.Information;
  Status = a2->IoStatus.Status;
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v11 = *(_QWORD *)(a1 + 64);
      if ( v11 )
      {
        v79 = *(_QWORD *)(v11 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
        *(_DWORD *)v79 = 863268713;
        *(_QWORD *)(v79 + 8) = 0LL;
        *(_QWORD *)(v79 + 16) = Status;
        *(_QWORD *)(v79 + 24) = Information;
      }
    }
  }
  v80 = a2->IoStatus.Information;
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
        v72);
      v71 = v93;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_dd(
          WPP_GLOBAL_Control->DeviceExtension,
          v11,
          2,
          11,
          (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids,
          v74,
          v73);
        v71 = v93;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_dd(
          WPP_GLOBAL_Control->DeviceExtension,
          v11,
          2,
          12,
          (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids,
          a2->IoStatus.Status,
          v80);
        v71 = v93;
      }
    }
  }
  if ( (_BYTE)v80 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v83 = (__int128 *)log_xstr(v92, (unsigned __int8)v80, v71, Status);
      v85 = *(_QWORD *)(v84 + 64);
      v91 = *v83;
      WPP_RECORDER_SF__HEX_(v85, v86, 2, 14, (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids, (__int64)&v91);
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
  UsbhDecHubBusy(a1, v81, v90);
  a2->IoStatus.Status = DescriptorForPDO;
  IofCompleteRequest(a2, 0);
  return (unsigned int)DescriptorForPDO;
}
