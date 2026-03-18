/*
 * XREFs of VF_UNMARK_SCATTER_GATHER_LIST @ 0x140B85170
 * Callers:
 *     VfBuildMdlFromScatterGatherList @ 0x140B85950 (VfBuildMdlFromScatterGatherList.c)
 *     VfPutScatterGatherList @ 0x140B87980 (VfPutScatterGatherList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VF_UNMARK_SCATTER_GATHER_LIST(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) == -559026163LL )
  {
    if ( a2 )
    {
      result = *(_QWORD *)(a2 + 48);
      *(_QWORD *)(a1 + 8) = result;
    }
  }
  return result;
}
