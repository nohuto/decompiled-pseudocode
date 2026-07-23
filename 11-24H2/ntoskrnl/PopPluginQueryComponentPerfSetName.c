/*
 * XREFs of PopPluginQueryComponentPerfSetName @ 0x1405CFB34
 * Callers:
 *     PopFxPepPerfInfoQuery @ 0x14074C664 (PopFxPepPerfInfoQuery.c)
 * Callees:
 *     PopFxBugCheck @ 0x1403A9948 (PopFxBugCheck.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopPluginQueryComponentPerfSetName(__int64 a1, int a2, int a3, unsigned __int16 *a4, __int64 a5)
{
  __int64 v5; // rax
  ULONG_PTR v6; // rdi
  __int64 result; // rax
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+2Ch] [rbp-1Ch]
  unsigned __int16 v12; // [rsp+30h] [rbp-18h]
  int v13; // [rsp+32h] [rbp-16h]
  __int16 v14; // [rsp+36h] [rbp-12h]
  __int64 v15; // [rsp+38h] [rbp-10h]

  v5 = *(_QWORD *)(a1 + 72);
  v6 = *(_QWORD *)(a1 + 64);
  v13 = 0;
  v14 = 0;
  v9 = v5;
  LOWORD(v5) = *a4;
  v10 = a2;
  v11 = a3;
  v12 = v5;
  v15 = a5;
  if ( !(unsigned __int8)guard_dispatch_icall_no_overrides(30LL, &v9) )
    PopFxBugCheck(0x605uLL, 0x1EuLL, v6, 0LL);
  result = v12;
  *a4 = v12;
  return result;
}
