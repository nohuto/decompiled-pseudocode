/*
 * XREFs of _CmGetDeviceMappedPropertyFromComposite @ 0x1409B4770
 * Callers:
 *     _PnpDispatchDevice @ 0x1408CDBB0 (_PnpDispatchDevice.c)
 *     _CmGetDeviceMappedPropertyKeys @ 0x1409B44A8 (_CmGetDeviceMappedPropertyKeys.c)
 * Callees:
 *     RtlStringCbCopyExW @ 0x14044D8AC (RtlStringCbCopyExW.c)
 *     RtlInitUnicodeStringEx @ 0x14045AA10 (RtlInitUnicodeStringEx.c)
 *     wcscmp @ 0x1404FFE20 (wcscmp.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memcmp @ 0x1406BFF10 (memcmp.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x1408BC37C (_CmIsDeviceSafeRemovalRequired.c)
 *     _CmGetDeviceStatus @ 0x1408BC8C8 (_CmGetDeviceStatus.c)
 *     _CmGetDeviceRegProp @ 0x1408C5BB0 (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x1408C6880 (_CmOpenDeviceRegKey.c)
 *     RtlGUIDFromString @ 0x1408CA240 (RtlGUIDFromString.c)
 *     _PnpGetObjectProperty @ 0x1408CDFD0 (_PnpGetObjectProperty.c)
 *     _CmGetDeviceParent @ 0x140926998 (_CmGetDeviceParent.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x140990A40 (_CmGetDeviceContainerIdFromBase.c)
 *     _CmGetDeviceRelationsList @ 0x1409B3D90 (_CmGetDeviceRelationsList.c)
 *     _CmGetDeviceSiblings @ 0x1409B3E64 (_CmGetDeviceSiblings.c)
 *     _CmGetDeviceChildren @ 0x1409B400C (_CmGetDeviceChildren.c)
 *     _PnpMultiSzGetLen @ 0x1409B6270 (_PnpMultiSzGetLen.c)
 *     _CmGetDeviceCompoundFilters @ 0x1409B62B0 (_CmGetDeviceCompoundFilters.c)
 */

