/*
 * XREFs of DpiFdoQueryAdapterInfoIntegratedDisplay2 @ 0x1402446F8
 * Callers:
 *     DpiQueryIntegratedDescriptorWrapper @ 0x14005D260 (DpiQueryIntegratedDescriptorWrapper.c)
 * Callees:
 *     Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledDeviceUsageNoInline @ 0x14006DF3C (Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledDeviceUsageNoInline.c)
 *     ?Acquire@AUTO_ADAPTER_LOCK@@QEAAJXZ @ 0x14007CC3C (-Acquire@AUTO_ADAPTER_LOCK@@QEAAJXZ.c)
 *     Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline @ 0x14007DD5C (Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline.c)
 *     DpiDxgkDdiQueryMonitorDescriptor @ 0x14008CC2C (DpiDxgkDdiQueryMonitorDescriptor.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1402C78D0 (DpiReleaseCoreSyncAccessSafe.c)
 *     DxgkIsAdapterCoreSyncAcquired @ 0x1402C9FC8 (DxgkIsAdapterCoreSyncAcquired.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1402CA36C (DpiAcquireCoreSyncAccessSafe.c)
 *     DxgkAcquireAdapterDdiSync @ 0x14031E9B8 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x14031EAA8 (DxgkReleaseAdapterDdiSync.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x14035DC70 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     DxgkReleaseAdapterOpmI2CSync @ 0x1403C4838 (DxgkReleaseAdapterOpmI2CSync.c)
 *     DxgkAcquireAdapterOpmI2CSync @ 0x1403CDE4C (DxgkAcquireAdapterOpmI2CSync.c)
 *     DpiDxgkDdiQueryDeviceDescriptor @ 0x1403E5FD0 (DpiDxgkDdiQueryDeviceDescriptor.c)
 */

