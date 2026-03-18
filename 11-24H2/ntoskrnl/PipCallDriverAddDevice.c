/*
 * XREFs of PipCallDriverAddDevice @ 0x1409C6228
 * Callers:
 *     PiProcessAddBootDevices @ 0x140723F94 (PiProcessAddBootDevices.c)
 *     PipProcessDevNodeTree @ 0x1408BA630 (PipProcessDevNodeTree.c)
 * Callees:
 *     IoGetAttachedDeviceReferenceWithTag @ 0x1402D6794 (IoGetAttachedDeviceReferenceWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x14045AA10 (RtlInitUnicodeStringEx.c)
 *     PipSetDevNodeState @ 0x140492B28 (PipSetDevNodeState.c)
 *     IovUtilMarkStack @ 0x1404AD1D4 (IovUtilMarkStack.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwUpdateWnfStateData @ 0x1406AA030 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PipDmgEnforceEnumerationPolicy @ 0x140731B84 (PipDmgEnforceEnumerationPolicy.c)
 *     _PnpSetObjectProperty @ 0x1408B88E8 (_PnpSetObjectProperty.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1408B94C4 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     _CmGetDeviceRegProp @ 0x1408C5BB0 (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x1408C6880 (_CmOpenDeviceRegKey.c)
 *     _PnpGetObjectProperty @ 0x1408CDFD0 (_PnpGetObjectProperty.c)
 *     PipSetDevNodeProblem @ 0x14098FC24 (PipSetDevNodeProblem.c)
 *     PipSetDevNodeFlags @ 0x1409905B8 (PipSetDevNodeFlags.c)
 *     _CmSetDeviceRegProp @ 0x140990E18 (_CmSetDeviceRegProp.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x1409946EC (PipChangeDeviceObjectFromRegistryProperties.c)
 *     _CmOpenInstallerClassRegKey @ 0x1409B7564 (_CmOpenInstallerClassRegKey.c)
 *     IopInsertLegacyBusDeviceNode @ 0x1409C52C8 (IopInsertLegacyBusDeviceNode.c)
 *     IopQueryLegacyBusInformation @ 0x1409C53AC (IopQueryLegacyBusInformation.c)
 *     PiProcessDriversLoadedOnSecureDevice @ 0x1409C5488 (PiProcessDriversLoadedOnSecureDevice.c)
 *     PipClearDevNodeProblem @ 0x1409C5678 (PipClearDevNodeProblem.c)
 *     PnpGetStableSystemBootTime @ 0x1409C5988 (PnpGetStableSystemBootTime.c)
 *     PnpCallDriverQueryServiceHelper @ 0x1409C5A04 (PnpCallDriverQueryServiceHelper.c)
 *     PiDmaGuardProcessPreAddDevice @ 0x1409C6A98 (PiDmaGuardProcessPreAddDevice.c)
 *     PnpCallAddDevice @ 0x1409C71F8 (PnpCallAddDevice.c)
 *     PnpRequestDeviceRemoval @ 0x140A1132C (PnpRequestDeviceRemoval.c)
 *     IopBootLog @ 0x140A785F8 (IopBootLog.c)
 *     PnpUnloadAttachedDriver @ 0x140A90E60 (PnpUnloadAttachedDriver.c)
 *     IopSafebootDriverLoad @ 0x140AB9958 (IopSafebootDriverLoad.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipCallDriverAddDevice(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  char v4; // r12
  char v5; // r13
  __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // eax
  __int64 v12; // rax
  int ObjectProperty; // ebx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r14
  unsigned __int8 i; // bl
  _QWORD *v18; // r12
  _QWORD *v19; // r15
  _QWORD *j; // rsi
  BOOL v21; // r9d
  __int64 v22; // rdx
  __int64 v23; // r8
  int v24; // eax
  unsigned int *v25; // rbx
  int *v26; // rsi
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
  __int64 v42; // rdx
  __int64 v43; // rdx
  int v44; // eax
  char *v45; // rbx
  ULONG v46; // esi
  int v47; // eax
  int v48; // eax
  int v49; // eax
  __int64 v50; // rdx
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
  unsigned __int16 v62; // [rsp+84h] [rbp-7Ch] BYREF
  int v63; // [rsp+88h] [rbp-78h] BYREF
  PVOID P; // [rsp+90h] [rbp-70h] BYREF
  HANDLE v65; // [rsp+98h] [rbp-68h] BYREF
  int v66; // [rsp+A0h] [rbp-60h] BYREF
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
               &v63,
               (const wchar_t *)&v61,
               4u,
               (__int64)&v56,
               0) < 0
     || v63 != 7
     || v56 != 4
     || !v61) )
  {
    v23 = 53LL;
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
                &v63,
                (const wchar_t *)&v61,
                4u,
                (__int64)&v56,
                0) >= 0
      && v61 <= 0xFF
      && (int)guard_dispatch_icall_no_overrides(v61, &v62, v9, v10) >= 0 )
    {
      *(_DWORD *)(BugCheckParameter2 + 660) = v62;
    }
    v11 = *(_DWORD *)(BugCheckParameter2 + 660);
    if ( v11 == -1 )
    {
      v12 = *(_QWORD *)(BugCheckParameter2 + 16);
      if ( !v12 )
      {
        *(_DWORD *)(BugCheckParameter2 + 660) = -2;
        goto LABEL_12;
      }
      v11 = *(_DWORD *)(v12 + 660);
      *(_DWORD *)(BugCheckParameter2 + 660) = v11;
    }
    if ( v11 != -2 )
    {
      v33 = *(_QWORD *)(BugCheckParameter2 + 48);
      v61 = v11;
      PnpSetObjectProperty(
        *(__int64 *)&PiPnpRtlCtx,
        v33,
        1u,
        (__int64)Handle,
        0LL,
        (__int64)&DEVPKEY_Device_Numa_Node,
        7,
        (__int64)&v61,
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
                     &v63,
                     (const wchar_t *)&v71,
                     8u,
                     (__int64)&v56,
                     0);
  if ( ((int)(ObjectProperty + 0x80000000) < 0 || ObjectProperty == -1073741789)
    && (int)PnpGetStableSystemBootTime(&v68) >= 0 )
  {
    if ( ObjectProperty != -1073741789 && v63 == 16 && v56 == 8 && !PnpBootMode && v68 == v71 )
      goto LABEL_25;
    PnpSetObjectProperty(
      *(__int64 *)&PiPnpRtlCtx,
      *(_QWORD *)(BugCheckParameter2 + 48),
      1u,
      (__int64)Handle,
      0LL,
      (__int64)DEVPKEY_Device_PreventDriverLoad,
      0,
      0LL,
      0,
      0);
  }
  v14 = *(_QWORD *)(BugCheckParameter2 + 48);
  v55 = 78;
  if ( (int)CmGetDeviceRegProp(
              *(__int64 *)&PiPnpRtlCtx,
              v14,
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
    if ( (_DWORD)InitSafeBootMode )
    {
      if ( !(unsigned __int8)IopSafebootDriverLoad(&DestinationString) )
      {
        v55 = 256;
        Pool2 = (void *)ExAllocatePool2(0x100uLL);
        if ( Pool2 )
        {
          DeviceRegProp = CmGetDeviceRegProp(
                            *(__int64 *)&PiPnpRtlCtx,
                            *(_QWORD *)(BugCheckParameter2 + 48),
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
      v4 = v57;
    }
    CmOpenInstallerClassRegKey(*(_QWORD **)&PiPnpRtlCtx, (WCHAR *)SourceString, v35, v36, 131097, 0, (__int64)&v65, 0LL);
  }
  v15 = *(_QWORD *)(BugCheckParameter2 + 48);
  v55 = 4;
  if ( (int)CmGetDeviceRegProp(
              *(__int64 *)&PiPnpRtlCtx,
              v15,
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
                &P,
                &v55,
                0,
                (__int64)DEVPKEY_DeviceClass_ConfigFilters,
                (WCHAR *)SourceString,
                v65,
                1,
                0,
                v4,
                (__int64)v73);
        v8 = v39;
        if ( v39 != -1073741772 && v39 != -1073741275 && v39 < 0 )
          goto LABEL_73;
        while ( 1 )
        {
          v40 = P;
          v41 = PnpGetObjectProperty(
                  *(_QWORD **)&PiPnpRtlCtx,
                  (WCHAR *)SourceString,
                  2u,
                  v65,
                  0LL,
                  (__int64)DEVPKEY_DeviceClass_ConfigNotifyWnfTriggers,
                  &v66,
                  (const wchar_t *)P,
                  v55,
                  (__int64)&v56,
                  0);
          if ( v41 != -1073741789 )
            break;
          if ( v56 <= v55 )
          {
            v8 = -1073741823;
            goto LABEL_73;
          }
          ExFreePoolWithTag(v40, 0);
          v55 = v56;
          P = (PVOID)ExAllocatePool2(0x100uLL);
          if ( !P )
          {
            v8 = -1073741670;
            goto LABEL_136;
          }
        }
        v8 = v41;
        if ( v41 < 0 )
        {
          if ( v41 == -1073741772 || v41 == -1073741275 )
            v8 = 0;
LABEL_136:
          if ( v8 < 0 )
            goto LABEL_73;
          goto LABEL_137;
        }
        if ( v66 == 4099 && (v56 & 7) == 0 && v56 )
        {
          v45 = (char *)P;
          v46 = v56 >> 3;
          do
          {
            ZwUpdateWnfStateData((__int64)v45, 0LL);
            v45 += 8;
            --v46;
          }
          while ( v46 );
          v23 = 56LL;
          goto LABEL_40;
        }
      }
LABEL_137:
      if ( !v74[0] )
      {
        v42 = *(_QWORD *)(BugCheckParameter2 + 48);
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
                   &P,
                   &v55,
                   0x13u,
                   (__int64)&DEVPKEY_Device_CompoundLowerFilters,
                   *(WCHAR **)(BugCheckParameter2 + 48),
                   Handle,
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
      goto LABEL_73;
    }
    if ( v65 && (*(_DWORD *)(BugCheckParameter2 + 396) & 0x8000000) == 0 )
    {
      v32 = PnpCallDriverQueryServiceHelper(
              &P,
              &v55,
              0x13u,
              (__int64)&DEVPKEY_DeviceClass_CompoundLowerFilters,
              (WCHAR *)SourceString,
              v65,
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
        goto LABEL_73;
      }
    }
    if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x10000000) != 0 )
    {
      v8 = -1073741772;
    }
    else
    {
      v47 = PnpCallDriverQueryServiceHelper(
              &P,
              &v55,
              5u,
              0LL,
              *(WCHAR **)(BugCheckParameter2 + 48),
              Handle,
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
    goto LABEL_73;
  }
  v8 = -1073741670;
LABEL_73:
  if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x1000) != 0 )
    goto LABEL_99;
  if ( v8 >= 0 )
  {
    if ( *(_QWORD *)(v75 + 8) )
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
    v48 = PnpCallDriverQueryServiceHelper(
            &P,
            &v55,
            0x12u,
            (__int64)&DEVPKEY_Device_CompoundUpperFilters,
            *(WCHAR **)(BugCheckParameter2 + 48),
            Handle,
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
      goto LABEL_52;
    }
  }
  if ( v65 && (*(_DWORD *)(BugCheckParameter2 + 396) & 0x40000000) == 0 )
  {
    v49 = PnpCallDriverQueryServiceHelper(
            &P,
            &v55,
            0x12u,
            (__int64)&DEVPKEY_DeviceClass_CompoundUpperFilters,
            (WCHAR *)SourceString,
            v65,
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
      goto LABEL_52;
    }
  }
  v8 = PiDmaGuardProcessPreAddDevice(v73, Handle);
  if ( v8 >= 0 )
  {
    v16 = 0LL;
    Object = IoGetAttachedDeviceReferenceWithTag(*(_QWORD **)(BugCheckParameter2 + 32), 0x65706E50u);
    for ( i = 0; i < 6u; ++i )
    {
      if ( i == 3 )
      {
        AttachedDeviceReferenceWithTag = IoGetAttachedDeviceReferenceWithTag(
                                           *(_QWORD **)(BugCheckParameter2 + 32),
                                           0x65706E50u);
        v18 = AttachedDeviceReferenceWithTag;
        if ( v5 && !v75 )
          PipSetDevNodeState(BugCheckParameter2, 773);
      }
      else
      {
        v18 = AttachedDeviceReferenceWithTag;
      }
      v19 = (_QWORD *)v74[i];
      for ( j = v19; j; j = (_QWORD *)j[1] )
      {
        v24 = PnpCallAddDevice(BugCheckParameter2, *j, *(_QWORD *)(*(_QWORD *)(*j + 48LL) + 8LL), i);
        *(_DWORD *)(*j + 16LL) |= 0x400u;
        if ( v24 >= 0 )
        {
          if ( i == 3 )
            v16 = v18[3];
          PipSetDevNodeState(BugCheckParameter2, 773);
        }
        else if ( i == 3 )
        {
          IovUtilMarkStack(*(_QWORD *)(BugCheckParameter2 + 32), *((_QWORD *)Object + 3), v16, 0);
          v23 = 31LL;
          *(_DWORD *)(BugCheckParameter2 + 392) = v34;
          goto LABEL_40;
        }
      }
      if ( !i )
      {
        if ( v19 )
        {
          v50 = *(_QWORD *)(BugCheckParameter2 + 48);
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
    v21 = !v16 || v5;
    IovUtilMarkStack(*(_QWORD *)(BugCheckParameter2 + 32), *((_QWORD *)Object + 3), v16, v21);
    if ( (int)PipChangeDeviceObjectFromRegistryProperties(
                *(_QWORD *)(BugCheckParameter2 + 32),
                (int)Handle,
                SourceString,
                (__int64)v65,
                v5) < 0 )
    {
      v23 = 50LL;
LABEL_40:
      PnpRequestDeviceRemoval(BugCheckParameter2, 0LL, v23);
      v8 = -1073741106;
      goto LABEL_52;
    }
    v25 = (unsigned int *)(BugCheckParameter2 + 452);
    v26 = (int *)(BugCheckParameter2 + 448);
    if ( (int)IopQueryLegacyBusInformation(
                *(_QWORD **)(BugCheckParameter2 + 32),
                v22,
                (_DWORD *)(BugCheckParameter2 + 448),
                (_DWORD *)(BugCheckParameter2 + 452)) < 0 )
    {
      *v26 = -1;
      *v25 = -16;
    }
    else
    {
      IopInsertLegacyBusDeviceNode(BugCheckParameter2, *v26, *v25);
    }
    PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v27, *(_QWORD *)(BugCheckParameter2 + 48), 23);
    if ( (*(_DWORD *)(BugCheckParameter2 + 560) & 0x100000) != 0 )
    {
      v8 = PiProcessDriversLoadedOnSecureDevice(BugCheckParameter2);
      if ( v8 < 0 )
        goto LABEL_52;
    }
    if ( PipDmaGuardPolicy && *(_QWORD *)(BugCheckParameter2 + 720) )
    {
      v8 = PipDmgEnforceEnumerationPolicy(BugCheckParameter2, v28, v29);
      goto LABEL_52;
    }
LABEL_99:
    v8 = 0;
  }
LABEL_52:
  v6 = 6LL;
LABEL_172:
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
