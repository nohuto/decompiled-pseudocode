/*
 * XREFs of DpiQueryDisplayIDDescriptor @ 0x14024EB9C
 * Callers:
 *     ?GetDisplayIdDescriptor@KernelDriver@@UEBAJPEAIPEAE@Z @ 0x1402765E0 (-GetDisplayIdDescriptor@KernelDriver@@UEBAJPEAIPEAE@Z.c)
 * Callees:
 *     Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline @ 0x14007D6D4 (Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline.c)
 *     DpiDxgkDdiQueryMonitorDescriptor @ 0x14008BC6C (DpiDxgkDdiQueryMonitorDescriptor.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1403707B8 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1403762D8 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1403763C8 (DxgkReleaseAdapterDdiSync.c)
 *     DxgkReleaseAdapterOpmI2CSync @ 0x1403D1690 (DxgkReleaseAdapterOpmI2CSync.c)
 *     DxgkAcquireAdapterOpmI2CSync @ 0x1403D5F64 (DxgkAcquireAdapterOpmI2CSync.c)
 */

__int64 __fastcall DpiQueryDisplayIDDescriptor(__int64 a1, unsigned int *a2, void *a3)
{
  __int64 v3; // rdi
  __int64 v6; // rsi
  unsigned int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // rax
  char v10; // al
  unsigned int v11; // eax
  unsigned int v12; // ecx
  __int64 v14; // rcx
  unsigned int MonitorDescriptor; // r14d
  __int64 v16; // rcx
  unsigned int v17; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v18; // [rsp+34h] [rbp-3Ch]
  void *v19; // [rsp+38h] [rbp-38h]
  struct _DXGKARG_QUERYADAPTERINFO v20; // [rsp+40h] [rbp-30h] BYREF
  int v21; // [rsp+90h] [rbp+20h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v6 = *(_QWORD *)(*(_QWORD *)(v3 + 32) + 64LL);
  v7 = *(_DWORD *)(*(_QWORD *)(v6 + 40) + 28LL);
  if ( v7 < 0x8001 )
    return 3223126017LL;
  v8 = *(_QWORD *)(v3 + 936);
  v9 = *(_QWORD *)(v8 + 104);
  if ( v9 && v7 >= 0xA00B )
  {
    v10 = *(_BYTE *)(v9 + 123);
    if ( v10 == 2 )
    {
      v11 = *(unsigned __int16 *)(v8 + 96);
      if ( (_WORD)v11 )
      {
        if ( a3 )
        {
          v12 = *a2;
          if ( *a2 > v11 )
          {
            *a2 = v11;
            v12 = v11;
          }
          memmove(a3, *(const void **)(*(_QWORD *)(v3 + 936) + 120LL), v12);
          return 0LL;
        }
        else
        {
          *a2 = v11;
          return 3221225507LL;
        }
      }
      return 3223126017LL;
    }
    if ( v10 == 1 )
      return 3223126017LL;
  }
  if ( (unsigned int)Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline()
    && *(_QWORD *)(v6 + 6432) )
  {
    v14 = *(_QWORD *)(v6 + 4032);
    v18 = *a2;
    v17 = 2;
    v19 = a3;
    DxgkAcquireAdapterOpmI2CSync(v14);
    KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v3 + 936) + 72LL), Executive, 0, 0, 0LL);
    DxgkAcquireAdapterDdiSync(*(_QWORD *)(v6 + 4032), 1LL);
    MonitorDescriptor = DpiDxgkDdiQueryMonitorDescriptor(v6, *(_DWORD *)(*(_QWORD *)(v3 + 936) + 24LL), (int *)&v17);
    DxgkReleaseAdapterDdiSync(*(_QWORD *)(v6 + 4032));
    KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v3 + 936) + 72LL), 0);
    DxgkReleaseAdapterOpmI2CSync(*(_QWORD *)(v6 + 4032));
    *a2 = v18;
  }
  else
  {
    v16 = *(_QWORD *)(v3 + 936);
    v21 = *(_DWORD *)(v16 + 24);
    v17 = *a2;
    v18 = 0;
    v20.pInputData = &v21;
    v20.pOutputData = &v17;
    v19 = a3;
    *(_QWORD *)&v20.Type = 20LL;
    *(_QWORD *)&v20.InputDataSize = 4LL;
    *(_QWORD *)&v20.Flags.0 = 0LL;
    HIDWORD(v20.hKmdProcessHandle) = 0;
    v20.OutputDataSize = 16;
    KeWaitForSingleObject(*(PVOID *)(v16 + 72), Executive, 0, 0, 0LL);
    MonitorDescriptor = DXGADAPTER::DdiQueryAdapterInfo(*(DXGADAPTER **)(v6 + 4032), &v20);
    KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v3 + 936) + 72LL), 0);
    *a2 = v17;
  }
  return MonitorDescriptor;
}
