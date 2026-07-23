/*
 * XREFs of EtwpUMGLEnabled @ 0x1407AA76C
 * Callers:
 *     EtwQueryPerformanceTraceInformation @ 0x14094649C (EtwQueryPerformanceTraceInformation.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

unsigned __int8 __fastcall EtwpUMGLEnabled(ULONG_PTR BugCheckParameter1)
{
  __int64 v2; // rbx
  struct _EX_RUNDOWN_REF *v3; // rdi
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned __int8 v6; // bl
  __int64 v7; // rax
  __int64 *v8; // rcx
  _OWORD v10[3]; // [rsp+30h] [rbp-48h] BYREF

  memset(v10, 0, sizeof(v10));
  v2 = *(_QWORD *)(BugCheckParameter1 + 736);
  if ( !v2 )
    return 0;
  v3 = (struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 488);
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 488)) )
    return 0;
  KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v10);
  v6 = _bittest((const signed __int32 *)(v2 + 888), 0);
  v7 = 0LL;
  v8 = *(__int64 **)(BugCheckParameter1 + 784);
  if ( v8 )
    v7 = *v8;
  if ( v7 && (v6 || _bittest((const signed __int32 *)(v7 + 576), 0)) )
    v6 = 1;
  KiUnstackDetachProcess((__int64)v10, 0, v4, v5);
  ExReleaseRundownProtection_0(v3);
  return v6;
}
