/*
 * XREFs of ?MarkInactive@CCompositionBuffer@@UEAA_NXZ @ 0x14009D5E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionBuffer::MarkInactive(CCompositionBuffer *this)
{
  bool result; // al

  result = *((_BYTE *)this + 40);
  *((_BYTE *)this + 40) = 0;
  return result;
}
