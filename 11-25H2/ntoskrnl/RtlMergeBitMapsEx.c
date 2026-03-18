/*
 * XREFs of RtlMergeBitMapsEx @ 0x1405DC030
 * Callers:
 *     IopLiveDumpWriteDumpFileWithExtraPages @ 0x14059B140 (IopLiveDumpWriteDumpFileWithExtraPages.c)
 *     MiMergePageNodes @ 0x14067F540 (MiMergePageNodes.c)
 *     MiSelectImageBase @ 0x1409401DC (MiSelectImageBase.c)
 *     MiSelectRelocationStartHint @ 0x140A2FF20 (MiSelectRelocationStartHint.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlMergeBitMapsEx(unsigned __int64 *a1, __int64 *a2)
{
  unsigned __int64 v2; // r9
  __int64 result; // rax
  __int64 i; // r10

  v2 = *a1;
  result = *a2;
  if ( *a1 >= *a2 )
    v2 = *a2;
  if ( v2 )
  {
    for ( i = 0LL; ; i += 8LL )
    {
      result = a2[1];
      if ( v2 < 0x40 )
        break;
      *(_QWORD *)(a1[1] + i) |= *(_QWORD *)(result + i);
      v2 -= 64LL;
      if ( !v2 )
        return result;
    }
    result = ((1LL << v2) - 1) & *(_QWORD *)(i + result);
    *(_QWORD *)(a1[1] + i) |= result;
  }
  return result;
}
