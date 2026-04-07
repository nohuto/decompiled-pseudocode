/*
 * XREFs of ?OnWindowDestroyed@CSecondaryWindowRepresentation@@QEAAXPEAVCWindowData@@@Z @ 0x180099D40
 * Callers:
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001BC68 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z @ 0x18003D62C (-RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CSecondaryWindowRepresentation::OnWindowDestroyed(
        __m128i *this,
        struct CWindowData *a2,
        __int64 a3,
        __int64 a4)
{
  CWindowData::RemoveSecondaryWindowRepresentation(a2, this, a3, a4);
  if ( a2 == (struct CWindowData *)this[2].m128i_i64[0] )
  {
    this[2].m128i_i64[0] = 0LL;
    this[10].m128i_i8[0] = 0;
  }
}
