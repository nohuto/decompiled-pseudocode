/*
 * XREFs of ?clear@?$vector_facade@UtagCOMPOSITION_TARGET_ID_AND_STATS@@V?$buffer_impl@UtagCOMPOSITION_TARGET_ID_AND_STATS@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1801D9150
 * Callers:
 *     ??1CRenderTargetManager@@QEAA@XZ @ 0x18025A324 (--1CRenderTargetManager@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall detail::vector_facade<tagCOMPOSITION_TARGET_ID_AND_STATS,detail::buffer_impl<tagCOMPOSITION_TARGET_ID_AND_STATS,4,1,detail::liberal_expansion_policy>>::clear(
        _QWORD *a1)
{
  __int64 result; // rax

  result = 0xEEEEEEEEEEEEEEEFuLL * ((__int64)(a1[1] - *a1) >> 3);
  if ( result )
  {
    result = 8 * ((__int64)(a1[1] - *a1) >> 3);
    a1[1] -= result;
  }
  return result;
}
