/*
 * XREFs of SendWnfNotificationToVmProcess @ 0x140042E0C
 * Callers:
 *     ?HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1400D1800 (-HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SendWnfNotificationToVmProcess(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, void *, __int64))DxgCoreInterface[84])(
           a1,
           &WNF_DX_VIDMM_TRIM_NOTIFICATION,
           24LL);
}
