/*
 * XREFs of ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x14001A960
 * Callers:
 *     DrvGetDisplayDriverParameters @ 0x140012FAC (DrvGetDisplayDriverParameters.c)
 *     DrvEnumDisplayDevices @ 0x140018880 (DrvEnumDisplayDevices.c)
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x14001975C (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvUpdateGraphicsDeviceList @ 0x14004D070 (DrvUpdateGraphicsDeviceList.c)
 *     ?DrvSetDisconnectedGraphicsDevice@@YAHH@Z @ 0x14004E238 (-DrvSetDisconnectedGraphicsDevice@@YAHH@Z.c)
 *     ?GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z @ 0x140116CF0 (-GetPrimaryAttachFlags@@YAHPEAUtagGRAPHICS_DEVICE@@GPEAK1@Z.c)
 *     DrvUpdateDisplayDriverParameters @ 0x140122CD0 (DrvUpdateDisplayDriverParameters.c)
 *     ?DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x140135A14 (-DrvGetDriverCapableOverRide@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z @ 0x14013F550 (-DrvGetDriverAccelerationsLevel@@YAKPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     ?DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z @ 0x140145934 (-DrvUpdateAttachFlag@@YAXPEAUtagGRAPHICS_DEVICE@@K@Z.c)
 *     DrvSetPruneFlag @ 0x140148A80 (DrvSetPruneFlag.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140012644 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     UserIsRemoteAndNotDisconnectConnection @ 0x140013900 (UserIsRemoteAndNotDisconnectConnection.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x14001C1C0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     UserIsCurrentProcessDwm @ 0x140024300 (UserIsCurrentProcessDwm.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1400406A8 (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x140040EBC (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x14004B01C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x14004CB14 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     PALLOCMEM @ 0x14008F85C (PALLOCMEM.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140136080 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1401985D4 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x14019869C (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     wcsstr @ 0x1401A0128 (wcsstr.c)
 *     wcschr @ 0x1401A0348 (wcschr.c)
 *     toupper @ 0x1401A0788 (toupper.c)
 *     _wcsnicmp @ 0x1401A07F0 (_wcsnicmp.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1401A2654 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

HANDLE __fastcall DrvGetRegistryHandleFromDeviceMap(
        unsigned __int16 *a1,
        int a2,
        unsigned int *a3,
        wchar_t *a4,
        unsigned int a5,
        NTSTATUS *a6)
{
  __int64 v7; // r15
  int v9; // r12d
  __int64 v10; // rsi
  __int64 v12; // rcx
  __int64 v13; // r13
  __int64 v14; // rcx
  __int64 v15; // rbx
  int v16; // eax
  NTSTATUS v17; // r15d
  __int64 v18; // rbx
  int v19; // eax
  __int64 v20; // rsi
  WCHAR *v21; // r13
  const WCHAR *v22; // rdx
  char *v23; // rbx
  ULONG v24; // r12d
  __int64 v25; // rcx
  signed __int64 v26; // rbx
  wchar_t v27; // ax
  wchar_t *v28; // rax
  HANDLE result; // rax
  unsigned __int16 i; // ax
  wchar_t *v31; // rbx
  __int64 v32; // r15
  _QWORD *Pool2; // rax
  _QWORD *v34; // rax
  const WCHAR *v35; // rdx
  wchar_t *v36; // rax
  wchar_t *v37; // rdi
  _DWORD *v38; // rax
  unsigned __int64 m; // r15
  _DWORD *v40; // rax
  unsigned __int64 k; // r15
  int v42; // eax
  __int64 v43; // rcx
  signed int Length; // r13d
  unsigned __int16 *v45; // rax
  unsigned __int16 *v46; // r12
  __int64 v47; // r10
  unsigned __int16 *v48; // rcx
  __int64 v49; // rbx
  __int64 v50; // rbx
  unsigned __int16 *v51; // rax
  __int64 v52; // rcx
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int128 v59; // xmm0
  __int128 v60; // xmm1
  __int128 v61; // xmm1
  __int128 v62; // xmm0
  unsigned __int16 *v63; // r13
  unsigned __int16 j; // ax
  wchar_t *v65; // rbx
  wchar_t *v66; // r13
  int v67; // r12d
  int v68; // r15d
  PVOID Buffer; // [rsp+40h] [rbp-C0h]
  PVOID Buffera; // [rsp+40h] [rbp-C0h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  PVOID v74; // [rsp+60h] [rbp-A0h]
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  void *KeyHandle; // [rsp+70h] [rbp-90h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+78h] [rbp-88h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-78h] BYREF
  ULONG ResultLength; // [rsp+B8h] [rbp-48h] BYREF
  ULONG v80; // [rsp+BCh] [rbp-44h] BYREF
  int v81; // [rsp+C0h] [rbp-40h]
  ULONG v82; // [rsp+C4h] [rbp-3Ch]
  HANDLE v83; // [rsp+C8h] [rbp-38h] BYREF
  wchar_t *v84; // [rsp+D0h] [rbp-30h]
  wchar_t *v85; // [rsp+D8h] [rbp-28h]
  __int64 v86; // [rsp+E0h] [rbp-20h]
  unsigned __int16 *v87; // [rsp+E8h] [rbp-18h]
  unsigned int *v88; // [rsp+F0h] [rbp-10h]
  __int64 v89; // [rsp+F8h] [rbp-8h]
  NTSTATUS *v90; // [rsp+100h] [rbp+0h]
  PVOID BackTrace[20]; // [rsp+110h] [rbp+10h] BYREF
  PVOID v92[20]; // [rsp+1B0h] [rbp+B0h] BYREF
  unsigned __int16 v93[152]; // [rsp+250h] [rbp+150h] BYREF

  v7 = a2;
  Handle = 0LL;
  v9 = 0;
  KeyHandle = 0LL;
  ResultLength = 0;
  v10 = 0LL;
  v74 = 0LL;
  v88 = a3;
  v90 = a6;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset(v93, 0, sizeof(v93));
  v13 = *(_QWORD *)(W32GetSessionState(v12) + 88);
  v89 = v13;
  WdLogSingleEntry3(5LL, a1, v7, a3);
  WdLogGlobalForLineNumber = 2077;
  if ( a4 && !a5 )
  {
    v17 = -1073741811;
    goto LABEL_29;
  }
  if ( *(_DWORD *)(v13 + 2920) )
  {
    v49 = *(_QWORD *)(W32GetSessionState(v14) + 88);
    if ( (unsigned int)UserIsRemoteAndNotDisconnectConnection() )
    {
      if ( *(_QWORD *)(v49 + 2936) )
      {
        v50 = *(_QWORD *)(W32GetUserGdiSessionState() + 40);
        if ( PsGetCurrentProcess() != v50
          && !(unsigned int)UserIsCurrentProcessDwm()
          && (*((_DWORD *)a1 + 40) & 0x4000000) != 0 )
        {
          v51 = v93;
          v52 = 2LL;
          do
          {
            v51 += 64;
            v53 = *(_OWORD *)a1;
            v54 = *((_OWORD *)a1 + 1);
            a1 += 64;
            *((_OWORD *)v51 - 8) = v53;
            v55 = *((_OWORD *)a1 - 6);
            *((_OWORD *)v51 - 7) = v54;
            v56 = *((_OWORD *)a1 - 5);
            *((_OWORD *)v51 - 6) = v55;
            v57 = *((_OWORD *)a1 - 4);
            *((_OWORD *)v51 - 5) = v56;
            v58 = *((_OWORD *)a1 - 3);
            *((_OWORD *)v51 - 4) = v57;
            v59 = *((_OWORD *)a1 - 2);
            *((_OWORD *)v51 - 3) = v58;
            v60 = *((_OWORD *)a1 - 1);
            *((_OWORD *)v51 - 2) = v59;
            *((_OWORD *)v51 - 1) = v60;
            --v52;
          }
          while ( v52 );
          v61 = *((_OWORD *)a1 + 1);
          *(_OWORD *)v51 = *(_OWORD *)a1;
          v62 = *((_OWORD *)a1 + 2);
          a1 = v93;
          *((_OWORD *)v51 + 1) = v61;
          *((_OWORD *)v51 + 2) = v62;
          StringCchCopyW(v93, 0x20uLL, (const unsigned __int16 *)(v13 + 2944));
          *(_DWORD *)&v93[80] &= ~0x4000000u;
        }
      }
    }
  }
  if ( (*((_DWORD *)a1 + 40) & 8) != 0 )
  {
    if ( (Feature_RestrictXpdm_Block3rdPartyDrivers__private_featureState & 0x10) == 0 )
    {
      Buffera = (PVOID)(Feature_RestrictXpdm_Block3rdPartyDrivers__private_featureState | 1u);
      wil_details_FeatureReporting_ReportUsageToService(
        &Feature_RestrictXpdm_Block3rdPartyDrivers__private_descriptor,
        Buffera,
        3LL);
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
        Buffera,
        3LL,
        &Feature_RestrictXpdm_Block3rdPartyDrivers__private_descriptor);
    }
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
    v9 = 1;
  }
  v15 = W32GetUserSessionState() + 72288;
  v16 = *(_DWORD *)v15;
  if ( !*(_DWORD *)v15 )
    goto LABEL_5;
  if ( v16 == 1 )
  {
    if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
            (NSInstrumentation::CLeakTrackingAllocator *)v15,
            0x706D7447u) )
      goto LABEL_72;
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 528LL, 1886221383LL);
    v10 = (__int64)Pool2;
    if ( !Pool2
      || (_InterlockedIncrement64((volatile signed __int64 *)(v15 + 112)),
          *Pool2 = 1886221383LL,
          v10 = (__int64)(Pool2 + 2),
          Pool2 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *(NSInstrumentation::CPointerHashTable **)(v15 + 8),
        (const void *)0x706D7447);
    }
    goto LABEL_7;
  }
  if ( v16 != 2 )
    goto LABEL_71;
  if ( (*(_DWORD *)(v15 + 80) & 0x706D7447) != 0x706D7447 )
  {
LABEL_5:
    v10 = ExAllocatePool2(256LL, 512LL, 1886221383LL);
    if ( v10 )
      _InterlockedIncrement64((volatile signed __int64 *)(v15 + 112));
LABEL_7:
    Buffer = (PVOID)v10;
    if ( !v10 )
      goto LABEL_72;
LABEL_8:
    if ( (*((_DWORD *)a1 + 40) & 0x4000000) == 0 || v9 )
    {
      RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Hardware\\DeviceMap\\Video");
    }
    else
    {
      if ( (unsigned int)(v7 - 1) <= 1 )
      {
        v17 = -1073741766;
        goto LABEL_28;
      }
      DestinationString.Buffer = (PWSTR)v10;
      *(_DWORD *)&DestinationString.Length = 33423360;
      RtlAppendUnicodeToString(
        &DestinationString,
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Terminal Server\\Video\\");
      v35 = L"vgastub";
      if ( *(_QWORD *)(v13 + 2896) )
        v35 = *(const WCHAR **)(v13 + 2896);
      RtlAppendUnicodeToString(&DestinationString, v35);
    }
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.RootDirectory = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v17 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( v17 < 0 )
      goto LABEL_90;
    v18 = W32GetUserSessionState() + 72288;
    v19 = *(_DWORD *)v18;
    if ( !*(_DWORD *)v18 )
      goto LABEL_12;
    if ( v19 == 1 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(
             (NSInstrumentation::CLeakTrackingAllocator *)v18,
             0x706D7447u) )
      {
        v34 = (_QWORD *)ExAllocatePool2(256LL, 1040LL, 1886221383LL);
        v20 = (__int64)v34;
        if ( !v34
          || (_InterlockedIncrement64((volatile signed __int64 *)(v18 + 112)),
              *v34 = 1886221383LL,
              v20 = (__int64)(v34 + 2),
              v34 == (_QWORD *)-16LL) )
        {
          NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
            *(NSInstrumentation::CPointerHashTable **)(v18 + 8),
            (const void *)0x706D7447);
        }
LABEL_14:
        v74 = (PVOID)v20;
        if ( v20 )
        {
LABEL_15:
          v21 = (WCHAR *)(v20 + 512);
          if ( (*((_DWORD *)a1 + 40) & 0x4000000) == 0 || v9 )
            v22 = a1;
          else
            v22 = L"\\Device\\Video0";
          RtlInitUnicodeString(&DestinationString, v22);
          v17 = ZwQueryValueKey(
                  KeyHandle,
                  &DestinationString,
                  KeyValueFullInformation,
                  (PVOID)v20,
                  0x200u,
                  &ResultLength);
          if ( v17 < 0 )
            goto LABEL_90;
          v23 = (char *)(v20 + *(unsigned int *)(v20 + 8));
          v82 = 0;
          Destination = 0LL;
          v24 = 0;
          if ( a2 == 3 )
          {
            if ( a4 )
            {
              v25 = a5;
              if ( (unsigned __int64)a5 - 1 > 0x7FFFFFFE )
              {
                if ( a5 )
                  *a4 = 0;
                v17 = -1073741811;
              }
              else
              {
                v26 = v23 - (char *)a4;
                do
                {
                  if ( !(127LL - a5 + v25) )
                    break;
                  v27 = *(wchar_t *)((char *)a4 + v26);
                  if ( !v27 )
                    break;
                  *a4++ = v27;
                  --v25;
                }
                while ( v25 );
                v28 = a4 - 1;
                if ( v25 )
                  v28 = a4;
                *v28 = 0;
              }
            }
            goto LABEL_28;
          }
          for ( i = *(_WORD *)v23; *(_WORD *)v23; i = *(_WORD *)v23 )
          {
            *(_WORD *)v23 = toupper(i);
            v23 += 2;
          }
          v84 = wcsstr((const wchar_t *)(v20 + *(unsigned int *)(v20 + 8)), L"\\CONTROL\\");
          v31 = v84;
          if ( !v84 )
          {
            v31 = wcsstr((const wchar_t *)(v20 + *(unsigned int *)(v20 + 8)), L"\\SERVICES");
            v84 = v31;
          }
          v32 = -1LL;
          if ( !a4 )
            goto LABEL_43;
          v42 = a5 - 1;
          v85 = a4;
          if ( a5 - 1 > 0x1F )
            v42 = 31;
          v43 = -1LL;
          v81 = v42;
          v83 = 0LL;
          do
            ++v43;
          while ( *(_WORD *)(v20 + *(unsigned int *)(v20 + 8) + 2 * v43) );
          v86 = (int)v43;
          if ( (unsigned __int64)(2LL * (int)v43 + 12) > 0x66 )
            Length = 2 * v43 + 12;
          else
            Length = 102;
          v45 = (unsigned __int16 *)PALLOCMEM((unsigned int)Length, 1936876615LL);
          v87 = v45;
          v46 = v45;
          if ( !v45 )
          {
LABEL_113:
            v21 = (WCHAR *)(v20 + 512);
            v24 = v82;
            *v85 = 0;
LABEL_43:
            if ( v88 )
            {
              do
                ++v32;
              while ( v31[v32] );
              StringCchPrintfW(
                &v31[v32],
                512 - ((unsigned int)(((__int64)v31 - v20) >> 1) >> 1) - (unsigned int)v32,
                L"\\Mon%08X",
                *v88);
            }
            Destination.Buffer = v21;
            *(_DWORD *)&Destination.Length = 33423360;
            RtlAppendUnicodeToString(&Destination, L"\\Registry\\Machine\\System\\CurrentControlSet");
            if ( (unsigned int)(a2 - 1) <= 1 )
            {
              if ( (*((_DWORD *)a1 + 40) & 0x800000) != 0 )
              {
                RtlAppendUnicodeToString(&Destination, L"\\Control\\UnitedVideo");
                v24 = (unsigned __int8)RtlIsStateSeparationEnabled() != 0;
              }
              else
              {
                RtlAppendUnicodeToString(&Destination, L"\\Hardware Profiles\\Current\\System\\CurrentControlSet");
              }
            }
            ObjectAttributes.Length = 48;
            ObjectAttributes.ObjectName = &Destination;
            ObjectAttributes.RootDirectory = 0LL;
            ObjectAttributes.Attributes = 576;
            if ( a2 == 2 )
            {
              ObjectAttributes.SecurityDescriptor = *(PVOID *)(v89 + 1736);
              ObjectAttributes.SecurityQualityOfService = 0LL;
              v17 = ZwCreateKey(&Handle, 0, &ObjectAttributes, 0, 0LL, v24, 0LL);
              if ( v17 >= 0 )
              {
                while ( 1 )
                {
                  v36 = wcschr(v31 + 1, 0x5Cu);
                  v37 = v36;
                  if ( v36 )
                    *v36 = 0;
                  RtlAppendUnicodeToString(&Destination, v31);
                  if ( Handle )
                    ZwClose(Handle);
                  v17 = ZwCreateKey(&Handle, 0, &ObjectAttributes, 0, 0LL, v24, 0LL);
                  if ( v17 < 0 )
                    break;
                  if ( !v37 )
                    goto LABEL_28;
                  *v37 = 92;
                  v31 = v37;
                }
              }
              Handle = 0LL;
              goto LABEL_90;
            }
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            RtlAppendUnicodeToString(&Destination, v31);
            v17 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
            if ( v17 < 0 )
            {
              v17 = -1073741438;
LABEL_90:
              WdLogSingleEntry1(5LL, v17);
              WdLogGlobalForLineNumber = 2622;
            }
LABEL_28:
            v10 = (__int64)Buffer;
            goto LABEL_29;
          }
          memset(v45, 0, Length);
          StringCchCopyW(
            v46,
            (unsigned __int64)Length >> 1,
            (const unsigned __int16 *)(v20 + *(unsigned int *)(v20 + 8)));
          v48 = &v46[v86 - 1];
          if ( v48 > v46 )
          {
            while ( *v48 != 92 )
            {
              if ( --v48 <= v46 )
                goto LABEL_111;
            }
          }
          else
          {
LABEL_111:
            if ( *v48 != 92 )
            {
LABEL_112:
              GreDeleteFastMutex(v46);
              goto LABEL_113;
            }
          }
          StringCchCopyW(v48 + 1, v47 - v86, L"Video");
          RtlInitUnicodeString(&DestinationString, v46);
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 576;
          ObjectAttributes.ObjectName = &DestinationString;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          if ( ZwOpenKey(&v83, 0x20019u, &ObjectAttributes) >= 0 )
          {
            v80 = 0;
            RtlInitUnicodeString(&DestinationString, L"Service");
            memset(v46, 0, Length);
            if ( ZwQueryValueKey(v83, &DestinationString, KeyValueFullInformation, v46, Length, &v80) >= 0 )
            {
              v63 = (unsigned __int16 *)((char *)v46 + *((unsigned int *)v46 + 2));
              for ( j = *v63; *v63; j = *v63 )
                *v63++ = toupper(j);
              v65 = a4;
              v66 = (unsigned __int16 *)((char *)v46 + *((unsigned int *)v46 + 2));
              v67 = v81;
              v68 = v81;
              while ( v67-- )
              {
                if ( !*v66 )
                  break;
                *v65++ = *v66++;
                if ( v67 == v68 - 3 && !wcsnicmp(a4, L"VGA", 3uLL) )
                  break;
              }
              v46 = v87;
              v32 = -1LL;
              v85 = v65;
              v31 = v84;
            }
            ZwClose(v83);
          }
          goto LABEL_112;
        }
LABEL_76:
        v17 = -1073741670;
        goto LABEL_28;
      }
    }
    else if ( v19 == 2 )
    {
      if ( (*(_DWORD *)(v18 + 80) & 0x706D7447) != 0x706D7447 )
      {
LABEL_12:
        v20 = ExAllocatePool2(256LL, 1024LL, 1886221383LL);
        if ( v20 )
          _InterlockedIncrement64((volatile signed __int64 *)(v18 + 112));
        goto LABEL_14;
      }
      v40 = (_DWORD *)(v18 + 48);
      for ( k = 0LL; ; ++k )
      {
        if ( k >= *(unsigned int *)(v18 + 84) )
          goto LABEL_12;
        if ( *v40 == 1886221383 )
          break;
        ++v40;
      }
      v20 = ExAllocatePool2(256LL, 1040LL, 1886221383LL);
      if ( v20 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v18 + 128));
        memset(v92, 0, sizeof(v92));
        RtlCaptureStackBackTrace(0, 0x14u, v92, 0LL);
        if ( (unsigned __int64)(v20 & 0xFFF) + 16 >= 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                  v18,
                                  v20,
                                  k,
                                  v92) )
          {
            v74 = (PVOID)v20;
            goto LABEL_15;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                     v18,
                                     v20,
                                     k,
                                     v92) )
        {
          v20 += 16LL;
          goto LABEL_14;
        }
        _InterlockedIncrement64((volatile signed __int64 *)(v18 + 136));
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)v20);
      }
    }
    v74 = 0LL;
    goto LABEL_76;
  }
  v38 = (_DWORD *)(v15 + 48);
  for ( m = 0LL; ; ++m )
  {
    if ( m >= *(unsigned int *)(v15 + 84) )
    {
      LODWORD(v7) = a2;
      goto LABEL_5;
    }
    if ( *v38 == 1886221383 )
      break;
    ++v38;
  }
  v10 = ExAllocatePool2(256LL, 528LL, 1886221383LL);
  if ( !v10 )
  {
    v10 = 0LL;
    goto LABEL_72;
  }
  _InterlockedIncrement64((volatile signed __int64 *)(v15 + 128));
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( (unsigned __int64)(v10 & 0xFFF) + 16 >= 0x1000 )
  {
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                             v15,
                             v10,
                             m,
                             BackTrace) )
      goto LABEL_70;
    LODWORD(v7) = a2;
    Buffer = (PVOID)v10;
    goto LABEL_8;
  }
  if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                          v15,
                          v10,
                          m,
                          BackTrace) )
  {
    LODWORD(v7) = a2;
    v10 += 16LL;
    goto LABEL_7;
  }
LABEL_70:
  _InterlockedIncrement64((volatile signed __int64 *)(v15 + 136));
  _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)v10);
LABEL_71:
  v10 = 0LL;
LABEL_72:
  v17 = -1073741670;
LABEL_29:
  if ( v90 )
    *v90 = v17;
  if ( KeyHandle )
  {
    ZwClose(KeyHandle);
    KeyHandle = 0LL;
  }
  if ( v10 )
    GreDeleteFastMutex((PVOID)v10);
  if ( v74 )
    GreDeleteFastMutex(v74);
  WdLogSingleEntry1(5LL, v17);
  result = Handle;
  WdLogGlobalForLineNumber = 2646;
  return result;
}
