/*
 * XREFs of ?HampHostTerminateWithProcessBoost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x180006EF4
 * Callers:
 *     ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180008680 (-HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800016EC (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTempl.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800090C0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x1800293A0 (-HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SET.c)
 *     CempQueryUnbiasedInterruptTimeMs64 @ 0x18002C71C (CempQueryUnbiasedInterruptTimeMs64.c)
 *     ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003AA04 (-HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     CempLockSleepConditionVariableExclusive @ 0x180046330 (CempLockSleepConditionVariableExclusive.c)
 *     _tlgKeywordOn @ 0x1800574C0 (_tlgKeywordOn.c)
 *     ?HampSystemWaitForSingleObject@@YAJPEAXK@Z @ 0x180066B70 (-HampSystemWaitForSingleObject@@YAJPEAXK@Z.c)
 *     ?HampProcessBoostPriority@@YAJPEAXKW4_RM_EXECUTION_SPEED@@@Z @ 0x18006B0EC (-HampProcessBoostPriority@@YAJPEAXKW4_RM_EXECUTION_SPEED@@@Z.c)
 *     ?HampHostReportTerminateHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x18007DF0C (-HampHostReportTerminateHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 *     ?HampUtilQueryTerminateTimeouts@@YAXPEAK00@Z @ 0x18007F4D0 (-HampUtilQueryTerminateTimeouts@@YAXPEAK00@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x180091A10 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

void __fastcall HampHostTerminateWithProcessBoost(HANDLE *a1, struct _HAM_PROCESS_SNAPSHOT *a2)
{
  int v4; // r15d
  NTSTATUS i; // r14d
  BOOL v6; // r13d
  unsigned int v7; // ebx
  unsigned int v8; // edi
  int v9; // ecx
  unsigned int v10; // eax
  int v11; // r14d
  __int64 *v12; // rbx
  __int64 v13; // rax
  unsigned int v14; // edx
  __int64 v15; // rbx
  int v16; // ebx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // [rsp+40h] [rbp-39h]
  int v21; // [rsp+44h] [rbp-35h] BYREF
  unsigned int v22; // [rsp+48h] [rbp-31h] BYREF
  unsigned int v23[2]; // [rsp+50h] [rbp-29h] BYREF
  unsigned int v24[2]; // [rsp+58h] [rbp-21h] BYREF
  __int64 UnbiasedInterruptTimeMs64; // [rsp+60h] [rbp-19h] BYREF
  __int64 v26; // [rsp+68h] [rbp-11h] BYREF
  __int128 v27; // [rsp+70h] [rbp-9h] BYREF
  __int128 v28; // [rsp+80h] [rbp+7h]

  v24[0] = 0;
  v23[0] = 0;
  v22 = 0;
  v4 = -1;
  i = 1;
  v26 = 0LL;
  v20 = 1;
  v27 = 0LL;
  v28 = 0LL;
  UnbiasedInterruptTimeMs64 = CempQueryUnbiasedInterruptTimeMs64();
  HampUtilQueryTerminateTimeouts(v24, v23, &v22);
  v6 = 0;
  v21 = 0;
  while ( 1 )
  {
    v7 = -1;
    NtSetInformationJobObject(a1[72], JobObjectExtendedLimitInformation|0x10, 0LL, 0);
    NtTerminateJobObject(a1[72], i);
    v8 = CempQueryUnbiasedInterruptTimeMs64() - UnbiasedInterruptTimeMs64;
    v9 = 1;
    v10 = v22;
    while ( v8 >= v10 )
    {
      v10 += v22;
      if ( (unsigned int)++v9 > 3 )
        goto LABEL_7;
    }
    v7 = v10 - v8;
LABEL_7:
    if ( v8 < v23[0] )
    {
      if ( v7 >= v23[0] - v8 )
        v7 = v23[0] - v8;
    }
    else
    {
      v20 = 1073807364;
    }
    if ( v8 < v24[0] )
    {
      v11 = 0;
      if ( v7 >= v24[0] - v8 )
        v7 = v24[0] - v8;
    }
    else
    {
      v11 = 1;
    }
    if ( v7 == -1 )
    {
      v12 = 0LL;
      if ( !v21 )
      {
        v21 = 1;
        HampHostReportTerminateHang((struct _RM_HAM_ACTIVITY_HOST *)a1, a2);
      }
    }
    else
    {
      v13 = v7;
      v12 = &v26;
      v26 = -10000 * v13;
    }
    HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)a1, 0);
    if ( (unsigned int)HampSystemWaitForSingleObject(a1[72], v14) != 258 )
      break;
    if ( v11
      && ((HampHostComputeStaticEnforcementSettings(
             (struct _RM_HAM_ACTIVITY_HOST *)a1,
             (struct _RM_ENFORCEMENT_SETTINGS *)&v27,
             0LL,
             0LL,
             0LL),
           v4 == -1)
       || v4 < SDWORD2(v28)) )
    {
      HampHostReleaseLockExclusive((struct _RM_HAM_ACTIVITY_HOST *)a1);
      v4 = DWORD2(v28);
      v15 = 0LL;
      for ( i = v20; (unsigned int)v15 < *((_DWORD *)a2 + 4); v15 = (unsigned int)(v15 + 1) )
        HampProcessBoostPriority(
          *(_QWORD *)(*(_QWORD *)a2 + 8 * v15),
          *(unsigned int *)(*((_QWORD *)a2 + 1) + 4 * v15),
          (unsigned int)v4);
    }
    else
    {
      v16 = CempLockSleepConditionVariableExclusive(a1, a1 + 87, v12);
      HampHostReleaseLockExclusive((struct _RM_HAM_ACTIVITY_HOST *)a1);
      i = v20;
      v6 = v16 == 258;
    }
  }
  if ( v6 )
  {
    if ( (unsigned int)dword_1800E82B0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E82B0, 0x400000000008LL) )
    {
      *(_QWORD *)v24 = *(a1 - 4);
      *(_QWORD *)v23 = a1 + 3;
      UnbiasedInterruptTimeMs64 = 0x1000000LL;
      v21 = v8;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        v17,
        (__int64)&unk_1800D3F81,
        v18,
        v19,
        (const wchar_t **)v23,
        (__int64)v24,
        (__int64)&v21,
        (__int64)&UnbiasedInterruptTimeMs64);
    }
    if ( v8 >= 0xEA60 )
      MicrosoftTelemetryAssertTriggeredNoArgs();
  }
  HampHostReleaseLockExclusive((struct _RM_HAM_ACTIVITY_HOST *)a1);
}
