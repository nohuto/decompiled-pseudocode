/*
 * XREFs of DpiPdoGetDeviceDescriptor @ 0x14042B12C
 * Callers:
 *     DpiPdoAddPdo @ 0x1404293CC (DpiPdoAddPdo.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x14004BC00 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     DpiIsValidEdid @ 0x1400552B0 (DpiIsValidEdid.c)
 *     Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline @ 0x14007DD5C (Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     DpiFdoGetMonitorDescriptorFromDriver @ 0x140240BF4 (DpiFdoGetMonitorDescriptorFromDriver.c)
 *     DpiPdoPollChild @ 0x140255448 (DpiPdoPollChild.c)
 *     DxgkAcquireAdapterDdiSync @ 0x14031E9B8 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x14031EAA8 (DxgkReleaseAdapterDdiSync.c)
 *     DxgkReleaseAdapterOpmI2CSync @ 0x1403C4838 (DxgkReleaseAdapterOpmI2CSync.c)
 *     DxgkAcquireAdapterOpmI2CSync @ 0x1403CDE4C (DxgkAcquireAdapterOpmI2CSync.c)
 *     DpiDxgkDdiQueryDeviceDescriptor @ 0x1403E5FD0 (DpiDxgkDdiQueryDeviceDescriptor.c)
 */

