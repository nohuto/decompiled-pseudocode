/*
 * XREFs of ?_RetrieveMonitorOrientationFromAcpi@DXGMONITOR@@AEAAJXZ @ 0x14026F90C
 * Callers:
 *     ?_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ @ 0x140352258 (-_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     ?_ValidateMonitorOrientation@DXGMONITOR@@AEAAEK@Z @ 0x140277900 (-_ValidateMonitorOrientation@DXGMONITOR@@AEAAEK@Z.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveMonitorOrientationFromAcpi(DXGMONITOR *this)
{
  unsigned int v1; // eax
  __int64 v3; // rsi
  NTSTATUS DevicePropertyData; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // ebx
  __int64 v11; // rbx
  unsigned int Data; // [rsp+60h] [rbp+20h] BYREF
  ULONG RequiredSize; // [rsp+68h] [rbp+28h] BYREF
  ULONG Type; // [rsp+70h] [rbp+30h] BYREF

  v1 = *((_DWORD *)this + 76);
  RequiredSize = 0;
  v3 = 1LL;
  Type = 0;
  Data = v1;
  if ( !*(_BYTE *)(*((_QWORD *)this + 25) + 16LL) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1258;
  }
  if ( *((_DWORD *)this + 77) != *((_DWORD *)this + 76) )
    return 0LL;
  DevicePropertyData = IoGetDevicePropertyData(
                         *(PDEVICE_OBJECT *)(*((_QWORD *)this + 25) + 8LL),
                         &DEVPKEY_Device_PanelRotationZ,
                         0,
                         0,
                         4u,
                         &Data,
                         &RequiredSize,
                         &Type);
  v10 = DevicePropertyData;
  if ( DevicePropertyData == -1073741772 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v7, v6, v8, v9) + 24) = this;
    WdLogGlobalForLineNumber = 1284;
    return 0LL;
  }
  if ( DevicePropertyData >= 0 )
  {
    if ( RequiredSize != 4 || Type != 7 )
    {
      v10 = -1073741823;
      WdLogSingleEntry4(2LL, Type, RequiredSize, this, -1073741823LL);
      WdLogGlobalForLineNumber = 1302;
      return v10;
    }
    if ( Data )
    {
      if ( Data == 90 )
      {
        LODWORD(v11) = 1;
      }
      else
      {
        if ( Data == 180 )
        {
          v11 = 2LL;
        }
        else
        {
          if ( Data != 270 )
          {
            v10 = -1073741823;
            WdLogSingleEntry3(2LL, Data, this, -1073741823LL);
            WdLogGlobalForLineNumber = 1326;
            return v10;
          }
          v11 = 3LL;
        }
        v3 = v11;
      }
    }
    else
    {
      LODWORD(v11) = 0;
      v3 = 0LL;
    }
    Data = v11;
    if ( DXGMONITOR::_ValidateMonitorOrientation(this, v11) )
    {
      *((_DWORD *)this + 77) = v11;
      *((_DWORD *)this + 78) = v11;
      return 0LL;
    }
    v10 = -1073741823;
    WdLogSingleEntry3(2LL, v3, this, -1073741823LL);
    WdLogGlobalForLineNumber = 1340;
  }
  else
  {
    WdLogSingleEntry2(2LL, this, DevicePropertyData);
    WdLogGlobalForLineNumber = 1290;
  }
  return v10;
}
