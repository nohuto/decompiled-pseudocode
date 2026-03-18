/*
 * XREFs of PopPluginQueryComponentPerfCapabilities @ 0x1405D2318
 * Callers:
 *     PopFxPepPerfInfoQuery @ 0x14074E334 (PopFxPepPerfInfoQuery.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall PopPluginQueryComponentPerfCapabilities(__int64 a1, int a2, _DWORD *a3, __int64 a4)
{
  __int64 v5; // r8
  char result; // al
  __int64 v7; // rax
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+28h] [rbp-10h]
  int v10; // [rsp+2Ch] [rbp-Ch]

  v10 = 0;
  v5 = *(_QWORD *)(a1 + 64);
  result = 0;
  if ( v5 )
  {
    v7 = *(_QWORD *)(a1 + 72);
    v9 = a2;
    v8 = v7;
    result = guard_dispatch_icall_no_overrides(28LL, &v8, v5, a4);
    if ( result )
      *a3 = v10;
  }
  return result;
}
