/*
 * XREFs of ViPtCaptureTraceInformationCallBack @ 0x140B8E700
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ViPtCaptureTraceInformationCallBack(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        __int64 a8)
{
  __int64 result; // rax

  result = guard_dispatch_icall_no_overrides(a1, &GUID_VERIFIER_LIVEDUMP_INTERFACE);
  *(_QWORD *)(a8 + 24) = a1;
  return result;
}
