/*
 * XREFs of PopPepInitializeDebuggerMasks @ 0x1405DBAF4
 * Callers:
 *     PopPepPlatformStateRegistered @ 0x1405DBD18 (PopPepPlatformStateRegistered.c)
 * Callees:
 *     PopFxBugCheck @ 0x140377108 (PopFxBugCheck.c)
 *     PopDiagTraceDebuggerTransitionRequirements @ 0x1405D4B2C (PopDiagTraceDebuggerTransitionRequirements.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall PopPepInitializeDebuggerMasks(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v4; // rbx
  __int64 v6; // rcx
  __int64 i; // rax
  __int64 v8; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v9; // [rsp+28h] [rbp-40h]
  int v10; // [rsp+2Ch] [rbp-3Ch]
  _OWORD *v11; // [rsp+30h] [rbp-38h]
  _OWORD v12[2]; // [rsp+38h] [rbp-30h] BYREF

  v4 = *(_QWORD *)(a1 + 32);
  v10 = 0;
  memset(v12, 0, sizeof(v12));
  v6 = *(_QWORD *)(v4 + 64);
  if ( v6 == PopFxProcessorPlugin )
  {
    if ( v6 )
    {
      v8 = *(_QWORD *)(v4 + 72);
      v11 = v12;
      v9 = a2;
      if ( (unsigned __int8)guard_dispatch_icall_no_overrides(35LL, &v8, a3, a4) )
      {
        for ( i = 0LL; (unsigned int)i < a2; i = (unsigned int)(i + 1) )
        {
          if ( *((_BYTE *)v12 + i) )
          {
            if ( !*(_BYTE *)(448LL * (unsigned int)i + PopPepPlatformState + 57) )
              PopFxBugCheck(0x61FuLL, v4, (unsigned int)i, 0LL);
            *(_BYTE *)(448LL * (unsigned int)i + PopPepPlatformState + 56) = 1;
            PopAutomaticDebuggerTransitions = 1;
          }
        }
        PopDiagTraceDebuggerTransitionRequirements(v4, (__int64)v12, a2);
      }
    }
  }
}
