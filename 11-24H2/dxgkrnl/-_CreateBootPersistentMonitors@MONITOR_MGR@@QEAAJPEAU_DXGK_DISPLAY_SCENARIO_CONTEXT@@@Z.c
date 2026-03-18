/*
 * XREFs of ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140273334
 * Callers:
 *     ?_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140274AFC (-_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z @ 0x140035774 (--0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR@@AEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140273C7C (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACC.c)
 *     ?_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z @ 0x140274BAC (-_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z.c)
 *     ?_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z @ 0x140274E90 (-_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x14028DB88 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402E1CB0 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1402E2950 (-DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_CreateBootPersistentMonitors(
        MONITOR_MGR *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        __int64 a3,
        __int64 a4)
{
  WCHAR *v5; // rsi
  ULONG v6; // ebx
  _DWORD *v7; // rdi
  _DWORD *v8; // r12
  const WCHAR *v9; // r15
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // eax
  NTSTATUS v16; // eax
  __int64 v17; // r14
  __int64 v18; // r14
  int IsTargetForceable; // eax
  __int64 result; // rax
  __int64 v21; // rax
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v22; // r14
  WCHAR *v23; // rbx
  struct DXGMONITOR *v24; // rdx
  int SimulatedMonitor; // edi
  NTSTATUS v26; // eax
  char v27[8]; // [rsp+30h] [rbp-A9h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-A1h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-99h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v30; // [rsp+48h] [rbp-91h]
  char v31[8]; // [rsp+50h] [rbp-89h] BYREF
  __int64 v32; // [rsp+58h] [rbp-81h]
  UNICODE_STRING String2; // [rsp+60h] [rbp-79h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-69h] BYREF
  _BYTE v35[16]; // [rsp+80h] [rbp-59h] BYREF
  char KeyValueInformation[12]; // [rsp+90h] [rbp-49h] BYREF
  unsigned int v37; // [rsp+9Ch] [rbp-3Dh]
  WCHAR SourceString[32]; // [rsp+B0h] [rbp-29h] BYREF

  v30 = a2;
  v5 = 0LL;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  WdLogGlobalForLineNumber = 3691;
  KeyHandle = 0LL;
  if ( MONITOR_MGR::_OpenPersistencyRegistry(this, 0x20019u, &KeyHandle) >= 0 )
  {
    if ( !KeyHandle )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3703;
    }
    v6 = -1;
    ResultLength = 0;
    v7 = 0LL;
    while ( 1 )
    {
      while ( 1 )
      {
        ++v6;
        if ( !v7 )
        {
LABEL_24:
          v7 = (_DWORD *)operator new[](0x60uLL, 0x4D677844u, 256LL);
          if ( !v7 )
          {
            WdLogSingleEntry0(6LL);
            result = 3221225495LL;
            WdLogGlobalForLineNumber = 3754;
            return result;
          }
        }
        v8 = v7 + 2;
        v7[2] = -1;
        v9 = (const WCHAR *)(v7 + 3);
        v10 = ZwEnumerateValueKey(KeyHandle, v6, KeyValueBasicInformation, v7 + 3, 0x4Eu, &ResultLength);
        if ( v10 == -2147483622 )
        {
          v21 = WdLogNewEntry5_WdTrace(v12, v11, v13, v14);
          *(_QWORD *)(v21 + 24) = v6;
          *(_QWORD *)(v21 + 32) = this;
          WdLogGlobalForLineNumber = 3786;
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v7);
          if ( v5 )
          {
            v22 = v30;
            do
            {
              v23 = v5;
              v5 = *(WCHAR **)v5;
              if ( *((_DWORD *)v23 + 2) == -1 )
              {
                v26 = RtlDeleteRegistryValue(0x40000000u, (PCWSTR)KeyHandle, v23 + 12);
                if ( v26 < 0 )
                {
                  WdLogSingleEntry1(2LL, v26);
                  WdLogGlobalForLineNumber = 3997;
                }
              }
              else
              {
                MONITOR_REF_ACCESSOR::MONITOR_REF_ACCESSOR((MONITOR_REF_ACCESSOR *)v31, 0LL);
                MONITOR_REF_ACCESSOR::MONITOR_REF_ACCESSOR((MONITOR_REF_ACCESSOR *)v35, v24);
                SimulatedMonitor = MONITOR_MGR::_HandleCreateSimulatedMonitor(
                                     this,
                                     *((unsigned int *)v23 + 2),
                                     2LL,
                                     v35,
                                     v31,
                                     v22);
                if ( SimulatedMonitor >= 0 && !v32 )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 3979;
                }
                MONITOR_MGR::_LogMonitorPresentEvent(
                  this,
                  1073741825LL,
                  *((unsigned int *)v23 + 2),
                  (unsigned int)SimulatedMonitor,
                  0LL);
                MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v35);
                MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v31);
              }
              DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v23);
            }
            while ( v5 );
          }
          ZwClose(KeyHandle);
          return 0LL;
        }
        if ( v10 >= 0 )
          break;
        WdLogSingleEntry2(3LL, v6, v10);
        WdLogGlobalForLineNumber = 3802;
      }
      *((_WORD *)v7 + ((unsigned __int64)(unsigned int)v7[5] >> 1) + 12) = 0;
      *(_QWORD *)v7 = v5;
      v5 = (WCHAR *)v7;
      v15 = v7[4];
      v7 = 0LL;
      if ( v15 != 4 )
        break;
      v16 = ZwEnumerateValueKey(KeyHandle, v6, KeyValuePartialInformation, KeyValueInformation, 0x13u, &ResultLength);
      v17 = v16;
      if ( v16 == -2147483622 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 3840;
LABEL_13:
        WdLogSingleEntry2(3LL, v6, v17);
        WdLogGlobalForLineNumber = 3854;
LABEL_23:
        ++v6;
        goto LABEL_24;
      }
      if ( v16 < 0 )
        goto LABEL_13;
      v18 = v37;
      v27[0] = 0;
      IsTargetForceable = DmmIsTargetForceable(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL), v37, v27, 0LL);
      if ( IsTargetForceable < 0 )
      {
        if ( IsTargetForceable == -1071774971 )
        {
          WdLogSingleEntry1(3LL, v18);
          WdLogGlobalForLineNumber = 3894;
        }
        goto LABEL_23;
      }
      if ( !v27[0] )
      {
        WdLogSingleEntry1(3LL, (unsigned int)v18);
        WdLogGlobalForLineNumber = 3881;
        goto LABEL_23;
      }
      if ( MONITOR_MGR::_PersistencyRegNameFromTargetID(0LL, v18, SourceString) >= 0 )
      {
        DestinationString = 0LL;
        String2 = 0LL;
        RtlInitUnicodeString(&DestinationString, v9 + 6);
        RtlInitUnicodeString(&String2, SourceString);
        if ( RtlCompareUnicodeString(&DestinationString, &String2, 0) )
        {
          WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 3934;
        }
        else
        {
          *v8 = v18;
        }
        goto LABEL_23;
      }
    }
    WdLogSingleEntry2(3LL, v6, v15);
    WdLogGlobalForLineNumber = 3828;
    goto LABEL_23;
  }
  return 0LL;
}
