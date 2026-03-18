/*
 * XREFs of ?IsSignaled@CFlipToken@@UEBA_NXZ @ 0x14004D6A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CFlipToken::IsSignaled(CFlipToken *this)
{
  bool result; // al

  result = 0;
  if ( !*((_QWORD *)this + 13) )
    return *((_BYTE *)this + 578) != 0;
  return result;
}
