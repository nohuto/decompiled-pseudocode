/*
 * XREFs of SendWnfNotificationToVmProcess @ 0x1400441AC
 * Callers:
 *     ?HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z @ 0x1400D5BC0 (-HandleTrimWnf@VIDMM_GLOBAL@@QEAAX_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400562A0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall SendWnfNotificationToVmProcess(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, void *, __int64))DxgCoreInterface[84])(
           a1,
           &WNF_DX_VIDMM_TRIM_NOTIFICATION,
           24LL);
}
