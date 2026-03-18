/*
 * XREFs of MdlInvariantFindMdlInfo @ 0x140605A3C
 * Callers:
 *     MdlInvariantPostDriverCompletion @ 0x140605A80 (MdlInvariantPostDriverCompletion.c)
 *     MdlInvariantPostProcessing1 @ 0x140605B10 (MdlInvariantPostProcessing1.c)
 *     MdlInvariantPreProcessing1 @ 0x140605D1C (MdlInvariantPreProcessing1.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MdlInvariantFindMdlInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  unsigned int i; // r8d
  _QWORD *result; // rax

  v2 = *(_QWORD *)(a1 + 224);
  if ( v2 )
  {
    for ( i = 0; i < *(_DWORD *)v2; ++i )
    {
      result = (_QWORD *)(32LL * i + *(_QWORD *)(v2 + 8));
      if ( *result && *result == a2 )
        return result;
    }
  }
  return 0LL;
}
