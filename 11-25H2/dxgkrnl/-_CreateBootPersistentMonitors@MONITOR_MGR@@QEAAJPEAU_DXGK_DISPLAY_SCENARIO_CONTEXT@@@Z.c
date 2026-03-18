/*
 * XREFs of ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026C3D4
 * Callers:
 *     ?_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026DB9C (-_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z @ 0x140035818 (--0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR@@AEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026CD1C (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACC.c)
 *     ?_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z @ 0x14026DC4C (-_OpenPersistencyRegistry@MONITOR_MGR@@AEBAJKPEAPEAX@Z.c)
 *     ?_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z @ 0x14026DF30 (-_PersistencyRegNameFromTargetID@MONITOR_MGR@@AEBAJIQEAG@Z.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CB720 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1402EA310 (-DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x140355118 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 */

__int64 __fastcall MONITOR_MGR::_CreateBootPersistentMonitors(
        MONITOR_MGR *this,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        __int64 a3,
        __int64 a4)
{
  WCHAR *v5; // rsi
  __int64 v6; // r9
  ULONG v7; // ebx
  _DWORD *v8; // rdi
  _DWORD *v9; // r12
  const WCHAR *v10; // r15
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // eax
  NTSTATUS v17; // eax
  __int64 v18; // r14
  __int64 v19; // r14
  int IsTargetForceable; // eax
  __int64 result; // rax
  __int64 v22; // rax
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v23; // r14
  WCHAR *v24; // rbx
  struct DXGMONITOR *v25; // rdx
  int SimulatedMonitor; // edi
  NTSTATUS v27; // eax
  char v28[8]; // [rsp+30h] [rbp-A9h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-A1h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-99h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v31; // [rsp+48h] [rbp-91h]
  char v32[8]; // [rsp+50h] [rbp-89h] BYREF
  __int64 v33; // [rsp+58h] [rbp-81h]
  UNICODE_STRING String2; // [rsp+60h] [rbp-79h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-69h] BYREF
  _BYTE v36[16]; // [rsp+80h] [rbp-59h] BYREF
  char KeyValueInformation[12]; // [rsp+90h] [rbp-49h] BYREF
  unsigned int v38; // [rsp+9Ch] [rbp-3Dh]
  WCHAR SourceString[32]; // [rsp+B0h] [rbp-29h] BYREF

  v31 = a2;
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
    v7 = -1;
    ResultLength = 0;
    v8 = 0LL;
    while ( 1 )
    {
      while ( 1 )
      {
        ++v7;
        if ( !v8 )
        {
LABEL_24:
          v8 = (_DWORD *)operator new[](0x60uLL, 0x4D677844u, 256LL, v6);
          if ( !v8 )
          {
            WdLogSingleEntry0(6LL);
            result = 3221225495LL;
            WdLogGlobalForLineNumber = 3754;
            return result;
          }
        }
        v9 = v8 + 2;
        v8[2] = -1;
        v10 = (const WCHAR *)(v8 + 3);
        v11 = ZwEnumerateValueKey(KeyHandle, v7, KeyValueBasicInformation, v8 + 3, 0x4Eu, &ResultLength);
        if ( v11 == -2147483622 )
        {
          v22 = WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
          *(_QWORD *)(v22 + 24) = v7;
          *(_QWORD *)(v22 + 32) = this;
          WdLogGlobalForLineNumber = 3786;
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v8);
          if ( v5 )
          {
            v23 = v31;
            do
            {
              v24 = v5;
              v5 = *(WCHAR **)v5;
              if ( *((_DWORD *)v24 + 2) == -1 )
              {
                v27 = RtlDeleteRegistryValue(0x40000000u, (PCWSTR)KeyHandle, v24 + 12);
                if ( v27 < 0 )
                {
                  WdLogSingleEntry1(2LL, v27);
                  WdLogGlobalForLineNumber = 3997;
                }
              }
              else
              {
                MONITOR_REF_ACCESSOR::MONITOR_REF_ACCESSOR((MONITOR_REF_ACCESSOR *)v32, 0LL);
                MONITOR_REF_ACCESSOR::MONITOR_REF_ACCESSOR((MONITOR_REF_ACCESSOR *)v36, v25);
                SimulatedMonitor = MONITOR_MGR::_HandleCreateSimulatedMonitor(
                                     this,
                                     *((unsigned int *)v24 + 2),
                                     2LL,
                                     v36,
                                     v32,
                                     v23);
                if ( SimulatedMonitor >= 0 && !v33 )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 3979;
                }
                MONITOR_MGR::_LogMonitorPresentEvent(
                  this,
                  1073741825LL,
                  *((unsigned int *)v24 + 2),
                  (unsigned int)SimulatedMonitor,
                  0LL);
                MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v36);
                MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v32);
              }
              DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v24);
            }
            while ( v5 );
          }
          ZwClose(KeyHandle);
          return 0LL;
        }
        if ( v11 >= 0 )
          break;
        WdLogSingleEntry2(3LL, v7, v11);
        WdLogGlobalForLineNumber = 3802;
      }
      *((_WORD *)v8 + ((unsigned __int64)(unsigned int)v8[5] >> 1) + 12) = 0;
      *(_QWORD *)v8 = v5;
      v5 = (WCHAR *)v8;
      v16 = v8[4];
      v8 = 0LL;
      if ( v16 != 4 )
        break;
      v17 = ZwEnumerateValueKey(KeyHandle, v7, KeyValuePartialInformation, KeyValueInformation, 0x13u, &ResultLength);
      v18 = v17;
      if ( v17 == -2147483622 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 3840;
LABEL_13:
        WdLogSingleEntry2(3LL, v7, v18);
        WdLogGlobalForLineNumber = 3854;
LABEL_23:
        ++v7;
        goto LABEL_24;
      }
      if ( v17 < 0 )
        goto LABEL_13;
      v19 = v38;
      v28[0] = 0;
      IsTargetForceable = DmmIsTargetForceable(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL), v38, v28, 0LL);
      if ( IsTargetForceable < 0 )
      {
        if ( IsTargetForceable == -1071774971 )
        {
          WdLogSingleEntry1(3LL, v19);
          WdLogGlobalForLineNumber = 3894;
        }
        goto LABEL_23;
      }
      if ( !v28[0] )
      {
        WdLogSingleEntry1(3LL, (unsigned int)v19);
        WdLogGlobalForLineNumber = 3881;
        goto LABEL_23;
      }
      if ( MONITOR_MGR::_PersistencyRegNameFromTargetID(0LL, v19, SourceString) >= 0 )
      {
        DestinationString = 0LL;
        String2 = 0LL;
        RtlInitUnicodeString(&DestinationString, v10 + 6);
        RtlInitUnicodeString(&String2, SourceString);
        if ( RtlCompareUnicodeString(&DestinationString, &String2, 0) )
        {
          WdLogSingleEntry0(3LL);
          WdLogGlobalForLineNumber = 3934;
        }
        else
        {
          *v9 = v19;
        }
        goto LABEL_23;
      }
    }
    WdLogSingleEntry2(3LL, v7, v16);
    WdLogGlobalForLineNumber = 3828;
    goto LABEL_23;
  }
  return 0LL;
}
