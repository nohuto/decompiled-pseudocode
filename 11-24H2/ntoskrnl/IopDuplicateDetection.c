/*
 * XREFs of IopDuplicateDetection @ 0x14072504C
 * Callers:
 *     IoReportDetectedDevice @ 0x14071C850 (IoReportDetectedDevice.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     IopQueryResourceHandlerInterface @ 0x140A6C444 (IopQueryResourceHandlerInterface.c)
 *     IopFindLegacyBusDeviceNode @ 0x140A93D38 (IopFindLegacyBusDeviceNode.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopDuplicateDetection(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  unsigned int v5; // ebp
  unsigned int v6; // r14d
  __int64 LegacyBusDeviceNode; // rax
  _QWORD *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  PVOID P; // [rsp+78h] [rbp+20h] BYREF

  P = 0LL;
  v5 = a2;
  *a4 = 0LL;
  v6 = a1;
  LegacyBusDeviceNode = IopFindLegacyBusDeviceNode(a1, a2);
  if ( !LegacyBusDeviceNode )
    return 3221225488LL;
  if ( (int)IopQueryResourceHandlerInterface(3LL, *(_QWORD *)(LegacyBusDeviceNode + 32), 0LL, &P) < 0 )
    return 3221225488LL;
  v8 = P;
  if ( !P )
    return 3221225488LL;
  guard_dispatch_icall_no_overrides(*((_QWORD *)P + 1), v6, v5, a3);
  guard_dispatch_icall_no_overrides(v8[1], v9, v10, v11);
  ExFreePoolWithTag(v8, 0);
  return 3221225488LL;
}
