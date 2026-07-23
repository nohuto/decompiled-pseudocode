/*
 * XREFs of PiCMHandleIoctl @ 0x1408C13C0
 * Callers:
 *     PiCMFastIoDeviceDispatch @ 0x1408C0C50 (PiCMFastIoDeviceDispatch.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140438B40 (PiControlFreeUserModeCallersBuffer.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x1406F62B8 (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMCreateObject @ 0x1406F63C0 (PiCMCreateObject.c)
 *     PiCMDeleteDevice @ 0x1406F6578 (PiCMDeleteDevice.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x1408B31B0 (PiCMGetDeviceInterfaceAlias.c)
 *     PiCMGetDeviceStatus @ 0x1408BACCC (PiCMGetDeviceStatus.c)
 *     PiCMGetObjectList @ 0x1408BB9D0 (PiCMGetObjectList.c)
 *     PiCMValidateDeviceInstance @ 0x1408BBC4C (PiCMValidateDeviceInstance.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1408BC0A0 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMCapturePropertyInputData @ 0x1408C2BE0 (PiCMCapturePropertyInputData.c)
 *     PiCMReturnBufferResultData @ 0x1408C3020 (PiCMReturnBufferResultData.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x1408C3160 (PiCMCaptureRegistryPropertyInputData.c)
 *     _CmGetDeviceRegProp @ 0x1408C35E0 (_CmGetDeviceRegProp.c)
 *     _PnpGetObjectPropertyWorker @ 0x1408CB050 (_PnpGetObjectPropertyWorker.c)
 *     PiPnpRtlObjectActionCallback @ 0x1408CC090 (PiPnpRtlObjectActionCallback.c)
 *     PiCMOpenClassKey @ 0x14094AF58 (PiCMOpenClassKey.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x14094B1EC (PiCMOpenDeviceInterfaceKey.c)
 *     PiCMOpenDeviceKey @ 0x14094B3B0 (PiCMOpenDeviceKey.c)
 *     PiCMOpenObjectKey @ 0x14094B5B8 (PiCMOpenObjectKey.c)
 *     PiCMEnumerateSubKeys @ 0x14097D49C (PiCMEnumerateSubKeys.c)
 *     _CmGetInstallerClassRegProp @ 0x14097F09C (_CmGetInstallerClassRegProp.c)
 *     PiCMSetRegistryProperty @ 0x1409CD848 (PiCMSetRegistryProperty.c)
 *     PiCMSetObjectProperty @ 0x1409EFF1C (PiCMSetObjectProperty.c)
 *     PiCMGetDeviceInterfaceList @ 0x1409FF400 (PiCMGetDeviceInterfaceList.c)
 *     PiCMGetDeviceIdList @ 0x140A15D5C (PiCMGetDeviceIdList.c)
 *     PiCMGetObjectPropertyKeys @ 0x140A5DA64 (PiCMGetObjectPropertyKeys.c)
 *     PiCMRegisterDeviceInterface @ 0x140A79094 (PiCMRegisterDeviceInterface.c)
 *     PiCMGetDeviceDepth @ 0x140A7A54C (PiCMGetDeviceDepth.c)
 *     PiCMDeviceAction @ 0x140A80158 (PiCMDeviceAction.c)
 *     PiCMCreateDevice @ 0x140AB39A4 (PiCMCreateDevice.c)
 *     PiCMQueryRemove @ 0x140AB672C (PiCMQueryRemove.c)
 *     PiCMDeleteDeviceKey @ 0x140AB7F94 (PiCMDeleteDeviceKey.c)
 *     PiCMUnregisterDeviceInterface @ 0x140ABB188 (PiCMUnregisterDeviceInterface.c)
 *     PiCMDeleteClassKey @ 0x140ABB8E4 (PiCMDeleteClassKey.c)
 *     PiCMDeleteObject @ 0x140ABBA14 (PiCMDeleteObject.c)
 *     PiCMSetDeviceProblem @ 0x140ABC210 (PiCMSetDeviceProblem.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMHandleIoctl(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        unsigned int a4,
        _DWORD *Handle,
        int a6,
        unsigned int a7)
{
  unsigned int v9; // r12d
  int v11; // ebx
  void *v12; // r14
  PVOID v13; // rdx
  unsigned int v14; // r13d
  int v15; // ebx
  void *Pool2; // r14
  int v17; // edx
  int v18; // r12d
  int DeviceRegProp; // eax
  unsigned int v20; // ebx
  int v21; // eax
  char PreviousMode; // di
  int v24; // ecx
  __int64 (__fastcall *v25)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rax
  int v26; // eax
  __int64 (__fastcall *v27)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // r12
  int ObjectPropertyWorker; // eax
  int v29; // eax
  int v30; // eax
  char v31; // di
  unsigned int v32; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v33; // [rsp+64h] [rbp-9Ch] BYREF
  PVOID v34; // [rsp+68h] [rbp-98h]
  __int64 v35; // [rsp+70h] [rbp-90h]
  __int64 (__fastcall *v36)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // [rsp+78h] [rbp-88h]
  _QWORD v37[2]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v38; // [rsp+90h] [rbp-70h]
  __int64 v39; // [rsp+A0h] [rbp-60h]
  unsigned int *v40; // [rsp+A8h] [rbp-58h]
  __int64 v41; // [rsp+B0h] [rbp-50h]
  unsigned int v42; // [rsp+B8h] [rbp-48h]
  int v43; // [rsp+BCh] [rbp-44h]
  unsigned int *v44; // [rsp+C0h] [rbp-40h]
  __int64 v45; // [rsp+C8h] [rbp-38h]
  __int128 v46; // [rsp+D0h] [rbp-30h] BYREF
  PVOID v47[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v48; // [rsp+F0h] [rbp-10h]
  __int64 v49; // [rsp+100h] [rbp+0h]
  PVOID P; // [rsp+108h] [rbp+8h]
  int v51; // [rsp+110h] [rbp+10h]
  int v52; // [rsp+114h] [rbp+14h]

  v9 = a2;
  *Handle = 0;
  if ( a6 != 4655123 )
  {
    if ( a6 != 4655131 )
    {
      if ( a6 == 4655139 )
      {
        return (unsigned int)PiCMGetRelatedDeviceInstance(a1, a2, (__int64)a3, a4, a7, Handle);
      }
      else
      {
        switch ( a6 )
        {
          case 4655107:
            v11 = PiCMGetDeviceIdList(a1, a2, (_DWORD)a3, a4, a7, (__int64)Handle);
            break;
          case 4655111:
            v11 = PiCMGetDeviceInterfaceList(a1, a2, (_DWORD)a3, a4, a7, (__int64)Handle);
            break;
          case 4655115:
            v11 = PiCMEnumerateSubKeys(a1, a2, (_DWORD)a3, a4);
            break;
          case 4655119:
            v11 = PiCMGetObjectPropertyKeys(a1, a2, (_DWORD)a3, a4, a7, (__int64)Handle);
            break;
          case 4655127:
            v11 = PiCMSetObjectProperty(a1, a2, (_DWORD)a3, a4, a7, (__int64)Handle);
            break;
          case 4655135:
            v11 = PiCMSetRegistryProperty(a1, a2, (_DWORD)a3, a4, a7, (__int64)Handle);
            break;
          case 4655143:
            v11 = PiCMGetDeviceStatus(a1, a2, a3, a4, a7, (__int64)Handle);
            break;
          case 4655147:
            v11 = PiCMGetDeviceDepth(a1, a2, (_DWORD)a3, a4, a7, (__int64)Handle);
            break;
          case 4655151:
            v11 = PiCMSetDeviceProblem(a1, a2, (_DWORD)a3, a4);
            break;
          case 4655155:
            v11 = PiCMQueryRemove(a1, a2, (_DWORD)a3, a4, a7, (__int64)Handle);
            break;
          case 4655159:
            v11 = PiCMRegisterDeviceInterface(a1, a2, (_DWORD)a3, a4, a7, (__int64)Handle);
            break;
          case 4655163:
            v11 = PiCMUnregisterDeviceInterface(a1, a2, (_DWORD)a3, a4, a7, (__int64)Handle);
            break;
          case 4655167:
            v11 = PiCMGetDeviceInterfaceAlias(a1, a2, (__int64)a3, a4, a7, Handle);
            break;
          case 4655171:
            v11 = PiCMValidateDeviceInstance(a1, a2, (__int64)a3, a4, a7, Handle);
            break;
          case 4655175:
            v11 = PiCMCreateDevice(a1, a2, (_DWORD)a3, a4, a7, (__int64)Handle);
            break;
          case 4655179:
            v11 = PiCMDeleteDevice(a1, a2, (__int64)a3, a4, a7, Handle);
            break;
          case 4655183:
            v11 = PiCMDeviceAction(a1, a2, (_DWORD)a3, a4, a7, (__int64)Handle);
            break;
          case 4655187:
            v11 = PiCMOpenDeviceInterfaceKey(a1, a2, (int)a3, a4, a7, Handle);
            break;
          case 4655191:
            v11 = PiCMDeleteDeviceInterfaceKey(a1, a2, (__int64)a3, a4, a7, Handle);
            break;
          case 4655195:
            v11 = PiCMOpenDeviceKey(a1, a2, (_DWORD)a3, a4, a7, (__int64)Handle);
            break;
          case 4655199:
            v11 = PiCMDeleteDeviceKey(a1, a2, (_DWORD)a3, a4, a7, (__int64)Handle);
            break;
          case 4655203:
            v11 = PiCMOpenClassKey(a1, a2, (int)a3, a4, a7, Handle);
            break;
          case 4655207:
            v11 = PiCMDeleteClassKey(a1, a2, (int)a3, a4, a7, Handle);
            break;
          case 4655211:
            v11 = PiCMOpenObjectKey(a1, a2, (_DWORD)a3, a4, a7, (__int64)Handle);
            break;
          case 4655215:
            v11 = PiCMCreateObject(a1, a2, (__int64)a3, a4, a7, Handle);
            break;
          case 4655219:
            v11 = PiCMDeleteObject(a1, a2, (int)a3, a4, a7, Handle);
            break;
          case 4655223:
            v11 = PiCMGetObjectList(a1, a2, (__int64)a3, a4, a7, (__int64)Handle);
            break;
          default:
            v11 = -1073741637;
            break;
        }
      }
      return (unsigned int)v11;
    }
    v33 = 0;
    v32 = 0;
    v46 = 0LL;
    v49 = 0LL;
    Pool2 = 0LL;
    *(_OWORD *)v47 = 0LL;
    v48 = 0LL;
    v11 = PiCMCaptureRegistryPropertyInputData(a1, a2, a7, &v46);
    if ( v11 < 0 )
      goto LABEL_42;
    v17 = (int)v47[0];
    if ( v47[0] && !DWORD1(v46) && !*((_QWORD *)&v48 + 1) && !(_DWORD)v49 && !(_DWORD)v48 && a3 && a4 >= 0x14 )
    {
      if ( a4 != 20 )
      {
        Pool2 = (void *)ExAllocatePool2(0x100uLL, a4 - 20, 0x34706E50u);
        if ( !Pool2 )
        {
          v20 = -1073741670;
          goto LABEL_39;
        }
        v17 = (int)v47[0];
      }
      switch ( HIDWORD(v47[1]) )
      {
        case 2:
          v18 = 2;
          break;
        case 9:
          v18 = 9;
          break;
        case 0xA:
          v18 = 10;
          break;
        default:
          switch ( HIDWORD(v47[1]) )
          {
            case 1:
              v18 = 1;
              goto LABEL_36;
            case 3:
              v18 = 3;
              goto LABEL_36;
            case 4:
              v18 = 4;
              goto LABEL_36;
            case 5:
              v18 = 5;
              goto LABEL_36;
            case 6:
              v18 = 6;
              goto LABEL_36;
            case 7:
              v18 = 7;
              goto LABEL_36;
            case 8:
              v18 = 8;
              goto LABEL_36;
            case 0xB:
              v18 = 11;
              goto LABEL_36;
            case 0xC:
              v18 = 12;
              goto LABEL_36;
            case 0xD:
              v18 = 13;
              goto LABEL_36;
            case 0xE:
              v18 = 14;
              goto LABEL_36;
            case 0xF:
              v18 = 15;
              goto LABEL_36;
            case 0x10:
              v18 = 16;
              goto LABEL_36;
            case 0x11:
              v18 = 17;
              goto LABEL_36;
            case 0x12:
              v18 = 18;
              goto LABEL_36;
            case 0x13:
              v18 = 19;
              goto LABEL_36;
            case 0x14:
              v18 = 20;
              goto LABEL_36;
            case 0x15:
              v18 = 21;
              goto LABEL_36;
            case 0x16:
              v18 = 22;
              goto LABEL_36;
            case 0x17:
              v18 = 23;
              goto LABEL_36;
            case 0x18:
              v18 = 24;
              goto LABEL_36;
            case 0x19:
              v18 = 25;
              goto LABEL_36;
            case 0x1A:
              v18 = 26;
              goto LABEL_36;
            case 0x1B:
              v18 = 27;
              goto LABEL_36;
            case 0x1C:
              v18 = 28;
              goto LABEL_36;
            case 0x1D:
              v18 = 29;
              goto LABEL_36;
            case 0x1E:
              v18 = 30;
              goto LABEL_36;
            case 0x1F:
              v18 = 31;
              goto LABEL_36;
            case 0x20:
              v18 = 32;
              goto LABEL_36;
            case 0x21:
              v18 = 33;
              goto LABEL_36;
            case 0x22:
              v18 = 34;
              goto LABEL_36;
            case 0x23:
              v18 = 35;
              goto LABEL_36;
            case 0x24:
              v18 = 36;
              goto LABEL_36;
            case 0x25:
              v18 = 37;
              goto LABEL_36;
            default:
              goto LABEL_114;
          }
      }
LABEL_36:
      v32 = a4 - 20;
      if ( DWORD2(v46) == 1 )
      {
        DeviceRegProp = CmGetDeviceRegProp(PiPnpRtlCtx, v17, 0, v18, (__int64)&v33, (__int64)Pool2, (__int64)&v32, 0);
        goto LABEL_38;
      }
      if ( DWORD2(v46) == 2 )
      {
        DeviceRegProp = CmGetInstallerClassRegProp(
                          PiPnpRtlCtx,
                          v17,
                          0,
                          v18,
                          (__int64)&v33,
                          (__int64)Pool2,
                          (__int64)&v32);
LABEL_38:
        v20 = DeviceRegProp;
        if ( DeviceRegProp >= 0 )
        {
          v21 = PiCMReturnBufferResultData(
                  (unsigned int)DeviceRegProp,
                  v32,
                  v33,
                  Pool2,
                  v32,
                  HIDWORD(v49),
                  a3,
                  a4,
                  Handle);
LABEL_40:
          v11 = v21;
          if ( Pool2 )
            ExFreePoolWithTag(Pool2, 0x34706E50u);
LABEL_42:
          PreviousMode = KeGetCurrentThread()->PreviousMode;
          if ( v47[0] && PreviousMode )
            ExFreePoolWithTag(v47[0], 0);
          if ( *((_QWORD *)&v48 + 1) )
            PiControlFreeUserModeCallersBuffer(PreviousMode, *((void **)&v48 + 1));
          return (unsigned int)v11;
        }
LABEL_39:
        v21 = PiCMReturnBufferResultData(v20, v32, v33, 0LL, 0, HIDWORD(v49), a3, a4, Handle);
        goto LABEL_40;
      }
    }
LABEL_114:
    v20 = -1073741811;
    goto LABEL_39;
  }
  memset_0(&v46, 0, 0x48uLL);
  v33 = 0;
  v32 = 0;
  v12 = 0LL;
  v11 = PiCMCapturePropertyInputData(a1, v9, a7, &v46);
  if ( v11 >= 0 )
  {
    v13 = v47[0];
    v34 = v47[0];
    if ( !v47[0] || DWORD1(v46) || P || v51 || (_DWORD)v49 || !a3 || a4 < 0x14 )
      goto LABEL_18;
    if ( DWORD2(v46) == 1 )
    {
      v14 = 1;
      goto LABEL_50;
    }
    if ( DWORD2(v46) == 65538 )
    {
      v14 = 8;
    }
    else
    {
      if ( SDWORD2(v46) <= 6 )
      {
        switch ( DWORD2(v46) )
        {
          case 6:
            v14 = 6;
            break;
          case 2:
            v14 = 2;
            break;
          case 3:
            v14 = 4;
            break;
          case 4:
            v14 = 3;
            break;
          case 5:
            v14 = 5;
            break;
          default:
            goto LABEL_18;
        }
        goto LABEL_50;
      }
      switch ( DWORD2(v46) )
      {
        case 0x10001:
          v14 = 7;
          break;
        case 0x10003:
          v14 = 9;
          break;
        case 0x10004:
          v14 = 10;
          break;
        case 0x10005:
          v14 = 11;
          break;
        default:
          goto LABEL_18;
      }
    }
    if ( !PiDrvDbCtx )
    {
LABEL_18:
      v15 = -1073741811;
      goto LABEL_68;
    }
LABEL_50:
    if ( a4 != 20 )
    {
      v12 = (void *)ExAllocatePool2(0x100uLL, a4 - 20, 0x34706E50u);
      if ( !v12 )
      {
        v15 = -1073741670;
        goto LABEL_68;
      }
      v13 = v34;
    }
    v24 = PiPnpRtlCtx;
    v39 = (__int64)&v47[1] + 4;
    v35 = *(_QWORD *)&PiPnpRtlCtx;
    v40 = &v33;
    v25 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))(*(_QWORD *)&PiPnpRtlCtx + 488LL);
    v44 = &v32;
    v37[0] = 0LL;
    v37[1] = 0LL;
    v43 = 0;
    v45 = 0LL;
    v36 = v25;
    v38 = 0LL;
    v41 = (__int64)v12;
    v42 = a4 - 20;
    if ( v25 )
    {
      if ( v25 == PiPnpRtlObjectActionCallback )
        v26 = PiPnpRtlObjectActionCallback(*(_QWORD *)&PiPnpRtlCtx, v13, v14, 8LL, 1, v37);
      else
        v26 = guard_dispatch_icall_no_overrides(*(_QWORD *)&PiPnpRtlCtx, v13);
      if ( v26 == -1073741822 )
      {
        v24 = v35;
        v27 = 0LL;
      }
      else
      {
        if ( v26 == -1073741536 )
        {
LABEL_58:
          v15 = v37[0];
          goto LABEL_67;
        }
        if ( v26 )
        {
LABEL_119:
          v15 = -1073741595;
          goto LABEL_68;
        }
        v27 = v36;
        v24 = v35;
      }
    }
    else
    {
      v27 = 0LL;
    }
    ObjectPropertyWorker = PnpGetObjectPropertyWorker(
                             v24,
                             (_DWORD)v34,
                             v14,
                             v38,
                             *((__int64 *)&v38 + 1),
                             v39,
                             (__int64)v40,
                             v41,
                             v42,
                             (__int64)v44,
                             v45);
    v15 = ObjectPropertyWorker;
    if ( !v27 )
      goto LABEL_67;
    LODWORD(v37[0]) = ObjectPropertyWorker;
    v29 = v27 == PiPnpRtlObjectActionCallback
        ? PiPnpRtlObjectActionCallback(v35, v34, v14, 8LL, 2, v37)
        : guard_dispatch_icall_no_overrides(v35, v34);
    switch ( v29 )
    {
      case -1073741822:
        goto LABEL_67;
      case -1073741536:
        goto LABEL_58;
      case 0:
LABEL_67:
        if ( v15 >= 0 )
        {
          v30 = PiCMReturnBufferResultData((unsigned int)v15, v32, v33, v12, v32, v52, a3, a4, Handle);
LABEL_69:
          v11 = v30;
          if ( v12 )
            ExFreePoolWithTag(v12, 0x34706E50u);
          goto LABEL_71;
        }
LABEL_68:
        v30 = PiCMReturnBufferResultData((unsigned int)v15, v32, v33, 0LL, 0, v52, a3, a4, Handle);
        goto LABEL_69;
    }
    goto LABEL_119;
  }
LABEL_71:
  v31 = KeGetCurrentThread()->PreviousMode;
  if ( v47[0] && v31 )
    ExFreePoolWithTag(v47[0], 0);
  if ( P && v31 )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v11;
}
