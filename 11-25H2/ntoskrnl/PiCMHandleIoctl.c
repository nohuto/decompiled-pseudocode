/*
 * XREFs of PiCMHandleIoctl @ 0x1408C5B30
 * Callers:
 *     PiCMFastIoDeviceDispatch @ 0x1408C53B0 (PiCMFastIoDeviceDispatch.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140441F70 (PiControlFreeUserModeCallersBuffer.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PiCMDeleteDeviceInterfaceKey @ 0x1406ECB2C (PiCMDeleteDeviceInterfaceKey.c)
 *     PiCMCreateObject @ 0x1406ECC34 (PiCMCreateObject.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x1408C7380 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiCMCapturePropertyInputData @ 0x1408C7770 (PiCMCapturePropertyInputData.c)
 *     PiCMReturnBufferResultData @ 0x1408C7B70 (PiCMReturnBufferResultData.c)
 *     _CmGetDeviceRegProp @ 0x1408C7D10 (_CmGetDeviceRegProp.c)
 *     _PnpGetObjectPropertyWorker @ 0x1408CAF60 (_PnpGetObjectPropertyWorker.c)
 *     PiPnpRtlObjectActionCallback @ 0x1408CBF70 (PiPnpRtlObjectActionCallback.c)
 *     PiCMGetObjectList @ 0x140933C1C (PiCMGetObjectList.c)
 *     PiCMValidateDeviceInstance @ 0x140933E98 (PiCMValidateDeviceInstance.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1409342F0 (PiCMGetRelatedDeviceInstance.c)
 *     PiCMEnumerateSubKeys @ 0x1409520BC (PiCMEnumerateSubKeys.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x1409543C4 (PiCMGetDeviceInterfaceAlias.c)
 *     PiCMGetDeviceInterfaceList @ 0x140956D90 (PiCMGetDeviceInterfaceList.c)
 *     PiCMOpenDeviceInterfaceKey @ 0x14095B57C (PiCMOpenDeviceInterfaceKey.c)
 *     PiCMOpenDeviceKey @ 0x14095B740 (PiCMOpenDeviceKey.c)
 *     PiCMOpenObjectKey @ 0x14095B948 (PiCMOpenObjectKey.c)
 *     PiCMOpenClassKey @ 0x14095CAF8 (PiCMOpenClassKey.c)
 *     PiCMSetObjectProperty @ 0x14095D17C (PiCMSetObjectProperty.c)
 *     PiCMRegisterDeviceInterface @ 0x14095DC04 (PiCMRegisterDeviceInterface.c)
 *     PiCMSetRegistryProperty @ 0x14095E16C (PiCMSetRegistryProperty.c)
 *     PiCMDeviceAction @ 0x14095EA0C (PiCMDeviceAction.c)
 *     PiCMGetDeviceIdList @ 0x14095ED28 (PiCMGetDeviceIdList.c)
 *     PiCMGetDeviceStatus @ 0x1409A8E24 (PiCMGetDeviceStatus.c)
 *     _CmGetInstallerClassRegProp @ 0x1409AC648 (_CmGetInstallerClassRegProp.c)
 *     PiCMGetObjectPropertyKeys @ 0x140A62ED8 (PiCMGetObjectPropertyKeys.c)
 *     PiCMGetDeviceDepth @ 0x140A7C4B4 (PiCMGetDeviceDepth.c)
 *     PiCMCreateDevice @ 0x140AAF980 (PiCMCreateDevice.c)
 *     PiCMQueryRemove @ 0x140AB73CC (PiCMQueryRemove.c)
 *     PiCMDeleteDeviceKey @ 0x140AB8E44 (PiCMDeleteDeviceKey.c)
 *     PiCMUnregisterDeviceInterface @ 0x140ABBD2C (PiCMUnregisterDeviceInterface.c)
 *     PiCMDeleteClassKey @ 0x140ABC48C (PiCMDeleteClassKey.c)
 *     PiCMDeleteObject @ 0x140ABC5BC (PiCMDeleteObject.c)
 *     PiCMSetDeviceProblem @ 0x140ABD29C (PiCMSetDeviceProblem.c)
 *     PiCMDeleteDevice @ 0x140AC08A4 (PiCMDeleteDevice.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMHandleIoctl(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _DWORD *a5,
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
  _QWORD *Handle; // [rsp+28h] [rbp-D8h]
  unsigned int v33; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v34; // [rsp+64h] [rbp-9Ch] BYREF
  PVOID v35; // [rsp+68h] [rbp-98h]
  __int64 v36; // [rsp+70h] [rbp-90h]
  __int64 (__fastcall *v37)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // [rsp+78h] [rbp-88h]
  _QWORD v38[2]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v39; // [rsp+90h] [rbp-70h]
  __int64 v40; // [rsp+A0h] [rbp-60h]
  unsigned int *v41; // [rsp+A8h] [rbp-58h]
  __int64 v42; // [rsp+B0h] [rbp-50h]
  unsigned int v43; // [rsp+B8h] [rbp-48h]
  int v44; // [rsp+BCh] [rbp-44h]
  unsigned int *v45; // [rsp+C0h] [rbp-40h]
  __int64 v46; // [rsp+C8h] [rbp-38h]
  __int128 v47; // [rsp+D0h] [rbp-30h] BYREF
  PVOID v48[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v49; // [rsp+F0h] [rbp-10h]
  __int64 v50; // [rsp+100h] [rbp+0h]
  PVOID P; // [rsp+108h] [rbp+8h]
  int v52; // [rsp+110h] [rbp+10h]
  int v53; // [rsp+114h] [rbp+14h]

  v9 = a2;
  *a5 = 0;
  if ( a6 != 4655123 )
  {
    if ( a6 != 4655131 )
    {
      if ( a6 == 4655139 )
      {
        return (unsigned int)PiCMGetRelatedDeviceInstance(a1, a2, a3, a4, a7, (__int64)a5);
      }
      else
      {
        switch ( a6 )
        {
          case 4655107:
            v11 = PiCMGetDeviceIdList(a1, a2, a3, a4, a7, (__int64)a5);
            break;
          case 4655111:
            v11 = PiCMGetDeviceInterfaceList(a1, a2, a3, a4, a7, (__int64)a5);
            break;
          case 4655115:
            v11 = PiCMEnumerateSubKeys(a1, a2, a3, a4);
            break;
          case 4655119:
            v11 = PiCMGetObjectPropertyKeys(a1, a2, a3, a4, a7, (__int64)a5);
            break;
          case 4655127:
            v11 = PiCMSetObjectProperty(a1, a2, a3, a4, a7, (__int64)a5);
            break;
          case 4655135:
            v11 = PiCMSetRegistryProperty(a1, a2, a3, a4, a7, (__int64)a5);
            break;
          case 4655143:
            v11 = PiCMGetDeviceStatus(a1);
            break;
          case 4655147:
            v11 = PiCMGetDeviceDepth(a1, a2, a3, a4, a7, (__int64)a5);
            break;
          case 4655151:
            v11 = PiCMSetDeviceProblem(a1, a2, a3, a4);
            break;
          case 4655155:
            v11 = PiCMQueryRemove(a1, a2, a3, a4, a7, (__int64)a5);
            break;
          case 4655159:
            v11 = PiCMRegisterDeviceInterface(a1, a2, a3, a4, a7, (__int64)a5);
            break;
          case 4655163:
            v11 = PiCMUnregisterDeviceInterface(a1, a2, a3, a4, a7, (__int64)a5);
            break;
          case 4655167:
            v11 = PiCMGetDeviceInterfaceAlias(a1, a2, a3, a4, a7, (__int64)a5);
            break;
          case 4655171:
            v11 = PiCMValidateDeviceInstance(a1);
            break;
          case 4655175:
            v11 = PiCMCreateDevice(a1, a2, a3, a4, a7, (__int64)a5);
            break;
          case 4655179:
            v11 = PiCMDeleteDevice(a1, a2, a3, a4, a7, (__int64)a5);
            break;
          case 4655183:
            v11 = PiCMDeviceAction(a1, a2, a3, a4, a7, (__int64)a5);
            break;
          case 4655187:
            v11 = PiCMOpenDeviceInterfaceKey(a1, a2, a3, a4, a7, a5);
            break;
          case 4655191:
            v11 = PiCMDeleteDeviceInterfaceKey(a1, a2, a3, a4, a7, a5);
            break;
          case 4655195:
            v11 = PiCMOpenDeviceKey(a1, a2, a3, a4, a7, (__int64)a5);
            break;
          case 4655199:
            v11 = PiCMDeleteDeviceKey(a1, a2, a3, a4, a7, (__int64)a5);
            break;
          case 4655203:
            v11 = PiCMOpenClassKey(a1, a2, a3, a4, a7, a5);
            break;
          case 4655207:
            v11 = PiCMDeleteClassKey(a1, a2, a3, a4, a7, a5);
            break;
          case 4655211:
            v11 = PiCMOpenObjectKey(a1, a2, a3, a4, a7, (__int64)a5);
            break;
          case 4655215:
            v11 = PiCMCreateObject(a1, a2, a3, a4, a7, a5);
            break;
          case 4655219:
            v11 = PiCMDeleteObject(a1, a2, a3, a4, a7, a5);
            break;
          case 4655223:
            v11 = PiCMGetObjectList(a1, a2, a3, a4, a7, (__int64)a5);
            break;
          default:
            v11 = -1073741637;
            break;
        }
      }
      return (unsigned int)v11;
    }
    v34 = 0;
    v33 = 0;
    v47 = 0LL;
    v50 = 0LL;
    Pool2 = 0LL;
    *(_OWORD *)v48 = 0LL;
    v49 = 0LL;
    v11 = PiCMCaptureRegistryPropertyInputData(a1, a2, a7, &v47);
    if ( v11 < 0 )
      goto LABEL_42;
    v17 = (int)v48[0];
    if ( v48[0] && !DWORD1(v47) && !*((_QWORD *)&v49 + 1) && !(_DWORD)v50 && !(_DWORD)v49 && a3 && a4 >= 0x14 )
    {
      if ( a4 != 20 )
      {
        Pool2 = (void *)ExAllocatePool2(0x100uLL);
        if ( !Pool2 )
        {
          v20 = -1073741670;
          goto LABEL_39;
        }
        v17 = (int)v48[0];
      }
      switch ( HIDWORD(v48[1]) )
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
          switch ( HIDWORD(v48[1]) )
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
      v33 = a4 - 20;
      if ( DWORD2(v47) == 1 )
      {
        DeviceRegProp = CmGetDeviceRegProp(PiPnpRtlCtx, v17, 0, v18, (__int64)&v34, (__int64)Pool2, (__int64)&v33, 0);
        goto LABEL_38;
      }
      if ( DWORD2(v47) == 2 )
      {
        DeviceRegProp = CmGetInstallerClassRegProp(
                          PiPnpRtlCtx,
                          v17,
                          0,
                          v18,
                          (__int64)&v34,
                          (__int64)Pool2,
                          (__int64)&v33);
LABEL_38:
        v20 = DeviceRegProp;
        if ( DeviceRegProp >= 0 )
        {
          LODWORD(Handle) = HIDWORD(v50);
          v21 = PiCMReturnBufferResultData((unsigned int)DeviceRegProp, v33, v34, Pool2, v33, Handle, a3, a4, a5);
LABEL_40:
          v11 = v21;
          if ( Pool2 )
            ExFreePoolWithTag(Pool2, 0x34706E50u);
LABEL_42:
          PreviousMode = KeGetCurrentThread()->PreviousMode;
          if ( v48[0] && PreviousMode )
            ExFreePoolWithTag(v48[0], 0);
          if ( *((_QWORD *)&v49 + 1) )
            PiControlFreeUserModeCallersBuffer(PreviousMode, *((void **)&v49 + 1));
          return (unsigned int)v11;
        }
LABEL_39:
        LODWORD(Handle) = HIDWORD(v50);
        v21 = PiCMReturnBufferResultData(v20, v33, v34, 0LL, 0, Handle, a3, a4, a5);
        goto LABEL_40;
      }
    }
LABEL_114:
    v20 = -1073741811;
    goto LABEL_39;
  }
  memset_0(&v47, 0, 0x48uLL);
  v34 = 0;
  v33 = 0;
  v12 = 0LL;
  v11 = PiCMCapturePropertyInputData(a1, v9, a7, &v47);
  if ( v11 >= 0 )
  {
    v13 = v48[0];
    v35 = v48[0];
    if ( !v48[0] || DWORD1(v47) || P || v52 || (_DWORD)v50 || !a3 || a4 < 0x14 )
      goto LABEL_18;
    if ( DWORD2(v47) == 1 )
    {
      v14 = 1;
      goto LABEL_50;
    }
    if ( DWORD2(v47) == 65538 )
    {
      v14 = 8;
    }
    else
    {
      if ( SDWORD2(v47) <= 6 )
      {
        switch ( DWORD2(v47) )
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
      switch ( DWORD2(v47) )
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
      v12 = (void *)ExAllocatePool2(0x100uLL);
      if ( !v12 )
      {
        v15 = -1073741670;
        goto LABEL_68;
      }
      v13 = v35;
    }
    v24 = PiPnpRtlCtx;
    v40 = (__int64)&v48[1] + 4;
    v36 = *(_QWORD *)&PiPnpRtlCtx;
    v41 = &v34;
    v25 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))(*(_QWORD *)&PiPnpRtlCtx + 488LL);
    v45 = &v33;
    v38[0] = 0LL;
    v38[1] = 0LL;
    v44 = 0;
    v46 = 0LL;
    v37 = v25;
    v39 = 0LL;
    v42 = (__int64)v12;
    v43 = a4 - 20;
    if ( v25 )
    {
      if ( v25 == PiPnpRtlObjectActionCallback )
      {
        v26 = PiPnpRtlObjectActionCallback(*(_QWORD *)&PiPnpRtlCtx, v13, v14, 8LL, 1, v38);
      }
      else
      {
        Handle = v38;
        v26 = guard_dispatch_icall_no_overrides(*(_QWORD *)&PiPnpRtlCtx);
      }
      if ( v26 == -1073741822 )
      {
        v24 = v36;
        v27 = 0LL;
      }
      else
      {
        if ( v26 == -1073741536 )
        {
LABEL_58:
          v15 = v38[0];
          goto LABEL_67;
        }
        if ( v26 )
        {
LABEL_120:
          v15 = -1073741595;
          goto LABEL_68;
        }
        v27 = v37;
        v24 = v36;
      }
    }
    else
    {
      v27 = 0LL;
    }
    ObjectPropertyWorker = PnpGetObjectPropertyWorker(
                             v24,
                             (_DWORD)v35,
                             v14,
                             v39,
                             *((__int64 *)&v39 + 1),
                             v40,
                             (__int64)v41,
                             v42,
                             v43,
                             (__int64)v45,
                             v46);
    v15 = ObjectPropertyWorker;
    if ( !v27 )
      goto LABEL_67;
    LODWORD(v38[0]) = ObjectPropertyWorker;
    Handle = v38;
    v29 = v27 == PiPnpRtlObjectActionCallback
        ? PiPnpRtlObjectActionCallback(v36, v35, v14, 8LL, 2, v38)
        : guard_dispatch_icall_no_overrides(v36);
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
          LODWORD(Handle) = v53;
          v30 = PiCMReturnBufferResultData((unsigned int)v15, v33, v34, v12, v33, Handle, a3, a4, a5);
LABEL_69:
          v11 = v30;
          if ( v12 )
            ExFreePoolWithTag(v12, 0x34706E50u);
          goto LABEL_71;
        }
LABEL_68:
        LODWORD(Handle) = v53;
        v30 = PiCMReturnBufferResultData((unsigned int)v15, v33, v34, 0LL, 0, Handle, a3, a4, a5);
        goto LABEL_69;
    }
    goto LABEL_120;
  }
LABEL_71:
  v31 = KeGetCurrentThread()->PreviousMode;
  if ( v48[0] && v31 )
    ExFreePoolWithTag(v48[0], 0);
  if ( P && v31 )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v11;
}
