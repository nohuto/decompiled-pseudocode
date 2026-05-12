/*
 * XREFs of RaidPowerSettingCallback @ 0x140044FA0
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x14001C7B0 (RaidIsAdapterControlSupported.c)
 *     RaCallMiniportAdapterControl @ 0x140027690 (RaCallMiniportAdapterControl.c)
 *     RaidAdapterSystemPowerHintsEnabled @ 0x140036528 (RaidAdapterSystemPowerHintsEnabled.c)
 *     RaidAdapterGetSystemPowerHint @ 0x140036554 (RaidAdapterGetSystemPowerHint.c)
 *     RaidAdapterGetSystemPowerResumeLatency @ 0x140036578 (RaidAdapterGetSystemPowerResumeLatency.c)
 *     StorpCSExitTelemetry @ 0x14003B750 (StorpCSExitTelemetry.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x14005838C (McTemplateK0qqqqq_EtwWriteTransfer.c)
 *     RaidLogPower @ 0x140065B30 (RaidLogPower.c)
 *     RaidAdapterSetMaxOperationalPower @ 0x140077AE8 (RaidAdapterSetMaxOperationalPower.c)
 *     StorpCSEntryTelemetry @ 0x1400AF51C (StorpCSEntryTelemetry.c)
 *     StorProcessDripsCallbackForDlrm @ 0x14013A828 (StorProcessDripsCallbackForDlrm.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaidPowerSettingCallback(
        _OWORD *SettingGuid,
        unsigned int *Value,
        __int64 ValueLength,
        _BYTE *Context)
{
  char v5; // si
  char *v6; // r14
  __int64 v7; // rcx
  int SystemPowerHint; // eax
  char v9; // cl
  int SystemPowerResumeLatency; // eax
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  char v14; // r9
  char v15; // al
  int v16; // eax
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  char v20; // r9
  char *v21; // rcx
  int v22; // esi
  __int64 v23; // rcx
  int v24; // eax
  char v25; // r15
  char v26; // al
  int v27; // edx
  int v28; // r8d
  char v29; // cl
  char v30; // r12
  char v31; // cl
  __int64 v32; // rcx
  __int128 v34; // xmm0
  unsigned __int64 v35; // [rsp+40h] [rbp-19h] BYREF
  __int128 v36; // [rsp+48h] [rbp-11h]
  unsigned int *v37; // [rsp+58h] [rbp-1h]
  int v38; // [rsp+60h] [rbp+7h]
  int v39; // [rsp+64h] [rbp+Bh]
  int v40; // [rsp+68h] [rbp+Fh]
  int v41; // [rsp+6Ch] [rbp+13h]
  __int64 v42; // [rsp+70h] [rbp+17h]

  v36 = 0uLL;
  v39 = 0;
  v42 = 0LL;
  if ( *SettingGuid == *(_OWORD *)&GUID_LOW_POWER_EPOCH )
  {
    if ( (_DWORD)ValueLength == 4 && Value )
    {
      v5 = *(_BYTE *)Value;
      v6 = Context + 376;
      if ( !RaidIsAdapterControlSupported((__int64)(Context + 376), 12) || !RaidAdapterSystemPowerHintsEnabled(Context) )
        return 0LL;
      SystemPowerHint = RaidAdapterGetSystemPowerHint(v7);
      RaidAdapterGetSystemPowerResumeLatency(SystemPowerHint);
      v40 = 1;
      v41 = 16;
      if ( v5 == 1 )
      {
        v9 = Context[108];
        if ( (v9 & 1) == 0 )
        {
          Context[108] = v9 | 1;
          LODWORD(v42) = RaidAdapterGetSystemPowerHint((__int64)Context);
          SystemPowerResumeLatency = RaidAdapterGetSystemPowerResumeLatency(v42);
          HIDWORD(v42) = SystemPowerResumeLatency;
          if ( StorEtwLoggingEnabled && (byte_140171462 & 0x10) != 0 )
            McTemplateK0qqqqq_EtwWriteTransfer(
              v12,
              v11,
              v13,
              *((_DWORD *)Context + 14),
              v11,
              v14,
              v13,
              SystemPowerResumeLatency);
          StorpCSEntryTelemetry(Context);
        }
      }
      else if ( !v5 )
      {
        v15 = Context[108];
        if ( (v15 & 1) != 0 )
        {
          Context[108] = v15 & 0xFE;
          LODWORD(v42) = RaidAdapterGetSystemPowerHint((__int64)Context);
          v16 = RaidAdapterGetSystemPowerResumeLatency(v42);
          HIDWORD(v42) = v16;
          if ( StorEtwLoggingEnabled && (byte_140171462 & 0x10) != 0 )
            McTemplateK0qqqqq_EtwWriteTransfer(v18, v17, v19, *((_DWORD *)Context + 14), v17, v20, v19, v16);
          StorpCSExitTelemetry((__int64)Context);
        }
      }
      if ( (qword_140170460 & 0x100) != 0 )
        RaidLogPower(
          (_DWORD)Context,
          51,
          v42,
          HIDWORD(v42),
          *((unsigned int *)Context + 1507),
          *((unsigned int *)Context + 1244));
      goto LABEL_20;
    }
    return 3221225485LL;
  }
  if ( *(_QWORD *)SettingGuid == *(_QWORD *)&GUID_DISK_MAX_POWER.Data1
    && *((_QWORD *)SettingGuid + 1) == *(_QWORD *)GUID_DISK_MAX_POWER.Data4 )
  {
    if ( (unsigned int)ValueLength >= 4 && Value )
    {
      v35 = *Value;
      if ( v35 <= 0x64 )
      {
        LOBYTE(ValueLength) = 1;
        RaidAdapterSetMaxOperationalPower(Context, &v35, ValueLength);
      }
      return 0LL;
    }
    return 3221225485LL;
  }
  if ( *(_QWORD *)SettingGuid == *(_QWORD *)&GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data1
    && *((_QWORD *)SettingGuid + 1) == *(_QWORD *)GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data4 )
  {
    if ( (_DWORD)ValueLength != 4 || !Value )
      return 3221225485LL;
    v22 = *Value;
    if ( ((Context[111] & 8) != 0) == (*Value != 0) )
      return 0LL;
    v6 = Context + 376;
    if ( !RaidIsAdapterControlSupported((__int64)(Context + 376), 12) || !RaidAdapterSystemPowerHintsEnabled(Context) )
      return 0LL;
    v24 = RaidAdapterGetSystemPowerHint(v23);
    v25 = v24;
    v26 = RaidAdapterGetSystemPowerResumeLatency(v24);
    v29 = Context[111];
    v30 = v26;
    v40 = 1;
    v41 = 16;
    if ( v22 )
    {
      if ( (v29 & 8) == 0 )
      {
        v31 = v29 | 8;
LABEL_39:
        Context[111] = v31;
        LODWORD(v42) = RaidAdapterGetSystemPowerHint((__int64)Context);
        HIDWORD(v42) = RaidAdapterGetSystemPowerResumeLatency(v42);
      }
    }
    else if ( (v29 & 8) != 0 )
    {
      v31 = v29 & 0xF7;
      goto LABEL_39;
    }
    if ( (qword_140170460 & 0x100) != 0 )
      RaidLogPower(
        (_DWORD)Context,
        52,
        v42,
        HIDWORD(v42),
        *((unsigned int *)Context + 1507),
        *((unsigned int *)Context + 1244));
    v32 = *((_QWORD *)Context + 778);
    if ( v32 )
      StorProcessDripsCallbackForDlrm();
    if ( StorEtwLoggingEnabled && (byte_140171462 & 0x10) != 0 )
      McTemplateK0qqqqq_EtwWriteTransfer(v32, v27, v28, *((_DWORD *)Context + 14), v25, v30, v42, SBYTE4(v42));
LABEL_20:
    v21 = v6;
LABEL_50:
    RaCallMiniportAdapterControl((__int64)v21);
    return 0LL;
  }
  v34 = *SettingGuid;
  v37 = Value;
  v38 = ValueLength;
  v36 = v34;
  if ( RaidIsAdapterControlSupported((__int64)(Context + 376), 5) )
  {
    v21 = Context + 376;
    goto LABEL_50;
  }
  return 0LL;
}
