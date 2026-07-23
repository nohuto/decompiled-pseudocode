/*
 * XREFs of VF_MARK_SCATTER_GATHER_LIST @ 0x140B87150
 * Callers:
 *     VfBuildMdlFromScatterGatherList @ 0x140B87950 (VfBuildMdlFromScatterGatherList.c)
 *     ViScatterGatherCallback @ 0x140B8BB30 (ViScatterGatherCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VF_MARK_SCATTER_GATHER_LIST(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 )
  {
    result = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a2 + 48) = result;
    *(_QWORD *)(a1 + 8) = -559026163LL;
  }
  return result;
}