__int64 __fastcall CmGetDeviceMappedPropertyFromComposite(
        _QWORD *a1,
        WCHAR *a2,
        void *a3,
        __int64 a4,
        int *a5,
        wchar_t *a6,
        ULONG a7,
        int *a8,
        int a9)
{
  wchar_t *v9; // r14
  void *v12; // r9
  WCHAR *v13; // r11
  unsigned int DeviceStatus; // ebx
  unsigned int v15; // r12d
  ULONG v16; // edx
  unsigned int v17; // eax
  int v18; // r12d
  __int64 v19; // rax
  __int64 v21; // rcx
  WCHAR *v22; // rax
  __int64 v23; // r9
  NTSTATUS v24; // eax
  int *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // edi
  char v29; // cl
  __int64 v30; // rax
  unsigned int ObjectProperty; // eax
  unsigned int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rax
  unsigned int DeviceParent; // eax
  __int64 v36; // rax
  __int64 v37; // rax
  int v38; // eax
  __int64 v39; // rax
  int v40; // r8d
  int v41; // ecx
  __int64 v42; // rax
  int v43; // r9d
  int *v44; // rax
  int v45; // eax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // r8
  int v50; // eax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  int v54; // eax
  int v55; // eax
  bool v56; // zf
  __int64 v57; // rax
  int v58; // eax
  int v59; // eax
  __int64 v60; // rax
  int DeviceChildren; // eax
  bool v62; // zf
  int DeviceRelationsList; // eax
  unsigned int Len; // eax
  __int64 v65; // rax
  int v66; // eax
  int v67; // eax
  __int64 v68; // rax
  int v69; // eax
  bool v70; // zf
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rax
  unsigned int DeviceSiblings; // eax
  __int64 v77; // rcx
  __int64 v78; // rax
  unsigned int v79; // eax
  int v80; // r8d
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rcx
  __int64 v84; // rax
  int *v85; // rax
  unsigned int v86; // [rsp+30h] [rbp-D0h]
  int v87; // [rsp+50h] [rbp-B0h]
  wchar_t v88; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR *v89; // [rsp+68h] [rbp-98h]
  int v90; // [rsp+70h] [rbp-90h] BYREF
  int v91; // [rsp+74h] [rbp-8Ch] BYREF
  ULONG v92; // [rsp+78h] [rbp-88h] BYREF
  int v93; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned int v94; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v95; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v96; // [rsp+88h] [rbp-78h]
  void *v97; // [rsp+90h] [rbp-70h]
  int *v98; // [rsp+98h] [rbp-68h]
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-60h] BYREF
  int v100; // [rsp+B0h] [rbp-50h] BYREF
  int v101; // [rsp+B4h] [rbp-4Ch] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp-48h] BYREF
  __int128 Buf2; // [rsp+C0h] [rbp-40h] BYREF
  __int128 Buf1; // [rsp+D0h] [rbp-30h] BYREF
  wchar_t Str2[40]; // [rsp+E0h] [rbp-20h] BYREF
  WCHAR SourceString[40]; // [rsp+130h] [rbp+30h] BYREF

  v9 = a6;
  v97 = a3;
  v89 = a2;
  v12 = a3;
  v98 = a5;
  v13 = a2;
  v95 = 0;
  DeviceStatus = 0;
  v90 = 0;
  v92 = 0;
  v93 = 0;
  v94 = 0;
  v100 = 0;
  Handle = 0LL;
  v91 = 0;
  v101 = 0;
  LOBYTE(v88) = 0;
  DestinationString = 0LL;
  Buf2 = 0LL;
  Buf1 = 0LL;
  if ( (_WORD)a9 )
    return (unsigned int)-1073741811;
  *a5 = 0;
  v15 = a9 & 0xFFFF0000;
  *a8 = 0;
  v96 = a9 & 0xFFFF0000;
  if ( a6 )
  {
    v16 = a7;
    v9 = (wchar_t *)(-(__int64)(a7 != 0) & (unsigned __int64)a6);
  }
  else
  {
    v16 = 0;
    a7 = 0;
  }
  v17 = *(_DWORD *)(a4 + 16);
  if ( v17 < 2 )
    return (unsigned int)-1073741264;
  if ( v17 == 10 )
  {
    v30 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_NAME.fmtid.Data1 )
      v30 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_NAME.fmtid.Data4;
    if ( !v30 )
    {
      ObjectProperty = PnpGetObjectProperty(
                         a1,
                         v13,
                         1u,
                         a3,
                         0LL,
                         (__int64)&DEVPKEY_Device_FriendlyName,
                         a5,
                         v9,
                         v16,
                         (__int64)&v90,
                         a9 & 0xFFFF0000);
      DeviceStatus = ObjectProperty;
      if ( ObjectProperty && ObjectProperty != -1073741789 )
      {
        if ( ObjectProperty != -1073741275 )
          goto LABEL_30;
        v32 = PnpGetObjectProperty(
                a1,
                v89,
                1u,
                v97,
                0LL,
                (__int64)&DEVPKEY_Device_DeviceDesc,
                v98,
                v9,
                a7,
                (__int64)&v90,
                v15);
        DeviceStatus = v32;
        if ( v32 && v32 != -1073741789 )
        {
          if ( v32 == -1073741275 )
            return DeviceStatus;
          goto LABEL_30;
        }
      }
      goto LABEL_63;
    }
    v75 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Siblings.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Siblings.fmtid.Data1 )
      v75 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Siblings.fmtid.Data4;
    if ( v75 )
      return DeviceStatus;
    v92 = v16 >> 1;
    DeviceSiblings = CmGetDeviceSiblings(a1, v13, v9, &v92);
    DeviceStatus = DeviceSiblings;
    if ( !DeviceSiblings )
      goto LABEL_226;
    v62 = DeviceSiblings == -1073741789;
    goto LABEL_167;
  }
  if ( v17 != 256 )
  {
    if ( v17 == 2 )
    {
      v39 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1 )
        v39 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DevNodeStatus.fmtid.Data4;
      if ( !v39 )
      {
LABEL_92:
        DeviceStatus = CmGetDeviceStatus((__int64)a1, v13, (int)v97, &v93, &v94, &v95, v86);
        if ( (DeviceStatus & 0x80000000) == 0 )
        {
          v40 = *(_DWORD *)(a4 + 16);
          v41 = v93;
          if ( v40 == 2 )
          {
            v42 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1;
            if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1 )
              v42 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DevNodeStatus.fmtid.Data4;
            if ( !v42 )
              goto LABEL_97;
          }
          if ( v40 == 3 )
          {
            v71 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1;
            if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1 )
              v71 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemCode.fmtid.Data4;
            if ( !v71 )
            {
LABEL_97:
              v43 = 7;
              goto LABEL_98;
            }
          }
          if ( (v93 & 0x400) != 0 )
          {
            v43 = 24;
LABEL_98:
            v44 = v98;
            *a8 = 4;
            *v44 = v43;
            if ( a7 >= *a8 )
            {
              v45 = *(_DWORD *)(a4 + 16);
              if ( v45 == 2 )
              {
                v46 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1;
                if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DevNodeStatus.fmtid.Data1 )
                  v46 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DevNodeStatus.fmtid.Data4;
                if ( !v46 )
                {
                  *(_DWORD *)v9 = v41;
                  return DeviceStatus;
                }
              }
              else if ( v45 == 3 )
              {
                v78 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1;
                if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1 )
                  v78 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemCode.fmtid.Data4;
                if ( !v78 )
                {
                  v79 = (v41 & 0x400) != 0 ? v94 : 0;
LABEL_242:
                  *(_DWORD *)v9 = v79;
                  return DeviceStatus;
                }
              }
              v79 = v95;
              goto LABEL_242;
            }
            return (unsigned int)-1073741789;
          }
          return (unsigned int)-1073741275;
        }
        goto LABEL_30;
      }
      v47 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_SafeRemovalRequired.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_SafeRemovalRequired.fmtid.Data1 )
        v47 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_SafeRemovalRequired.fmtid.Data4;
      if ( v47 )
      {
        v84 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ContainerId.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ContainerId.fmtid.Data1 )
          v84 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ContainerId.fmtid.Data4;
        if ( v84 )
          return DeviceStatus;
        v90 = 78;
        DeviceStatus = CmGetDeviceRegProp(
                         (__int64)a1,
                         (__int64)v13,
                         (__int64)v97,
                         0x25u,
                         (__int64)&v101,
                         (__int64)Str2,
                         (__int64)&v90,
                         a9);
        if ( (DeviceStatus & 0x80000000) != 0 )
          goto LABEL_30;
        if ( !wcscmp(L"{00000000-0000-0000-0000-000000000000}", Str2) )
          return (unsigned int)-1073741275;
        v85 = v98;
        *a8 = 16;
        *v85 = 13;
        if ( a7 >= *a8 )
        {
          DeviceStatus = CmGetDeviceContainerIdFromBase(a1, v89, Str2, SourceString);
          if ( (DeviceStatus & 0x80000000) == 0 )
          {
            DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, SourceString);
            if ( (DeviceStatus & 0x80000000) == 0 )
              DeviceStatus = RtlGUIDFromString(&DestinationString, (GUID *)v9);
          }
          goto LABEL_30;
        }
        return (unsigned int)-1073741789;
      }
      *a8 = 1;
      *a5 = 17;
      if ( v16 < *a8 )
        return (unsigned int)-1073741789;
      v29 = -CmIsDeviceSafeRemovalRequired((__int64)a1, (__int64)v13, (int)a3);
      goto LABEL_55;
    }
    if ( v17 == 3 )
    {
      v72 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1 )
        v72 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemCode.fmtid.Data4;
      if ( !v72 )
        goto LABEL_92;
    }
    if ( v17 != 12 )
    {
      v18 = 4;
      if ( v17 != 4 )
      {
        if ( v17 == 5 )
        {
          v36 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_RemovalRelations.fmtid.Data1;
          if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_RemovalRelations.fmtid.Data1 )
            v36 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_RemovalRelations.fmtid.Data4;
          if ( v36 )
          {
            v37 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_IsPresent.fmtid.Data1;
            if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_IsPresent.fmtid.Data1 )
              v37 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_IsPresent.fmtid.Data4;
            if ( v37 )
              return DeviceStatus;
            *a8 = 1;
            *a5 = 17;
            if ( v16 < *a8 )
              return (unsigned int)-1073741789;
            DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, v13);
            if ( (DeviceStatus & 0x80000000) != 0 )
              goto LABEL_30;
            *(_BYTE *)v9 = 0;
            if ( !a1[33] )
              return (unsigned int)-1073741822;
            v38 = guard_dispatch_icall_no_overrides(a1, &DestinationString, &v93, &v94);
            if ( v38 == -2147483643 )
              return (unsigned int)-1073741789;
            if ( v38 == -1073741810 )
              return 0;
            DeviceStatus = v38;
            if ( v38 < 0 )
              return DeviceStatus;
            goto LABEL_146;
          }
          v18 = 8;
        }
        else
        {
          if ( v17 != 6 )
          {
            switch ( v17 )
            {
              case 7u:
                v73 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_BusRelations.fmtid.Data1;
                if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_BusRelations.fmtid.Data1 )
                  v73 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_BusRelations.fmtid.Data4;
                if ( !v73 )
                {
                  v18 = 32;
                  goto LABEL_169;
                }
                break;
              case 0xBu:
                v77 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_TransportRelations.fmtid.Data1;
                if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_TransportRelations.fmtid.Data1 )
                  v77 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_TransportRelations.fmtid.Data4;
                if ( !v77 )
                {
                  v18 = 64;
                  goto LABEL_169;
                }
                break;
              case 8u:
                v34 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Parent.fmtid.Data1;
                if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Parent.fmtid.Data1 )
                  v34 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Parent.fmtid.Data4;
                if ( v34 )
                {
                  v51 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ReportedDeviceIdsHash.fmtid.Data1;
                  if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ReportedDeviceIdsHash.fmtid.Data1 )
                    v51 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ReportedDeviceIdsHash.fmtid.Data4;
                  if ( v51 )
                    return DeviceStatus;
                  *a5 = 7;
                  *a8 = 4;
                  DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, v13);
                  if ( (DeviceStatus & 0x80000000) != 0 )
                    goto LABEL_30;
                  if ( a1[32] )
                  {
                    v50 = guard_dispatch_icall_no_overrides(a1, &DestinationString, 13LL, v9);
                    DeviceStatus = v50;
                    if ( v50 == -1073741772 )
                      return (unsigned int)-1073741275;
                    if ( v50 == -2147483643 )
                      return (unsigned int)-1073741789;
LABEL_118:
                    if ( v50 >= 0 )
                      return DeviceStatus;
                    goto LABEL_30;
                  }
                  return (unsigned int)-1073741822;
                }
                v92 = v16 >> 1;
                DeviceParent = CmGetDeviceParent(a1, v13, v9, &v92);
                DeviceStatus = DeviceParent;
                if ( DeviceParent && DeviceParent != -1073741789 )
                  goto LABEL_30;
                *a8 = 2 * v92;
                *v98 = 18;