__int64 __fastcall DpiPdoGetDeviceDescriptor(
        __int64 a1,
        int *a2,
        int a3,
        char a4,
        char a5,
        char a6,
        __int64 a7,
        _OWORD *a8)
{
  __int64 v8; // r14
  __int64 v12; // r15
  __int64 DeviceDescriptor; // rdi
  __int64 v15; // rcx
  size_t v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rdx
  void *v19; // rax
  __int64 v20; // rcx
  int v21; // edx
  __int64 v22; // rdx
  void *Pool2; // rax
  _WORD *v24; // rax
  PVOID P[2]; // [rsp+30h] [rbp-20h] BYREF
  __int128 v26; // [rsp+40h] [rbp-10h] BYREF

  v8 = *(_QWORD *)(a1 + 64);
  *(_OWORD *)P = 0LL;
  v12 = *(_QWORD *)(v8 + 40);
  if ( !*((_QWORD *)a2 + 14) )
  {
    if ( *a2 != 1 )
    {
      if ( ((*a2 - 2) & 0xFFFFFFFD) != 0 )
      {
        LODWORD(DeviceDescriptor) = -1073741823;
        WdLogSingleEntry1(2LL, *a2);
        WdLogGlobalForLineNumber = 3051;
        goto LABEL_4;
      }
      HIDWORD(P[0]) = 408;
      Pool2 = (void *)ExAllocatePool2(256LL, 408LL, 1953656900LL);
      P[1] = Pool2;
      if ( !Pool2 )
      {
        LODWORD(DeviceDescriptor) = -1073741801;
        WdLogSingleEntry1(6LL, -1073741801LL);
        WdLogGlobalForLineNumber = 3005;
        goto LABEL_4;
      }
      memset(Pool2, 0, HIDWORD(P[0]));
      KeWaitForSingleObject(*((PVOID *)a2 + 9), Executive, 0, 0, 0LL);
      DxgkAcquireAdapterDdiSync(*(_QWORD *)(v8 + 4032), 1);
      DeviceDescriptor = (int)DpiDxgkDdiQueryDeviceDescriptor(v8, v12, *(_QWORD *)(v8 + 48), a2[6], (unsigned int *)P);
      DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v8 + 4032));
      KeReleaseMutex(*((PRKMUTEX *)a2 + 9), 0);
      if ( (int)DeviceDescriptor < 0 )
      {
        WdLogSingleEntry2(2LL, *(_QWORD *)(v12 + 216), DeviceDescriptor);
        WdLogGlobalForLineNumber = 3029;
        goto LABEL_4;
      }
      v24 = P[1];
      *((_WORD *)P[1] + 50) = 0;
      v24[101] = 0;
      v24[152] = 0;
      v24[203] = 0;
      goto LABEL_49;
    }
    if ( (unsigned int)Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline()
      && *(_QWORD *)(v8 + 6432) )
    {
      v17 = *(_QWORD *)(v8 + 4032);
      v26 = 0LL;
      LODWORD(v26) = 1;
      DxgkAcquireAdapterOpmI2CSync(v17);
      KeWaitForSingleObject(*((PVOID *)a2 + 9), Executive, 0, 0, 0LL);
      DxgkAcquireAdapterDdiSync(*(_QWORD *)(v8 + 4032), 1);
      LODWORD(DeviceDescriptor) = DpiFdoGetMonitorDescriptorFromDriver(v8, a2[6], (int *)&v26);
      DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v8 + 4032));
      KeReleaseMutex(*((PRKMUTEX *)a2 + 9), 0);
      DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(v8 + 4032));
      if ( (int)DeviceDescriptor >= 0 )
      {
        HIDWORD(P[0]) = DWORD1(v26);
        LODWORD(P[0]) = 0;
        P[1] = *((PVOID *)&v26 + 1);
        if ( !*((_QWORD *)&v26 + 1) )
        {
          LODWORD(DeviceDescriptor) = -1071841279;
LABEL_20:
          if ( IsInternalVideoOutput((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)a2[1]) )
          {
            WdLogSingleEntry2(2LL, DpiDxgkDdiQueryDeviceDescriptor, v18);
            WdLogGlobalForLineNumber = 2879;
          }
          else
          {
            WdLogSingleEntry1(3LL, v18);
            WdLogGlobalForLineNumber = 2885;
          }
          goto LABEL_50;
        }
LABEL_36:
        if ( !DpiIsValidEdid((__m128i *)P[1]) )
        {
          if ( IsInternalVideoOutput((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)a2[1]) )
          {
            WdLogSingleEntry1(2LL, v22);
            WdLogGlobalForLineNumber = 2965;
          }
          else
          {
            WdLogSingleEntry1(3LL, v22);
            WdLogGlobalForLineNumber = 2971;
          }
          LODWORD(DeviceDescriptor) = -1073741823;
          goto LABEL_4;
        }
        goto LABEL_49;
      }
    }
    else
    {
      P[0] = (PVOID)0x10000000000LL;
      v19 = (void *)ExAllocatePool2(256LL, 256LL, 1953656900LL);
      P[1] = v19;
      if ( !v19 )
      {
        LODWORD(DeviceDescriptor) = -1073741801;
        WdLogSingleEntry1(6LL, -1073741801LL);
        WdLogGlobalForLineNumber = 2784;
        goto LABEL_4;
      }
      memset(v19, 0, HIDWORD(P[0]));
      KeWaitForSingleObject(*((PVOID *)a2 + 9), Executive, 0, 0, 0LL);
      DxgkAcquireAdapterDdiSync(*(_QWORD *)(v8 + 4032), 1);
      LODWORD(DeviceDescriptor) = DpiDxgkDdiQueryDeviceDescriptor(
                                    v8,
                                    v12,
                                    *(_QWORD *)(v8 + 48),
                                    a2[6],
                                    (unsigned int *)P);
      DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v8 + 4032));
      KeReleaseMutex(*((PRKMUTEX *)a2 + 9), 0);
      if ( (_DWORD)DeviceDescriptor == -1071841272 )
      {
        P[0] = (PVOID)0x8000000000LL;
        memset(P[1], 0, 0x100uLL);
        KeWaitForSingleObject(*((PVOID *)a2 + 9), Executive, 0, 0, 0LL);
        DxgkAcquireAdapterDdiSync(*(_QWORD *)(v8 + 4032), 1);
        LODWORD(DeviceDescriptor) = DpiDxgkDdiQueryDeviceDescriptor(
                                      v8,
                                      v12,
                                      *(_QWORD *)(v8 + 48),
                                      a2[6],
                                      (unsigned int *)P);
        DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v8 + 4032));
        KeReleaseMutex(*((PRKMUTEX *)a2 + 9), 0);
      }
    }
    if ( (_DWORD)DeviceDescriptor == -1071774719 || (_DWORD)DeviceDescriptor == -1071841279 )
      goto LABEL_20;
    if ( (int)DeviceDescriptor < 0 )
    {
      WdLogSingleEntry1(3LL, *(_QWORD *)(v12 + 216));
      WdLogGlobalForLineNumber = 2900;
      if ( a6 != 1 || (unsigned int)a2[15] >= 3 )
        goto LABEL_4;
      KeWaitForSingleObject((PVOID)(v8 + 3544), Executive, 0, 0, 0LL);
      ++a2[15];
      if ( !*((_BYTE *)a2 + 64) )
      {
        v20 = *(_QWORD *)(a1 + 64);
        *((_BYTE *)a2 + 64) = 1;
        v21 = *(_DWORD *)(v20 + 3824);
        *(_DWORD *)(v20 + 3824) = v21 + 1;
        if ( !v21 )
          KeClearEvent((PRKEVENT)(v20 + 3832));
      }
      KeReleaseMutex((PRKMUTEX)(v8 + 3544), 0);
      LODWORD(DeviceDescriptor) = DpiPdoPollChild(a1, a2[6], a3, a4, a5);
      if ( (int)DeviceDescriptor >= 0 )
        LODWORD(DeviceDescriptor) = 259;
LABEL_50:
      if ( (_DWORD)DeviceDescriptor == 259 )
        goto LABEL_5;
      goto LABEL_4;
    }
    goto LABEL_36;
  }
  HIDWORD(P[0]) = 256;
  P[1] = (PVOID)ExAllocatePool2(256LL, 256LL, 1953656900LL);
  if ( P[1] )
  {
    v15 = *((unsigned __int16 *)a2 + 47);
    if ( (unsigned int)v15 >= HIDWORD(P[0]) )
    {
      v16 = HIDWORD(P[0]);
    }
    else
    {
      memset((char *)P[1] + v15, 0, (unsigned int)(HIDWORD(P[0]) - v15));
      v16 = *((unsigned __int16 *)a2 + 47);
    }
    memmove(P[1], *((const void **)a2 + 14), v16);
    LODWORD(DeviceDescriptor) = 0;
LABEL_49:
    *a8 = *(_OWORD *)P;
    goto LABEL_50;
  }
  LODWORD(DeviceDescriptor) = -1073741801;
  WdLogSingleEntry1(6LL, -1073741801LL);
  WdLogGlobalForLineNumber = 2726;
LABEL_4:
  KeWaitForSingleObject((PVOID)(v8 + 3544), Executive, 0, 0, 0LL);
  a2[15] = 0;
  KeReleaseMutex((PRKMUTEX)(v8 + 3544), 0);
LABEL_5:
  if ( (int)DeviceDescriptor < 0 || (_DWORD)DeviceDescriptor == 259 )
  {
    if ( P[1] )
      ExFreePoolWithTag(P[1], 0);
  }
  return (unsigned int)DeviceDescriptor;
}
