/*
 * XREFs of PipCallDriverAddDevice @ 0x1409ACAC0
 * Callers:
 *     PiProcessAddBootDevices @ 0x140717E94 (PiProcessAddBootDevices.c)
 *     PipProcessDevNodeTree @ 0x1408355F8 (PipProcessDevNodeTree.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x140359D98 (IoGetAttachedDeviceReferenceWithTag.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x14045CBF0 (RtlInitUnicodeStringEx.c)
 *     PipSetDevNodeState @ 0x140493D48 (PipSetDevNodeState.c)
 *     IovUtilMarkStack @ 0x1404ABDD4 (IovUtilMarkStack.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwUpdateWnfStateData @ 0x14069ED60 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PipDmgEnforceEnumerationPolicy @ 0x140725974 (PipDmgEnforceEnumerationPolicy.c)
 *     PipSetDevNodeProblem @ 0x140831BCC (PipSetDevNodeProblem.c)
 *     PnpRequestDeviceRemoval @ 0x140832268 (PnpRequestDeviceRemoval.c)
 *     PnpCallAddDevice @ 0x140832FB8 (PnpCallAddDevice.c)
 *     PipSetDevNodeFlags @ 0x1408331E8 (PipSetDevNodeFlags.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1408366A8 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     _CmGetDeviceRegProp @ 0x1408C7D10 (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x1408C89F0 (_CmOpenDeviceRegKey.c)
 *     _PnpGetObjectProperty @ 0x1408CB8A0 (_PnpGetObjectProperty.c)
 *     _CmSetDeviceRegProp @ 0x140950F0C (_CmSetDeviceRegProp.c)
 *     _PnpSetObjectProperty @ 0x1409558B8 (_PnpSetObjectProperty.c)
 *     _CmOpenInstallerClassRegKey @ 0x1409ABF34 (_CmOpenInstallerClassRegKey.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x1409ABF7C (PipChangeDeviceObjectFromRegistryProperties.c)
 *     PiDmaGuardProcessPreAddDevice @ 0x1409AD200 (PiDmaGuardProcessPreAddDevice.c)
 *     PipClearDevNodeProblem @ 0x1409AD2C0 (PipClearDevNodeProblem.c)
 *     PnpCallDriverQueryServiceHelper @ 0x1409AD6E4 (PnpCallDriverQueryServiceHelper.c)
 *     IopBootLog @ 0x140A76824 (IopBootLog.c)
 *     IopQueryLegacyBusInformation @ 0x140A768F0 (IopQueryLegacyBusInformation.c)
 *     PnpUnloadAttachedDriver @ 0x140A8BD5C (PnpUnloadAttachedDriver.c)
 *     PnpGetStableSystemBootTime @ 0x140AA9CA4 (PnpGetStableSystemBootTime.c)
 *     PiProcessDriversLoadedOnSecureDevice @ 0x140AAD2B4 (PiProcessDriversLoadedOnSecureDevice.c)
 *     IopSafebootDriverLoad @ 0x140AB556C (IopSafebootDriverLoad.c)
 *     IopInsertLegacyBusDeviceNode @ 0x140AB7C0C (IopInsertLegacyBusDeviceNode.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipCallDriverAddDevice(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  char v4; // r12
  char v5; // r13
  __int64 v6; // rax
  const WCHAR *v7; // rdx
  int v8; // ebx
  unsigned int v9; // eax
  __int64 v10; // rax
  int ObjectProperty; // ebx
  const WCHAR *v12; // rdx
  const WCHAR *v13; // rdx
  __int64 v14; // r14
  unsigned __int8 i; // bl
  _QWORD *v16; // r12
  __int64 *v17; // r15
  __int64 *j; // rsi
  BOOL v19; // r9d
  int v20; // eax
  __int64 v21; // rdx
  int v22; // r9d
  int v23; // r8d
  int v24; // eax
  _DWORD *v25; // rbx
  _DWORD *v26; // rsi
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r8
  PVOID v30; // r15
  int v32; // eax
  __int64 v33; // rdx
  int v34; // r11d
  __int64 v35; // r8
  __int64 v36; // r9
  void *Pool2; // rbx
  int DeviceRegProp; // eax
  int v39; // eax
  PVOID v40; // rsi
  int v41; // eax
  const WCHAR *v42; // rdx
  __int64 v43; // rdx
  int v44; // eax
  const WNF_STATE_NAME *v45; // rbx
  ULONG v46; // esi
  int v47; // eax
  int v48; // eax
  int v49; // eax
  const WCHAR *v50; // rdx
  __int64 v51; // rdx
  __int64 *v52; // rsi
  __int64 v53; // rdi
  PVOID *v54; // r14
  ULONG v55; // [rsp+60h] [rbp-A0h] BYREF
  ULONG v56; // [rsp+64h] [rbp-9Ch] BYREF
  char v57; // [rsp+68h] [rbp-98h]
  int v58; // [rsp+6Ch] [rbp-94h] BYREF
  int v59; // [rsp+70h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v61; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int16 v62; // [rsp+84h] [rbp-7Ch]
  int v63; // [rsp+88h] [rbp-78h] BYREF
  PVOID P; // [rsp+90h] [rbp-70h] BYREF
  HANDLE v65; // [rsp+98h] [rbp-68h] BYREF
  LOGICAL v66; // [rsp+A0h] [rbp-60h] BYREF
  PVOID Object; // [rsp+A8h] [rbp-58h]
  __int64 v68; // [rsp+B0h] [rbp-50h] BYREF
  PVOID AttachedDeviceReferenceWithTag; // [rsp+B8h] [rbp-48h]
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v71; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v72; // [rsp+D8h] [rbp-28h]
  _QWORD v73[2]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v74[3]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v75; // [rsp+108h] [rbp+8h]
  ACL SourceString[10]; // [rsp+120h] [rbp+20h] BYREF

  v57 = 0;
  v65 = 0LL;
  v58 = 0;
  v61 = 0;
  v4 = 0;
  Handle = 0LL;
  v5 = 0;
  v62 = 0;
  v71 = 0LL;
  v55 = 0;
  v59 = 0;
  v66 = 0;
  memset_0(v73, 0, 0x40uLL);
  v6 = 6LL;
  DestinationString = 0LL;
  v72 = 6LL;
  v56 = 0;
  v68 = 0LL;
  v63 = 0;
  *(_WORD *)&SourceString[0].AclRevision = 0;
  P = 0LL;
  Object = 0LL;
  AttachedDeviceReferenceWithTag = 0LL;
  if ( *(_BYTE *)(BugCheckParameter2 + 688) && !*(_BYTE *)(a2 + 4) )
  {
    v8 = -1073741823;
    goto LABEL_173;
  }
  v7 = *(const WCHAR **)(BugCheckParameter2 + 48);
  *(_BYTE *)(BugCheckParameter2 + 688) = 0;
  v8 = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, v7, 16, 0, 131097, 0, (__int64)&Handle, 0LL);
  if ( v8 < 0 )
    goto LABEL_74;
  if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 32) + 48LL) & 0x2000000) != 0
    && ((int)PnpGetObjectProperty(
               *(_QWORD **)&PiPnpRtlCtx,
               *(const WCHAR **)(BugCheckParameter2 + 48),
               1u,
               Handle,
               0LL,
               (__int64)&DEVPKEY_Device_DebuggerSafe,
               &v63,
               &v61,
               4u,
               (__int64)&v56,
               0) < 0
     || v63 != 7
     || v56 != 4
     || !v61) )
  {
    v23 = 53;
LABEL_98:
    v22 = 0;
    goto LABEL_32;
  }
  if ( *(_DWORD *)(BugCheckParameter2 + 660) == -1 )
  {
    if ( PnpQueryProximityNode
      && (int)PnpGetObjectProperty(
                *(_QWORD **)&PiPnpRtlCtx,
                *(const WCHAR **)(BugCheckParameter2 + 48),
                1u,
                Handle,
                0LL,
                (__int64)&DEVPKEY_Device_Numa_Proximity_Domain,
                &v63,
                &v61,
                4u,
                (__int64)&v56,
                0) >= 0
      && v61 <= 0xFF
      && (int)guard_dispatch_icall_no_overrides(v61) >= 0 )
    {
      *(_DWORD *)(BugCheckParameter2 + 660) = v62;
    }
    v9 = *(_DWORD *)(BugCheckParameter2 + 660);
    if ( v9 == -1 )
    {
      v10 = *(_QWORD *)(BugCheckParameter2 + 16);
      if ( !v10 )
      {
        *(_DWORD *)(BugCheckParameter2 + 660) = -2;
        goto LABEL_11;
      }
      v9 = *(_DWORD *)(v10 + 660);
      *(_DWORD *)(BugCheckParameter2 + 660) = v9;
    }
    if ( v9 != -2 )
    {
      v33 = *(_QWORD *)(BugCheckParameter2 + 48);
      v61 = v9;
      PnpSetObjectProperty(
        *(__int64 *)&PiPnpRtlCtx,
        v33,
        1,
        (__int64)Handle,
        0LL,
        (__int64)&DEVPKEY_Device_Numa_Node,
        7,
        (__int64)&v61,
        4u,
        0);
    }
  }
LABEL_11:
  ObjectProperty = PnpGetObjectProperty(
                     *(_QWORD **)&PiPnpRtlCtx,
                     *(const WCHAR **)(BugCheckParameter2 + 48),
                     1u,
                     Handle,
                     0LL,
                     (__int64)&DEVPKEY_Device_PreventDriverLoad,
                     &v63,
                     &v71,
                     8u,
                     (__int64)&v56,
                     0);
  if ( ((int)(ObjectProperty + 0x80000000) < 0 || ObjectProperty == -1073741789)
    && (int)PnpGetStableSystemBootTime(&v68) >= 0 )
  {
    if ( ObjectProperty != -1073741789 && v63 == 16 && v56 == 8 && !PnpBootMode && v68 == v71 )
      goto LABEL_73;
    PnpSetObjectProperty(
      *(__int64 *)&PiPnpRtlCtx,
      *(_QWORD *)(BugCheckParameter2 + 48),
      1,
      (__int64)Handle,
      0LL,
      (__int64)&DEVPKEY_Device_PreventDriverLoad,
      0,
      0LL,
      0,
      0);
  }
  v12 = *(const WCHAR **)(BugCheckParameter2 + 48);
  v55 = 78;
  if ( (int)CmGetDeviceRegProp(
              *(__int64 *)&PiPnpRtlCtx,
              v12,
              (__int64)Handle,
              9u,
              (__int64)&v59,
              (__int64)SourceString,
              (__int64)&v55,
              0) >= 0
    && v59 == 1
    && v55 )
  {
    RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)SourceString);
    if ( InitSafeBootMode )
    {
      if ( !(unsigned __int8)IopSafebootDriverLoad(&DestinationString) )
      {
        v55 = 256;
        Pool2 = (void *)ExAllocatePool2(0x100uLL);
        if ( Pool2 )
        {
          DeviceRegProp = CmGetDeviceRegProp(
                            *(__int64 *)&PiPnpRtlCtx,
                            *(const WCHAR **)(BugCheckParameter2 + 48),
                            (__int64)Handle,
                            1u,
                            (__int64)&v59,
                            (__int64)Pool2,
                            (__int64)&v55,
                            0);
          if ( DeviceRegProp == -1073741789 )
          {
            ExFreePoolWithTag(Pool2, 0);
            Pool2 = (void *)ExAllocatePool2(0x100uLL);
          }
          else if ( DeviceRegProp >= 0 )
          {
            DestinationString = 0LL;
            RtlInitUnicodeString(&DestinationString, (PCWSTR)Pool2);
            IopBootLog(&DestinationString);
            goto LABEL_118;
          }
        }
        IopBootLog(&DestinationString);
        if ( Pool2 )
LABEL_118:
          ExFreePoolWithTag(Pool2, 0);
LABEL_73:
        v8 = -1073741823;
        goto LABEL_74;
      }
      v4 = v57;
    }
    CmOpenInstallerClassRegKey(
      *(_QWORD **)&PiPnpRtlCtx,
      (const WCHAR *)SourceString,
      v35,
      v36,
      131097,
      0,
      (__int64)&v65,
      0LL);
  }
  v13 = *(const WCHAR **)(BugCheckParameter2 + 48);
  v55 = 4;
  if ( (int)CmGetDeviceRegProp(
              *(__int64 *)&PiPnpRtlCtx,
              v13,
              (__int64)Handle,
              0xBu,
              (__int64)&v59,
              (__int64)&v58,
              (__int64)&v55,
              0) < 0
    || v59 != 4
    || v55 != 4 )
  {
    v58 = 0;
  }
  v73[0] = BugCheckParameter2;
  v8 = 0;
  v73[1] = a2;
  v55 = 512;
  P = (PVOID)ExAllocatePool2(0x100uLL);
  if ( P )
  {
    if ( (v58 & 0x80000) != 0 )
    {
      if ( v65 )
      {
        v39 = PnpCallDriverQueryServiceHelper(
                (unsigned int)&P,
                (unsigned int)&v55,
                0,
                (unsigned int)DEVPKEY_DeviceClass_ConfigFilters,
                (__int64)SourceString,
                (__int64)v65,
                1,
                0,
                v4,
                (__int64)v73);
        v8 = v39;
        if ( v39 != -1073741772 && v39 != -1073741275 && v39 < 0 )
          goto LABEL_64;
        while ( 1 )
        {
          v40 = P;
          v41 = PnpGetObjectProperty(
                  *(_QWORD **)&PiPnpRtlCtx,
                  (const WCHAR *)SourceString,
                  2u,
                  v65,
                  0LL,
                  (__int64)&DEVPKEY_DeviceClass_ConfigNotifyWnfTriggers,
                  &v66,
                  P,
                  v55,
                  (__int64)&v56,
                  0);
          if ( v41 != -1073741789 )
            break;
          if ( v56 <= v55 )
          {
            v8 = -1073741823;
            goto LABEL_64;
          }
          ExFreePoolWithTag(v40, 0);
          v55 = v56;
          P = (PVOID)ExAllocatePool2(0x100uLL);
          if ( !P )
          {
            v8 = -1073741670;
            goto LABEL_137;
          }
        }
        v8 = v41;
        if ( v41 < 0 )
        {
          if ( v41 == -1073741772 || v41 == -1073741275 )
            v8 = 0;
LABEL_137:
          if ( v8 < 0 )
            goto LABEL_64;
          goto LABEL_138;
        }
        if ( v66 == 4099 && (v56 & 7) == 0 && v56 )
        {
          v45 = (const WNF_STATE_NAME *)P;
          v46 = v56 >> 3;
          do
          {
            ZwUpdateWnfStateData(v45++, 0LL, 0, 0LL, 0LL, 0, 0);
            --v46;
          }
          while ( v46 );
          v23 = 56;
          goto LABEL_98;
        }
      }
LABEL_138:
      if ( !v74[0] )
      {
        v42 = *(const WCHAR **)(BugCheckParameter2 + 48);
        v56 = 4;
        if ( (int)CmGetDeviceRegProp(
                    *(__int64 *)&PiPnpRtlCtx,
                    v42,
                    (__int64)Handle,
                    0xBu,
                    (__int64)&v59,
                    (__int64)&v58,
                    (__int64)&v56,
                    0) >= 0
          && v59 == 4
          && v56 == 4
          && (v58 & 0x80000) != 0 )
        {
          v43 = *(_QWORD *)(BugCheckParameter2 + 48);
          v58 &= ~0x80000u;
          CmSetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, v43, (__int64)Handle, 0xBu, 4, (__int64)&v58, 4, 0);
        }
      }
    }
    if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x4000000) == 0
      && ((v44 = PnpCallDriverQueryServiceHelper(
                   (unsigned int)&P,
                   (unsigned int)&v55,
                   19,
                   (unsigned int)&DEVPKEY_Device_CompoundLowerFilters,
                   *(_QWORD *)(BugCheckParameter2 + 48),
                   (__int64)Handle,
                   0,
                   1,
                   v4,
                   (__int64)v73),
           v8 = v44,
           v44 == -1073741772)
       || v44 == -1073741275) )
    {
      PipSetDevNodeFlags(BugCheckParameter2, 0x4000000u);
    }
    else if ( v8 < 0 )
    {
      goto LABEL_64;
    }
    if ( v65 && (*(_DWORD *)(BugCheckParameter2 + 396) & 0x8000000) == 0 )
    {
      v32 = PnpCallDriverQueryServiceHelper(
              (unsigned int)&P,
              (unsigned int)&v55,
              19,
              (unsigned int)&DEVPKEY_DeviceClass_CompoundLowerFilters,
              (__int64)SourceString,
              (__int64)v65,
              1,
              2,
              v4,
              (__int64)v73);
      v8 = v32;
      if ( v32 == -1073741772 || v32 == -1073741275 )
      {
        PipSetDevNodeFlags(BugCheckParameter2, 0x8000000u);
      }
      else if ( v32 < 0 )
      {
        goto LABEL_64;
      }
    }
    if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x10000000) != 0 )
    {
      v8 = -1073741772;
    }
    else
    {
      v47 = PnpCallDriverQueryServiceHelper(
              (unsigned int)&P,
              (unsigned int)&v55,
              5,
              0,
              *(_QWORD *)(BugCheckParameter2 + 48),
              (__int64)Handle,
              0,
              3,
              v4,
              (__int64)v73);
      v8 = v47;
      if ( v47 == -1073741772 || v47 == -1073741275 )
      {
        v8 = -1073741772;
        PipSetDevNodeFlags(BugCheckParameter2, 0x10000000u);
      }
    }
    goto LABEL_64;
  }
  v8 = -1073741670;
LABEL_64:
  if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x1000) != 0 )
    goto LABEL_88;
  if ( v8 >= 0 )
  {
    if ( *(_QWORD *)(v75 + 8) )
    {
      PipSetDevNodeProblem(BugCheckParameter2, 19LL, 3221225858LL);
      goto LABEL_73;
    }
  }
  else
  {
    if ( v8 != -1073741772 )
      goto LABEL_74;
    if ( (*(_DWORD *)(BugCheckParameter2 + 560) & 0x100) == 0 )
      goto LABEL_73;
    PipClearDevNodeProblem(BugCheckParameter2);
    v5 = 1;
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x20000000) == 0 )
  {
    v48 = PnpCallDriverQueryServiceHelper(
            (unsigned int)&P,
            (unsigned int)&v55,
            18,
            (unsigned int)&DEVPKEY_Device_CompoundUpperFilters,
            *(_QWORD *)(BugCheckParameter2 + 48),
            (__int64)Handle,
            0,
            4,
            v4,
            (__int64)v73);
    v8 = v48;
    if ( v48 == -1073741772 || v48 == -1073741275 )
    {
      PipSetDevNodeFlags(BugCheckParameter2, 0x20000000u);
    }
    else if ( v48 < 0 )
    {
      goto LABEL_74;
    }
  }
  if ( v65 && (*(_DWORD *)(BugCheckParameter2 + 396) & 0x40000000) == 0 )
  {
    v49 = PnpCallDriverQueryServiceHelper(
            (unsigned int)&P,
            (unsigned int)&v55,
            18,
            (unsigned int)&DEVPKEY_DeviceClass_CompoundUpperFilters,
            (__int64)SourceString,
            (__int64)v65,
            1,
            5,
            v4,
            (__int64)v73);
    v8 = v49;
    if ( v49 == -1073741772 || v49 == -1073741275 )
    {
      PipSetDevNodeFlags(BugCheckParameter2, 0x40000000u);
    }
    else if ( v49 < 0 )
    {
      goto LABEL_74;
    }
  }
  v8 = PiDmaGuardProcessPreAddDevice(v73, Handle);
  if ( v8 >= 0 )
  {
    v14 = 0LL;
    Object = IoGetAttachedDeviceReferenceWithTag(*(_QWORD **)(BugCheckParameter2 + 32), 0x65706E50u);
    for ( i = 0; i < 6u; ++i )
    {
      if ( i == 3 )
      {
        AttachedDeviceReferenceWithTag = IoGetAttachedDeviceReferenceWithTag(
                                           *(_QWORD **)(BugCheckParameter2 + 32),
                                           0x65706E50u);
        v16 = AttachedDeviceReferenceWithTag;
        if ( v5 && !v75 )
          PipSetDevNodeState(BugCheckParameter2, 773);
      }
      else
      {
        v16 = AttachedDeviceReferenceWithTag;
      }
      v17 = (__int64 *)v74[i];
      for ( j = v17; j; j = (__int64 *)j[1] )
      {
        v24 = PnpCallAddDevice(BugCheckParameter2, *j, *(_QWORD *)(*(_QWORD *)(*j + 48) + 8LL), i);
        *(_DWORD *)(*j + 16) |= 0x400u;
        if ( v24 >= 0 )
        {
          if ( i == 3 )
            v14 = v16[3];
          PipSetDevNodeState(BugCheckParameter2, 773);
        }
        else if ( i == 3 )
        {
          IovUtilMarkStack(*(_QWORD *)(BugCheckParameter2 + 32), *((_QWORD *)Object + 3), v14, 0);
          v23 = 31;
          *(_DWORD *)(BugCheckParameter2 + 392) = v34;
          v22 = v34;
          goto LABEL_32;
        }
      }
      if ( !i )
      {
        if ( v17 )
        {
          v50 = *(const WCHAR **)(BugCheckParameter2 + 48);
          v56 = 4;
          if ( (int)CmGetDeviceRegProp(
                      *(__int64 *)&PiPnpRtlCtx,
                      v50,
                      (__int64)Handle,
                      0xBu,
                      (__int64)&v59,
                      (__int64)&v58,
                      (__int64)&v56,
                      0) >= 0
            && v59 == 4
            && v56 == 4
            && (v58 & 0x80000) != 0 )
          {
            v51 = *(_QWORD *)(BugCheckParameter2 + 48);
            v58 &= ~0x80000u;
            CmSetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, v51, (__int64)Handle, 0xBu, 4, (__int64)&v58, 4, 0);
          }
        }
      }
    }
    v19 = !v14 || v5;
    IovUtilMarkStack(*(_QWORD *)(BugCheckParameter2 + 32), *((_QWORD *)Object + 3), v14, v19);
    v20 = PipChangeDeviceObjectFromRegistryProperties(
            *(_QWORD *)(BugCheckParameter2 + 32),
            (int)Handle,
            SourceString,
            (__int64)v65,
            v5);
    if ( v20 < 0 )
    {
      v22 = v20;
      v23 = 50;
LABEL_32:
      PnpRequestDeviceRemoval(BugCheckParameter2, 0, v23, v22);
      v8 = -1073741106;
      goto LABEL_74;
    }
    v25 = (_DWORD *)(BugCheckParameter2 + 452);
    v26 = (_DWORD *)(BugCheckParameter2 + 448);
    if ( (int)IopQueryLegacyBusInformation(
                *(_QWORD *)(BugCheckParameter2 + 32),
                v21,
                BugCheckParameter2 + 448,
                BugCheckParameter2 + 452) < 0 )
    {
      *v26 = -1;
      *v25 = -16;
    }
    else
    {
      IopInsertLegacyBusDeviceNode(BugCheckParameter2, (unsigned int)*v26, (unsigned int)*v25);
    }
    PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v27, *(_QWORD *)(BugCheckParameter2 + 48), 23);
    if ( (*(_DWORD *)(BugCheckParameter2 + 560) & 0x100000) != 0 )
    {
      v8 = PiProcessDriversLoadedOnSecureDevice(BugCheckParameter2);
      if ( v8 < 0 )
        goto LABEL_74;
    }
    if ( PipDmaGuardPolicy && *(_QWORD *)(BugCheckParameter2 + 720) )
    {
      v8 = PipDmgEnforceEnumerationPolicy(BugCheckParameter2, v28, v29);
      goto LABEL_74;
    }
LABEL_88:
    v8 = 0;
  }
LABEL_74:
  v6 = 6LL;
LABEL_173:
  v52 = v74;
  do
  {
    v53 = *v52;
    if ( *v52 )
    {
      do
      {
        v54 = (PVOID *)v53;
        v53 = *(_QWORD *)(v53 + 8);
        if ( PnpUnusedBootDriversCleanedUp )
          PnpUnloadAttachedDriver(*v54);
        ObfDereferenceObject(*v54);
        ExFreePoolWithTag(v54, 0);
      }
      while ( v53 );
      v6 = v72;
    }
    ++v52;
    v72 = --v6;
  }
  while ( v6 );
  v30 = Object;
  if ( Handle )
    ZwClose(Handle);
  if ( v65 )
    ZwClose(v65);
  if ( v30 )
    ObfDereferenceObjectWithTag(v30, 0x65706E50u);
  if ( AttachedDeviceReferenceWithTag )
    ObfDereferenceObjectWithTag(AttachedDeviceReferenceWithTag, 0x65706E50u);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v8;
}
