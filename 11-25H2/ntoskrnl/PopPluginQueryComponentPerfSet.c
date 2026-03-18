/*
 * XREFs of PopPluginQueryComponentPerfSet @ 0x1405CDAE8
 * Callers:
 *     PopFxPepPerfInfoQuery @ 0x140742264 (PopFxPepPerfInfoQuery.c)
 * Callees:
 *     PopFxBugCheck @ 0x14034E260 (PopFxBugCheck.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopPluginQueryComponentPerfSet(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6,
        _QWORD *a7,
        _QWORD *a8)
{
  ULONG_PTR v9; // rbx
  __int64 result; // rax

  v9 = *(_QWORD *)(a1 + 64);
  if ( !(unsigned __int8)guard_dispatch_icall_no_overrides(29LL) )
    PopFxBugCheck(0x605uLL, 0x1DuLL, v9, 0LL);
  *a4 = 0;
  *a5 = 0;
  *a6 = 0;
  *a7 = 0LL;
  result = 0LL;
  *a8 = 0LL;
  return result;
}