__int64 __fastcall DpiFdoQueryAdapterInfoIntegratedDisplay2(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v4; // r15
  __int64 v5; // r13
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int16 v8; // kr00_2
  int v9; // eax
  unsigned int DeviceDescriptor; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  DXGADAPTER *v13; // rcx
  int v14; // eax
  __int64 v15; // rdx
  int v16; // eax
  char v17; // r13
  char v18; // cl
  __int64 v19; // rax
  char v20; // cl
  unsigned __int16 v21; // ax
  __int64 v22; // rcx
  char v23; // di
  char v24; // r12
  __int64 v25; // rdx
  int v26; // eax
  bool v27; // zf
  unsigned int v28; // edx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rcx
  char v32; // r12
  __int64 v33; // rdx
  int v34; // eax
  unsigned int v35; // edx
  __int64 v36; // rdx
  int v37; // eax
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v39; // rdx
  int v40; // ecx
  __int64 v41; // rcx
  char v42; // si
  char v43; // r12
  __int64 v44; // rdx
  int v45; // eax
  __int64 v46; // rdx
  int v47; // eax
  __int64 v49; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v50; // [rsp+38h] [rbp-C8h]
  int v51; // [rsp+40h] [rbp-C0h] BYREF
  int v52; // [rsp+44h] [rbp-BCh]
  __int64 v53; // [rsp+48h] [rbp-B8h]
  __int64 v54; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v55; // [rsp+58h] [rbp-A8h]
  struct _DXGKARG_QUERYADAPTERINFO v56; // [rsp+60h] [rbp-A0h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v57; // [rsp+90h] [rbp-70h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v58; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v59; // [rsp+F0h] [rbp-10h]
  __int128 v60; // [rsp+100h] [rbp+0h]
  __int128 v61; // [rsp+110h] [rbp+10h]
  int v62; // [rsp+160h] [rbp+60h] BYREF
  int v63; // [rsp+168h] [rbp+68h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  v4 = a1;
  v63 = *(_DWORD *)(a2 + 24);
  v5 = a1;
  v54 = a1;
  LOBYTE(v62) = 0;
  v6 = *(_QWORD *)(v2 + 4032);
  v55 = 0;
  v8 = 0;
  if ( (unsigned __int8)DxgkIsAdapterCoreSyncAcquired(v6, 1LL) )
  {
LABEL_7:
    *((_DWORD *)&v58.Type + 1) = 0;
    v58.pInputData = &v63;
    memset(&v58.InputDataSize, 0, 32);
    v58.Type = DXGKQAITYPE_INTEGRATED_DISPLAY_DESCRIPTOR2;
    v58.OutputDataSize = 128;
    v58.pOutputData = *(void **)(a2 + 104);
    v58.InputDataSize = 4;
    v13 = *(DXGADAPTER **)(v2 + 4032);
    v59 = 0LL;
    v60 = 0LL;
    v61 = 0LL;
    v14 = DXGADAPTER::DdiQueryAdapterInfo(v13, &v58);
    DeviceDescriptor = v14;
    if ( v14 < 0 )
    {
      WdLogSingleEntry1(2LL, v14);
      WdLogGlobalForLineNumber = 981;
      if ( !HIBYTE(v8) )
        return DeviceDescriptor;
      LOBYTE(v11) = v62;
      v12 = v5;
      goto LABEL_5;
    }
    if ( HIBYTE(v8) )
    {
      LOBYTE(v15) = v8;
      v16 = DpiReleaseCoreSyncAccessSafe(v5, v15);
      v17 = 0;
      v18 = HIBYTE(v8);
      if ( v16 >= 0 )
        v18 = 0;
      HIBYTE(v55) = v18;
    }
    else
    {
      v17 = 0;
    }
    v19 = *(_QWORD *)(a2 + 104);
    v20 = *(_BYTE *)(v19 + 123);
    if ( v20 == 1 )
    {
      v21 = *(_WORD *)(a2 + 92);
      *(_WORD *)(a2 + 94) = v21;
      *(_QWORD *)(a2 + 120) = 0LL;
      *(_WORD *)(a2 + 96) = 0;
      if ( v21 < 0x80u )
      {
        DeviceDescriptor = -1073741811;
        WdLogSingleEntry1(2LL, -1073741811LL);
        WdLogGlobalForLineNumber = 1003;
        return DeviceDescriptor;
      }
      if ( (unsigned int)Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline()
        && *(_QWORD *)(v2 + 6432) )
      {
        v22 = *(_QWORD *)(v2 + 4032);
        v50 = 0;
        v23 = 0;
        v49 = v4;
        v24 = 0;
        if ( !(unsigned __int8)DxgkIsAdapterCoreSyncAcquired(v22, 1LL) )
        {
          v26 = AUTO_ADAPTER_LOCK::Acquire((AUTO_ADAPTER_LOCK *)&v49, v25);
          DeviceDescriptor = v26;
          if ( v26 < 0 )
          {
            WdLogSingleEntry1(2LL, v26);
            WdLogGlobalForLineNumber = 1052;
LABEL_23:
            v27 = HIBYTE(v50) == 0;
LABEL_24:
            if ( v27 )
              return DeviceDescriptor;
            LOBYTE(v11) = v50;
            v12 = v49;
            goto LABEL_5;
          }
          v24 = HIBYTE(v50);
          v23 = v50;
          v4 = v49;
        }
        DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(v2 + 4032));
        KeWaitForSingleObject(*(PVOID *)(a2 + 72), Executive, 0, 0, 0LL);
        DxgkAcquireAdapterDdiSync(*(_QWORD *)(v2 + 4032), 1LL);
        v28 = *(_DWORD *)(a2 + 24);
        v52 = *(unsigned __int16 *)(a2 + 94);
        v53 = *(_QWORD *)(a2 + 112);
        v51 = 1;
        DeviceDescriptor = DpiDxgkDdiQueryMonitorDescriptor(v2, v28, &v51);
        DxgkReleaseAdapterDdiSync(*(_QWORD *)(v2 + 4032));
        KeReleaseMutex(*(PRKMUTEX *)(a2 + 72), 0);
        DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(v2 + 4032));
        if ( v24 )
        {
          LOBYTE(v29) = v23;
          if ( (int)DpiReleaseCoreSyncAccessSafe(v4, v29) >= 0 )
            HIBYTE(v50) = 0;
        }
      }
      else
      {
        v30 = *(_QWORD *)(v2 + 4032);
        v52 = *(unsigned __int16 *)(a2 + 94);
        v53 = *(_QWORD *)(a2 + 112);
        v51 = 0;
        DxgkAcquireAdapterDdiSync(v30, 1LL);
        DeviceDescriptor = DpiDxgkDdiQueryDeviceDescriptor(
                             v2,
                             *(_QWORD *)(v2 + 40),
                             *(_QWORD *)(v2 + 48),
                             *(_DWORD *)(a2 + 24),
                             (__int64)&v51);
        DxgkReleaseAdapterDdiSync(*(_QWORD *)(v2 + 4032));
      }
      if ( (DeviceDescriptor & 0x80000000) != 0 )
      {
        WdLogSingleEntry1(2LL, (int)DeviceDescriptor);
        WdLogGlobalForLineNumber = 1087;
      }
      return DeviceDescriptor;
    }
    if ( v20 != 2 )
    {
      WdLogSingleEntry2(2LL, *(unsigned __int8 *)(v19 + 123), *(unsigned int *)(a2 + 24));
      WdLogGlobalForLineNumber = 1221;
      return (unsigned int)-1073741811;
    }
    *(_WORD *)(a2 + 96) = *(_WORD *)(a2 + 92);
    *(_WORD *)(a2 + 94) = 0;
    *(_QWORD *)(a2 + 112) = 0LL;
    if ( (unsigned int)Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline()
      && *(_QWORD *)(v2 + 6432) )
    {
      v31 = *(_QWORD *)(v2 + 4032);
      v50 = 0;
      v32 = 0;
      v49 = v4;
      if ( !(unsigned __int8)DxgkIsAdapterCoreSyncAcquired(v31, 1LL) )
      {
        v34 = AUTO_ADAPTER_LOCK::Acquire((AUTO_ADAPTER_LOCK *)&v49, v33);
        DeviceDescriptor = v34;
        if ( v34 < 0 )
        {
          WdLogSingleEntry1(2LL, v34);
          v27 = HIBYTE(v50) == 0;
          WdLogGlobalForLineNumber = 1176;
          goto LABEL_24;
        }
        v17 = HIBYTE(v50);
        v32 = v50;
        v4 = v49;
      }
      DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(v2 + 4032));
      KeWaitForSingleObject(*(PVOID *)(a2 + 72), Executive, 0, 0, 0LL);
      DxgkAcquireAdapterDdiSync(*(_QWORD *)(v2 + 4032), 1LL);
      v35 = *(_DWORD *)(a2 + 24);
      v52 = *(unsigned __int16 *)(a2 + 96);
      v53 = *(_QWORD *)(a2 + 120);
      v51 = 2;
      DeviceDescriptor = DpiDxgkDdiQueryMonitorDescriptor(v2, v35, &v51);
      DxgkReleaseAdapterDdiSync(*(_QWORD *)(v2 + 4032));
      KeReleaseMutex(*(PRKMUTEX *)(a2 + 72), 0);
      DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(v2 + 4032));
      if ( v17 )
      {
        LOBYTE(v36) = v32;
        v37 = DpiReleaseCoreSyncAccessSafe(v4, v36);
        goto LABEL_49;
      }
    }
    else
    {
      IsEnabledDeviceUsageNoInline = Feature_DisplayMux_PostGA_BugBundle_2__private_IsEnabledDeviceUsageNoInline();
      v39 = *(_QWORD *)(a2 + 120);
      v40 = *(_DWORD *)(a2 + 24);
      v51 = *(unsigned __int16 *)(a2 + 96);
      v53 = v39;
      v62 = v40;
      if ( !IsEnabledDeviceUsageNoInline )
      {
        *(_QWORD *)&v57.Type = 20LL;
        v52 = 0;
        *(_QWORD *)&v57.InputDataSize = 4LL;
        v57.pInputData = &v62;
        *(_QWORD *)&v57.Flags.0 = 0LL;
        v57.pOutputData = &v51;
        HIDWORD(v57.hKmdProcessHandle) = 0;
        v57.OutputDataSize = 16;
        v47 = DpiAcquireCoreSyncAccessSafe(v4, 0LL);
        DeviceDescriptor = v47;
        if ( v47 < 0 )
        {
          WdLogSingleEntry1(2LL, v47);
          WdLogGlobalForLineNumber = 1149;
          return DeviceDescriptor;
        }
        DeviceDescriptor = DXGADAPTER::DdiQueryAdapterInfo(*(DXGADAPTER **)(v2 + 4032), &v57);
        DpiReleaseCoreSyncAccessSafe(v4, 0LL);
        goto LABEL_54;
      }
      v41 = *(_QWORD *)(v2 + 4032);
      v50 = 0;
      v52 = 0;
      v42 = 0;
      *(_QWORD *)&v56.Type = 20LL;
      v56.pInputData = &v62;
      v43 = 0;
      *(_QWORD *)&v56.InputDataSize = 4LL;
      v56.pOutputData = &v51;
      *(_QWORD *)&v56.Flags.0 = 0LL;
      HIDWORD(v56.hKmdProcessHandle) = 0;
      v56.OutputDataSize = 16;
      v49 = v4;
      if ( !(unsigned __int8)DxgkIsAdapterCoreSyncAcquired(v41, 1LL) )
      {
        v45 = AUTO_ADAPTER_LOCK::Acquire((AUTO_ADAPTER_LOCK *)&v49, v44);
        DeviceDescriptor = v45;
        if ( v45 < 0 )
        {
          WdLogSingleEntry1(2LL, v45);
          WdLogGlobalForLineNumber = 1122;
          goto LABEL_23;
        }
        v43 = HIBYTE(v50);
        v42 = v50;
        v4 = v49;
      }
      DeviceDescriptor = DXGADAPTER::DdiQueryAdapterInfo(*(DXGADAPTER **)(v2 + 4032), &v56);
      if ( v43 )
      {
        LOBYTE(v46) = v42;
        v37 = DpiReleaseCoreSyncAccessSafe(v4, v46);
LABEL_49:
        if ( v37 >= 0 )
          HIBYTE(v50) = 0;
      }
    }
LABEL_54:
    if ( (DeviceDescriptor & 0x80000000) != 0 )
    {
      WdLogSingleEntry1(2LL, (int)DeviceDescriptor);
      WdLogGlobalForLineNumber = 1213;
    }
    return DeviceDescriptor;
  }
  v9 = AUTO_ADAPTER_LOCK::Acquire((AUTO_ADAPTER_LOCK *)&v54, v7);
  DeviceDescriptor = v9;
  if ( v9 >= 0 )
  {
    v8 = v55;
    v5 = v54;
    LOBYTE(v62) = v55;
    goto LABEL_7;
  }
  WdLogSingleEntry1(2LL, v9);
  WdLogGlobalForLineNumber = 963;
  if ( HIBYTE(v55) )
  {
    LOBYTE(v11) = v55;
    v12 = v54;
LABEL_5:
    DpiReleaseCoreSyncAccessSafe(v12, v11);
  }
  return DeviceDescriptor;
}
