/*
 * XREFs of _CmUpdateDevicePanel @ 0x140979E38
 * Callers:
 *     PiUpdateDevicePanel @ 0x14097B2F8 (PiUpdateDevicePanel.c)
 * Callees:
 *     _wcsicmp @ 0x1404FBC70 (_wcsicmp.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _CmAddPanelDevice @ 0x14081CC0C (_CmAddPanelDevice.c)
 *     _CmCreateDevicePanel @ 0x14081CF00 (_CmCreateDevicePanel.c)
 *     _CmRemovePanelDevice @ 0x14081E14C (_CmRemovePanelDevice.c)
 *     _PnpSetObjectProperty @ 0x1408B6258 (_PnpSetObjectProperty.c)
 *     _PnpGetObjectProperty @ 0x1408CB9C0 (_PnpGetObjectProperty.c)
 *     _CmIsRootDevice @ 0x140928D54 (_CmIsRootDevice.c)
 *     _CmQueryDevicePanelPldProperty @ 0x14097A934 (_CmQueryDevicePanelPldProperty.c)
 *     _CmBuildDevicePanelId @ 0x140981E58 (_CmBuildDevicePanelId.c)
 *     _CmGetDevicePanelGroup @ 0x140A9D970 (_CmGetDevicePanelGroup.c)
 *     _CmGetParentDeviceContainerId @ 0x140AB0634 (_CmGetParentDeviceContainerId.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmUpdateDevicePanel(__int64 a1, WCHAR *a2, void *a3)
{
  _QWORD *v3; // rdi
  __int64 v4; // r12
  wchar_t *v7; // r14
  HANDLE v8; // r13
  int DevicePanelPldProperty; // eax
  int v10; // ebx
  void *v11; // rax
  int v12; // eax
  const wchar_t *v13; // rbx
  unsigned __int16 *v14; // rax
  _DWORD *v15; // rbx
  wchar_t *v16; // r12
  ULONG v17; // eax
  int v18; // eax
  int v20; // ecx
  __int64 v21; // rax
  unsigned int v22; // eax
  unsigned int v23; // eax
  bool v24; // al
  __int64 v25; // rax
  int ParentDeviceContainerId; // eax
  int v27; // r8d
  int v28; // ecx
  __int64 Pool2; // rax
  ULONG i; // ebx
  void *v31; // rax
  int ObjectProperty; // eax
  unsigned int v33; // eax
  __int64 v34; // r8
  __int64 v35; // r8
  int v36; // eax
  ULONG_PTR v37; // rdx
  PVOID v38; // rax
  int v39; // eax
  int v40; // eax
  unsigned int v41; // ecx
  int v42; // eax
  unsigned int v43; // ecx
  PVOID v44; // r9
  __int64 v45; // r8
  __int64 v46; // rax
  int v47; // eax
  unsigned int v48; // ecx
  int v49; // edx
  unsigned int v50; // r8d
  unsigned int v51; // ecx
  unsigned int v52; // ecx
  unsigned int v53; // ecx
  unsigned int v54; // [rsp+60h] [rbp-A0h] BYREF
  char v55; // [rsp+64h] [rbp-9Ch]
  char v56; // [rsp+65h] [rbp-9Bh] BYREF
  char v57; // [rsp+66h] [rbp-9Ah]
  unsigned int v58; // [rsp+68h] [rbp-98h] BYREF
  char v59[4]; // [rsp+6Ch] [rbp-94h] BYREF
  PVOID v60; // [rsp+70h] [rbp-90h]
  PVOID P; // [rsp+78h] [rbp-88h]
  PVOID v62; // [rsp+80h] [rbp-80h]
  int v63; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v64; // [rsp+8Ch] [rbp-74h] BYREF
  unsigned int v65; // [rsp+90h] [rbp-70h]
  int v66; // [rsp+94h] [rbp-6Ch] BYREF
  unsigned int DevicePanelGroup; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v68; // [rsp+9Ch] [rbp-64h] BYREF
  unsigned int v69; // [rsp+A0h] [rbp-60h]
  PVOID v70; // [rsp+A8h] [rbp-58h] BYREF
  unsigned int v71; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int v72; // [rsp+B4h] [rbp-4Ch] BYREF
  PVOID v73; // [rsp+B8h] [rbp-48h]
  __int64 v74; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v75; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v76; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v77; // [rsp+E0h] [rbp-20h] BYREF
  int v78; // [rsp+F0h] [rbp-10h]
  __int128 v79; // [rsp+F8h] [rbp-8h] BYREF
  int v80; // [rsp+108h] [rbp+8h]

  v3 = *(_QWORD **)&PiPnpRtlCtx;
  v4 = 0LL;
  v70 = 0LL;
  v64 = 0;
  v74 = 0LL;
  v66 = 0;
  v62 = 0LL;
  v63 = 1;
  v69 = 0;
  v60 = 0LL;
  v7 = 0LL;
  v76 = 0LL;
  v57 = 0;
  v8 = 0LL;
  DevicePanelGroup = 0;
  v68 = 0;
  P = 0LL;
  v73 = 0LL;
  v55 = 0;
  v77 = 0LL;
  v78 = 0;
  v79 = 0LL;
  v80 = 0;
  v75 = 0LL;
  v56 = 0;
  v54 = 0;
  v71 = 0;
  v72 = 0;
  v59[0] = 0;
  v58 = 0;
  if ( CmIsRootDevice(a2) )
    return (unsigned int)-1073741637;
  DevicePanelPldProperty = CmQueryDevicePanelPldProperty(
                             (_DWORD)v3,
                             (_DWORD)a2,
                             1,
                             (_DWORD)a3,
                             (__int64)&DEVPKEY_Device_PhysicalDeviceLocation,
                             (__int64)&v70,
                             (__int64)&v64,
                             (__int64)&v74,
                             (__int64)&v66);
  v10 = DevicePanelPldProperty;
  if ( DevicePanelPldProperty == -1073741275 )
    goto LABEL_3;
  if ( DevicePanelPldProperty < 0 )
    goto LABEL_114;
  v4 = v74;
  if ( !v74 )
    goto LABEL_3;
  ParentDeviceContainerId = CmGetParentDeviceContainerId(v3, a2, &v76);
  v10 = ParentDeviceContainerId;
  if ( ParentDeviceContainerId < 0 )
  {
LABEL_114:
    v16 = (wchar_t *)v70;
    goto LABEL_36;
  }
  v57 = 1;
  DevicePanelGroup = CmGetDevicePanelGroup(v4);
  v28 = v27;
  if ( ((*(_DWORD *)(v4 + 8) >> 3) & 7) != 7 )
    v28 = dword_140041D08[(*(_DWORD *)(v4 + 8) >> 3) & 7];
  v68 = v28;
  Pool2 = ExAllocatePool2(0x100uLL, 0x72uLL, 0x52504E50u);
  v7 = (wchar_t *)Pool2;
  if ( !Pool2 )
  {
    v10 = -1073741801;
    goto LABEL_114;
  }
  v10 = CmBuildDevicePanelId(&v76, DevicePanelGroup, v68, Pool2);
  if ( v10 < 0 )
    goto LABEL_49;
  for ( i = 16; ; i = v58 )
  {
    v65 = i;
    v31 = (void *)ExAllocatePool2(0x100uLL, i, 0x52504E50u);
    v60 = v31;
    if ( !v31 )
    {
      v10 = -1073741801;
      goto LABEL_49;
    }
    ObjectProperty = PnpGetObjectProperty(
                       v3,
                       a2,
                       1u,
                       a3,
                       0LL,
                       (__int64)DEVPKEY_Device_PhysicalDeviceLocationSpatial,
                       &v63,
                       (const wchar_t *)v31,
                       i,
                       (__int64)&v58,
                       0);
    v10 = ObjectProperty;
    if ( ObjectProperty != -1073741789 )
      break;
    if ( v58 <= v65 )
    {
      v10 = -1073741823;
      goto LABEL_49;
    }
    ExFreePoolWithTag(v60, 0);
  }
  if ( ObjectProperty == -1073741275 )
    goto LABEL_128;
  if ( ObjectProperty < 0 )
    goto LABEL_49;
  if ( v63 != 4099 || v58 < 0x10 || (*(_BYTE *)v60 & 0x1F) == 0 )
  {
LABEL_128:
    ExFreePoolWithTag(v60, 0);
    v60 = 0LL;
  }
LABEL_3:
  v11 = (void *)ExAllocatePool2(0x100uLL, 0x72uLL, 0x52504E50u);
  P = v11;
  if ( !v11 )
  {
    v10 = -1073741801;
    goto LABEL_139;
  }
  v12 = PnpGetObjectProperty(
          v3,
          a2,
          1u,
          a3,
          0LL,
          (__int64)&DEVPKEY_Device_PanelId,
          &v63,
          (const wchar_t *)v11,
          0x72u,
          (__int64)&v58,
          0);
  v10 = v12;
  if ( v12 == -1073741275 )
    goto LABEL_5;
  if ( v12 < 0 )
  {
LABEL_139:
    v16 = (wchar_t *)v70;
    goto LABEL_31;
  }
  if ( v63 == 18 && v58 >= 2 )
  {
    v13 = (const wchar_t *)P;
  }
  else
  {
LABEL_5:
    ExFreePoolWithTag(P, 0);
    v13 = 0LL;
    P = 0LL;
  }
  if ( v7 )
  {
    v24 = !v13 || wcsicmp(v13, v7);
    if ( v13 )
    {
      v55 = v24;
      if ( v24 )
        goto LABEL_138;
    }
LABEL_77:
    v55 = v24;
    v25 = -1LL;
    do
      ++v25;
    while ( v7[v25] );
    v10 = PnpSetObjectProperty(
            (__int64)v3,
            (__int64)a2,
            1,
            (__int64)a3,
            0LL,
            (__int64)&DEVPKEY_Device_PanelId,
            18,
            (__int64)v7,
            2 * (int)v25 + 2,
            0);
    if ( v10 < 0 )
      goto LABEL_49;
    v10 = PnpSetObjectProperty(
            (__int64)v3,
            (__int64)a2,
            1,
            (__int64)a3,
            0LL,
            (__int64)DEVPKEY_Device_PanelGroup,
            7,
            (__int64)&DevicePanelGroup,
            4u,
            0);
    if ( v10 < 0 )
      goto LABEL_49;
    v10 = PnpSetObjectProperty(
            (__int64)v3,
            (__int64)a2,
            1,
            (__int64)a3,
            0LL,
            (__int64)DEVPKEY_Device_PanelSide,
            7,
            (__int64)&v68,
            4u,
            0);
    if ( v10 < 0 )
      goto LABEL_49;
    if ( v4 )
    {
      if ( v60 )
      {
        v54 = (unsigned __int16)*((_DWORD *)v60 + 1);
        v10 = PnpSetObjectProperty(
                (__int64)v3,
                (__int64)a2,
                1,
                (__int64)a3,
                0LL,
                (__int64)DEVPKEY_Device_PanelWidth,
                7,
                (__int64)&v54,
                4u,
                0);
        if ( v10 < 0 )
          goto LABEL_49;
        v54 = *((unsigned __int16 *)v60 + 3);
        v10 = PnpSetObjectProperty(
                (__int64)v3,
                (__int64)a2,
                1,
                (__int64)a3,
                0LL,
                (__int64)DEVPKEY_Device_PanelHeight,
                7,
                (__int64)&v54,
                4u,
                0);
        if ( v10 < 0 )
          goto LABEL_49;
        v54 = (unsigned __int16)*((_DWORD *)v60 + 2);
        v10 = PnpSetObjectProperty(
                (__int64)v3,
                (__int64)a2,
                1,
                (__int64)a3,
                0LL,
                (__int64)DEVPKEY_Device_PanelLength,
                7,
                (__int64)&v54,
                4u,
                0);
        if ( v10 < 0 )
          goto LABEL_49;
      }
      else
      {
        v54 = (unsigned __int16)*(_DWORD *)(v4 + 4);
        v10 = PnpSetObjectProperty(
                (__int64)v3,
                (__int64)a2,
                1,
                (__int64)a3,
                0LL,
                (__int64)DEVPKEY_Device_PanelWidth,
                7,
                (__int64)&v54,
                4u,
                0);
        if ( v10 < 0 )
          goto LABEL_49;
        v54 = *(unsigned __int16 *)(v4 + 6);
        v10 = PnpSetObjectProperty(
                (__int64)v3,
                (__int64)a2,
                1,
                (__int64)a3,
                0LL,
                (__int64)DEVPKEY_Device_PanelHeight,
                7,
                (__int64)&v54,
                4u,
                0);
        if ( v10 < 0 )
          goto LABEL_49;
        if ( P )
          PnpSetObjectProperty(
            (__int64)v3,
            (__int64)a2,
            1,
            (__int64)a3,
            0LL,
            (__int64)DEVPKEY_Device_PanelLength,
            0,
            0LL,
            0,
            0);
      }
    }
    else
    {
      v13 = (const wchar_t *)P;
      if ( P )
      {
LABEL_92:
        PnpSetObjectProperty(
          (__int64)v3,
          (__int64)a2,
          1,
          (__int64)a3,
          0LL,
          (__int64)DEVPKEY_Device_PanelWidth,
          0,
          0LL,
          0,
          0);
        PnpSetObjectProperty(
          (__int64)v3,
          (__int64)a2,
          1,
          (__int64)a3,
          0LL,
          (__int64)DEVPKEY_Device_PanelHeight,
          0,
          0LL,
          0,
          0);
        PnpSetObjectProperty(
          (__int64)v3,
          (__int64)a2,
          1,
          (__int64)a3,
          0LL,
          (__int64)DEVPKEY_Device_PanelLength,
          0,
          0LL,
          0,
          0);
        if ( !v7 )
          goto LABEL_8;
      }
    }
    if ( !v4 || *(_WORD *)(v4 + 18) == 0xFFFF || (unsigned __int16)*(_DWORD *)(v4 + 16) == 0xFFFF )
    {
      v13 = (const wchar_t *)P;
      goto LABEL_8;
    }
    v14 = (unsigned __int16 *)v60;
    goto LABEL_146;
  }
  if ( !v13 )
    goto LABEL_8;
  v55 = 1;
LABEL_138:
  v10 = CmRemovePanelDevice((__int64)v3, (__int64)v13, (__int64)a2);
  if ( v10 < 0 )
    goto LABEL_139;
  if ( v7 )
  {
    v24 = v55;
    goto LABEL_77;
  }
  v13 = (const wchar_t *)P;
  if ( P )
  {
    PnpSetObjectProperty((__int64)v3, (__int64)a2, 1, (__int64)a3, 0LL, (__int64)&DEVPKEY_Device_PanelId, 0, 0LL, 0, 0);
    PnpSetObjectProperty(
      (__int64)v3,
      (__int64)a2,
      1,
      (__int64)a3,
      0LL,
      (__int64)DEVPKEY_Device_PanelGroup,
      0,
      0LL,
      0,
      0);
    PnpSetObjectProperty((__int64)v3, (__int64)a2, 1, (__int64)a3, 0LL, (__int64)DEVPKEY_Device_PanelSide, 0, 0LL, 0, 0);
    goto LABEL_92;
  }
LABEL_8:
  v14 = (unsigned __int16 *)v60;
  if ( v60 )
  {
LABEL_146:
    if ( v14 )
    {
      v54 = v14[5];
      v10 = PnpSetObjectProperty(
              (__int64)v3,
              (__int64)a2,
              1,
              (__int64)a3,
              0LL,
              (__int64)DEVPKEY_Device_PanelPositionX,
              7,
              (__int64)&v54,
              4u,
              0);
      if ( v10 < 0 )
        goto LABEL_139;
      v54 = (unsigned __int16)*((_DWORD *)v60 + 3);
      v10 = PnpSetObjectProperty(
              (__int64)v3,
              (__int64)a2,
              1,
              (__int64)a3,
              0LL,
              (__int64)DEVPKEY_Device_PanelPositionY,
              7,
              (__int64)&v54,
              4u,
              0);
      if ( v10 < 0 )
        goto LABEL_139;
      v54 = *((unsigned __int16 *)v60 + 7);
      v10 = PnpSetObjectProperty(
              (__int64)v3,
              (__int64)a2,
              1,
              (__int64)a3,
              0LL,
              (__int64)DEVPKEY_Device_PanelPositionZ,
              7,
              (__int64)&v54,
              4u,
              0);
      if ( v10 < 0 )
        goto LABEL_139;
      v13 = (const wchar_t *)P;
    }
    else
    {
      v54 = *(unsigned __int16 *)(v4 + 18);
      v10 = PnpSetObjectProperty(
              (__int64)v3,
              (__int64)a2,
              1,
              (__int64)a3,
              0LL,
              (__int64)DEVPKEY_Device_PanelPositionX,
              7,
              (__int64)&v54,
              4u,
              0);
      if ( v10 < 0 )
        goto LABEL_139;
      v54 = (unsigned __int16)*(_DWORD *)(v4 + 16);
      v10 = PnpSetObjectProperty(
              (__int64)v3,
              (__int64)a2,
              1,
              (__int64)a3,
              0LL,
              (__int64)DEVPKEY_Device_PanelPositionY,
              7,
              (__int64)&v54,
              4u,
              0);
      if ( v10 < 0 )
        goto LABEL_139;
      v13 = (const wchar_t *)P;
      if ( P )
        PnpSetObjectProperty(
          (__int64)v3,
          (__int64)a2,
          1,
          (__int64)a3,
          0LL,
          (__int64)DEVPKEY_Device_PanelPositionZ,
          0,
          0LL,
          0,
          0);
    }
    goto LABEL_52;
  }
  if ( v13 )
  {
    PnpSetObjectProperty(
      (__int64)v3,
      (__int64)a2,
      1,
      (__int64)a3,
      0LL,
      (__int64)DEVPKEY_Device_PanelPositionX,
      0,
      0LL,
      0,
      0);
    PnpSetObjectProperty(
      (__int64)v3,
      (__int64)a2,
      1,
      (__int64)a3,
      0LL,
      (__int64)DEVPKEY_Device_PanelPositionY,
      0,
      0LL,
      0,
      0);
    PnpSetObjectProperty(
      (__int64)v3,
      (__int64)a2,
      1,
      (__int64)a3,
      0LL,
      (__int64)DEVPKEY_Device_PanelPositionZ,
      0,
      0LL,
      0,
      0);
LABEL_52:
    v14 = (unsigned __int16 *)v60;
  }
  if ( v7 && v4 )
  {
    if ( v14 )
    {
      v54 = ((*(_DWORD *)v14 >> 5) & 0x1FFu) % 0x168;
      v10 = PnpSetObjectProperty(
              (__int64)v3,
              (__int64)a2,
              1,
              (__int64)a3,
              0LL,
              (__int64)DEVPKEY_Device_PanelRotationX,
              7,
              (__int64)&v54,
              4u,
              0);
      if ( v10 >= 0 )
      {
        v54 = ((*(_DWORD *)v60 >> 14) & 0x1FFu) % 0x168;
        v10 = PnpSetObjectProperty(
                (__int64)v3,
                (__int64)a2,
                1,
                (__int64)a3,
                0LL,
                (__int64)DEVPKEY_Device_PanelRotationY,
                7,
                (__int64)&v54,
                4u,
                0);
        if ( v10 >= 0 )
        {
          v54 = (*(_DWORD *)v60 >> 23) % 0x168u;
          v10 = PnpSetObjectProperty(
                  (__int64)v3,
                  (__int64)a2,
                  1,
                  (__int64)a3,
                  0LL,
                  (__int64)DEVPKEY_Device_PanelRotationZ,
                  7,
                  (__int64)&v54,
                  4u,
                  0);
          if ( v10 >= 0 )
          {
            v13 = (const wchar_t *)P;
            goto LABEL_46;
          }
        }
      }
      goto LABEL_49;
    }
    v54 = 45 * ((*(_DWORD *)(v4 + 12) >> 19) & 0xFu) % 0x168;
    v10 = PnpSetObjectProperty(
            (__int64)v3,
            (__int64)a2,
            1,
            (__int64)a3,
            0LL,
            (__int64)DEVPKEY_Device_PanelRotationZ,
            7,
            (__int64)&v54,
            4u,
            0);
    if ( v10 < 0 )
      goto LABEL_49;
    v13 = (const wchar_t *)P;
    if ( P )
    {
      PnpSetObjectProperty(
        (__int64)v3,
        (__int64)a2,
        1,
        (__int64)a3,
        0LL,
        (__int64)DEVPKEY_Device_PanelRotationX,
        0,
        0LL,
        0,
        0);
      PnpSetObjectProperty(
        (__int64)v3,
        (__int64)a2,
        1,
        (__int64)a3,
        0LL,
        (__int64)DEVPKEY_Device_PanelRotationY,
        0,
        0LL,
        0,
        0);
    }
  }
  else
  {
    if ( v13 )
    {
      PnpSetObjectProperty(
        (__int64)v3,
        (__int64)a2,
        1,
        (__int64)a3,
        0LL,
        (__int64)DEVPKEY_Device_PanelRotationX,
        0,
        0LL,
        0,
        0);
      PnpSetObjectProperty(
        (__int64)v3,
        (__int64)a2,
        1,
        (__int64)a3,
        0LL,
        (__int64)DEVPKEY_Device_PanelRotationY,
        0,
        0LL,
        0,
        0);
      PnpSetObjectProperty(
        (__int64)v3,
        (__int64)a2,
        1,
        (__int64)a3,
        0LL,
        (__int64)DEVPKEY_Device_PanelRotationZ,
        0,
        0LL,
        0,
        0);
    }
    if ( !v7 )
      goto LABEL_14;
  }
LABEL_46:
  if ( v4 && (*(_DWORD *)v4 & 0x80u) == 0 )
  {
    v54 = (unsigned __int8)BYTE1(*(_DWORD *)v4) | (((*(unsigned __int8 *)(v4 + 3) << 8) | (unsigned __int8)BYTE2(*(_DWORD *)v4)) << 8) | 0xFF000000;
    v10 = PnpSetObjectProperty(
            (__int64)v3,
            (__int64)a2,
            1,
            (__int64)a3,
            0LL,
            (__int64)DEVPKEY_Device_PanelColor,
            7,
            (__int64)&v54,
            4u,
            0);
    if ( v10 < 0 )
      goto LABEL_49;
    v13 = (const wchar_t *)P;
    goto LABEL_54;
  }
LABEL_14:
  if ( v13 )
    PnpSetObjectProperty(
      (__int64)v3,
      (__int64)a2,
      1,
      (__int64)a3,
      0LL,
      (__int64)DEVPKEY_Device_PanelColor,
      0,
      0LL,
      0,
      0);
  if ( !v7 )
  {
LABEL_17:
    if ( v13 )
      PnpSetObjectProperty(
        (__int64)v3,
        (__int64)a2,
        1,
        (__int64)a3,
        0LL,
        (__int64)DEVPKEY_Device_PanelShape,
        0,
        0LL,
        0,
        0);
    if ( !v7 )
      goto LABEL_20;
    goto LABEL_164;
  }
LABEL_54:
  if ( !v4 )
    goto LABEL_17;
  v20 = 0;
  v21 = (*(_DWORD *)(v4 + 8) >> 10) & 0xF;
  if ( (unsigned int)v21 < 9 )
    v20 = dword_140041D40[v21];
  v54 = v20;
  v10 = PnpSetObjectProperty(
          (__int64)v3,
          (__int64)a2,
          1,
          (__int64)a3,
          0LL,
          (__int64)DEVPKEY_Device_PanelShape,
          7,
          (__int64)&v54,
          4u,
          0);
  if ( v10 < 0 )
    goto LABEL_49;
  v13 = (const wchar_t *)P;
LABEL_164:
  if ( v4 )
  {
    v59[0] = -((*(_BYTE *)(v4 + 8) & 1) != 0);
    v10 = PnpSetObjectProperty(
            (__int64)v3,
            (__int64)a2,
            1,
            (__int64)a3,
            0LL,
            (__int64)DEVPKEY_Device_PanelVisible,
            17,
            (__int64)v59,
            1u,
            0);
    if ( v10 >= 0 )
      goto LABEL_107;
LABEL_49:
    v16 = (wchar_t *)v70;
LABEL_50:
    ExFreePoolWithTag(v7, 0);
    goto LABEL_32;
  }
LABEL_20:
  if ( v13 )
    PnpSetObjectProperty(
      (__int64)v3,
      (__int64)a2,
      1,
      (__int64)a3,
      0LL,
      (__int64)DEVPKEY_Device_PanelVisible,
      0,
      0LL,
      0,
      0);
  if ( !v7 )
    goto LABEL_23;
LABEL_107:
  if ( v55 )
  {
    v10 = CmAddPanelDevice((__int64)v3, (__int64)v7, (__int64)a2);
    if ( v10 < 0 )
      goto LABEL_49;
  }
LABEL_23:
  v15 = 0LL;
  v16 = (wchar_t *)v70;
  v78 = 2;
  v77 = DEVPKEY_Device_PhysicalDeviceLocationPanel;
  v80 = 2;
  v17 = v64;
  v65 = v64;
  v79 = DEVPKEY_Device_PhysicalDeviceLocationJoint;
  while ( 1 )
  {
    v70 = v15;
    v66 = 0;
    v64 = 0;
    while ( 1 )
    {
      v18 = PnpGetObjectProperty(v3, a2, 1u, a3, 0LL, (__int64)&v77, &v66, v16, v17, (__int64)&v64, 0);
      v10 = v18;
      if ( v18 != -1073741789 )
        break;
      v23 = v64;
      if ( v64 <= v65 )
        goto LABEL_112;
      if ( v16 )
      {
        ExFreePoolWithTag(v16, 0);
        v23 = v64;
      }
      v65 = v23;
      v16 = (wchar_t *)ExAllocatePool2(0x100uLL, v23, 0x52504E50u);
      if ( !v16 )
      {
LABEL_113:
        v10 = -1073741801;
        goto LABEL_29;
      }
      v17 = v65;
    }
    if ( v18 < 0 )
      break;
    if ( v66 != 4099 || !v64 )
    {
LABEL_112:
      v10 = -1073741823;
      goto LABEL_29;
    }
    v22 = *(_DWORD *)v16 & 0x7F;
    if ( !v22 || v22 == 1 && v64 < 0x10 || v22 >= 2 && v64 < 0x14 || (v16[4] & 0x38u) >= 0x30 )
      goto LABEL_28;
    if ( !v57 )
    {
      v10 = CmGetParentDeviceContainerId(v3, a2, &v76);
      if ( v10 < 0 )
        goto LABEL_29;
      v57 = 1;
    }
    v33 = CmGetDevicePanelGroup(v16);
    DevicePanelGroup = v33;
    v34 = 0LL;
    if ( ((*((_DWORD *)v16 + 2) >> 3) & 7) != 7 )
      v34 = (unsigned int)dword_140041D08[(*((_DWORD *)v16 + 2) >> 3) & 7];
    v68 = v34;
    if ( !v7 )
    {
      v7 = (wchar_t *)ExAllocatePool2(0x100uLL, 0x72uLL, 0x52504E50u);
      if ( !v7 )
        goto LABEL_113;
      v33 = DevicePanelGroup;
      v34 = v68;
    }
    v10 = CmBuildDevicePanelId(&v76, v33, v34, v7);
    if ( v10 < 0 )
      goto LABEL_29;
    v36 = CmCreateDevicePanel((__int64)v3, (__int64)v7, v35, (HANDLE *)&v75, &v56);
    v8 = (HANDLE)v75;
    v10 = v36;
    if ( v36 < 0 )
      goto LABEL_29;
    v54 = (unsigned __int16)*((_DWORD *)v16 + 1);
    v10 = PnpSetObjectProperty(
            (__int64)v3,
            (__int64)v7,
            6,
            v75,
            0LL,
            (__int64)DEVPKEY_DevicePanel_Width,
            7,
            (__int64)&v54,
            4u,
            0);
    if ( v10 < 0 )
      goto LABEL_29;
    v54 = v16[3];
    v10 = PnpSetObjectProperty(
            (__int64)v3,
            (__int64)v7,
            6,
            (__int64)v8,
            0LL,
            (__int64)DEVPKEY_DevicePanel_Height,
            7,
            (__int64)&v54,
            4u,
            0);
    if ( v10 < 0 )
      goto LABEL_29;
    if ( (*(_DWORD *)v16 & 0x80u) != 0 )
    {
      if ( !v56 )
        PnpSetObjectProperty(
          (__int64)v3,
          (__int64)v7,
          6,
          (__int64)v8,
          0LL,
          (__int64)DEVPKEY_DevicePanel_Color,
          0,
          0LL,
          0,
          0);
    }
    else
    {
      v54 = (unsigned __int8)BYTE1(*(_DWORD *)v16) | (((*((unsigned __int8 *)v16 + 3) << 8) | (unsigned __int8)BYTE2(*(_DWORD *)v16)) << 8) | 0xFF000000;
      v10 = PnpSetObjectProperty(
              (__int64)v3,
              (__int64)v7,
              6,
              (__int64)v8,
              0LL,
              (__int64)DEVPKEY_DevicePanel_Color,
              7,
              (__int64)&v54,
              4u,
              0);
      if ( v10 < 0 )
        goto LABEL_29;
    }
    v37 = v69;
    if ( !v62 )
      v37 = 16LL;
    v62 = v70;
    v69 = v37;
    v38 = v70;
    if ( !v70 )
    {
LABEL_187:
      v38 = (PVOID)ExAllocatePool2(0x100uLL, v37, 0x52504E50u);
      v62 = v38;
      if ( !v38 )
        goto LABEL_113;
      LODWORD(v37) = v69;
    }
    v39 = PnpGetObjectProperty(v3, a2, 1u, a3, 0LL, (__int64)&v79, &v63, (const wchar_t *)v38, v37, (__int64)&v58, 0);
    v10 = v39;
    if ( v39 == -1073741789 )
    {
      if ( v58 <= v69 )
        goto LABEL_112;
      ExFreePoolWithTag(v62, 0);
      v37 = v58;
      v69 = v58;
      goto LABEL_187;
    }
    if ( v39 == -1073741275 )
    {
      v15 = v62;
      *(_DWORD *)v62 &= 0xFFFFFFE0;
    }
    else
    {
      if ( v39 < 0 )
        goto LABEL_29;
      if ( v63 == 4099 && v58 >= 0x10 )
      {
        v15 = v62;
      }
      else
      {
        v15 = v62;
        *(_DWORD *)v62 &= 0xFFFFFFE0;
      }
    }
    if ( (*v15 & 0x1F) == 0 )
    {
      if ( v56 )
        goto LABEL_249;
      PnpSetObjectProperty(
        (__int64)v3,
        (__int64)v7,
        6,
        (__int64)v8,
        0LL,
        (__int64)DEVPKEY_DevicePanel_JointType,
        0,
        0LL,
        0,
        0);
      PnpSetObjectProperty(
        (__int64)v3,
        (__int64)v7,
        6,
        (__int64)v8,
        0LL,
        (__int64)DEVPKEY_DevicePanel_JointSourcePanelEdge,
        0,
        0LL,
        0,
        0);
      PnpSetObjectProperty(
        (__int64)v3,
        (__int64)v7,
        6,
        (__int64)v8,
        0LL,
        (__int64)DEVPKEY_DevicePanel_JointTargetPanelId,
        0,
        0LL,
        0,
        0);
      PnpSetObjectProperty(
        (__int64)v3,
        (__int64)v7,
        6,
        (__int64)v8,
        0LL,
        (__int64)DEVPKEY_DevicePanel_JointTargetPanelEdge,
        0,
        0LL,
        0,
        0);
      PnpSetObjectProperty(
        (__int64)v3,
        (__int64)v7,
        6,
        (__int64)v8,
        0LL,
        (__int64)DEVPKEY_DevicePanel_JointSourcePositionX,
        0,
        0LL,
        0,
        0);
      PnpSetObjectProperty(
        (__int64)v3,
        (__int64)v7,
        6,
        (__int64)v8,
        0LL,
        (__int64)DEVPKEY_DevicePanel_JointSourcePositionY,
        0,
        0LL,
        0,
        0);
      PnpSetObjectProperty(
        (__int64)v3,
        (__int64)v7,
        6,
        (__int64)v8,
        0LL,
        (__int64)DEVPKEY_DevicePanel_JointSourcePositionZ,
        0,
        0LL,
        0,
        0);
      PnpSetObjectProperty(
        (__int64)v3,
        (__int64)v7,
        6,
        (__int64)v8,
        0LL,
        (__int64)DEVPKEY_DevicePanel_JointTargetPositionX,
        0,
        0LL,
        0,
        0);
      PnpSetObjectProperty(
        (__int64)v3,
        (__int64)v7,
        6,
        (__int64)v8,
        0LL,
        (__int64)DEVPKEY_DevicePanel_JointTargetPositionY,
        0,
        0LL,
        0,
        0);
      PnpSetObjectProperty(
        (__int64)v3,
        (__int64)v7,
        6,
        (__int64)v8,
        0LL,
        (__int64)DEVPKEY_DevicePanel_JointTargetPositionZ,
        0,
        0LL,
        0,
        0);
      PnpSetObjectProperty(
        (__int64)v3,
        (__int64)v7,
        6,
        (__int64)v8,
        0LL,
        (__int64)DEVPKEY_DevicePanel_JointTargetRotationX,
        0,
        0LL,
        0,
        0);
      PnpSetObjectProperty(
        (__int64)v3,
        (__int64)v7,
        6,
        (__int64)v8,
        0LL,
        (__int64)DEVPKEY_DevicePanel_JointTargetRotationY,
        0,
        0LL,
        0,
        0);
      PnpSetObjectProperty(
        (__int64)v3,
        (__int64)v7,
        6,
        (__int64)v8,
        0LL,
        (__int64)DEVPKEY_DevicePanel_JointTargetRotationZ,
        0,
        0LL,
        0,
        0);
      PnpSetObjectProperty(
        (__int64)v3,
        (__int64)v7,
        6,
        (__int64)v8,
        0LL,
        (__int64)DEVPKEY_DevicePanel_JointMovementOrientation,
        0,
        0LL,
        0,
        0);
      PnpSetObjectProperty(
        (__int64)v3,
        (__int64)v7,
        6,
        (__int64)v8,
        0LL,
        (__int64)DEVPKEY_DevicePanel_JointMovementPositionMin,
        0,
        0LL,
        0,
        0);
      goto LABEL_248;
    }
    v40 = 0;
    v41 = (*v15 >> 5) & 0xF;
    if ( v41 < 5 )
      v40 = dword_140041D70[v41];
    v54 = v40;
    v10 = PnpSetObjectProperty(
            (__int64)v3,
            (__int64)v7,
            6,
            (__int64)v8,
            0LL,
            (__int64)DEVPKEY_DevicePanel_JointType,
            7,
            (__int64)&v54,
            4u,
            0);
    if ( v10 < 0 )
      goto LABEL_29;
    v42 = 0;
    v43 = (*(_DWORD *)v62 >> 9) & 7;
    if ( v43 < 5 )
      v42 = dword_140041D28[v43];
    v54 = v42;
    v10 = PnpSetObjectProperty(
            (__int64)v3,
            (__int64)v7,
            6,
            (__int64)v8,
            0LL,
            (__int64)DEVPKEY_DevicePanel_JointSourcePanelEdge,
            7,
            (__int64)&v54,
            4u,
            0);
    if ( v10 < 0 )
      goto LABEL_29;
    v44 = v73;
    if ( !v73 )
    {
      v73 = (PVOID)ExAllocatePool2(0x100uLL, 0x72uLL, 0x52504E50u);
      v44 = v73;
      if ( !v73 )
        goto LABEL_113;
    }
    v45 = 0LL;
    if ( ((*(_DWORD *)v62 >> 20) & 7) != 7 )
      v45 = (unsigned int)dword_140041D08[(*(_DWORD *)v62 >> 20) & 7];
    v54 = v45;
    v10 = CmBuildDevicePanelId(&v76, (unsigned __int8)(*(_DWORD *)v62 >> 12), v45, v44);
    if ( v10 < 0 )
      goto LABEL_29;
    v46 = -1LL;
    do
      ++v46;
    while ( *((_WORD *)v73 + v46) );
    v10 = PnpSetObjectProperty(
            (__int64)v3,
            (__int64)v7,
            6,
            (__int64)v8,
            0LL,
            (__int64)DEVPKEY_DevicePanel_JointTargetPanelId,
            18,
            (__int64)v73,
            2 * (int)v46 + 2,
            0);
    if ( v10 < 0 )
      goto LABEL_29;
    v47 = 0;
    v48 = (*(_DWORD *)v62 >> 23) & 7;
    if ( v48 < 5 )
      v47 = dword_140041D28[v48];
    v54 = v47;
    v10 = PnpSetObjectProperty(
            (__int64)v3,
            (__int64)v7,
            6,
            (__int64)v8,
            0LL,
            (__int64)DEVPKEY_DevicePanel_JointTargetPanelEdge,
            7,
            (__int64)&v54,
            4u,
            0);
    if ( v10 < 0 )
      goto LABEL_29;
    if ( v16[9] == 0xFFFF || (unsigned __int16)*((_DWORD *)v16 + 4) == 0xFFFF )
    {
      if ( !v56 )
      {
        PnpSetObjectProperty(
          (__int64)v3,
          (__int64)v7,
          6,
          (__int64)v8,
          0LL,
          (__int64)DEVPKEY_DevicePanel_JointSourcePositionX,
          0,
          0LL,
          0,
          0);
        PnpSetObjectProperty(
          (__int64)v3,
          (__int64)v7,
          6,
          (__int64)v8,
          0LL,
          (__int64)DEVPKEY_DevicePanel_JointSourcePositionY,
          0,
          0LL,
          0,
          0);
        PnpSetObjectProperty(
          (__int64)v3,
          (__int64)v7,
          6,
          (__int64)v8,
          0LL,
          (__int64)DEVPKEY_DevicePanel_JointSourcePositionZ,
          0,
          0LL,
          0,
          0);
      }
    }
    else
    {
      v54 = v16[9];
      v10 = PnpSetObjectProperty(
              (__int64)v3,
              (__int64)v7,
              6,
              (__int64)v8,
              0LL,
              (__int64)DEVPKEY_DevicePanel_JointSourcePositionX,
              7,
              (__int64)&v54,
              4u,
              0);
      if ( v10 < 0 )
        goto LABEL_29;
      v54 = (unsigned __int16)*((_DWORD *)v16 + 4);
      v10 = PnpSetObjectProperty(
              (__int64)v3,
              (__int64)v7,
              6,
              (__int64)v8,
              0LL,
              (__int64)DEVPKEY_DevicePanel_JointSourcePositionY,
              7,
              (__int64)&v54,
              4u,
              0);
      if ( v10 < 0 )
        goto LABEL_29;
      if ( !v56 )
        PnpSetObjectProperty(
          (__int64)v3,
          (__int64)v7,
          6,
          (__int64)v8,
          0LL,
          (__int64)DEVPKEY_DevicePanel_JointSourcePositionZ,
          0,
          0LL,
          0,
          0);
    }
    v54 = (unsigned __int16)*((_DWORD *)v62 + 2);
    v10 = PnpSetObjectProperty(
            (__int64)v3,
            (__int64)v7,
            6,
            (__int64)v8,
            0LL,
            (__int64)DEVPKEY_DevicePanel_JointTargetPositionX,
            7,
            (__int64)&v54,
            4u,
            0);
    if ( v10 < 0 )
      goto LABEL_29;
    v54 = *((unsigned __int16 *)v62 + 5);
    v10 = PnpSetObjectProperty(
            (__int64)v3,
            (__int64)v7,
            6,
            (__int64)v8,
            0LL,
            (__int64)DEVPKEY_DevicePanel_JointTargetPositionY,
            7,
            (__int64)&v54,
            4u,
            0);
    if ( v10 < 0 )
      goto LABEL_29;
    v54 = (unsigned __int16)*((_DWORD *)v62 + 3);
    v10 = PnpSetObjectProperty(
            (__int64)v3,
            (__int64)v7,
            6,
            (__int64)v8,
            0LL,
            (__int64)DEVPKEY_DevicePanel_JointTargetPositionZ,
            7,
            (__int64)&v54,
            4u,
            0);
    if ( v10 < 0 )
      goto LABEL_29;
    v49 = (1813430637 * (unsigned __int64)(*((_WORD *)v62 + 7) & 0x1FF)) >> 32;
    v54 = (*((_WORD *)v62 + 7) & 0x1FF) - 360 * ((v49 + (((*((_WORD *)v62 + 7) & 0x1FFu) - v49) >> 1)) >> 8);
    v10 = PnpSetObjectProperty(
            (__int64)v3,
            (__int64)v7,
            6,
            (__int64)v8,
            0LL,
            (__int64)DEVPKEY_DevicePanel_JointTargetRotationZ,
            7,
            (__int64)&v54,
            4u,
            0);
    if ( v10 < 0 )
      goto LABEL_29;
    v54 = dword_140041D68[(unsigned __int64)*(unsigned int *)v62 >> 31];
    v10 = PnpSetObjectProperty(
            (__int64)v3,
            (__int64)v7,
            6,
            (__int64)v8,
            0LL,
            (__int64)DEVPKEY_DevicePanel_JointMovementOrientation,
            7,
            (__int64)&v54,
            4u,
            0);
    if ( v10 < 0 )
      goto LABEL_29;
    v15 = v62;
    if ( ((*(_DWORD *)v62 >> 5) & 0xF) == 0
      || ((*(_DWORD *)v62 >> 5) & 0xF) != 1
      && ((*(_DWORD *)v62 >> 5) & 0xF) != 2
      && ((*(_DWORD *)v62 >> 5) & 0xFu) - 3 > 1 )
    {
      if ( v56 )
        goto LABEL_249;
      PnpSetObjectProperty(
        (__int64)v3,
        (__int64)v7,
        6,
        (__int64)v8,
        0LL,
        (__int64)DEVPKEY_DevicePanel_JointMovementPositionMin,
        0,
        0LL,
        0,
        0);
LABEL_248:
      PnpSetObjectProperty(
        (__int64)v3,
        (__int64)v7,
        6,
        (__int64)v8,
        0LL,
        (__int64)DEVPKEY_DevicePanel_JointMovementPositionMax,
        0,
        0LL,
        0,
        0);
      PnpSetObjectProperty(
        (__int64)v3,
        (__int64)v7,
        6,
        (__int64)v8,
        0LL,
        (__int64)DEVPKEY_DevicePanel_JointMovementPositionStart,
        0,
        0LL,
        0,
        0);
      PnpSetObjectProperty(
        (__int64)v3,
        (__int64)v7,
        6,
        (__int64)v8,
        0LL,
        (__int64)DEVPKEY_DevicePanel_JointMovementPosition,
        0,
        0LL,
        0,
        0);
      goto LABEL_249;
    }
    v54 = 0;
    if ( (int)PnpSetObjectProperty(
                (__int64)v3,
                (__int64)v7,
                6,
                (__int64)v8,
                0LL,
                (__int64)DEVPKEY_DevicePanel_JointMovementPositionMin,
                7,
                (__int64)&v54,
                4u,
                0) >= 0 )
    {
      v50 = *((unsigned __int16 *)v15 + 3);
      v51 = (unsigned __int16)v15[1];
      v52 = (*v15 & 0x1E0) == 0x20 ? v50 + v51 : v50 % 0x168 + v51 % 0x168;
      v71 = v52;
      if ( (int)PnpSetObjectProperty(
                  (__int64)v3,
                  (__int64)v7,
                  6,
                  (__int64)v8,
                  0LL,
                  (__int64)DEVPKEY_DevicePanel_JointMovementPositionMax,
                  7,
                  (__int64)&v71,
                  4u,
                  0) >= 0 )
      {
        v53 = *((unsigned __int16 *)v15 + 3);
        if ( (*v15 & 0x1E0) != 0x20 )
          v53 %= 0x168u;
        v72 = v53;
        if ( (int)PnpSetObjectProperty(
                    (__int64)v3,
                    (__int64)v7,
                    6,
                    (__int64)v8,
                    0LL,
                    (__int64)DEVPKEY_DevicePanel_JointMovementPositionStart,
                    7,
                    (__int64)&v72,
                    4u,
                    0) >= 0
          && ((int)PnpGetObjectProperty(
                     v3,
                     v7,
                     6u,
                     v8,
                     0LL,
                     (__int64)DEVPKEY_DevicePanel_JointMovementPosition,
                     &v63,
                     (const wchar_t *)&v54,
                     4u,
                     (__int64)&v58,
                     0) < 0
           || v63 != 7
           || v58 != 4
           || v54 > v71) )
        {
          PnpSetObjectProperty(
            (__int64)v3,
            (__int64)v7,
            6,
            (__int64)v8,
            0LL,
            (__int64)DEVPKEY_DevicePanel_JointMovementPosition,
            7,
            (__int64)&v72,
            4u,
            0);
        }
      }
    }
LABEL_249:
    ++v78;
    ++v80;
    v17 = v65;
  }
  if ( v18 == -1073741275 )
LABEL_28:
    v10 = 0;
LABEL_29:
  if ( v8 )
    ZwClose(v8);
LABEL_31:
  if ( v7 )
    goto LABEL_50;
LABEL_32:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v73 )
    ExFreePoolWithTag(v73, 0);
LABEL_36:
  if ( v16 )
    ExFreePoolWithTag(v16, 0);
  if ( v60 )
    ExFreePoolWithTag(v60, 0);
  if ( v62 )
    ExFreePoolWithTag(v62, 0);
  return (unsigned int)v10;
}
