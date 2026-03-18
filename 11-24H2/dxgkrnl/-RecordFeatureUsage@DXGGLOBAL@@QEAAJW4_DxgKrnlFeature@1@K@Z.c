/*
 * XREFs of ?RecordFeatureUsage@DXGGLOBAL@@QEAAJW4_DxgKrnlFeature@1@K@Z @ 0x1403F56EC
 * Callers:
 *     ?MonitorSetAppOverride@@YAJPEAUHDXGMONITOR__@@U_GUID@@1I_K_NPEBU_UNICODE_STRING@@@Z @ 0x14018C588 (-MonitorSetAppOverride@@YAJPEAUHDXGMONITOR__@@U_GUID@@1I_K_NPEBU_UNICODE_STRING@@@Z.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x14018FAF8 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?RecordFeatureUsageWddmVersion@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1401D6604 (-RecordFeatureUsageWddmVersion@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403478E4 (-ApplyTopologyWorker@CCD_TOPOLOGY@@AEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1404056C4 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGGLOBAL::RecordFeatureUsage(__int64 a1, int a2, int a3)
{
  __int64 v3; // rdi
  __int64 v6; // rcx
  const wchar_t *v7; // rax
  NTSTATUS v8; // esi
  wchar_t *v9; // rdx
  __int64 v10; // rcx
  wchar_t *v11; // rax
  struct _UNICODE_STRING ValueName; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  int Data; // [rsp+C0h] [rbp+40h] BYREF
  void *KeyHandle; // [rsp+C8h] [rbp+48h] BYREF

  Data = a3;
  v3 = a2;
  if ( (unsigned int)(a2 - 10) > 1 && *(_BYTE *)(a2 + a1 + 305220) )
    return 0LL;
  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  ValueName = 0LL;
  v6 = 0x7FFFLL;
  v7 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\FeatureSetUsage";
  while ( *v7 )
  {
    ++v7;
    if ( !--v6 )
      goto LABEL_9;
  }
  ValueName.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\FeatureSetUsage";
  ValueName.Length = 2 * (0x7FFF - v6);
  ValueName.MaximumLength = ValueName.Length + 2;
LABEL_9:
  ObjectAttributes.ObjectName = &ValueName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 704;
  v8 = ZwCreateKey(&KeyHandle, 0x20006u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( !v8 )
  {
    _mm_lfence();
    v9 = off_1400A6A60[v3];
    ValueName = 0LL;
    if ( v9 )
    {
      v10 = 0x7FFFLL;
      v11 = v9;
      while ( *v11 )
      {
        ++v11;
        if ( !--v10 )
          goto LABEL_16;
      }
      ValueName.Buffer = v9;
      ValueName.Length = 2 * (0x7FFF - v10);
      ValueName.MaximumLength = ValueName.Length + 2;
    }
LABEL_16:
    v8 = ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &Data, 4u);
    ZwClose(KeyHandle);
  }
  if ( v8 >= 0 )
    *(_BYTE *)(v3 + a1 + 305220) = 1;
  return (unsigned int)v8;
}
