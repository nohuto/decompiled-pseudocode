/*
 * XREFs of PopPepInitializeDebuggerMasks @ 0x1405D6914
 * Callers:
 *     PopPepPlatformStateRegistered @ 0x1405D6B38 (PopPepPlatformStateRegistered.c)
 * Callees:
 *     PopFxBugCheck @ 0x14034E260 (PopFxBugCheck.c)
 *     PopDiagTraceDebuggerTransitionRequirements @ 0x1405D0170 (PopDiagTraceDebuggerTransitionRequirements.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall PopPepInitializeDebuggerMasks(__int64 a1, unsigned int a2)
{
  ULONG_PTR v2; // rbx
  __int64 v4; // rcx
  __int64 i; // rax
  _OWORD v6[2]; // [rsp+38h] [rbp-30h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  memset(v6, 0, sizeof(v6));
  v4 = *(_QWORD *)(v2 + 64);
  if ( v4 == PopFxProcessorPlugin && v4 && (unsigned __int8)guard_dispatch_icall_no_overrides(35LL) )
  {
    for ( i = 0LL; (unsigned int)i < a2; i = (unsigned int)(i + 1) )
    {
      if ( *((_BYTE *)v6 + i) )
      {
        if ( !*(_BYTE *)(448LL * (unsigned int)i + PopPepPlatformState + 57) )
          PopFxBugCheck(0x61FuLL, v2, (unsigned int)i, 0LL);
        *(_BYTE *)(448LL * (unsigned int)i + PopPepPlatformState + 56) = 1;
        PopAutomaticDebuggerTransitions = 1;
      }
    }
    PopDiagTraceDebuggerTransitionRequirements(v2, (__int64)v6, a2);
  }
}
