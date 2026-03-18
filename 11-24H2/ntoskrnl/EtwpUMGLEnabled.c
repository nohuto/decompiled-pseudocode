/*
 * XREFs of EtwpUMGLEnabled @ 0x1407AA62C
 * Callers:
 *     EtwQueryPerformanceTraceInformation @ 0x14095E9DC (EtwQueryPerformanceTraceInformation.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

unsigned __int8 __fastcall EtwpUMGLEnabled(ULONG_PTR BugCheckParameter1)
{
  __int64 v2; // rbx
  struct _EX_RUNDOWN_REF *v3; // rdi
  unsigned __int8 v4; // bl
  __int64 v5; // rax
  __int64 *v6; // rcx
  _OWORD v8[3]; // [rsp+30h] [rbp-48h] BYREF

  memset(v8, 0, sizeof(v8));
  v2 = *(_QWORD *)(BugCheckParameter1 + 736);
  if ( !v2 )
    return 0;
  v3 = (struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 488);
  if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 488)) )
    return 0;
  KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v8);
  v4 = _bittest((const signed __int32 *)(v2 + 888), 0);
  v5 = 0LL;
  v6 = *(__int64 **)(BugCheckParameter1 + 784);
  if ( v6 )
    v5 = *v6;
  if ( v5 && (v4 || _bittest((const signed __int32 *)(v5 + 576), 0)) )
    v4 = 1;
  KiUnstackDetachProcess((__int64)v8, 0);
  ExReleaseRundownProtection_0(v3);
  return v4;
}
