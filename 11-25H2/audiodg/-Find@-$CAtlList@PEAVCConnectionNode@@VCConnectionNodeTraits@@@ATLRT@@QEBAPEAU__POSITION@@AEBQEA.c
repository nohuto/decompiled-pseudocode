/*
 * XREFs of ?Find@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEBAPEAU__POSITION@@AEBQEAVCConnectionNode@@PEAU3@@Z @ 0x140036FC0
 * Callers:
 *     ?InsertAfter@?$CRealTimeSafeList@VCConnectionNode@@V?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@@@QEAAJPEAVCConnectionNode@@0@Z @ 0x14000C56C (-InsertAfter@-$CRealTimeSafeList@VCConnectionNode@@V-$CAtlList@PEAVCConnectionNode@@VCConnection.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::Find(_QWORD *a1, __int64 a2)
{
  _QWORD *i; // r9

  for ( i = (_QWORD *)*a1; i; i = (_QWORD *)*i )
  {
    if ( *(_QWORD *)(i[2] + 16LL) == *(_QWORD *)(*(_QWORD *)a2 + 16LL) )
      return i;
  }
  return 0LL;
}
