/*
 * XREFs of IopDuplicateDetection @ 0x1407190D0
 * Callers:
 *     IoReportDetectedDevice @ 0x140710750 (IoReportDetectedDevice.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     IopQueryResourceHandlerInterface @ 0x140A69C64 (IopQueryResourceHandlerInterface.c)
 *     IopFindLegacyBusDeviceNode @ 0x140A8F248 (IopFindLegacyBusDeviceNode.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopDuplicateDetection(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 LegacyBusDeviceNode; // rax
  _QWORD *v5; // rdi
  PVOID P; // [rsp+78h] [rbp+20h] BYREF

  P = 0LL;
  *a4 = 0LL;
  LegacyBusDeviceNode = IopFindLegacyBusDeviceNode(a1, a2);
  if ( !LegacyBusDeviceNode )
    return 3221225488LL;
  if ( (int)IopQueryResourceHandlerInterface(3LL, *(_QWORD *)(LegacyBusDeviceNode + 32), 0LL, &P) < 0 )
    return 3221225488LL;
  v5 = P;
  if ( !P )
    return 3221225488LL;
  guard_dispatch_icall_no_overrides(*((_QWORD *)P + 1));
  guard_dispatch_icall_no_overrides(v5[1]);
  ExFreePoolWithTag(v5, 0);
  return 3221225488LL;
}
