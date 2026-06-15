/*
 * XREFs of ?Find@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEBAPEAU__POSITION@@AEBQEAVCProcess@@PEAU3@@Z @ 0x18001F0A8
 * Callers:
 *     ?DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180031B88 (-DelinkProcess@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::Find(_QWORD *a1, _QWORD *a2)
{
  _QWORD *i; // r8

  for ( i = (_QWORD *)*a1; i; i = (_QWORD *)*i )
  {
    if ( i[2] == *a2 )
      return i;
  }
  return 0LL;
}
