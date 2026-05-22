/*
 * XREFs of ?OnPointerInfoFrame@GestureTracker@@QEAA_NPEAUPointerInputInfo@@@Z @ 0x18007C1FC
 * Callers:
 *     ?OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180088DB0 (-OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRe.c)
 * Callees:
 *     ?GetKeyModifiers@PointerManipulationHelper@@SA?AW4VirtualKeyModifiers@System@Windows@@PEAUInputInfo@@@Z @ 0x18009A8E8 (-GetKeyModifiers@PointerManipulationHelper@@SA-AW4VirtualKeyModifiers@System@Windows@@PEAUInputI.c)
 *     ?ResetAndInitializeInteractionContext@GestureTracker@@AEAAJXZ @ 0x18019CD5C (-ResetAndInitializeInteractionContext@GestureTracker@@AEAAJXZ.c)
 */

char __fastcall GestureTracker::OnPointerInfoFrame(GestureTracker *this, struct PointerInputInfo *a2)
{
  char v4; // bp
  char v5; // r14
  __int64 v6; // rdi
  char v7; // cl
  int *v8; // r8

  v4 = 0;
  v5 = 0;
  v6 = 0LL;
  *((_DWORD *)this + 6) = PointerManipulationHelper::GetKeyModifiers(a2);
  if ( *((_DWORD *)a2 + 79) )
  {
    do
    {
      v7 = *((_BYTE *)this + 52);
      v8 = (int *)((char *)a2 + 144 * v6 + 320);
      if ( v7 || v8[1] == *((_DWORD *)this + 10) )
      {
        v5 = 1;
        if ( !v7 )
          *(_QWORD *)this = _mm_unpacklo_ps(
                              (__m128)COERCE_UNSIGNED_INT((float)v8[8]),
                              (__m128)COERCE_UNSIGNED_INT((float)v8[9])).m128_u64[0];
        if ( (v8[3] & 4) != 0 )
          v4 = 1;
        BufferPointerPacketsInteractionContext(*((_QWORD *)this + 4), 1LL);
      }
      v6 = (unsigned int)(v6 + 1);
    }
    while ( (unsigned int)v6 < *((_DWORD *)a2 + 79) );
    if ( v5 && (int)ProcessBufferedPacketsInteractionContext(*((_QWORD *)this + 4)) < 0 )
      GestureTracker::ResetAndInitializeInteractionContext(this);
  }
  return v4;
}
