/*
 * XREFs of Controller_LPEEnterExitCallback @ 0x1400414A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x14002CE68 (WPP_RECORDER_SF_q.c)
 *     Controller_InUseByDebugger @ 0x14003CC8C (Controller_InUseByDebugger.c)
 *     Controller_AcquireWdfPowerReferenceForDebugger @ 0x14003FE10 (Controller_AcquireWdfPowerReferenceForDebugger.c)
 *     Controller_ReleaseWdfPowerReferenceForDebugger @ 0x1400422F4 (Controller_ReleaseWdfPowerReferenceForDebugger.c)
 */

__int64 __fastcall Controller_LPEEnterExitCallback(
        LPCGUID SettingGuid,
        _DWORD *Value,
        ULONG ValueLength,
        __int64 *Context)
{
  unsigned int v4; // ebx
  __int64 v6; // rax
  int v7; // r9d
  __int64 v9; // [rsp+28h] [rbp-10h]

  v4 = 0;
  if ( Value && ValueLength == 4 )
  {
    v6 = *(_QWORD *)&SettingGuid->Data1 - *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1;
    if ( *(_QWORD *)&SettingGuid->Data1 == *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 )
      v6 = *(_QWORD *)SettingGuid->Data4 - *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4;
    if ( v6 )
    {
      v4 = -1073741811;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v7 = 281;
        v9 = *Context;
LABEL_19:
        LOBYTE(Value) = 2;
        WPP_RECORDER_SF_q(
          Context[9],
          (_DWORD)Value,
          4,
          v7,
          (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
          v9);
      }
    }
    else if ( *Value )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(Value) = 4;
        WPP_RECORDER_SF_q(
          Context[9],
          (_DWORD)Value,
          4,
          283,
          (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
          *Context);
      }
      if ( Controller_InUseByDebugger(Context) )
        Controller_ReleaseWdfPowerReferenceForDebugger(Context);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(Value) = 4;
        WPP_RECORDER_SF_q(
          Context[9],
          (_DWORD)Value,
          4,
          282,
          (__int64)&WPP_e3ec626fc5bc373e46c859b185ef609a_Traceguids,
          *Context);
      }
      if ( Controller_InUseByDebugger(Context) )
        Controller_AcquireWdfPowerReferenceForDebugger(Context);
    }
  }
  else
  {
    v4 = -1073741811;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = 280;
      v9 = *Context;
      goto LABEL_19;
    }
  }
  return v4;
}
