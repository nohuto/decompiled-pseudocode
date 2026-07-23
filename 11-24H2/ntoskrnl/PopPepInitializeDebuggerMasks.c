/*
 * XREFs of PopPepInitializeDebuggerMasks @ 0x1405D89C4
 * Callers:
 *     PopPepPlatformStateRegistered @ 0x1405D8BE8 (PopPepPlatformStateRegistered.c)
 * Callees:
 *     PopFxBugCheck @ 0x1403A9948 (PopFxBugCheck.c)
 *     PopDiagTraceDebuggerTransitionRequirements @ 0x1405D22EC (PopDiagTraceDebuggerTransitionRequirements.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall PopPepInitializeDebuggerMasks(__int64 a1, unsigned int a2)
{
  ULONG_PTR v2; // rbx
  __int64 v4; // rcx
  __int64 i; // rax
  __int64 v6; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v7; // [rsp+28h] [rbp-40h]
  int v8; // [rsp+2Ch] [rbp-3Ch]
  _OWORD *v9; // [rsp+30h] [rbp-38h]
  _OWORD v10[2]; // [rsp+38h] [rbp-30h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  v8 = 0;
  memset(v10, 0, sizeof(v10));
  v4 = *(_QWORD *)(v2 + 64);
  if ( v4 == PopFxProcessorPlugin )
  {
    if ( v4 )
    {
      v6 = *(_QWORD *)(v2 + 72);
      v9 = v10;
      v7 = a2;
      if ( (unsigned __int8)guard_dispatch_icall_no_overrides(35LL, &v6) )
      {
        for ( i = 0LL; (unsigned int)i < a2; i = (unsigned int)(i + 1) )
        {
          if ( *((_BYTE *)v10 + i) )
          {
            if ( !*(_BYTE *)(448LL * (unsigned int)i + PopPepPlatformState + 57) )
              PopFxBugCheck(0x61FuLL, v2, (unsigned int)i, 0LL);
            *(_BYTE *)(448LL * (unsigned int)i + PopPepPlatformState + 56) = 1;
            PopAutomaticDebuggerTransitions = 1;
          }
        }
        PopDiagTraceDebuggerTransitionRequirements(v2, (__int64)v10, a2);
      }
    }
  }
}
