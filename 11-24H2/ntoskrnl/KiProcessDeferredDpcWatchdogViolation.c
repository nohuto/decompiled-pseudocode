/*
 * XREFs of KiProcessDeferredDpcWatchdogViolation @ 0x14033A484
 * Callers:
 *     KiCallInterruptServiceRoutine @ 0x14033B0A0 (KiCallInterruptServiceRoutine.c)
 * Callees:
 *     VslKernelShadowStackAssist @ 0x140265240 (VslKernelShadowStackAssist.c)
 */

void (__fastcall __noreturn *__fastcall KiProcessDeferredDpcWatchdogViolation(__int64 a1))()
{
  void (__fastcall __noreturn *result)(); // rax

  KiDeferredDpcWatchdogActivePrcb = 1LL;
  KiInjectedMachineFrame = 0LL;
  xmmword_140F0FB70 = 0LL;
  xmmword_140F0FB80 = 0LL;
  LOWORD(xmmword_140F0FB80) = *(_WORD *)(a1 + 392);
  *((_QWORD *)&xmmword_140F0FB70 + 1) = *(_QWORD *)(a1 + 384);
  LODWORD(xmmword_140F0FB70) = *(_DWORD *)(a1 + 376);
  WORD4(KiInjectedMachineFrame) = *(_WORD *)(a1 + 368);
  *(_QWORD *)&KiInjectedMachineFrame = *(_QWORD *)(a1 + 360);
  *((_QWORD *)&xmmword_140F0FB80 + 1) = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 56) = &KiInjectedMachineFrame;
  result = KiDeferredDpcWatchdogViolation;
  *(_QWORD *)(a1 + 360) = KiDeferredDpcWatchdogViolation;
  if ( (_BYTE)KiKernelCetEnabled )
    return (void (__fastcall __noreturn *)())VslKernelShadowStackAssist(
                                               3,
                                               *(_QWORD *)(a1 + 216),
                                               0LL,
                                               0LL,
                                               (__int64)KiDeferredDpcWatchdogViolation,
                                               4);
  return result;
}
