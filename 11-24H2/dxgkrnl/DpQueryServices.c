/*
 * XREFs of DpQueryServices @ 0x140235390
 * Callers:
 *     <none>
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140066C98 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140066F1C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 __fastcall DpQueryServices(__int64 a1, int a2, unsigned __int16 *a3)
{
  unsigned int v3; // edi
  __int64 v4; // r14
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 (__fastcall *v9)(int, __int64); // rax
  __int64 (__fastcall *v10)(struct _DXGK_TIMED_OPERATION *, PVOID, KWAIT_REASON, KPROCESSOR_MODE, BOOLEAN, union _LARGE_INTEGER *); // rax
  __int64 v12; // [rsp+40h] [rbp+8h]

  v3 = 0;
  v4 = a2;
  if ( !a1 || !a3 )
  {
    v3 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 2203;
    return v3;
  }
  v7 = *(_QWORD *)(a1 + 64);
  if ( !v7 || *(_DWORD *)(v7 + 16) != 1953656900 || (unsigned int)(*(_DWORD *)(v7 + 20) - 2) > 1 )
  {
    v3 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 2216;
    return v3;
  }
  if ( !KeGetCurrentIrql() )
  {
    if ( (_DWORD)v4 )
    {
      if ( (_DWORD)v4 == 1 )
      {
        if ( a3[1] != 1 )
        {
          v3 = -1073741811;
          WdLogSingleEntry1(3LL, a3[1]);
          WdLogGlobalForLineNumber = 2306;
          return v3;
        }
        if ( *a3 != 56 )
        {
          v3 = -1073741811;
          WdLogSingleEntry1(3LL, *a3);
          WdLogGlobalForLineNumber = 2316;
          return v3;
        }
        *((_QWORD *)a3 + 2) = WdpInterfaceReferenceNop;
        *((_QWORD *)a3 + 3) = WdpInterfaceReferenceNop;
        *((_QWORD *)a3 + 4) = DpiDbgReportCreate;
        *((_QWORD *)a3 + 5) = DpiDbgReportSecondaryData;
        v10 = (__int64 (__fastcall *)(struct _DXGK_TIMED_OPERATION *, PVOID, KWAIT_REASON, KPROCESSOR_MODE, BOOLEAN, union _LARGE_INTEGER *))DpiDbgReportComplete;
      }
      else
      {
        if ( (_DWORD)v4 != 2 )
        {
          switch ( (_DWORD)v4 )
          {
            case 3:
              if ( a3[1] != 1 )
              {
                v3 = -1073741811;
                WdLogSingleEntry1(3LL, a3[1]);
                WdLogGlobalForLineNumber = 2388;
                return v3;
              }
              if ( *a3 != 72 )
              {
                v3 = -1073741811;
                WdLogSingleEntry1(3LL, *a3);
                WdLogGlobalForLineNumber = 2398;
                return v3;
              }
              v8 = *(_QWORD *)(v7 + 24);
              *((_QWORD *)a3 + 2) = WdpInterfaceReferenceNop;
              *((_QWORD *)a3 + 3) = WdpInterfaceReferenceNop;
              *((_QWORD *)a3 + 4) = DpOpenSpbResource;
              *((_QWORD *)a3 + 5) = DpCloseSpbResource;
              *((_QWORD *)a3 + 6) = &DpReadSpbResource;
              *((_QWORD *)a3 + 7) = &DpWriteSpbResource;
              *((_QWORD *)a3 + 8) = DpSpbResourceIoControl;
              goto LABEL_65;
            case 4:
              if ( !*(_BYTE *)(v7 + 1153) )
              {
                v3 = -1073741816;
                WdLogSingleEntry1(3LL, a1);
                WdLogGlobalForLineNumber = 2430;
                return v3;
              }
              if ( *a3 != 40 )
              {
                v3 = -1073741811;
                WdLogSingleEntry1(3LL, *a3);
                WdLogGlobalForLineNumber = 2441;
                return v3;
              }
              if ( a3[1] != 1 )
              {
                v3 = -1073741811;
                WdLogSingleEntry1(3LL, a3[1]);
                WdLogGlobalForLineNumber = 2451;
                return v3;
              }
              v8 = *(_QWORD *)(v7 + 24);
              *((_QWORD *)a3 + 2) = WdpInterfaceReferenceNop;
              *((_QWORD *)a3 + 3) = WdpInterfaceReferenceNop;
              *((_QWORD *)a3 + 4) = DpGetMSBDDDisplayInfoPlusEdid;
              goto LABEL_65;
            case 5:
              if ( a3[1] != 1 )
              {
                v3 = -1073741811;
                WdLogSingleEntry1(3LL, a3[1]);
                WdLogGlobalForLineNumber = 2479;
                return v3;
              }
              if ( *a3 != 48 )
              {
                v3 = -1073741811;
                WdLogSingleEntry1(3LL, *a3);
                WdLogGlobalForLineNumber = 2489;
                return v3;
              }
              v8 = *(_QWORD *)(v7 + 24);
              *((_QWORD *)a3 + 2) = WdpInterfaceReferenceNop;
              *((_QWORD *)a3 + 3) = WdpInterfaceReferenceNop;
              *((_QWORD *)a3 + 4) = &DpiEnumSystemFirmwareTables;
              v9 = (__int64 (__fastcall *)(int, __int64))DpiReadSystemFirmwareTable;
              break;
            case 6:
              if ( !*(_BYTE *)(v7 + 1158) )
              {
                v3 = -1073741816;
                WdLogSingleEntry1(3LL, a1);
                WdLogGlobalForLineNumber = 2518;
                return v3;
              }
              if ( *a3 != 80 )
              {
                v3 = -1073741811;
                WdLogSingleEntry1(3LL, *a3);
                WdLogGlobalForLineNumber = 2527;
                return v3;
              }
              v8 = *(_QWORD *)(v7 + 24);
              *((_QWORD *)a3 + 2) = WdpInterfaceReferenceNop;
              *((_QWORD *)a3 + 3) = WdpInterfaceReferenceNop;
              *((_QWORD *)a3 + 4) = &DpiIndirectCbSendMessage;
              *((_QWORD *)a3 + 5) = DpiIndirectCbForceDisplaySwitch;
              *((_QWORD *)a3 + 6) = DpiIndirectCbDisableRenderD3Requests;
              *((_QWORD *)a3 + 7) = DpiIndirectCbNotifyCursorSupportChange;
              *((_QWORD *)a3 + 8) = DpiIndirectCbOpmSetSrmList;
              *((_QWORD *)a3 + 9) = DpiIndirectCbOpmGetSrmListVersion;
              goto LABEL_65;
            case 7:
              v12 = (unsigned int)Feature_IsFeatureEnabled__private_featureState;
              if ( (Feature_IsFeatureEnabled__private_featureState & 0x10) == 0 )
              {
                LODWORD(v12) = Feature_IsFeatureEnabled__private_featureState | 1;
                wil_details_FeatureReporting_ReportUsageToService(
                  (__int64)&Feature_IsFeatureEnabled__private_descriptor,
                  v12,
                  3LL);
                wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
                  v12,
                  3,
                  (__int64)&Feature_IsFeatureEnabled__private_descriptor);
              }
              if ( *a3 != 48 )
              {
                v3 = -1073741811;
                WdLogSingleEntry1(3LL, *a3);
                WdLogGlobalForLineNumber = 2562;
                return v3;
              }
              v8 = *(_QWORD *)(v7 + 24);
              *((_QWORD *)a3 + 2) = WdpInterfaceReferenceNop;
              *((_QWORD *)a3 + 3) = WdpInterfaceReferenceNop;
              *((_QWORD *)a3 + 4) = DpiIsFeatureEnabled2;
              v9 = DpiQueryFeatureInterface;
              break;
            default:
              v3 = -1073741811;
              WdLogSingleEntry1(3LL, v4);
              WdLogGlobalForLineNumber = 2593;
              return v3;
          }
LABEL_64:
          *((_QWORD *)a3 + 5) = v9;
LABEL_65:
          *((_QWORD *)a3 + 1) = v8;
          goto LABEL_66;
        }
        if ( a3[1] != 1 )
        {
          v3 = -1073741811;
          WdLogSingleEntry1(3LL, a3[1]);
          WdLogGlobalForLineNumber = 2347;
          return v3;
        }
        if ( *a3 != 56 )
        {
          v3 = -1073741811;
          WdLogSingleEntry1(3LL, *a3);
          WdLogGlobalForLineNumber = 2357;
          return v3;
        }
        *((_QWORD *)a3 + 2) = WdpInterfaceReferenceNop;
        *((_QWORD *)a3 + 3) = WdpInterfaceReferenceNop;
        *((_QWORD *)a3 + 4) = TdrTimedOperationStart;
        *((_QWORD *)a3 + 5) = TdrTimedOperationDelay;
        v10 = TdrTimedOperationWaitForSingleObject;
      }
      *((_QWORD *)a3 + 1) = 0LL;
      v8 = 0LL;
      *((_QWORD *)a3 + 6) = v10;
LABEL_66:
      WdpInterfaceReferenceNop(v8);
      return v3;
    }
    if ( a3[1] != 1 )
    {
      v3 = -1073741811;
      WdLogSingleEntry1(3LL, a3[1]);
      WdLogGlobalForLineNumber = 2252;
      return v3;
    }
    if ( *a3 != 56 )
    {
      v3 = -1073741811;
      WdLogSingleEntry1(3LL, *a3);
      WdLogGlobalForLineNumber = 2262;
      return v3;
    }
    if ( !*(_QWORD *)(v7 + 680) )
    {
      v3 = -1073741823;
      WdLogSingleEntry1(3LL, -1073741823LL);
      WdLogGlobalForLineNumber = 2272;
      return v3;
    }
    v8 = *(_QWORD *)(v7 + 24);
    *((_QWORD *)a3 + 2) = WdpInterfaceReferenceNop;
    *((_QWORD *)a3 + 3) = WdpInterfaceReferenceNop;
    *((_QWORD *)a3 + 6) = DpiAgpSetAgpCommand;
    *((_QWORD *)a3 + 4) = &DpiAgpAllocatePool;
    v9 = (__int64 (__fastcall *)(int, __int64))DpiAgpFreePool;
    goto LABEL_64;
  }
  v3 = -1073741811;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL) + 28LL) >= 0x2003u )
  {
    WdLogSingleEntry3(0LL, 275LL, 21LL, -1073741811LL);
    WdLogGlobalForLineNumber = 2229;
  }
  WdLogSingleEntry1(2LL, -1073741811LL);
  WdLogGlobalForLineNumber = 2235;
  return v3;
}
