/*
 * XREFs of NtUserDisplayConfigGetDeviceInfo @ 0x1C001E910
 * Callers:
 *     <none>
 * Callees:
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C0015D50 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     _DeviceInfoTranslateStatusDefault @ 0x1C001ED8C (_DeviceInfoTranslateStatusDefault.c)
 *     ?RequiresUserCritShared@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x1C001EE20 (-RequiresUserCritShared@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     ?AllowInAnySession@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x1C001EE50 (-AllowInAnySession@DispConfigTypes@@YA_NW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     ?GetGetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z @ 0x1C001EEB8 (-GetGetterTypeSize@DispConfigTypes@@YAKW4DISPLAYCONFIG_DEVICE_INFO_TYPE@@@Z.c)
 *     UserIsWddmConnectedSession @ 0x1C001EFF0 (UserIsWddmConnectedSession.c)
 *     DrvSampleDisplayState @ 0x1C001F260 (DrvSampleDisplayState.c)
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FB14 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C004CDAC (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memmove @ 0x1C00D6F00 (memmove.c)
 *     ?HelperCreateLiveDumpWithWdLogs@@YAXJW4_DISPLAY_INFO_FAILURE_POINT@@@Z @ 0x1C0163A64 (-HelperCreateLiveDumpWithWdLogs@@YAXJW4_DISPLAY_INFO_FAILURE_POINT@@@Z.c)
 */

