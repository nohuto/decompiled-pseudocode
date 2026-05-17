/*
 * XREFs of RtlpPageHeapStop @ 0x180133B74
 * Callers:
 *     RtlApplicationVerifierStop @ 0x180133AD0 (RtlApplicationVerifierStop.c)
 * Callees:
 *     DbgPrint @ 0x1800586D0 (DbgPrint.c)
 */

void __fastcall __noreturn RtlpPageHeapStop(
        const void *a1,
        const char *a2,
        const void *a3,
        const char *a4,
        const void *a5,
        const char *a6,
        const void *a7,
        const char *a8,
        const void *a9,
        const char *a10)
{
  __int128 v10; // xmm1
  __int64 v11; // xmm0_8

  v10 = xmmword_1801D6E70;
  AVrfpPageHeapPreviousStopData = AVrfpPageHeapStopData;
  v11 = qword_1801D6E80;
  qword_1801D6E80 = (__int64)a9;
  *(_QWORD *)&AVrfpPageHeapStopData = a1;
  *((_QWORD *)&xmmword_1801D6E70 + 1) = a7;
  xmmword_1801D6530 = v10;
  *((_QWORD *)&AVrfpPageHeapStopData + 1) = a3;
  qword_1801D6540 = v11;
  *(_QWORD *)&xmmword_1801D6E70 = a5;
  DbgPrint(
    "\n"
    "\n"
    "===========================================================\n"
    "VERIFIER STOP %p: pid 0x%X: %s \n"
    "\n"
    "\t%p : %s\n"
    "\t%p : %s\n"
    "\t%p : %s\n"
    "\t%p : %s\n"
    "===========================================================\n"
    "\n",
    a1,
    NtCurrentTeb()->ClientId.UniqueProcess,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9,
    a10);
  __debugbreak();
}
