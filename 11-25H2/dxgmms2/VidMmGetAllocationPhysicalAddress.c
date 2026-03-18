/*
 * XREFs of VidMmGetAllocationPhysicalAddress @ 0x140096D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidMmGetAllocationPhysicalAddress(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 344);
  if ( v2 && *(_QWORD *)(v2 + 48) )
  {
    *a2 = *(_QWORD *)(v2 + 64);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 19681;
  }
  return result;
}
