/*
 * XREFs of ?ndisPowerStateCallback@@YAJPEBU_GUID@@PEAXK1@Z @ 0x14006AF00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400075C0 (WPP_RECORDER_SF_d.c)
 *     ?ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z @ 0x140175810 (-ndisNotifyMiniports@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_PNP_EVENT@@PEAXK@Z.c)
 */

__int64 __fastcall ndisPowerStateCallback(LPCGUID SettingGuid, _DWORD *Value, ULONG ValueLength, PVOID Context)
{
  unsigned int v4; // esi
  _DWORD *v5; // rdi
  __int64 v7; // rax
  char v9[4]; // [rsp+28h] [rbp-20h]
  unsigned int v10; // [rsp+58h] [rbp+10h] BYREF

  v4 = 0;
  v5 = Value;
  v10 = 0;
  if ( !Value || ValueLength < 4 )
    return 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v9 = *Value;
    LOBYTE(Value) = 4;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)Value,
      14,
      162,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      v9[0]);
  }
  v7 = *(_QWORD *)&SettingGuid->Data1 - *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1;
  if ( *(_QWORD *)&SettingGuid->Data1 == *(_QWORD *)&GUID_ACDC_POWER_SOURCE.Data1 )
    v7 = *(_QWORD *)SettingGuid->Data4 - *(_QWORD *)GUID_ACDC_POWER_SOURCE.Data4;
  if ( !v7 )
  {
    LODWORD(Value) = (_BYTE)ndisAcOnLine == 1;
    if ( !*v5 || (unsigned int)(*v5 - 1) >= 2 )
      v4 = 1;
    ndisAcOnLine = v4;
    v10 = v4;
    if ( v4 != (_DWORD)Value )
      ndisNotifyMiniports(0LL, (enum _NDIS_DEVICE_PNP_EVENT)Value, &v10, (unsigned int)Context);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(Value) = 4;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)Value,
      14,
      163,
      (struct _GUID *)&WPP_4a94757187d03d50151c0070042f9279_Traceguids,
      *v5);
  }
  return 0LL;
}
