/*
 * XREFs of PopFxTransitionCriticalResource @ 0x1405CD720
 * Callers:
 *     <none>
 * Callees:
 *     PopFxBugCheck @ 0x14034E260 (PopFxBugCheck.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopFxTransitionCriticalResource(__int64 a1, unsigned int a2, unsigned __int8 a3)
{
  ULONG_PTR v4; // rdx
  signed __int32 v5; // eax
  signed __int32 v6; // ecx

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 872) + 8LL * a2);
  v5 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 92), 0, 0);
  if ( a3 )
  {
    if ( (v5 & 1) == 0 )
      PopFxBugCheck(0x606uLL, v4, *(int *)(v4 + 92), a3);
    v6 = v5 & 0xFFFFFFFE;
  }
  else
  {
    if ( (v5 & 1) != 0 )
      PopFxBugCheck(0x606uLL, v4, *(int *)(v4 + 92), 0LL);
    v6 = v5 | 1;
  }
  if ( v5 != _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 92), v6, v5) )
    PopFxBugCheck(0x606uLL, v4, v4 + 88, v6);
  return guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 192));
}
