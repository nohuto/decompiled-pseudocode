/*
 * XREFs of ApiSetEditionSynthesizeMouseWheel @ 0x1C0207988
 * Callers:
 *     ?xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1C01E1050 (-xxxDownlevelInput@CPTPProcessor@@CAJPEBUCPointerInputFrame@@AEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall ApiSetEditionSynthesizeMouseWheel(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5))(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0296CA0;
  if ( qword_1C0296CA0 )
  {
    result = (__int64 (*)(void))qword_1C0296CA0();
    if ( (int)result >= 0 )
    {
      result = (__int64 (*)(void))qword_1C0296CA8;
      if ( qword_1C0296CA8 )
        return (__int64 (*)(void))qword_1C0296CA8(a1, a2, a3, a4, a5);
    }
  }
  return result;
}
