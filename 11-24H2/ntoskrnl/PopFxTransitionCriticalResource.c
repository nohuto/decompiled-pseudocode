/*
 * XREFs of PopFxTransitionCriticalResource @ 0x1405D1FA0
 * Callers:
 *     <none>
 * Callees:
 *     PopFxBugCheck @ 0x140377108 (PopFxBugCheck.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopFxTransitionCriticalResource(__int64 a1, unsigned int a2, unsigned __int8 a3, __int64 a4)
{
  unsigned int v6; // r11d
  ULONG_PTR v7; // rdx
  ULONG_PTR v8; // r8
  signed __int32 v9; // eax
  signed __int32 v10; // ecx

  v6 = a3;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 872) + 8LL * a2);
  v8 = v7 + 88;
  v9 = _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 92), 0, 0);
  if ( (_BYTE)v6 )
  {
    if ( (v9 & 1) == 0 )
      PopFxBugCheck(0x606uLL, v7, *(int *)(v7 + 92), v6);
    v10 = v9 & 0xFFFFFFFE;
  }
  else
  {
    if ( (v9 & 1) != 0 )
      PopFxBugCheck(0x606uLL, v7, *(int *)(v7 + 92), 0LL);
    v10 = v9 | 1;
  }
  if ( v9 != _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 92), v10, v9) )
    PopFxBugCheck(0x606uLL, v7, v8, v10);
  LOBYTE(v8) = v6;
  return guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 192), a2, v8, a4);
}
