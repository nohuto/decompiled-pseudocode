/*
 * XREFs of GetDWORDSettingValuesEx @ 0x1400A8BE0
 * Callers:
 *     TryUpdatePTPConfigFromRegistry @ 0x140141C74 (TryUpdatePTPConfigFromRegistry.c)
 *     ReadPointerDeviceSettings @ 0x1401479D0 (ReadPointerDeviceSettings.c)
 * Callees:
 *     ApiSetEditionGetPointerDeviceConfigurationKey @ 0x1400A8D38 (ApiSetEditionGetPointerDeviceConfigurationKey.c)
 *     ReadPointerDeviceCfgDWORDSetting @ 0x1400A8DC0 (ReadPointerDeviceCfgDWORDSetting.c)
 */

__int64 __fastcall GetDWORDSettingValuesEx(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v5; // rbp
  unsigned int v7; // ebx
  void *PointerDeviceConfigurationKey; // r14
  _DWORD *v10; // rdi

  v5 = a3;
  v7 = 0;
  PointerDeviceConfigurationKey = (void *)ApiSetEditionGetPointerDeviceConfigurationKey(a1, 131097LL);
  if ( PointerDeviceConfigurationKey )
  {
    if ( (_DWORD)v5 )
    {
      v10 = (_DWORD *)(a2 + 12);
      if ( a4 )
      {
        do
        {
          if ( (int)ReadPointerDeviceCfgDWORDSetting(PointerDeviceConfigurationKey) < 0 )
            *v10 = *(v10 - 1);
          a2 += 16LL;
          v10 += 4;
          --v5;
        }
        while ( v5 );
      }
      else
      {
        do
        {
          if ( (int)ReadPointerDeviceCfgDWORDSetting(PointerDeviceConfigurationKey) < 0 )
            *v10 = -1;
          a2 += 16LL;
          v10 += 4;
          --v5;
        }
        while ( v5 );
      }
    }
    ZwClose(PointerDeviceConfigurationKey);
  }
  LOBYTE(v7) = PointerDeviceConfigurationKey != 0LL;
  return v7;
}
