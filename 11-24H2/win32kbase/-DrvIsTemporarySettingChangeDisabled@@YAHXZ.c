/*
 * XREFs of ?DrvIsTemporarySettingChangeDisabled@@YAHXZ @ 0x1401391C4
 * Callers:
 *     DrvChangeDisplaySettingsPreValidate @ 0x140138FFC (DrvChangeDisplaySettingsPreValidate.c)
 *     DrvSetDisplayConfigValidateParams @ 0x1401CB440 (DrvSetDisplayConfigValidateParams.c)
 * Callees:
 *     <none>
 */

_BOOL8 DrvIsTemporarySettingChangeDisabled(void)
{
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+30h] [rbp-19h] BYREF
  __int64 v2; // [rsp+68h] [rbp+1Fh]
  int v3; // [rsp+70h] [rbp+27h]
  __int64 v4; // [rsp+78h] [rbp+2Fh]
  __int128 v5; // [rsp+80h] [rbp+37h]
  __int128 v6; // [rsp+90h] [rbp+47h]
  int v7; // [rsp+B0h] [rbp+67h] BYREF
  int v8; // [rsp+B8h] [rbp+6Fh] BYREF

  QueryTable.Flags = 288;
  v7 = 0;
  v8 = 0;
  QueryTable.Name = L"DisableAll";
  QueryTable.QueryRoutine = 0LL;
  QueryTable.EntryContext = &v7;
  QueryTable.DefaultType = 67108868;
  QueryTable.DefaultData = &v8;
  QueryTable.DefaultLength = 4;
  v2 = 0LL;
  v3 = 0;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  RtlQueryRegistryValues(2u, L"GraphicsDrivers\\TemporarySettingChanges", &QueryTable, 0LL, 0LL);
  return v7 != 0;
}
