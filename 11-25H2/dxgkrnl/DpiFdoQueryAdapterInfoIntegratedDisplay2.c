/*
 * XREFs of DpiFdoQueryAdapterInfoIntegratedDisplay2 @ 0x14023DB08
 * Callers:
 *     DpiQueryIntegratedDescriptorWrapper @ 0x14005D800 (DpiQueryIntegratedDescriptorWrapper.c)
 * Callees:
 *     ?Acquire@AUTO_ADAPTER_LOCK@@QEAAJXZ @ 0x14007C74C (-Acquire@AUTO_ADAPTER_LOCK@@QEAAJXZ.c)
 *     Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline @ 0x14007D6D4 (Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline.c)
 *     DpiDxgkDdiQueryMonitorDescriptor @ 0x14008BC6C (DpiDxgkDdiQueryMonitorDescriptor.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1402BA080 (DpiReleaseCoreSyncAccessSafe.c)
 *     DxgkIsAdapterCoreSyncAcquired @ 0x1402BC7C8 (DxgkIsAdapterCoreSyncAcquired.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1402BD038 (DpiAcquireCoreSyncAccessSafe.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1403707B8 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1403762D8 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1403763C8 (DxgkReleaseAdapterDdiSync.c)
 *     DxgkReleaseAdapterOpmI2CSync @ 0x1403D1690 (DxgkReleaseAdapterOpmI2CSync.c)
 *     DxgkAcquireAdapterOpmI2CSync @ 0x1403D5F64 (DxgkAcquireAdapterOpmI2CSync.c)
 *     DpiDxgkDdiQueryDeviceDescriptor @ 0x1403EC680 (DpiDxgkDdiQueryDeviceDescriptor.c)
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
  __int64 v32; // r12
  __int64 v33; // rdx
  int v34; // eax
  unsigned int v35; // edx
  __int64 v36; // rdx
  int v37; // eax
  __int64 v39; // [rsp+30h] [rbp-99h] BYREF
  __int16 v40; // [rsp+38h] [rbp-91h]
  int v41; // [rsp+40h] [rbp-89h] BYREF
  int v42; // [rsp+44h] [rbp-85h]
  __int64 v43; // [rsp+48h] [rbp-81h]
  __int64 v44; // [rsp+50h] [rbp-79h] BYREF
  __int16 v45; // [rsp+58h] [rbp-71h]
  struct _DXGKARG_QUERYADAPTERINFO v46; // [rsp+60h] [rbp-69h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v47; // [rsp+90h] [rbp-39h] BYREF
  __int128 v48; // [rsp+C0h] [rbp-9h]
  __int128 v49; // [rsp+D0h] [rbp+7h]
  __int128 v50; // [rsp+E0h] [rbp+17h]
  int v51; // [rsp+130h] [rbp+67h] BYREF
  int v52; // [rsp+138h] [rbp+6Fh] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  v4 = a1;
  v52 = *(_DWORD *)(a2 + 24);
  v5 = a1;
  v44 = a1;
  LOBYTE(v51) = 0;
  v6 = *(_QWORD *)(v2 + 4032);
  v45 = 0;
  v8 = 0;
  if ( (unsigned __int8)DxgkIsAdapterCoreSyncAcquired(v6, 1LL) )
  {
LABEL_7:
    *((_DWORD *)&v47.Type + 1) = 0;
    v47.pInputData = &v52;
    memset(&v47.InputDataSize, 0, 32);
    v47.Type = DXGKQAITYPE_INTEGRATED_DISPLAY_DESCRIPTOR2;
    v47.OutputDataSize = 128;
    v47.pOutputData = *(void **)(a2 + 104);
    v47.InputDataSize = 4;
    v13 = *(DXGADAPTER **)(v2 + 4032);
    v48 = 0LL;
    v49 = 0LL;
    v50 = 0LL;
    v14 = DXGADAPTER::DdiQueryAdapterInfo(v13, &v47);
    DeviceDescriptor = v14;
    if ( v14 < 0 )
    {
      WdLogSingleEntry1(2LL, v14);
      WdLogGlobalForLineNumber = 926;
      if ( !HIBYTE(v8) )
        return DeviceDescriptor;
      LOBYTE(v11) = v51;
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
      HIBYTE(v45) = v18;
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
        WdLogGlobalForLineNumber = 948;
        return DeviceDescriptor;
      }
      if ( (unsigned int)Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline()
        && *(_QWORD *)(v2 + 6432) )
      {
        v22 = *(_QWORD *)(v2 + 4032);
        v40 = 0;
        v23 = 0;
        v39 = v4;
        v24 = 0;
        if ( !(unsigned __int8)DxgkIsAdapterCoreSyncAcquired(v22, 1LL) )
        {
          v26 = AUTO_ADAPTER_LOCK::Acquire((AUTO_ADAPTER_LOCK *)&v39, v25);
          DeviceDescriptor = v26;
          if ( v26 < 0 )
          {
            WdLogSingleEntry1(2LL, v26);
            v27 = HIBYTE(v40) == 0;
            WdLogGlobalForLineNumber = 997;
LABEL_23:
            if ( v27 )
              return DeviceDescriptor;
            LOBYTE(v11) = v40;
            v12 = v39;
            goto LABEL_5;
          }
          v24 = HIBYTE(v40);
          v23 = v40;
          v4 = v39;
        }
        DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(v2 + 4032));
        KeWaitForSingleObject(*(PVOID *)(a2 + 72), Executive, 0, 0, 0LL);
        DxgkAcquireAdapterDdiSync(*(_QWORD *)(v2 + 4032), 1LL);
        v28 = *(_DWORD *)(a2 + 24);
        v42 = *(unsigned __int16 *)(a2 + 94);
        v43 = *(_QWORD *)(a2 + 112);
        v41 = 1;
        DeviceDescriptor = DpiDxgkDdiQueryMonitorDescriptor(v2, v28, &v41);
        DxgkReleaseAdapterDdiSync(*(_QWORD *)(v2 + 4032));
        KeReleaseMutex(*(PRKMUTEX *)(a2 + 72), 0);
        DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(v2 + 4032));
        if ( v24 )
        {
          LOBYTE(v29) = v23;
          if ( (int)DpiReleaseCoreSyncAccessSafe(v4, v29) >= 0 )
            HIBYTE(v40) = 0;
        }
      }
      else
      {
        v30 = *(_QWORD *)(v2 + 4032);
        v42 = *(unsigned __int16 *)(a2 + 94);
        v43 = *(_QWORD *)(a2 + 112);
        v41 = 0;
        DxgkAcquireAdapterDdiSync(v30, 1LL);
        DeviceDescriptor = DpiDxgkDdiQueryDeviceDescriptor(
                             v2,
                             *(_QWORD *)(v2 + 40),
                             *(_QWORD *)(v2 + 48),
                             *(_DWORD *)(a2 + 24),
                             (__int64)&v41);
        DxgkReleaseAdapterDdiSync(*(_QWORD *)(v2 + 4032));
      }
      if ( (DeviceDescriptor & 0x80000000) != 0 )
      {
        WdLogSingleEntry1(2LL, (int)DeviceDescriptor);
        WdLogGlobalForLineNumber = 1032;
      }
      return DeviceDescriptor;
    }
    if ( v20 != 2 )
    {
      WdLogSingleEntry2(2LL, *(unsigned __int8 *)(v19 + 123), *(unsigned int *)(a2 + 24));
      WdLogGlobalForLineNumber = 1141;
      return (unsigned int)-1073741811;
    }
    *(_WORD *)(a2 + 96) = *(_WORD *)(a2 + 92);
    *(_WORD *)(a2 + 94) = 0;
    *(_QWORD *)(a2 + 112) = 0LL;
    if ( (unsigned int)Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline()
      && *(_QWORD *)(v2 + 6432) )
    {
      v31 = *(_QWORD *)(v2 + 4032);
      v40 = 0;
      v32 = v4;
      v39 = v4;
      if ( !(unsigned __int8)DxgkIsAdapterCoreSyncAcquired(v31, 1LL) )
      {
        v34 = AUTO_ADAPTER_LOCK::Acquire((AUTO_ADAPTER_LOCK *)&v39, v33);
        DeviceDescriptor = v34;
        if ( v34 < 0 )
        {
          WdLogSingleEntry1(2LL, v34);
          v27 = HIBYTE(v40) == 0;
          WdLogGlobalForLineNumber = 1091;
          goto LABEL_23;
        }
        v17 = v40;
        v32 = v39;
      }
      DxgkAcquireAdapterOpmI2CSync(*(_QWORD *)(v2 + 4032));
      KeWaitForSingleObject(*(PVOID *)(a2 + 72), Executive, 0, 0, 0LL);
      DxgkAcquireAdapterDdiSync(*(_QWORD *)(v2 + 4032), 1LL);
      v35 = *(_DWORD *)(a2 + 24);
      v42 = *(unsigned __int16 *)(a2 + 96);
      v43 = *(_QWORD *)(a2 + 120);
      v41 = 2;
      DeviceDescriptor = DpiDxgkDdiQueryMonitorDescriptor(v2, v35, &v41);
      DxgkReleaseAdapterDdiSync(*(_QWORD *)(v2 + 4032));
      KeReleaseMutex(*(PRKMUTEX *)(a2 + 72), 0);
      DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(v2 + 4032));
      DpiReleaseCoreSyncAccessSafe(v4, 0LL);
      if ( HIBYTE(v40) )
      {
        LOBYTE(v36) = v17;
        if ( (int)DpiReleaseCoreSyncAccessSafe(v32, v36) >= 0 )
          HIBYTE(v40) = 0;
      }
    }
    else
    {
      v51 = *(_DWORD *)(a2 + 24);
      v41 = *(unsigned __int16 *)(a2 + 96);
      v42 = 0;
      v43 = *(_QWORD *)(a2 + 120);
      v46.pInputData = &v51;
      v46.pOutputData = &v41;
      *(_QWORD *)&v46.Type = 20LL;
      *(_QWORD *)&v46.InputDataSize = 4LL;
      *(_QWORD *)&v46.Flags.0 = 0LL;
      HIDWORD(v46.hKmdProcessHandle) = 0;
      v46.OutputDataSize = 16;
      v37 = DpiAcquireCoreSyncAccessSafe(v4, 0LL);
      DeviceDescriptor = v37;
      if ( v37 < 0 )
      {
        WdLogSingleEntry1(2LL, v37);
        WdLogGlobalForLineNumber = 1065;
        return DeviceDescriptor;
      }
      DeviceDescriptor = DXGADAPTER::DdiQueryAdapterInfo(*(DXGADAPTER **)(v2 + 4032), &v46);
      DpiReleaseCoreSyncAccessSafe(v4, 0LL);
    }
    if ( (DeviceDescriptor & 0x80000000) != 0 )
    {
      WdLogSingleEntry1(2LL, (int)DeviceDescriptor);
      WdLogGlobalForLineNumber = 1133;
    }
    return DeviceDescriptor;
  }
  v9 = AUTO_ADAPTER_LOCK::Acquire((AUTO_ADAPTER_LOCK *)&v44, v7);
  DeviceDescriptor = v9;
  if ( v9 >= 0 )
  {
    v8 = v45;
    v5 = v44;
    LOBYTE(v51) = v45;
    goto LABEL_7;
  }
  WdLogSingleEntry1(2LL, v9);
  WdLogGlobalForLineNumber = 908;
  if ( HIBYTE(v45) )
  {
    LOBYTE(v11) = v45;
    v12 = v44;
LABEL_5:
    DpiReleaseCoreSyncAccessSafe(v12, v11);
  }
  return DeviceDescriptor;
}
