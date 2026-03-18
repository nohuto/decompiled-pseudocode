/*
 * XREFs of ApiSetEditionDelQEntry @ 0x1C00C97FC
 * Callers:
 *     HandleDeferredInput @ 0x1C00074D0 (HandleDeferredInput.c)
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C01BD524 (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall ApiSetEditionDelQEntry(__int64 a1, __int64 a2))(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0296AD0;
  if ( qword_1C0296AD0 )
  {
    result = (__int64 (*)(void))qword_1C0296AD0();
    if ( (int)result >= 0 )
    {
      result = (__int64 (*)(void))qword_1C0296AD8;
      if ( qword_1C0296AD8 )
        return (__int64 (*)(void))qword_1C0296AD8(a1, a2, 1LL);
    }
  }
  return result;
}
