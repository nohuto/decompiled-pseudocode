/*
 * XREFs of NvmeAdapterDeregisterFromPoFx @ 0x14012DF44
 * Callers:
 *     NvmeAdapterReleaseResources @ 0x14019B0CC (NvmeAdapterReleaseResources.c)
 * Callees:
 *     NvmeControllerDeregisterPowerSettingChangeNotification @ 0x140132180 (NvmeControllerDeregisterPowerSettingChangeNotification.c)
 */

void __fastcall NvmeAdapterDeregisterFromPoFx(__int64 a1)
{
  __int64 v1; // rdi
  _QWORD *v3; // rdi
  void *v4; // rcx

  v1 = *(_QWORD *)(a1 + 160);
  if ( *(_BYTE *)v1 == 1 )
  {
    v3 = *(_QWORD **)(v1 + 8);
    if ( *(_QWORD *)(a1 + 1136) )
      NvmeControllerDeregisterPowerSettingChangeNotification();
    v4 = (void *)v3[11];
    if ( v4 )
    {
      ExFreePoolWithTag(v4, 0x4F506152u);
      v3[11] = 0LL;
      *((_DWORD *)v3 + 21) = 0;
    }
    **(_BYTE **)(a1 + 160) = 0;
    ExWaitForRundownProtectionReleaseCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 160) + 80LL));
    *(_QWORD *)(*(_QWORD *)(a1 + 160) + 8LL) = 0LL;
    PoFxUnregisterDevice(*v3);
    ExFreePoolWithTag(v3, 0x4F506152u);
  }
}
