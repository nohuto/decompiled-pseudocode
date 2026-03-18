/*
 * XREFs of EditionWakeThreadForInput @ 0x14008FB70
 * Callers:
 *     <none>
 * Callees:
 *     ?WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z @ 0x14008FB9C (-WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z.c)
 */

void __fastcall EditionWakeThreadForInput(__int64 a1, unsigned int a2)
{
  WakeSomeone(*(struct tagQ **)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 16LL) + 472LL), 0LL, a2, 0LL);
}
