/*
 * XREFs of PipCallDriverAddDevice @ 0x140980ED0
 * Callers:
 *     PiProcessAddBootDevices @ 0x140721B24 (PiProcessAddBootDevices.c)
 *     PipProcessDevNodeTree @ 0x1408B7FE0 (PipProcessDevNodeTree.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x140357A14 (IoGetAttachedDeviceReferenceWithTag.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     PipSetDevNodeState @ 0x14048D998 (PipSetDevNodeState.c)
 *     IovUtilMarkStack @ 0x1404A78B4 (IovUtilMarkStack.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwUpdateWnfStateData @ 0x1406AAFD0 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PipDmgEnforceEnumerationPolicy @ 0x14072FB94 (PipDmgEnforceEnumerationPolicy.c)
 *     _PnpSetObjectProperty @ 0x1408B6258 (_PnpSetObjectProperty.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1408B6E6C (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     _CmGetDeviceRegProp @ 0x1408C35E0 (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x1408C42B0 (_CmOpenDeviceRegKey.c)
 *     _PnpGetObjectProperty @ 0x1408CB9C0 (_PnpGetObjectProperty.c)
 *     PipSetDevNodeProblem @ 0x14097AC5C (PipSetDevNodeProblem.c)
 *     PipSetDevNodeFlags @ 0x14097B5F8 (PipSetDevNodeFlags.c)
 *     _CmSetDeviceRegProp @ 0x14097BE58 (_CmSetDeviceRegProp.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x14097F72C (PipChangeDeviceObjectFromRegistryProperties.c)
 *     PiDmaGuardProcessPreAddDevice @ 0x140981740 (PiDmaGuardProcessPreAddDevice.c)
 *     PnpGetStableSystemBootTime @ 0x140981800 (PnpGetStableSystemBootTime.c)
 *     PipClearDevNodeProblem @ 0x14098187C (PipClearDevNodeProblem.c)
 *     PiProcessDriversLoadedOnSecureDevice @ 0x140981CA0 (PiProcessDriversLoadedOnSecureDevice.c)
 *     IopQueryLegacyBusInformation @ 0x140981D7C (IopQueryLegacyBusInformation.c)
 *     IopInsertLegacyBusDeviceNode @ 0x140981EE8 (IopInsertLegacyBusDeviceNode.c)
 *     PnpCallDriverQueryServiceHelper @ 0x140982CA8 (PnpCallDriverQueryServiceHelper.c)
 *     _CmOpenInstallerClassRegKey @ 0x1409AE8F4 (_CmOpenInstallerClassRegKey.c)
 *     PnpCallAddDevice @ 0x1409B9504 (PnpCallAddDevice.c)
 *     PnpRequestDeviceRemoval @ 0x1409BF73C (PnpRequestDeviceRemoval.c)
 *     IopBootLog @ 0x140A728F8 (IopBootLog.c)
 *     PnpUnloadAttachedDriver @ 0x140A8D55C (PnpUnloadAttachedDriver.c)
 *     IopSafebootDriverLoad @ 0x140AB4A18 (IopSafebootDriverLoad.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipCallDriverAddDevice(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  char v4; // r12
  char v5; // r13
  __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // ebx
  unsigned int v9; // eax
  __int64 v10; // rax
  int ObjectProperty; // ebx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r14
  unsigned __int8 i; // bl
  _QWORD *v16; // r12
  _QWORD *v17; // r15
  _QWORD *j; // rsi
  BOOL v19; // r9d
  __int64 v20; // rdx
  __int64 v21; // r8
  int v22; // eax
  _DWORD *v23; // rbx
  _DWORD *v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r8
  PVOID v28; // r15
  int v30; // eax
  __int64 v31; // rdx
  int v32; // r11d
  int v33; // r8d
  int v34; // r9d
  void *Pool2; // rbx
  int DeviceRegProp; // eax
  int v37; // eax
  PVOID v38; // rsi
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rdx
  int v42; // eax
  const WNF_STATE_NAME *v43; // rbx
  ULONG v44; // esi
  int v45; // eax
  int v46; // eax
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 *v50; // rsi
  __int64 v51; // rdi
  PVOID *v52; // r14
  ULONG v53; // [rsp+60h] [rbp-A0h] BYREF
  ULONG v54; // [rsp+64h] [rbp-9Ch] BYREF
  char v55; // [rsp+68h] [rbp-98h]
  int v56; // [rsp+6Ch] [rbp-94h] BYREF
  int v57; // [rsp+70h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v59; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int16 v60; // [rsp+84h] [rbp-7Ch] BYREF
  int v61; // [rsp+88h] [rbp-78h] BYREF
  PVOID P; // [rsp+90h] [rbp-70h] BYREF
  HANDLE v63; // [rsp+98h] [rbp-68h] BYREF
  LOGICAL v64; // [rsp+A0h] [rbp-60h] BYREF
  PVOID Object; // [rsp+A8h] [rbp-58h]
  __int64 v66; // [rsp+B0h] [rbp-50h] BYREF
  PVOID AttachedDeviceReferenceWithTag; // [rsp+B8h] [rbp-48h]
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v69; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v70; // [rsp+D8h] [rbp-28h]
  _QWORD v71[2]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v72[3]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v73; // [rsp+108h] [rbp+8h]
  ACL SourceString[10]; // [rsp+120h] [rbp+20h] BYREF

  v55 = 0;
  v63 = 0LL;
  v56 = 0;
  v59 = 0;
  v4 = 0;
  Handle = 0LL;
  v5 = 0;
  v60 = 0;
  v69 = 0LL;
  v53 = 0;
  v57 = 0;
  v64 = 0;
  memset_0(v71, 0, 0x40uLL);
  v6 = 6LL;
  DestinationString = 0LL;
  v70 = 6LL;
  v54 = 0;
  v66 = 0LL;
  v61 = 0;
  *(_WORD *)&SourceString[0].AclRevision = 0;
  P = 0LL;
  Object = 0LL;
  AttachedDeviceReferenceWithTag = 0LL;
  if ( *(_BYTE *)(BugCheckParameter2 + 688) && !*(_BYTE *)(a2 + 4) )
  {
    v8 = -1073741823;
    goto LABEL_172;
  }
  v7 = *(_QWORD *)(BugCheckParameter2 + 48);
  *(_BYTE *)(BugCheckParameter2 + 688) = 0;
  v8 = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, v7, 16, 0, 131097, 0, (__int64)&Handle, 0LL);
  if ( v8 < 0 )
    goto LABEL_52;
  if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 32) + 48LL) & 0x2000000) != 0
    && ((int)PnpGetObjectProperty(
               *(_QWORD **)&PiPnpRtlCtx,
               *(WCHAR **)(BugCheckParameter2 + 48),
               1u,
               Handle,
               0LL,
               (__int64)&DEVPKEY_Device_DebuggerSafe,
               &v61,
               (const wchar_t *)&v59,
               4u,
               (__int64)&v54,
               0) < 0
     || v61 != 7
     || v54 != 4
     || !v59) )
  {
    v21 = 53LL;
    goto LABEL_40;
  }
  if ( *(_DWORD *)(BugCheckParameter2 + 660) == -1 )
  {
    if ( PnpQueryProximityNode
      && (int)PnpGetObjectProperty(
                *(_QWORD **)&PiPnpRtlCtx,
                *(WCHAR **)(BugCheckParameter2 + 48),
                1u,
                Handle,
                0LL,
                (__int64)&DEVPKEY_Device_Numa_Proximity_Domain,
                &v61,
                (const wchar_t *)&v59,
                4u,
                (__int64)&v54,
                0) >= 0
      && v59 <= 0xFF
      && (int)guard_dispatch_icall_no_overrides(v59, &v60) >= 0 )
    {
      *(_DWORD *)(BugCheckParameter2 + 660) = v60;
    }
    v9 = *(_DWORD *)(BugCheckParameter2 + 660);
    if ( v9 == -1 )
    {
      v10 = *(_QWORD *)(BugCheckParameter2 + 16);
      if ( !v10 )
      {
        *(_DWORD *)(BugCheckParameter2 + 660) = -2;
        goto LABEL_12;
      }
      v9 = *(_DWORD *)(v10 + 660);
      *(_DWORD *)(BugCheckParameter2 + 660) = v9;
    }
    if ( v9 != -2 )
    {
      v31 = *(_QWORD *)(BugCheckParameter2 + 48);
      v59 = v9;
      PnpSetObjectProperty(
        *(__int64 *)&PiPnpRtlCtx,
        v31,
        1,
        (__int64)Handle,
        0LL,
        (__int64)&DEVPKEY_Device_Numa_Node,
        7,
        (__int64)&v59,
        4u,
        0);
    }
  }
LABEL_12:
  ObjectProperty = PnpGetObjectProperty(
                     *(_QWORD **)&PiPnpRtlCtx,
                     *(WCHAR **)(BugCheckParameter2 + 48),
                     1u,
                     Handle,
                     0LL,
                     (__int64)DEVPKEY_Device_PreventDriverLoad,
                     &v61,
                     (const wchar_t *)&v69,
                     8u,
                     (__int64)&v54,
                     0);
  if ( ((int)(ObjectProperty + 0x80000000) < 0 || ObjectProperty == -1073741789)
    && (int)PnpGetStableSystemBootTime(&v66) >= 0 )
  {
    if ( ObjectProperty != -1073741789 && v61 == 16 && v54 == 8 && !PnpBootMode && v66 == v69 )
      goto LABEL_25;
    PnpSetObjectProperty(
      *(__int64 *)&PiPnpRtlCtx,
      *(_QWORD *)(BugCheckParameter2 + 48),
      1,
      (__int64)Handle,
      0LL,
      (__int64)DEVPKEY_Device_PreventDriverLoad,
      0,
      0LL,
      0,
      0);
  }
  v12 = *(_QWORD *)(BugCheckParameter2 + 48);
  v53 = 78;
  if ( (int)CmGetDeviceRegProp(
              *(__int64 *)&PiPnpRtlCtx,
              v12,
              (__int64)Handle,
              9u,
              (__int64)&v57,
              (__int64)SourceString,
              (__int64)&v53,
              0) >= 0
    && v57 == 1
    && v53 )
  {
    RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)SourceString);
    if ( InitSafeBootMode )
    {
      if ( !(unsigned __int8)IopSafebootDriverLoad(&DestinationString) )
      {
        v53 = 256;
        Pool2 = (void *)ExAllocatePool2(0x100uLL, 0x100uLL, 0x6E657050u);
        if ( Pool2 )
        {
          DeviceRegProp = CmGetDeviceRegProp(
                            *(__int64 *)&PiPnpRtlCtx,
                            *(_QWORD *)(BugCheckParameter2 + 48),
                            (__int64)Handle,
                            1u,
                            (__int64)&v57,
                            (__int64)Pool2,
                            (__int64)&v53,
                            0);
          if ( DeviceRegProp == -1073741789 )
          {
            ExFreePoolWithTag(Pool2, 0);
            Pool2 = (void *)ExAllocatePool2(0x100uLL, v53, 0x6E657050u);
          }
          else if ( DeviceRegProp >= 0 )
          {
            DestinationString = 0LL;
            RtlInitUnicodeString(&DestinationString, (PCWSTR)Pool2);
            IopBootLog(&DestinationString);
            goto LABEL_117;
          }
        }
        IopBootLog(&DestinationString);
        if ( Pool2 )
LABEL_117:
          ExFreePoolWithTag(Pool2, 0);
LABEL_25:
        v8 = -1073741823;
        goto LABEL_52;
      }
      v4 = v55;
    }
    CmOpenInstallerClassRegKey(PiPnpRtlCtx, (unsigned int)SourceString, v33, v34, 131097, 0, (__int64)&v63, 0LL);
  }
  v13 = *(_QWORD *)(BugCheckParameter2 + 48);
  v53 = 4;
  if ( (int)CmGetDeviceRegProp(
              *(__int64 *)&PiPnpRtlCtx,
              v13,
              (__int64)Handle,
              0xBu,
              (__int64)&v57,
              (__int64)&v56,
              (__int64)&v53,
              0) < 0
    || v57 != 4
    || v53 != 4 )
  {
    v56 = 0;
  }
  v71[0] = BugCheckParameter2;
  v8 = 0;
  v71[1] = a2;
  v53 = 512;
  P = (PVOID)ExAllocatePool2(0x100uLL, 0x200uLL, 0x6E657050u);
  if ( P )
  {
    if ( (v56 & 0x80000) != 0 )
    {
      if ( v63 )
      {
        v37 = PnpCallDriverQueryServiceHelper(
                (unsigned int)&P,
                (unsigned int)&v53,
                0,
                (unsigned int)DEVPKEY_DeviceClass_ConfigFilters,
                (__int64)SourceString,
                (__int64)v63,
                1,
                0,
                v4,
                (__int64)v71);
        v8 = v37;
        if ( v37 != -1073741772 && v37 != -1073741275 && v37 < 0 )
          goto LABEL_73;
        while ( 1 )
        {
          v38 = P;
          v39 = PnpGetObjectProperty(
                  *(_QWORD **)&PiPnpRtlCtx,
                  (WCHAR *)SourceString,
                  2u,
                  v63,
                  0LL,
                  (__int64)&DEVPKEY_DeviceClass_ConfigNotifyWnfTriggers,
                  &v64,
                  (const wchar_t *)P,
                  v53,
                  (__int64)&v54,
                  0);
          if ( v39 != -1073741789 )
            break;
          if ( v54 <= v53 )
          {
            v8 = -1073741823;
            goto LABEL_73;
          }
          ExFreePoolWithTag(v38, 0);
          v53 = v54;
          P = (PVOID)ExAllocatePool2(0x100uLL, v54, 0x6E657050u);
          if ( !P )
          {
            v8 = -1073741670;
            goto LABEL_136;
          }
        }
        v8 = v39;
        if ( v39 < 0 )
        {
          if ( v39 == -1073741772 || v39 == -1073741275 )
            v8 = 0;
LABEL_136:
          if ( v8 < 0 )
            goto LABEL_73;
          goto LABEL_137;
        }
        if ( v64 == 4099 && (v54 & 7) == 0 && v54 )
        {
          v43 = (const WNF_STATE_NAME *)P;
          v44 = v54 >> 3;
          do
          {
            ZwUpdateWnfStateData(v43++, 0LL, 0, 0LL, 0LL, 0, 0);
            --v44;
          }
          while ( v44 );
          v21 = 56LL;
          goto LABEL_40;
        }
      }
LABEL_137:
      if ( !v72[0] )
      {
        v40 = *(_QWORD *)(BugCheckParameter2 + 48);
        v54 = 4;
        if ( (int)CmGetDeviceRegProp(
                    *(__int64 *)&PiPnpRtlCtx,
                    v40,
                    (__int64)Handle,
                    0xBu,
                    (__int64)&v57,
                    (__int64)&v56,
                    (__int64)&v54,
                    0) >= 0
          && v57 == 4
          && v54 == 4
          && (v56 & 0x80000) != 0 )
        {
          v41 = *(_QWORD *)(BugCheckParameter2 + 48);
          v56 &= ~0x80000u;
          CmSetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, v41, (__int64)Handle, 0xBu, 4, (__int64)&v56, 4, 0);
        }
      }
    }
    if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x4000000) == 0
      && ((v42 = PnpCallDriverQueryServiceHelper(
                   (unsigned int)&P,
                   (unsigned int)&v53,
                   19,
                   (unsigned int)&DEVPKEY_Device_CompoundLowerFilters,
                   *(_QWORD *)(BugCheckParameter2 + 48),
                   (__int64)Handle,
                   0,
                   1,
                   v4,
                   (__int64)v71),
           v8 = v42,
           v42 == -1073741772)
       || v42 == -1073741275) )
    {
      PipSetDevNodeFlags(BugCheckParameter2, 0x4000000u);
    }
    else if ( v8 < 0 )
    {
      goto LABEL_73;
    }
    if ( v63 && (*(_DWORD *)(BugCheckParameter2 + 396) & 0x8000000) == 0 )
    {
      v30 = PnpCallDriverQueryServiceHelper(
              (unsigned int)&P,
              (unsigned int)&v53,
              19,
              (unsigned int)&DEVPKEY_DeviceClass_CompoundLowerFilters,
              (__int64)SourceString,
              (__int64)v63,
              1,
              2,
              v4,
              (__int64)v71);
      v8 = v30;
      if ( v30 == -1073741772 || v30 == -1073741275 )
      {
        PipSetDevNodeFlags(BugCheckParameter2, 0x8000000u);
      }
      else if ( v30 < 0 )
      {
        goto LABEL_73;
      }
    }
    if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x10000000) != 0 )
    {
      v8 = -1073741772;
    }
    else
    {
      v45 = PnpCallDriverQueryServiceHelper(
              (unsigned int)&P,
              (unsigned int)&v53,
              5,
              0,
              *(_QWORD *)(BugCheckParameter2 + 48),
              (__int64)Handle,
              0,
              3,
              v4,
              (__int64)v71);
      v8 = v45;
      if ( v45 == -1073741772 || v45 == -1073741275 )
      {
        v8 = -1073741772;
        PipSetDevNodeFlags(BugCheckParameter2, 0x10000000u);
      }
    }
    goto LABEL_73;
  }
  v8 = -1073741670;
LABEL_73:
  if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x1000) != 0 )
    goto LABEL_99;
  if ( v8 >= 0 )
  {
    if ( *(_QWORD *)(v73 + 8) )
    {
      PipSetDevNodeProblem(BugCheckParameter2, 19, -1073741438);
      goto LABEL_25;
    }
  }
  else
  {
    if ( v8 != -1073741772 )
      goto LABEL_52;
    if ( (*(_DWORD *)(BugCheckParameter2 + 560) & 0x100) == 0 )
      goto LABEL_25;
    PipClearDevNodeProblem(BugCheckParameter2);
    v5 = 1;
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x20000000) == 0 )
  {
    v46 = PnpCallDriverQueryServiceHelper(
            (unsigned int)&P,
            (unsigned int)&v53,
            18,
            (unsigned int)&DEVPKEY_Device_CompoundUpperFilters,
            *(_QWORD *)(BugCheckParameter2 + 48),
            (__int64)Handle,
            0,
            4,
            v4,
            (__int64)v71);
    v8 = v46;
    if ( v46 == -1073741772 || v46 == -1073741275 )
    {
      PipSetDevNodeFlags(BugCheckParameter2, 0x20000000u);
    }
    else if ( v46 < 0 )
    {
      goto LABEL_52;
    }
  }
  if ( v63 && (*(_DWORD *)(BugCheckParameter2 + 396) & 0x40000000) == 0 )
  {
    v47 = PnpCallDriverQueryServiceHelper(
            (unsigned int)&P,
            (unsigned int)&v53,
            18,
            (unsigned int)&DEVPKEY_DeviceClass_CompoundUpperFilters,
            (__int64)SourceString,
            (__int64)v63,
            1,
            5,
            v4,
            (__int64)v71);
    v8 = v47;
    if ( v47 == -1073741772 || v47 == -1073741275 )
    {
      PipSetDevNodeFlags(BugCheckParameter2, 0x40000000u);
    }
    else if ( v47 < 0 )
    {
      goto LABEL_52;
    }
  }
  v8 = PiDmaGuardProcessPreAddDevice(v71, Handle);
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
        if ( v5 && !v73 )
          PipSetDevNodeState(BugCheckParameter2, 773);
      }
      else
      {
        v16 = AttachedDeviceReferenceWithTag;
      }
      v17 = (_QWORD *)v72[i];
      for ( j = v17; j; j = (_QWORD *)j[1] )
      {
        v22 = PnpCallAddDevice(BugCheckParameter2, *j, *(_QWORD *)(*(_QWORD *)(*j + 48LL) + 8LL), i);
        *(_DWORD *)(*j + 16LL) |= 0x400u;
        if ( v22 >= 0 )
        {
          if ( i == 3 )
            v14 = v16[3];
          PipSetDevNodeState(BugCheckParameter2, 773);
        }
        else if ( i == 3 )
        {
          IovUtilMarkStack(*(_QWORD *)(BugCheckParameter2 + 32), *((_QWORD *)Object + 3), v14, 0);
          v21 = 31LL;
          *(_DWORD *)(BugCheckParameter2 + 392) = v32;
          goto LABEL_40;
        }
      }
      if ( !i )
      {
        if ( v17 )
        {
          v48 = *(_QWORD *)(BugCheckParameter2 + 48);
          v54 = 4;
          if ( (int)CmGetDeviceRegProp(
                      *(__int64 *)&PiPnpRtlCtx,
                      v48,
                      (__int64)Handle,
                      0xBu,
                      (__int64)&v57,
                      (__int64)&v56,
                      (__int64)&v54,
                      0) >= 0
            && v57 == 4
            && v54 == 4
            && (v56 & 0x80000) != 0 )
          {
            v49 = *(_QWORD *)(BugCheckParameter2 + 48);
            v56 &= ~0x80000u;
            CmSetDeviceRegProp(*(__int64 *)&PiPnpRtlCtx, v49, (__int64)Handle, 0xBu, 4, (__int64)&v56, 4, 0);
          }
        }
      }
    }
    v19 = !v14 || v5;
    IovUtilMarkStack(*(_QWORD *)(BugCheckParameter2 + 32), *((_QWORD *)Object + 3), v14, v19);
    if ( (int)PipChangeDeviceObjectFromRegistryProperties(
                *(_QWORD *)(BugCheckParameter2 + 32),
                (int)Handle,
                SourceString,
                (__int64)v63,
                v5) < 0 )
    {
      v21 = 50LL;
LABEL_40:
      PnpRequestDeviceRemoval(BugCheckParameter2, 0LL, v21);
      v8 = -1073741106;
      goto LABEL_52;
    }
    v23 = (_DWORD *)(BugCheckParameter2 + 452);
    v24 = (_DWORD *)(BugCheckParameter2 + 448);
    if ( (int)IopQueryLegacyBusInformation(
                *(_QWORD *)(BugCheckParameter2 + 32),
                v20,
                BugCheckParameter2 + 448,
                BugCheckParameter2 + 452) < 0 )
    {
      *v24 = -1;
      *v23 = -16;
    }
    else
    {
      IopInsertLegacyBusDeviceNode(BugCheckParameter2, (unsigned int)*v24, (unsigned int)*v23);
    }
    PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v25, *(_QWORD *)(BugCheckParameter2 + 48), 23);
    if ( (*(_DWORD *)(BugCheckParameter2 + 560) & 0x100000) != 0 )
    {
      v8 = PiProcessDriversLoadedOnSecureDevice(BugCheckParameter2);
      if ( v8 < 0 )
        goto LABEL_52;
    }
    if ( PipDmaGuardPolicy && *(_QWORD *)(BugCheckParameter2 + 720) )
    {
      v8 = PipDmgEnforceEnumerationPolicy(BugCheckParameter2, v26, v27);
      goto LABEL_52;
    }
LABEL_99:
    v8 = 0;
  }
LABEL_52:
  v6 = 6LL;
LABEL_172:
  v50 = v72;
  do
  {
    v51 = *v50;
    if ( *v50 )
    {
      do
      {
        v52 = (PVOID *)v51;
        v51 = *(_QWORD *)(v51 + 8);
        if ( PnpUnusedBootDriversCleanedUp )
          PnpUnloadAttachedDriver(*v52);
        ObfDereferenceObject(*v52);
        ExFreePoolWithTag(v52, 0);
      }
      while ( v51 );
      v6 = v70;
    }
    ++v50;
    v70 = --v6;
  }
  while ( v6 );
  v28 = Object;
  if ( Handle )
    ZwClose(Handle);
  if ( v63 )
    ZwClose(v63);
  if ( v28 )
    ObfDereferenceObjectWithTag(v28, 0x65706E50u);
  if ( AttachedDeviceReferenceWithTag )
    ObfDereferenceObjectWithTag(AttachedDeviceReferenceWithTag, 0x65706E50u);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v8;
}
