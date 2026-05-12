/*
 * XREFs of NvmeControllerDeregisterPowerSettingChangeNotification @ 0x140132180
 * Callers:
 *     NvmeControllerPowerUninitialize @ 0x1400F2D00 (NvmeControllerPowerUninitialize.c)
 *     NvmeAdapterDeregisterFromPoFx @ 0x14012DF44 (NvmeAdapterDeregisterFromPoFx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NvmeControllerDeregisterPowerSettingChangeNotification(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  __int64 v4; // rbx
  void *v5; // rcx

  v1 = *(_QWORD *)(a1 + 128);
  result = *(_QWORD *)(v1 + 160);
  if ( result )
  {
    result = *(_QWORD *)(result + 312);
    if ( result )
    {
      v4 = 0LL;
      if ( *(_DWORD *)result )
      {
        do
        {
          v5 = *(void **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 160) + 312LL) + 16LL) + 8 * v4);
          if ( v5 )
            PoUnregisterPowerSettingCallback(v5);
          v1 = *(_QWORD *)(a1 + 128);
          v4 = (unsigned int)(v4 + 1);
        }
        while ( (unsigned int)v4 < **(_DWORD **)(*(_QWORD *)(v1 + 160) + 312LL) );
      }
      ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(v1 + 160) + 312LL), 0x4F506152u);
      result = *(_QWORD *)(a1 + 128);
      *(_QWORD *)(*(_QWORD *)(result + 160) + 312LL) = 0LL;
    }
  }
  return result;
}
