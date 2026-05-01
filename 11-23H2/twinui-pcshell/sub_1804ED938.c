/*
 * XREFs of sub_1804ED938 @ 0x1804ED938
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1804ED938(__int64 _RCX, __int64 _RDX)
{
  char v2; // of

  if ( !v2 )
    JUMPOUT(0x1804ED97CLL);
  __asm { rcl     byte ptr [rdx], cl }
  BYTE1(_RDX) = -63;
  __asm { icebp }
  return WindowWrapperBase::WindowAdded(_RCX, _RDX);
}
