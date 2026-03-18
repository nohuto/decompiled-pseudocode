/*
 * XREFs of DpiCancelAsyncRequest @ 0x14002B0D8
 * Callers:
 *     DpiRequestDevicePowerState @ 0x14002A4E8 (DpiRequestDevicePowerState.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall DpiCancelAsyncRequest(__int64 a1)
{
  __int64 **result; // rax
  __int64 *v3; // rbx
  __int64 v4; // rcx

  result = (__int64 **)WdLogSingleEntry3(9LL, a1, *(int *)(a1 + 4152), 0LL);
  v3 = (__int64 *)(a1 + 4128);
  WdLogGlobalForLineNumber = 109;
  v4 = *v3;
  if ( *v3 )
  {
    if ( *(__int64 **)(v4 + 8) != v3 || (result = (__int64 **)v3[1], *result != v3) )
      __fastfail(3u);
    *result = (__int64 *)v4;
    *(_QWORD *)(v4 + 8) = result;
    *v3 = 0LL;
  }
  return result;
}
