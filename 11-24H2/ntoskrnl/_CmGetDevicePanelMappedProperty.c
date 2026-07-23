/*
 * XREFs of _CmGetDevicePanelMappedProperty @ 0x14081DAF0
 * Callers:
 *     _PnpDispatchDevicePanel @ 0x140820650 (_PnpDispatchDevicePanel.c)
 * Callees:
 *     _CmSplitDevicePanelId @ 0x140AB0C0C (_CmSplitDevicePanelId.c)
 */

__int64 __fastcall CmGetDevicePanelMappedProperty(
        __int64 a1,
        const wchar_t *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        GUID *a7,
        unsigned int a8,
        _DWORD *a9)
{
  __int64 result; // rax
  int v11; // r8d
  __int64 v12; // rdx

  result = 3221225494LL;
  *a9 = 0;
  if ( a4 )
    return result;
  v11 = *(_DWORD *)(a5 + 16);
  if ( v11 != 2 )
  {
    if ( v11 == 3 )
    {
      a7 = (GUID *)(*(_QWORD *)a5 - DEVPKEY_DevicePanel_Group);
      if ( *(_QWORD *)a5 == DEVPKEY_DevicePanel_Group )
        a7 = (GUID *)(*(_QWORD *)(a5 + 8) + 0x488426EC2804D35ALL);
      if ( a7 )
        return result;
      *a6 = 7;
      *a9 = 4;
      if ( a8 < 4 )
        return 3221225507LL;
    }
    else
    {
      if ( v11 != 4 )
        return result;
      a7 = (GUID *)(*(_QWORD *)a5 - DEVPKEY_DevicePanel_Side);
      if ( *(_QWORD *)a5 == DEVPKEY_DevicePanel_Side )
        a7 = (GUID *)(*(_QWORD *)(a5 + 8) + 0x488426EC2804D35ALL);
      if ( a7 )
        return result;
      *a6 = 7;
      *a9 = 4;
      if ( a8 < 4 )
        return 3221225507LL;
    }
    return CmSplitDevicePanelId(a2, a7);
  }
  v12 = *(_QWORD *)a5 - DEVPKEY_DevicePanel_ContainerId;
  if ( *(_QWORD *)a5 == DEVPKEY_DevicePanel_ContainerId )
    v12 = *(_QWORD *)(a5 + 8) + 0x488426EC2804D35ALL;
  if ( !v12 )
  {
    *a6 = 13;
    *a9 = 16;
    if ( a8 < 0x10 )
      return 3221225507LL;
    return CmSplitDevicePanelId(a2, a7);
  }
  return result;
}