__int64 __fastcall NtUserDisplayConfigGetDeviceInfo(char *a1)
{
  unsigned int *QuotaZInit; // rsi
  void *v3; // r15
  int DeviceInfoInternal; // ebx
  unsigned int *v5; // rdx
  size_t v6; // r12
  _DWORD *v7; // rax
  _DWORD *v8; // r14
  unsigned __int64 v9; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v10; // rcx
  __int64 v11; // rcx
  char v12; // r13
  unsigned int v13; // r12d
  __int64 v14; // rcx
  int GetterTypeSize; // eax
  __int64 CurrentProcessWow64Process; // rax
  __int64 v17; // rax
  unsigned int v19; // eax
  __int64 v20; // rdx
  int v21; // r13d
  _DWORD *v22; // r14
  __int64 v23; // r12
  unsigned int v24; // [rsp+30h] [rbp-A8h]
  int v25; // [rsp+34h] [rbp-A4h]
  unsigned int v26; // [rsp+38h] [rbp-A0h]
  unsigned int v27; // [rsp+3Ch] [rbp-9Ch]
  __int64 v28; // [rsp+60h] [rbp-78h] BYREF
  unsigned int v29; // [rsp+68h] [rbp-70h]
  volatile void *Address; // [rsp+F8h] [rbp+20h]

  QuotaZInit = 0LL;
  v3 = 0LL;
  Address = 0LL;
  v24 = 0;
  v27 = 0;
  v26 = 0;
  v25 = 0;
  DeviceInfoInternal = 0;
  if ( !gbVideoInitialized )
  {
    DeviceInfoInternal = -1073741823;
    goto LABEL_54;
  }
  v5 = (unsigned int *)(a1 + 4);
  if ( (unsigned __int64)(a1 + 4) >= MmUserProbeAddress )
    v5 = (unsigned int *)MmUserProbeAddress;
  v6 = *v5;
  if ( (unsigned int)v6 < 0x14 )
    ExRaiseStatus(-1073741811);
  QuotaZInit = (unsigned int *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                 (NSInstrumentation::CLeakTrackingAllocator *)MmUserProbeAddress,
                                 (unsigned __int64)v5,
                                 (unsigned int)v6,
                                 0x63447355u);
  if ( !QuotaZInit )
  {
    v7 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v7 = (_DWORD *)MmUserProbeAddress;
    if ( *v7 == -21 && (_DWORD)v6 == 2056 )
    {
      if ( a1 + 2020 < a1 + 2016 || (unsigned __int64)(a1 + 2020) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *((_DWORD *)a1 + 504) = 0;
      if ( a1 + 2024 < a1 + 2020 || (unsigned __int64)(a1 + 2024) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *((_DWORD *)a1 + 505) = 0;
      v8 = a1 + 2024;
      if ( v8 + 1 < v8 || (unsigned __int64)(v8 + 1) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *v8 = 1144084230;
    }
    WdLogSingleEntry2(2LL, v6);
    ExRaiseStatus(-1073741801);
  }
  if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)a1) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( (unsigned __int64)&a1[v6] > MmUserProbeAddress || &a1[v6] < a1 )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(QuotaZInit, a1, v6);
  QuotaZInit[1] = v6;
  v10 = (NSInstrumentation::CLeakTrackingAllocator *)*QuotaZInit;
  if ( (_DWORD)v10 == -21 )
  {
    if ( (_DWORD)v6 == 2056 )
    {
      v27 = QuotaZInit[504];
      v26 = QuotaZInit[505];
      *((_QWORD *)QuotaZInit + 252) = 0LL;
      v25 = 1;
      goto LABEL_29;
    }
LABEL_73:
    DeviceInfoInternal = -1073741811;
    goto LABEL_54;
  }
  if ( (_DWORD)v10 != -15 )
    goto LABEL_29;
  if ( (_DWORD)v6 != 32 )
    goto LABEL_73;
  v19 = QuotaZInit[5];
  if ( v19 )
  {
    v3 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v10, v9, v19, 0x63447355u);
    if ( !v3 )
    {
      DeviceInfoInternal = -1073741801;
      goto LABEL_54;
    }
    Address = (volatile void *)*((_QWORD *)QuotaZInit + 3);
    *((_QWORD *)QuotaZInit + 3) = v3;
  }
LABEL_29:
  v12 = DispConfigTypes::RequiresUserCritShared();
  if ( v12 )
    PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(v11);
  v13 = *QuotaZInit;
  if ( (unsigned __int8)DispConfigTypes::AllowInAnySession(*QuotaZInit) )
    goto LABEL_35;
  if ( !HIDWORD(WPP_MAIN_CB.Dpc.DeferredRoutine) )
  {
    if ( !(unsigned int)UserIsWddmConnectedSession(v14) )
      DeviceInfoInternal = -1073741790;
LABEL_35:
    if ( DeviceInfoInternal >= 0 )
    {
      GetterTypeSize = DispConfigTypes::GetGetterTypeSize(v13);
      if ( !GetterTypeSize || QuotaZInit[1] != GetterTypeSize )
        DeviceInfoInternal = -1073741811;
      if ( DeviceInfoInternal >= 0 )
        DeviceInfoInternal = DrvDisplayConfigGetDeviceInfoInternal(
                               (struct DISPLAYCONFIG_DEVICE_INFO_HEADER *)QuotaZInit,
                               1);
    }
    goto LABEL_40;
  }
  DeviceInfoInternal = -1073741823;
LABEL_40:
  if ( v12 )
    UserSessionSwitchLeaveCrit();
  if ( DeviceInfoInternal < 0 && v25 )
    v24 = QuotaZInit[506];
  if ( DeviceInfoInternal == -2147483643 )
  {
    DeviceInfoInternal = -1073741789;
  }
  else if ( DeviceInfoInternal != -1073741789 )
  {
    DeviceInfoInternal = DeviceInfoTranslateStatusDefault(*QuotaZInit, (unsigned int)DeviceInfoInternal);
  }
  if ( *QuotaZInit == -15 )
  {
    *((_QWORD *)QuotaZInit + 3) = Address;
    if ( DeviceInfoInternal >= 0 )
    {
      if ( QuotaZInit[5] )
      {
        CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
        ProbeForWrite(Address, QuotaZInit[5], CurrentProcessWow64Process != 0 ? 1 : 4);
        memmove((void *)Address, v3, QuotaZInit[5]);
      }
    }
  }
  if ( *QuotaZInit == 3 && DeviceInfoInternal >= 0 )
    QuotaZInit[7] = 0;
  v17 = PsGetCurrentProcessWow64Process();
  ProbeForWrite(a1, QuotaZInit[1], v17 != 0 ? 1 : 4);
  memmove(a1, QuotaZInit, QuotaZInit[1]);
LABEL_54:
  if ( DeviceInfoInternal < 0 && v25 )
  {
    v28 = 0LL;
    v29 = 0;
    DrvSampleDisplayState(&v28);
    v20 = (unsigned int)v28;
    if ( v27 != (_DWORD)v28 || (v21 = 1, v26 != v29) )
      v21 = 0;
    if ( v21 )
    {
      v23 = DeviceInfoInternal;
    }
    else
    {
      v22 = a1 + 2024;
      if ( v22 + 1 < v22 || (unsigned __int64)(v22 + 1) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *v22 = 0;
      WdLogSingleEntry5(2LL, v27, v26, v20, v29, (int)v24);
      v23 = DeviceInfoInternal;
      WdLogSingleEntry2(2LL, DeviceInfoInternal);
    }
    if ( dword_1C0297530 || !v21 )
    {
      WdLogSingleEntry2(2LL, v23);
    }
    else
    {
      dword_1C0297530 = 1;
      HelperCreateLiveDumpWithWdLogs((unsigned int)DeviceInfoInternal, v24);
    }
  }
  if ( v3 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v3);
  if ( QuotaZInit )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, QuotaZInit);
  return (unsigned int)DeviceInfoInternal;
}