LABEL_74:
                if ( a7 >= *a8 )
                  goto LABEL_30;
                return (unsigned int)-1073741789;
              case 9u:
                v60 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Children.fmtid.Data1;
                if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Children.fmtid.Data1 )
                  v60 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Children.fmtid.Data4;
                if ( v60 )
                  return DeviceStatus;
                v92 = v16 >> 1;
                DeviceChildren = CmGetDeviceChildren((__int64)a1, v13, v9, &v92);
                DeviceStatus = DeviceChildren;
                if ( DeviceChildren == -1073741789 )
                {
LABEL_226:
                  *a8 = 2 * v92;
                  *v98 = 8210;
                  goto LABEL_74;
                }
                v62 = DeviceChildren == 0;
LABEL_167:
                if ( !v62 )
                  goto LABEL_30;
                goto LABEL_226;
              case 0xFu:
                v65 = *(_QWORD *)a4 - DEVPKEY_Device_IsConnected;
                if ( *(_QWORD *)a4 == DEVPKEY_Device_IsConnected )
                  v65 = *(_QWORD *)(a4 + 8) - 0x293B573F92A15394LL;
                if ( v65 )
                  return DeviceStatus;
                *a5 = 17;
                *a8 = 1;
                if ( !v16 )
                  return (unsigned int)-1073741789;
                DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, v13);
                if ( (DeviceStatus & 0x80000000) != 0 )
                  goto LABEL_30;
                *(_BYTE *)v9 = 0;
                if ( !a1[33] )
                  return (unsigned int)-1073741822;
                v66 = guard_dispatch_icall_no_overrides(a1, &DestinationString, &v93, &v94);
                if ( v66 == -2147483643 )
                  return (unsigned int)-1073741789;
                if ( v66 == -1073741810 )
                  return 0;
                DeviceStatus = v66;
                if ( v66 < 0 || (v93 & 0x2000000) != 0 )
                  return DeviceStatus;
                v67 = PnpGetObjectProperty(
                        a1,
                        v89,
                        1u,
                        0LL,
                        0LL,
                        (__int64)&DEVPKEY_Device_PresenceNotForDevice,
                        &v91,
                        &v88,
                        1u,
                        (__int64)&v90,
                        v96);
                DeviceStatus = v67;
                if ( v67 >= 0 )
                {
                  if ( v91 != 17 )
                    goto LABEL_146;
                  v56 = (_BYTE)v88 == 0xFF;
                  goto LABEL_145;
                }
                if ( v67 != -1073741275 && v67 != -1073741789 )
                  goto LABEL_30;
                DeviceStatus = 0;
                goto LABEL_146;
              case 0x10u:
                v68 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_IsRebootRequired.fmtid.Data1;
                if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_IsRebootRequired.fmtid.Data1 )
                  v68 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_IsRebootRequired.fmtid.Data4;
                if ( v68 )
                  return DeviceStatus;
                *a5 = 17;
                *a8 = 1;
                if ( !v16 )
                  return (unsigned int)-1073741789;
                DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, v13);
                if ( (DeviceStatus & 0x80000000) != 0 )
                  goto LABEL_30;
                *(_BYTE *)v9 = 0;
                if ( a1[33] )
                {
                  v69 = guard_dispatch_icall_no_overrides(a1, &DestinationString, &v93, &v94);
                  if ( v69 == -1073741810 )
                    return 0;
                  if ( v69 != -2147483643 )
                  {
                    DeviceStatus = v69;
                    if ( v69 < 0 )
                      return DeviceStatus;
                    if ( (v93 & 0x100) != 0 )
                      goto LABEL_146;
                    if ( (v93 & 0x400) == 0 )
                      return DeviceStatus;
                    v70 = v94 == 14;
                    goto LABEL_200;
                  }
                  return (unsigned int)-1073741789;
                }
                return (unsigned int)-1073741822;
              case 0xEu:
                v48 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Stack.fmtid.Data1;
                if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Stack.fmtid.Data1 )
                  v48 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Stack.fmtid.Data4;
                if ( v48 )
                  return DeviceStatus;
                *a5 = 8210;
                DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, v13);
                if ( (DeviceStatus & 0x80000000) != 0 )
                  goto LABEL_30;
                if ( a1[32] )
                {
                  v49 = 14LL;
LABEL_115:
                  v50 = guard_dispatch_icall_no_overrides(a1, &DestinationString, v49, v9);
                  if ( v50 == -2147483643 )
                    return (unsigned int)-1073741789;
                  if ( v50 == -1073741772 )
                    return (unsigned int)-1073741275;
                  DeviceStatus = v50;
                  goto LABEL_118;
                }
                return (unsigned int)-1073741822;
              default:
                break;
            }
            v15 = v96;
            v12 = v97;
            goto LABEL_21;
          }
          v52 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_PowerRelations.fmtid.Data1;
          if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_PowerRelations.fmtid.Data1 )
            v52 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_PowerRelations.fmtid.Data4;
          if ( v52 )
          {
            v53 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_HasProblem.fmtid.Data1;
            if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_HasProblem.fmtid.Data1 )
              v53 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_HasProblem.fmtid.Data4;
            if ( v53 )
              return DeviceStatus;
            *a5 = 17;
            *a8 = 1;
            if ( !v16 )
              return (unsigned int)-1073741789;
            DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, v13);
            if ( (DeviceStatus & 0x80000000) != 0 )
              goto LABEL_30;
            *(_BYTE *)v9 = 0;
            if ( !a1[33] )
              return (unsigned int)-1073741822;
            v54 = guard_dispatch_icall_no_overrides(a1, &DestinationString, &v93, &v94);
            if ( v54 == -2147483643 )
              return (unsigned int)-1073741789;
            if ( v54 == -1073741810 )
              return 0;
            DeviceStatus = v54;
            if ( v54 < 0 )
              return DeviceStatus;
            if ( (v93 & 0x8000) == 0 )
            {
              if ( (v93 & 0x400) == 0 || v94 <= 0x1D && (v80 = 591396864, _bittest(&v80, v94)) )
              {
                if ( (v93 & 8) != 0 )
                  return DeviceStatus;
                v55 = PnpGetObjectProperty(
                        a1,
                        v89,
                        1u,
                        v97,
                        0LL,
                        (__int64)&DEVPKEY_Device_Capabilities,
                        &v91,
                        (const wchar_t *)&v100,
                        4u,
                        (__int64)&v90,
                        v96);
                DeviceStatus = v55;
                if ( v55 == -1073741275 )
                  return 0;
                if ( v55 < 0 )
                  goto LABEL_30;
                v56 = (v100 & 0x40) == 0;
LABEL_145:
                if ( v56 )
                  return DeviceStatus;
              }
            }
