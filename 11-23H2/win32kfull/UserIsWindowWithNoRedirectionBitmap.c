/*
 * XREFs of UserIsWindowWithNoRedirectionBitmap @ 0x1C000B35C
 * Callers:
 *     GreGetDxSharedSurface @ 0x1C000AE98 (GreGetDxSharedSurface.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C00208A8 (GreTransferDwmStateToSpriteState.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C00217FC (GreTransferSpriteStateToDwmState.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00B02D0 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall UserIsWindowWithNoRedirectionBitmap(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rax

  v2 = 0;
  LOBYTE(a2) = 1;
  v3 = HMValidateHandleNoSecure(a1, a2);
  if ( v3 )
    return (*(_BYTE *)(*(_QWORD *)(v3 + 40) + 26LL) & 0x20) != 0;
  return v2;
}
