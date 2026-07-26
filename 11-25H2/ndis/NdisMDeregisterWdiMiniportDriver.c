/*
 * XREFs of NdisMDeregisterWdiMiniportDriver @ 0x140174AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMpHookGetHookUnsafe@@YAPEBUNDIS_MINIPORT_HOOK_PROVIDER_INFO@@W4_NDIS_MINIPORT_HOOK_DRIVER_TYPE@@@Z @ 0x14006C5F0 (-ndisMpHookGetHookUnsafe@@YAPEBUNDIS_MINIPORT_HOOK_PROVIDER_INFO@@W4_NDIS_MINIPORT_HOOK_DRIVER_T.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 *     ?DereferenceWdi@@YAXXZ @ 0x1401518A4 (-DereferenceWdi@@YAXXZ.c)
 */

void __stdcall NdisMDeregisterWdiMiniportDriver(NDIS_MINIPORT_DRIVER_HANDLE NdisMiniportDriverHandle)
{
  const struct NDIS_MINIPORT_HOOK_PROVIDER_INFO *HookUnsafe; // rbx
  __int64 v2; // r9

  if ( *((_DWORD *)NdisMiniportDriverHandle + 224) == 1 )
  {
    if ( *((_BYTE *)NdisMiniportDriverHandle + 900) )
    {
      *((_BYTE *)NdisMiniportDriverHandle + 900) = 0;
      HookUnsafe = ndisMpHookGetHookUnsafe(1);
      (*((void (__fastcall **)(_QWORD, __int64, _QWORD))HookUnsafe + 2))(
        *(_QWORD *)HookUnsafe,
        v2,
        *(_QWORD *)(v2 + 888));
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)HookUnsafe - 2);
      DereferenceWdi();
    }
  }
}