LABEL_146:
            *(_BYTE *)v9 = -1;
            return DeviceStatus;
          }
          v18 = 16;
        }
LABEL_169:
        DeviceRelationsList = CmGetDeviceRelationsList((__int64)a1, v13, v18, (__int64)v9);
        DeviceStatus = DeviceRelationsList;
        if ( DeviceRelationsList == -1073741772 )
          return (unsigned int)-1073741275;
        if ( !DeviceRelationsList || DeviceRelationsList == -1073741789 )
        {
          *v98 = 8210;
          if ( DeviceRelationsList )
            Len = v92;
          else
            Len = PnpMultiSzGetLen(v9);
          *a8 = 2 * Len;
          return DeviceStatus;
        }
        goto LABEL_30;
      }
      v26 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_EjectionRelations.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_EjectionRelations.fmtid.Data1 )
        v26 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_EjectionRelations.fmtid.Data4;
      if ( !v26 )
        goto LABEL_169;
      v27 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_InLocalMachineContainer.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_InLocalMachineContainer.fmtid.Data1 )
        v27 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_InLocalMachineContainer.fmtid.Data4;
      if ( v27 )
        return DeviceStatus;
      v28 = v96;
      v87 = v96;
      *a5 = 17;
      *a8 = 1;
      DeviceStatus = PnpGetObjectProperty(
                       a1,
                       v13,
                       1u,
                       a3,
                       0LL,
                       (__int64)&DEVPKEY_Device_ContainerId,
                       &v91,
                       (const wchar_t *)&Buf2,
                       0x10u,
                       (__int64)&v90,
                       v87);
      if ( (DeviceStatus & 0x80000000) != 0 )
        goto LABEL_30;
      DeviceStatus = PnpGetObjectProperty(
                       a1,
                       (WCHAR *)L"HTREE\\ROOT\\0",
                       1u,
                       0LL,
                       0LL,
                       (__int64)&DEVPKEY_Device_BaseContainerId,
                       &v91,
                       (const wchar_t *)&Buf1,
                       0x10u,
                       (__int64)&v90,
                       v28);
      if ( (DeviceStatus & 0x80000000) != 0 )
        goto LABEL_30;
      if ( a7 < *a8 )
        return (unsigned int)-1073741789;
      v29 = (memcmp(&Buf1, &Buf2, 0x10uLL) != 0) - 1;
