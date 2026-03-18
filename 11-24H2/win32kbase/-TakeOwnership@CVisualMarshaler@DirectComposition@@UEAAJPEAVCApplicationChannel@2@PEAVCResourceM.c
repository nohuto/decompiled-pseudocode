/*
 * XREFs of ?TakeOwnership@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@PEAVCResourceMarshaler@2@@Z @ 0x1400F6490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVisualMarshaler::TakeOwnership(
        DirectComposition::CVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        struct DirectComposition::CResourceMarshaler *a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( *((_QWORD *)this + 24) )
    return 3221225485LL;
  *((_QWORD *)this + 24) = a3;
  return result;
}
