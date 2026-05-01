/*
 * XREFs of CrmStateMonitorInitialize @ 0x18006EE30
 * Callers:
 *     CrmRegisterToStateMonitor @ 0x18002DE70 (CrmRegisterToStateMonitor.c)
 * Callees:
 *     CempLockInitialize @ 0x180040C1C (CempLockInitialize.c)
 *     CrmStateMonitorResourceUsageInitialize @ 0x18007A5F0 (CrmStateMonitorResourceUsageInitialize.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 */

__int64 (__fastcall *__fastcall CrmStateMonitorInitialize(__int64 a1, int a2))()
{
  __int64 (__fastcall *result)(); // rax
  int v5; // ebx
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  int v17; // ebx
  void *v18; // rdx
  int v19; // ebx
  int v20; // ebx
  int v21; // ebx
  int v22; // ebx
  void *v23; // rdx
  int v24; // ebx
  int v25; // ebx
  int v26; // ebx
  int v27; // ebx
  int v28; // ebx
  int v29; // ebx
  int v30; // ebx
  int v31; // ebx

  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  CempLockInitialize(a1 + 8);
  *(_DWORD *)a1 = a2;
  result = (__int64 (__fastcall *)())(a1 + 24);
  *(_QWORD *)(a1 + 32) = a1 + 24;
  *(_QWORD *)(a1 + 24) = a1 + 24;
  if ( a2 > 22 )
  {
    if ( a2 > 33 )
    {
      if ( a2 <= 39 )
      {
        if ( a2 == 39 )
        {
          memset_0((void *)(a1 + 56), 0, 0x68uLL);
          *(_QWORD *)(a1 + 104) = a1 + 96;
          *(_QWORD *)(a1 + 96) = a1 + 96;
          result = (__int64 (__fastcall *)())CrmStateMonitorFanNoiseHysteresisCallback;
          goto LABEL_27;
        }
        v26 = a2 - 34;
        if ( !v26 )
          goto LABEL_26;
        v27 = v26 - 1;
        if ( v27 )
        {
          v28 = v27 - 1;
          if ( v28 )
          {
            v14 = v28 - 1;
            if ( v14 )
              goto LABEL_64;
            *(_QWORD *)(a1 + 56) = 0LL;
            *(_QWORD *)(a1 + 88) = 0LL;
            *(_QWORD *)(a1 + 72) = 0LL;
            *(_QWORD *)(a1 + 80) = 0LL;
            *(_QWORD *)(a1 + 80) = a1 + 72;
            *(_QWORD *)(a1 + 72) = a1 + 72;
            result = CrmStateMonitorDelayedInternetLossCallback;
LABEL_67:
            *(_QWORD *)(a1 + 64) = result;
            return result;
          }
          v23 = CrmStateMonitorAcDcBatteryCallback;
        }
        else
        {
          v23 = CrmStateMonitorAcDcDisplayCallback;
        }
        goto LABEL_49;
      }
      v29 = a2 - 40;
      if ( !v29 )
        goto LABEL_26;
      v30 = v29 - 1;
      if ( !v30 )
        goto LABEL_26;
      v31 = v30 - 1;
      if ( !v31 )
        goto LABEL_26;
      if ( v31 != 1 )
        return result;
    }
    else
    {
      if ( a2 == 33 )
      {
        *(_QWORD *)(a1 + 56) = 0LL;
        *(_QWORD *)(a1 + 88) = 0LL;
        *(_QWORD *)(a1 + 72) = 0LL;
        *(_QWORD *)(a1 + 80) = 0LL;
        *(_QWORD *)(a1 + 80) = a1 + 72;
        *(_QWORD *)(a1 + 72) = a1 + 72;
        result = (__int64 (__fastcall *)())CrmStateMonitorDelayedCsCallback;
        goto LABEL_67;
      }
      if ( a2 <= 28 )
      {
        if ( a2 == 28 )
          return result;
        v19 = a2 - 23;
        if ( !v19 )
          goto LABEL_26;
        v20 = v19 - 1;
        if ( !v20 )
        {
          memset_0((void *)(a1 + 56), 0, 0x40uLL);
          *(_QWORD *)(a1 + 80) = a1 + 72;
          *(_QWORD *)(a1 + 72) = a1 + 72;
          result = (__int64 (__fastcall *)())CrmStateMonitorCPUUsageCSCallback;
          *(_QWORD *)(a1 + 64) = CrmStateMonitorCPUUsageCSCallback;
          *(_DWORD *)(a1 + 96) = 10000;
          return result;
        }
        v21 = v20 - 1;
        if ( !v21 )
        {
          memset_0((void *)(a1 + 56), 0, 0x40uLL);
          *(_QWORD *)(a1 + 80) = a1 + 72;
          *(_QWORD *)(a1 + 72) = a1 + 72;
          result = (__int64 (__fastcall *)())CrmStateMonitorSystemDiskUsageCSCallback;
          goto LABEL_67;
        }
        v22 = v21 - 1;
        if ( v22 )
        {
          if ( v22 != 1 )
            return result;
          *(_QWORD *)(a1 + 56) = 0LL;
          *(_QWORD *)(a1 + 88) = 0LL;
          *(_QWORD *)(a1 + 72) = 0LL;
          *(_QWORD *)(a1 + 80) = 0LL;
          *(_QWORD *)(a1 + 80) = a1 + 72;
          *(_QWORD *)(a1 + 72) = a1 + 72;
          result = (__int64 (__fastcall *)())CrmStateMonitorDelayedAcCallback;
          goto LABEL_67;
        }
        v23 = CrmStateMonitorCsAcDcCallback;
LABEL_49:
        *(_QWORD *)(a1 + 56) = 0LL;
        goto LABEL_50;
      }
      v24 = a2 - 29;
      if ( v24 )
      {
        v25 = v24 - 1;
        if ( !v25 )
          goto LABEL_26;
        v14 = v25 - 1;
        if ( v14 )
          goto LABEL_64;
        v23 = CrmStateMonitorDisconnectedStandbyCallback;
        *(_QWORD *)(a1 + 56) = 0LL;
        *(_QWORD *)(a1 + 112) = 0LL;
LABEL_50:
        *(_QWORD *)(a1 + 72) = 0LL;
        *(_QWORD *)(a1 + 80) = 0LL;
        *(_QWORD *)(a1 + 72) = a1 + 72;
        *(_QWORD *)(a1 + 80) = a1 + 72;
        result = (__int64 (__fastcall *)())(a1 + 96);
        *(_QWORD *)(a1 + 64) = v23;
        *(_QWORD *)(a1 + 96) = 0LL;
        *(_QWORD *)(a1 + 104) = 0LL;
        *(_QWORD *)(a1 + 104) = a1 + 96;
        *(_QWORD *)(a1 + 96) = a1 + 96;
        *(_QWORD *)(a1 + 88) = v23;
        return result;
      }
    }
    return (__int64 (__fastcall *)())CrmStateMonitorResourceUsageInitialize(a1);
  }
  if ( a2 == 22 )
    goto LABEL_26;
  if ( a2 > 11 )
  {
    if ( a2 > 17 )
    {
      v15 = a2 - 18;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( !v16 )
        {
          memset_0((void *)(a1 + 56), 0, 0x80uLL);
          *(_QWORD *)(a1 + 80) = a1 + 72;
          *(_QWORD *)(a1 + 72) = a1 + 72;
          *(_QWORD *)(a1 + 64) = CrmStateMonitorPostShellReadyTimeSinceLogonCallback;
          *(_QWORD *)(a1 + 96) = 0LL;
          *(_QWORD *)(a1 + 104) = 0LL;
          *(_QWORD *)(a1 + 104) = a1 + 96;
          *(_QWORD *)(a1 + 96) = a1 + 96;
          result = (__int64 (__fastcall *)())(a1 + 120);
          *(_QWORD *)(a1 + 88) = CrmStateMonitorPostShellReadyUsageCallback;
          *(_QWORD *)(a1 + 120) = 0LL;
          *(_QWORD *)(a1 + 128) = 0LL;
          *(_QWORD *)(a1 + 128) = a1 + 120;
          *(_QWORD *)(a1 + 120) = a1 + 120;
          *(_QWORD *)(a1 + 112) = CrmStateMonitorPostShellReadyUsageCallback;
          return result;
        }
        v17 = v16 - 1;
        if ( v17 )
        {
          if ( v17 != 1 )
            return result;
          memset_0((void *)(a1 + 56), 0, 0x58uLL);
          v18 = CrmStateMonitorPowerConstrainedCallback;
        }
        else
        {
          memset_0((void *)(a1 + 56), 0, 0x88uLL);
          *(_QWORD *)(a1 + 80) = a1 + 72;
          v18 = CrmStateMonitorPostResumeUsageCallback;
          *(_QWORD *)(a1 + 72) = a1 + 72;
          *(_QWORD *)(a1 + 64) = CrmStateMonitorPostResumeSuspendCallback;
          *(_QWORD *)(a1 + 104) = 0LL;
          *(_QWORD *)(a1 + 112) = 0LL;
        }
        *(_QWORD *)(a1 + 96) = v18;
        *(_QWORD *)(a1 + 104) = a1 + 104;
        *(_QWORD *)(a1 + 112) = a1 + 104;
        result = (__int64 (__fastcall *)())(a1 + 128);
        *(_QWORD *)(a1 + 128) = 0LL;
        *(_QWORD *)(a1 + 136) = 0LL;
        *(_QWORD *)(a1 + 136) = a1 + 128;
        *(_QWORD *)(a1 + 128) = a1 + 128;
        *(_QWORD *)(a1 + 120) = v18;
        return result;
      }
LABEL_37:
      result = 0LL;
      *(_OWORD *)(a1 + 56) = 0LL;
      *(_QWORD *)(a1 + 72) = 0LL;
      return result;
    }
    if ( a2 == 17 )
      goto LABEL_26;
    v11 = a2 - 12;
    if ( !v11 )
      goto LABEL_37;
    v12 = v11 - 1;
    if ( !v12 || (v13 = v12 - 1) == 0 || (v14 = v13 - 1) == 0 )
    {
LABEL_26:
      result = 0LL;
      *(_OWORD *)(a1 + 56) = 0LL;
      *(_OWORD *)(a1 + 72) = 0LL;
LABEL_27:
      *(_QWORD *)(a1 + 88) = result;
      return result;
    }
LABEL_64:
    if ( v14 != 1 )
      return result;
    goto LABEL_26;
  }
  if ( a2 == 11 )
    goto LABEL_37;
  if ( a2 > 5 )
  {
    v7 = a2 - 6;
    if ( !v7 )
      goto LABEL_11;
    v8 = v7 - 1;
    if ( !v8 )
      goto LABEL_11;
    v9 = v8 - 1;
    if ( !v9 )
      goto LABEL_11;
    v10 = v9 - 1;
    if ( v10 )
    {
      if ( v10 == 1 )
      {
        result = 0LL;
        *(_QWORD *)(a1 + 56) = 0LL;
      }
      return result;
    }
    goto LABEL_26;
  }
  if ( a2 == 5 )
  {
LABEL_11:
    *(_OWORD *)(a1 + 56) = 0LL;
    return result;
  }
  if ( a2 && (v5 = a2 - 1) != 0 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      if ( (unsigned int)(v6 - 1) <= 1 )
        goto LABEL_11;
    }
    else
    {
      *(_QWORD *)(a1 + 56) = 0LL;
      *(_QWORD *)(a1 + 88) = 0LL;
      *(_QWORD *)(a1 + 120) = 0LL;
      *(_QWORD *)(a1 + 72) = 0LL;
      *(_QWORD *)(a1 + 80) = 0LL;
      *(_QWORD *)(a1 + 80) = a1 + 72;
      *(_QWORD *)(a1 + 72) = a1 + 72;
      result = (__int64 (__fastcall *)())(a1 + 104);
      *(_QWORD *)(a1 + 64) = CrmStateMonitorCompositeTestCallback;
      *(_QWORD *)(a1 + 104) = 0LL;
      *(_QWORD *)(a1 + 112) = 0LL;
      *(_QWORD *)(a1 + 112) = a1 + 104;
      *(_QWORD *)(a1 + 104) = a1 + 104;
      *(_QWORD *)(a1 + 96) = CrmStateMonitorCompositeTestCallback;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 56) = 0LL;
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  return result;
}