LABEL_55:
      *(_BYTE *)v9 = v29;
      return DeviceStatus;
    }
    v83 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemStatus.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemStatus.fmtid.Data1 )
      v83 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemStatus.fmtid.Data4;
    if ( !v83 )
      goto LABEL_92;
LABEL_21:
    if ( v17 == 20 )
    {
      v82 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DependencyProviders.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DependencyProviders.fmtid.Data1 )
        v82 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DependencyProviders.fmtid.Data4;
      if ( v82 )
        return DeviceStatus;
      *a5 = 8210;
      DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, v13);
      if ( (DeviceStatus & 0x80000000) != 0 )
        goto LABEL_30;
      if ( a1[32] )
      {
        v49 = 15LL;
        goto LABEL_115;
      }
    }
    else
    {
      if ( v17 != 21 )
      {
        if ( v17 != 26 )
        {
          if ( v17 == 22 )
          {
            v33 = *(_QWORD *)a4 - DEVPKEY_Device_CompoundUpperFilters;
            if ( *(_QWORD *)a4 == DEVPKEY_Device_CompoundUpperFilters )
              v33 = *(_QWORD *)(a4 + 8) - 0x293B573F92A15394LL;
            if ( !v33 )
            {
LABEL_29:
              DeviceStatus = CmGetDeviceCompoundFilters((_DWORD)a1, (__int64)a5, (__int64)v9, v16, (__int64)a8);
LABEL_30:
              v13 = v89;
              goto LABEL_31;
            }
          }
          if ( v17 == 23 )
          {
            v19 = *(_QWORD *)a4 - DEVPKEY_Device_CompoundLowerFilters;
            if ( *(_QWORD *)a4 == DEVPKEY_Device_CompoundLowerFilters )
              v19 = *(_QWORD *)(a4 + 8) - 0x293B573F92A15394LL;
            if ( v19 )
              return DeviceStatus;
            goto LABEL_29;
          }
          if ( v17 != 102 )
            return DeviceStatus;
          v81 = *(_QWORD *)a4 - DEVPKEY_Device_EffectiveRestrictedSD;
          if ( *(_QWORD *)a4 == DEVPKEY_Device_EffectiveRestrictedSD )
            v81 = *(_QWORD *)(a4 + 8) - 0x57C1C6A499921E96LL;
          if ( v81 )
            return DeviceStatus;
          DeviceStatus = PnpGetObjectProperty(
                           a1,
                           v13,
                           1u,
                           v12,
                           0LL,
                           (__int64)&DEVPKEY_Device_RestrictedSD,
                           &v91,
                           v9,
                           v16,
                           (__int64)&v90,
                           v15);
          if ( (int)(DeviceStatus + 0x80000000) >= 0 && DeviceStatus != -1073741789 )
          {
            if ( DeviceStatus != -1073741275 )
              goto LABEL_30;
            goto LABEL_270;
          }
          if ( v91 != 19 )
          {
LABEL_270:
            DeviceStatus = PnpGetObjectProperty(
                             a1,
                             v89,
                             1u,
                             v97,
                             0LL,
                             (__int64)&DEVPKEY_Device_InheritedRestrictedSD,
                             &v91,
                             v9,
                             a7,
                             (__int64)&v90,
                             v15);
            if ( (int)(DeviceStatus + 0x80000000) >= 0 && DeviceStatus != -1073741789 )
              goto LABEL_30;
            v13 = v89;
            if ( v91 == 19 )
            {
              *v98 = 19;
              *a8 = v90;
            }
            else
            {
              DeviceStatus = -1073741275;
            }
            goto LABEL_31;
          }
          *v98 = 19;
LABEL_63:
          *a8 = v90;
          goto LABEL_30;
        }
        v57 = *(_QWORD *)a4 - DEVPKEY_Device_OmitFromSystemSpec;
        if ( *(_QWORD *)a4 == DEVPKEY_Device_OmitFromSystemSpec )
          v57 = *(_QWORD *)(a4 + 8) + 0x298AF3586C1A6853LL;
        if ( v57 )
          return DeviceStatus;
        *a5 = 17;
        *a8 = 1;
        if ( v16 )
        {
          *(_BYTE *)v9 = 0;
          v58 = PnpGetObjectProperty(
                  a1,
                  v13,
                  1u,
                  v12,
                  0LL,
                  (__int64)DEVPKEY_Device_UpdateWithUngroupedDrivers,
                  &v91,
                  &v88,
                  1u,
                  (__int64)&v90,
                  v15);
          DeviceStatus = v58;
          if ( v58 >= 0 )
          {
            if ( v91 == 17 && v90 == 1 )
            {
              v70 = (_BYTE)v88 == 0;
LABEL_200:
              if ( !v70 )
                return DeviceStatus;
              goto LABEL_146;
            }
          }
          else if ( v58 != -1073741275 && v58 != -1073741789 )
          {
            goto LABEL_30;
          }
          v59 = PnpGetObjectProperty(
                  a1,
                  v89,
                  1u,
                  v97,
                  0LL,
                  (__int64)DEVPKEY_Device_DriverNeedsGroupUpdate,
                  &v91,
                  &v88,
                  1u,
                  (__int64)&v90,
                  v15);
          DeviceStatus = v59;
          if ( v59 < 0 )
          {
            if ( v59 != -1073741275 && v59 != -1073741789 )
              goto LABEL_30;
            return 0;
          }
          if ( v91 != 17 || v90 != 1 )
            return DeviceStatus;
          v70 = (_BYTE)v88 == 0xFF;
          goto LABEL_200;
        }
        return (unsigned int)-1073741789;
      }
      v74 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DependencyDependents.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DependencyDependents.fmtid.Data1 )
        v74 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DependencyDependents.fmtid.Data4;
      if ( v74 )
        return DeviceStatus;
      *a5 = 8210;
      DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, v13);
      if ( (DeviceStatus & 0x80000000) != 0 )
        goto LABEL_30;
      if ( a1[32] )
      {
        v49 = 16LL;
        goto LABEL_115;
      }
    }
    return (unsigned int)-1073741822;
  }
  v21 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1;
  if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_InstanceId.fmtid.Data1 )
    v21 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_InstanceId.fmtid.Data4;
  if ( v21 )
    goto LABEL_21;
  if ( !v13 )
  {
    DeviceStatus = -1073741811;
    goto LABEL_31;
  }
  v22 = v13;
  v23 = 200LL;
  do
  {
    if ( !*v22 )
      break;
    ++v22;
    --v23;
  }
  while ( v23 );
  DeviceStatus = v23 == 0 ? 0xC000000D : 0;
  if ( v23 )
  {
    *a8 = 2 * (v23 != 0 ? 200 - v23 : 0) + 2;
    *a5 = 18;
    if ( v16 >= *a8 )
    {
      v24 = RtlStringCbCopyExW(v9, (unsigned int)*a8, v13, 0LL, 0LL, 0x900u);
      v13 = v89;
      DeviceStatus = v24;
      if ( v24 < 0 )
      {
        v25 = v98;
        *a8 = 0;
        *v25 = 0;
      }
      goto LABEL_31;
    }
    return (unsigned int)-1073741789;
  }
LABEL_31:
  if ( DeviceStatus == -1073741810 )
  {
    DeviceStatus = CmOpenDeviceRegKey((__int64)a1, (__int64)v13, 16, 0, 1, 0, (__int64)&Handle, 0LL);
    if ( !DeviceStatus )
    {
      ZwClose(Handle);
      return (unsigned int)-1073741275;
    }
    if ( DeviceStatus != -1073741810 && DeviceStatus != -1073741632 )
      return (unsigned int)-1073741823;
  }
  return DeviceStatus;
}
