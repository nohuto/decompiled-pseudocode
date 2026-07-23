/*
 * XREFs of _CmGetDeviceMappedPropertyFromComposite @ 0x1409ABB00
 * Callers:
 *     _PnpDispatchDevice @ 0x1408CB5A0 (_PnpDispatchDevice.c)
 *     _CmGetDeviceMappedPropertyKeys @ 0x1409AB838 (_CmGetDeviceMappedPropertyKeys.c)
 * Callees:
 *     RtlStringCbCopyExW @ 0x1404447AC (RtlStringCbCopyExW.c)
 *     RtlInitUnicodeStringEx @ 0x14044FE60 (RtlInitUnicodeStringEx.c)
 *     wcscmp @ 0x1404FD6E0 (wcscmp.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x1408B9CCC (_CmIsDeviceSafeRemovalRequired.c)
 *     _CmGetDeviceStatus @ 0x1408BA218 (_CmGetDeviceStatus.c)
 *     _CmGetDeviceRegProp @ 0x1408C35E0 (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x1408C42B0 (_CmOpenDeviceRegKey.c)
 *     RtlGUIDFromString @ 0x1408C7C70 (RtlGUIDFromString.c)
 *     _PnpGetObjectProperty @ 0x1408CB9C0 (_PnpGetObjectProperty.c)
 *     _CmGetDeviceParent @ 0x140928AD8 (_CmGetDeviceParent.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x14097BA80 (_CmGetDeviceContainerIdFromBase.c)
 *     _CmGetDeviceRelationsList @ 0x1409AB120 (_CmGetDeviceRelationsList.c)
 *     _CmGetDeviceSiblings @ 0x1409AB1F4 (_CmGetDeviceSiblings.c)
 *     _CmGetDeviceChildren @ 0x1409AB39C (_CmGetDeviceChildren.c)
 *     _PnpMultiSzGetLen @ 0x1409AD600 (_PnpMultiSzGetLen.c)
 *     _CmGetDeviceCompoundFilters @ 0x1409AD640 (_CmGetDeviceCompoundFilters.c)
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
  int v49; // eax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  int v53; // eax
  int v54; // eax
  bool v55; // zf
  __int64 v56; // rax
  int v57; // eax
  int v58; // eax
  __int64 v59; // rax
  int DeviceChildren; // eax
  bool v61; // zf
  int DeviceRelationsList; // eax
  unsigned int Len; // eax
  __int64 v64; // rax
  int v65; // eax
  int v66; // eax
  __int64 v67; // rax
  int v68; // eax
  bool v69; // zf
  __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rax
  unsigned int DeviceSiblings; // eax
  __int64 v76; // rcx
  __int64 v77; // rax
  unsigned int v78; // eax
  int v79; // r8d
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rcx
  __int64 v83; // rax
  int *v84; // rax
  unsigned int v85; // [rsp+30h] [rbp-D0h]
  int v86; // [rsp+50h] [rbp-B0h]
  wchar_t v87; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR *v88; // [rsp+68h] [rbp-98h]
  int v89; // [rsp+70h] [rbp-90h] BYREF
  int v90; // [rsp+74h] [rbp-8Ch] BYREF
  ULONG v91; // [rsp+78h] [rbp-88h] BYREF
  int v92; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned int v93; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v94; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v95; // [rsp+88h] [rbp-78h]
  void *v96; // [rsp+90h] [rbp-70h]
  int *v97; // [rsp+98h] [rbp-68h]
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-60h] BYREF
  int v99; // [rsp+B0h] [rbp-50h] BYREF
  int v100; // [rsp+B4h] [rbp-4Ch] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp-48h] BYREF
  __int128 Buf2; // [rsp+C0h] [rbp-40h] BYREF
  __int128 Buf1; // [rsp+D0h] [rbp-30h] BYREF
  wchar_t Str2[40]; // [rsp+E0h] [rbp-20h] BYREF
  WCHAR SourceString[40]; // [rsp+130h] [rbp+30h] BYREF

  v9 = a6;
  v96 = a3;
  v88 = a2;
  v12 = a3;
  v97 = a5;
  v13 = a2;
  v94 = 0;
  DeviceStatus = 0;
  v89 = 0;
  v91 = 0;
  v92 = 0;
  v93 = 0;
  v99 = 0;
  Handle = 0LL;
  v90 = 0;
  v100 = 0;
  LOBYTE(v87) = 0;
  DestinationString = 0LL;
  Buf2 = 0LL;
  Buf1 = 0LL;
  if ( (_WORD)a9 )
    return (unsigned int)-1073741811;
  *a5 = 0;
  v15 = a9 & 0xFFFF0000;
  *a8 = 0;
  v95 = a9 & 0xFFFF0000;
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
                         (__int64)&v89,
                         a9 & 0xFFFF0000);
      DeviceStatus = ObjectProperty;
      if ( ObjectProperty && ObjectProperty != -1073741789 )
      {
        if ( ObjectProperty != -1073741275 )
          goto LABEL_30;
        v32 = PnpGetObjectProperty(
                a1,
                v88,
                1u,
                v96,
                0LL,
                (__int64)&DEVPKEY_Device_DeviceDesc,
                v97,
                v9,
                a7,
                (__int64)&v89,
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
    v74 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Siblings.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Siblings.fmtid.Data1 )
      v74 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Siblings.fmtid.Data4;
    if ( v74 )
      return DeviceStatus;
    v91 = v16 >> 1;
    DeviceSiblings = CmGetDeviceSiblings(a1, v13, v9, &v91);
    DeviceStatus = DeviceSiblings;
    if ( !DeviceSiblings )
      goto LABEL_225;
    v61 = DeviceSiblings == -1073741789;
    goto LABEL_166;
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
        DeviceStatus = CmGetDeviceStatus((__int64)a1, v13, (int)v96, &v92, &v93, &v94, v85);
        if ( (DeviceStatus & 0x80000000) == 0 )
        {
          v40 = *(_DWORD *)(a4 + 16);
          v41 = v92;
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
            v70 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1;
            if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1 )
              v70 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemCode.fmtid.Data4;
            if ( !v70 )
            {
LABEL_97:
              v43 = 7;
              goto LABEL_98;
            }
          }
          if ( (v92 & 0x400) != 0 )
          {
            v43 = 24;
LABEL_98:
            v44 = v97;
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
                v77 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1;
                if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1 )
                  v77 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemCode.fmtid.Data4;
                if ( !v77 )
                {
                  v78 = (v41 & 0x400) != 0 ? v93 : 0;
LABEL_241:
                  *(_DWORD *)v9 = v78;
                  return DeviceStatus;
                }
              }
              v78 = v94;
              goto LABEL_241;
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
        v83 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ContainerId.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ContainerId.fmtid.Data1 )
          v83 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ContainerId.fmtid.Data4;
        if ( v83 )
          return DeviceStatus;
        v89 = 78;
        DeviceStatus = CmGetDeviceRegProp(
                         (__int64)a1,
                         (__int64)v13,
                         (__int64)v96,
                         0x25u,
                         (__int64)&v100,
                         (__int64)Str2,
                         (__int64)&v89,
                         a9);
        if ( (DeviceStatus & 0x80000000) != 0 )
          goto LABEL_30;
        if ( !wcscmp(L"{00000000-0000-0000-0000-000000000000}", Str2) )
          return (unsigned int)-1073741275;
        v84 = v97;
        *a8 = 16;
        *v84 = 13;
        if ( a7 >= *a8 )
        {
          DeviceStatus = CmGetDeviceContainerIdFromBase(a1, v88, Str2, SourceString);
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
    }
    else
    {
      if ( v17 == 3 )
      {
        v71 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemCode.fmtid.Data1 )
          v71 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemCode.fmtid.Data4;
        if ( !v71 )
          goto LABEL_92;
      }
      if ( v17 == 12 )
      {
        v82 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ProblemStatus.fmtid.Data1;
        if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ProblemStatus.fmtid.Data1 )
          v82 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ProblemStatus.fmtid.Data4;
        if ( !v82 )
          goto LABEL_92;
        goto LABEL_21;
      }
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
            v38 = guard_dispatch_icall_no_overrides(a1, &DestinationString);
            if ( v38 == -2147483643 )
              return (unsigned int)-1073741789;
            if ( v38 == -1073741810 )
              return 0;
            DeviceStatus = v38;
            if ( v38 < 0 )
              return DeviceStatus;
            goto LABEL_145;
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
                v72 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_BusRelations.fmtid.Data1;
                if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_BusRelations.fmtid.Data1 )
                  v72 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_BusRelations.fmtid.Data4;
                if ( !v72 )
                {
                  v18 = 32;
                  goto LABEL_168;
                }
                break;
              case 0xBu:
                v76 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_TransportRelations.fmtid.Data1;
                if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_TransportRelations.fmtid.Data1 )
                  v76 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_TransportRelations.fmtid.Data4;
                if ( !v76 )
                {
                  v18 = 64;
                  goto LABEL_168;
                }
                break;
              case 8u:
                v34 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Parent.fmtid.Data1;
                if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Parent.fmtid.Data1 )
                  v34 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Parent.fmtid.Data4;
                if ( v34 )
                {
                  v50 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_ReportedDeviceIdsHash.fmtid.Data1;
                  if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_ReportedDeviceIdsHash.fmtid.Data1 )
                    v50 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_ReportedDeviceIdsHash.fmtid.Data4;
                  if ( v50 )
                    return DeviceStatus;
                  *a5 = 7;
                  *a8 = 4;
                  DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, v13);
                  if ( (DeviceStatus & 0x80000000) != 0 )
                    goto LABEL_30;
                  if ( a1[32] )
                  {
                    v49 = guard_dispatch_icall_no_overrides(a1, &DestinationString);
                    DeviceStatus = v49;
                    if ( v49 == -1073741772 )
                      return (unsigned int)-1073741275;
                    if ( v49 == -2147483643 )
                      return (unsigned int)-1073741789;
LABEL_117:
                    if ( v49 >= 0 )
                      return DeviceStatus;
                    goto LABEL_30;
                  }
                  return (unsigned int)-1073741822;
                }
                v91 = v16 >> 1;
                DeviceParent = CmGetDeviceParent(a1, v13, v9, &v91);
                DeviceStatus = DeviceParent;
                if ( DeviceParent && DeviceParent != -1073741789 )
                  goto LABEL_30;
                *a8 = 2 * v91;
                *v97 = 18;
LABEL_74:
                if ( a7 >= *a8 )
                  goto LABEL_30;
                return (unsigned int)-1073741789;
              case 9u:
                v59 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_Children.fmtid.Data1;
                if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_Children.fmtid.Data1 )
                  v59 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_Children.fmtid.Data4;
                if ( v59 )
                  return DeviceStatus;
                v91 = v16 >> 1;
                DeviceChildren = CmGetDeviceChildren((__int64)a1, v13, v9, &v91);
                DeviceStatus = DeviceChildren;
                if ( DeviceChildren == -1073741789 )
                {
LABEL_225:
                  *a8 = 2 * v91;
                  *v97 = 8210;
                  goto LABEL_74;
                }
                v61 = DeviceChildren == 0;
LABEL_166:
                if ( !v61 )
                  goto LABEL_30;
                goto LABEL_225;
              case 0xFu:
                v64 = *(_QWORD *)a4 - DEVPKEY_Device_IsConnected;
                if ( *(_QWORD *)a4 == DEVPKEY_Device_IsConnected )
                  v64 = *(_QWORD *)(a4 + 8) - 0x293B573F92A15394LL;
                if ( v64 )
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
                v65 = guard_dispatch_icall_no_overrides(a1, &DestinationString);
                if ( v65 == -2147483643 )
                  return (unsigned int)-1073741789;
                if ( v65 == -1073741810 )
                  return 0;
                DeviceStatus = v65;
                if ( v65 < 0 || (v92 & 0x2000000) != 0 )
                  return DeviceStatus;
                v66 = PnpGetObjectProperty(
                        a1,
                        v88,
                        1u,
                        0LL,
                        0LL,
                        (__int64)&DEVPKEY_Device_PresenceNotForDevice,
                        &v90,
                        &v87,
                        1u,
                        (__int64)&v89,
                        v95);
                DeviceStatus = v66;
                if ( v66 >= 0 )
                {
                  if ( v90 != 17 )
                    goto LABEL_145;
                  v55 = (_BYTE)v87 == 0xFF;
                  goto LABEL_144;
                }
                if ( v66 != -1073741275 && v66 != -1073741789 )
                  goto LABEL_30;
                DeviceStatus = 0;
                goto LABEL_145;
              case 0x10u:
                v67 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_IsRebootRequired.fmtid.Data1;
                if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_IsRebootRequired.fmtid.Data1 )
                  v67 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_IsRebootRequired.fmtid.Data4;
                if ( v67 )
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
                  v68 = guard_dispatch_icall_no_overrides(a1, &DestinationString);
                  if ( v68 == -1073741810 )
                    return 0;
                  if ( v68 != -2147483643 )
                  {
                    DeviceStatus = v68;
                    if ( v68 < 0 )
                      return DeviceStatus;
                    if ( (v92 & 0x100) != 0 )
                      goto LABEL_145;
                    if ( (v92 & 0x400) == 0 )
                      return DeviceStatus;
                    v69 = v93 == 14;
                    goto LABEL_199;
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
                if ( !a1[32] )
                  return (unsigned int)-1073741822;
                goto LABEL_114;
              default:
                break;
            }
            v15 = v95;
            v12 = v96;
LABEL_21:
            if ( v17 != 20 )
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
                      v13 = v88;
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
                  v80 = *(_QWORD *)a4 - DEVPKEY_Device_EffectiveRestrictedSD;
                  if ( *(_QWORD *)a4 == DEVPKEY_Device_EffectiveRestrictedSD )
                    v80 = *(_QWORD *)(a4 + 8) - 0x57C1C6A499921E96LL;
                  if ( v80 )
                    return DeviceStatus;
                  DeviceStatus = PnpGetObjectProperty(
                                   a1,
                                   v13,
                                   1u,
                                   v12,
                                   0LL,
                                   (__int64)&DEVPKEY_Device_RestrictedSD,
                                   &v90,
                                   v9,
                                   v16,
                                   (__int64)&v89,
                                   v15);
                  if ( (int)(DeviceStatus + 0x80000000) >= 0 && DeviceStatus != -1073741789 )
                  {
                    if ( DeviceStatus != -1073741275 )
                      goto LABEL_30;
                    goto LABEL_269;
                  }
                  if ( v90 != 19 )
                  {
LABEL_269:
                    DeviceStatus = PnpGetObjectProperty(
                                     a1,
                                     v88,
                                     1u,
                                     v96,
                                     0LL,
                                     (__int64)&DEVPKEY_Device_InheritedRestrictedSD,
                                     &v90,
                                     v9,
                                     a7,
                                     (__int64)&v89,
                                     v15);
                    if ( (int)(DeviceStatus + 0x80000000) >= 0 && DeviceStatus != -1073741789 )
                      goto LABEL_30;
                    v13 = v88;
                    if ( v90 == 19 )
                    {
                      *v97 = 19;
                      *a8 = v89;
                    }
                    else
                    {
                      DeviceStatus = -1073741275;
                    }
                    goto LABEL_31;
                  }
                  *v97 = 19;
LABEL_63:
                  *a8 = v89;
                  goto LABEL_30;
                }
                v56 = *(_QWORD *)a4 - DEVPKEY_Device_OmitFromSystemSpec;
                if ( *(_QWORD *)a4 == DEVPKEY_Device_OmitFromSystemSpec )
                  v56 = *(_QWORD *)(a4 + 8) + 0x298AF3586C1A6853LL;
                if ( v56 )
                  return DeviceStatus;
                *a5 = 17;
                *a8 = 1;
                if ( v16 )
                {
                  *(_BYTE *)v9 = 0;
                  v57 = PnpGetObjectProperty(
                          a1,
                          v13,
                          1u,
                          v12,
                          0LL,
                          (__int64)DEVPKEY_Device_UpdateWithUngroupedDrivers,
                          &v90,
                          &v87,
                          1u,
                          (__int64)&v89,
                          v15);
                  DeviceStatus = v57;
                  if ( v57 >= 0 )
                  {
                    if ( v90 == 17 && v89 == 1 )
                    {
                      v69 = (_BYTE)v87 == 0;
LABEL_199:
                      if ( !v69 )
                        return DeviceStatus;
                      goto LABEL_145;
                    }
                  }
                  else if ( v57 != -1073741275 && v57 != -1073741789 )
                  {
                    goto LABEL_30;
                  }
                  v58 = PnpGetObjectProperty(
                          a1,
                          v88,
                          1u,
                          v96,
                          0LL,
                          (__int64)DEVPKEY_Device_DriverNeedsGroupUpdate,
                          &v90,
                          &v87,
                          1u,
                          (__int64)&v89,
                          v15);
                  DeviceStatus = v58;
                  if ( v58 < 0 )
                  {
                    if ( v58 != -1073741275 && v58 != -1073741789 )
                      goto LABEL_30;
                    return 0;
                  }
                  if ( v90 != 17 || v89 != 1 )
                    return DeviceStatus;
                  v69 = (_BYTE)v87 == 0xFF;
                  goto LABEL_199;
                }
                return (unsigned int)-1073741789;
              }
              v73 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DependencyDependents.fmtid.Data1;
              if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DependencyDependents.fmtid.Data1 )
                v73 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DependencyDependents.fmtid.Data4;
              if ( v73 )
                return DeviceStatus;
              *a5 = 8210;
              DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, v13);
              if ( (DeviceStatus & 0x80000000) != 0 )
                goto LABEL_30;
              if ( a1[32] )
                goto LABEL_114;
              return (unsigned int)-1073741822;
            }
            v81 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_DependencyProviders.fmtid.Data1;
            if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_DependencyProviders.fmtid.Data1 )
              v81 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_DependencyProviders.fmtid.Data4;
            if ( v81 )
              return DeviceStatus;
            *a5 = 8210;
            DeviceStatus = RtlInitUnicodeStringEx(&DestinationString, v13);
            if ( (DeviceStatus & 0x80000000) != 0 )
              goto LABEL_30;
            if ( !a1[32] )
              return (unsigned int)-1073741822;
LABEL_114:
            v49 = guard_dispatch_icall_no_overrides(a1, &DestinationString);
            if ( v49 == -2147483643 )
              return (unsigned int)-1073741789;
            if ( v49 == -1073741772 )
              return (unsigned int)-1073741275;
            DeviceStatus = v49;
            goto LABEL_117;
          }
          v51 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_PowerRelations.fmtid.Data1;
          if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_PowerRelations.fmtid.Data1 )
            v51 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_PowerRelations.fmtid.Data4;
          if ( v51 )
          {
            v52 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_HasProblem.fmtid.Data1;
            if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_HasProblem.fmtid.Data1 )
              v52 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_HasProblem.fmtid.Data4;
            if ( v52 )
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
            v53 = guard_dispatch_icall_no_overrides(a1, &DestinationString);
            if ( v53 == -2147483643 )
              return (unsigned int)-1073741789;
            if ( v53 == -1073741810 )
              return 0;
            DeviceStatus = v53;
            if ( v53 < 0 )
              return DeviceStatus;
            if ( (v92 & 0x8000) == 0 )
            {
              if ( (v92 & 0x400) == 0 || v93 <= 0x1D && (v79 = 591396864, _bittest(&v79, v93)) )
              {
                if ( (v92 & 8) != 0 )
                  return DeviceStatus;
                v54 = PnpGetObjectProperty(
                        a1,
                        v88,
                        1u,
                        v96,
                        0LL,
                        (__int64)&DEVPKEY_Device_Capabilities,
                        &v90,
                        (const wchar_t *)&v99,
                        4u,
                        (__int64)&v89,
                        v95);
                DeviceStatus = v54;
                if ( v54 == -1073741275 )
                  return 0;
                if ( v54 < 0 )
                  goto LABEL_30;
                v55 = (v99 & 0x40) == 0;
LABEL_144:
                if ( v55 )
                  return DeviceStatus;
              }
            }
LABEL_145:
            *(_BYTE *)v9 = -1;
            return DeviceStatus;
          }
          v18 = 16;
        }
LABEL_168:
        DeviceRelationsList = CmGetDeviceRelationsList((__int64)a1, v13, v18);
        DeviceStatus = DeviceRelationsList;
        if ( DeviceRelationsList == -1073741772 )
          return (unsigned int)-1073741275;
        if ( !DeviceRelationsList || DeviceRelationsList == -1073741789 )
        {
          *v97 = 8210;
          if ( DeviceRelationsList )
            Len = v91;
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
        goto LABEL_168;
      v27 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_Device_InLocalMachineContainer.fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_Device_InLocalMachineContainer.fmtid.Data1 )
        v27 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_Device_InLocalMachineContainer.fmtid.Data4;
      if ( v27 )
        return DeviceStatus;
      v28 = v95;
      v86 = v95;
      *a5 = 17;
      *a8 = 1;
      DeviceStatus = PnpGetObjectProperty(
                       a1,
                       v13,
                       1u,
                       a3,
                       0LL,
                       (__int64)&DEVPKEY_Device_ContainerId,
                       &v90,
                       (const wchar_t *)&Buf2,
                       0x10u,
                       (__int64)&v89,
                       v86);
      if ( (DeviceStatus & 0x80000000) != 0 )
        goto LABEL_30;
      DeviceStatus = PnpGetObjectProperty(
                       a1,
                       (WCHAR *)L"HTREE\\ROOT\\0",
                       1u,
                       0LL,
                       0LL,
                       (__int64)&DEVPKEY_Device_BaseContainerId,
                       &v90,
                       (const wchar_t *)&Buf1,
                       0x10u,
                       (__int64)&v89,
                       v28);
      if ( (DeviceStatus & 0x80000000) != 0 )
        goto LABEL_30;
      if ( a7 < *a8 )
        return (unsigned int)-1073741789;
      v29 = (memcmp(&Buf1, &Buf2, 0x10uLL) != 0) - 1;
    }
    *(_BYTE *)v9 = v29;
    return DeviceStatus;
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
      v13 = v88;
      DeviceStatus = v24;
      if ( v24 < 0 )
      {
        v25 = v97;
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
