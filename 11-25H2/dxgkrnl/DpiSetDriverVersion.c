/*
 * XREFs of DpiSetDriverVersion @ 0x1402310B0
 * Callers:
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z @ 0x1401902D4 (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z.c)
 * Callees:
 *     DpiGetDevicePropertyString @ 0x1403F11AC (DpiGetDevicePropertyString.c)
 */

void __fastcall DpiSetDriverVersion(__int64 a1, int a2, _WORD *Data, _WORD *a4)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v7; // rax
  void *v8; // rbp
  struct _DEVICE_OBJECT *v9; // rcx
  NTSTATUS v10; // eax
  NTSTATUS v11; // eax
  __int64 Size; // [rsp+68h] [rbp+10h] BYREF

  v4 = *(_QWORD *)(a1 + 64);
  v5 = -1LL;
  *(_DWORD *)(*(_QWORD *)(v4 + 40) + 28LL) = a2;
  if ( *Data )
  {
    v7 = -1LL;
    v8 = *(void **)(v4 + 4960);
    do
      ++v7;
    while ( Data[v7] );
    v9 = *(struct _DEVICE_OBJECT **)(v4 + 152);
    LODWORD(Size) = 2 * v7 + 2;
    v10 = IoSetDevicePropertyData(v9, &DEVPKEY_Device_DeviceDesc, 0, 0, 0x12u, Size, Data);
    if ( v10 < 0 )
    {
      WdLogSingleEntry1(2LL, v10);
      WdLogGlobalForLineNumber = 1828;
      return;
    }
    if ( (int)DpiGetDevicePropertyString(*(PDEVICE_OBJECT *)(v4 + 152), DevicePropertyDeviceDescription, (__int64)&Size) >= 0
      && v8 )
    {
      ExFreePoolWithTag(v8, 0);
    }
  }
  if ( *a4 )
  {
    do
      ++v5;
    while ( a4[v5] );
    v11 = IoSetDevicePropertyData(
            *(PDEVICE_OBJECT *)(v4 + 152),
            &DEVPKEY_Device_InstanceId,
            0,
            0,
            0x12u,
            2 * v5 + 2,
            a4);
    if ( v11 < 0 )
    {
      WdLogSingleEntry1(2LL, v11);
      WdLogGlobalForLineNumber = 1858;
    }
  }
}
