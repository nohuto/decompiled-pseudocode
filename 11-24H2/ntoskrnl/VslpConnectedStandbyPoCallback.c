/*
 * XREFs of VslpConnectedStandbyPoCallback @ 0x140A80CD0
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall VslpConnectedStandbyPoCallback(LPCGUID SettingGuid, _DWORD *Value, ULONG ValueLength, PVOID Context)
{
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v9; // rcx
  _BYTE v10[24]; // [rsp+20h] [rbp-88h] BYREF
  int v11; // [rsp+38h] [rbp-70h]

  memset_0(v10, 0, 0x68uLL);
  v6 = *(_QWORD *)&SettingGuid->Data1;
  v7 = *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 - *(_QWORD *)&SettingGuid->Data1;
  if ( *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 == *(_QWORD *)&SettingGuid->Data1 )
    v7 = *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4 - *(_QWORD *)SettingGuid->Data4;
  if ( !v7 )
  {
    v11 = 1;
LABEL_5:
    v10[8] = *Value != 0;
    return VslpEnterIumSecureMode(2u, 0x41u, 0, (__int64)v10);
  }
  v9 = *(_QWORD *)&GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data1 - v6;
  if ( *(_QWORD *)&GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data1 == v6 )
    v9 = *(_QWORD *)GUID_PDC_IDLE_RESILIENCY_ENGAGED.Data4 - *(_QWORD *)SettingGuid->Data4;
  if ( !v9 )
  {
    v11 = 2;
    goto LABEL_5;
  }
  return 3221225659LL;
}
