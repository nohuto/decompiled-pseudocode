/*
 * XREFs of EditionPostRitSound @ 0x140264B40
 * Callers:
 *     <none>
 * Callees:
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140118D30 (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 */

__int64 __fastcall EditionPostRitSound(__int64 a1, LARGE_INTEGER a2, __int64 a3)
{
  DWORD v5; // esi
  struct tagQ **v6; // rcx

  v5 = a1;
  v6 = *(struct tagQ ***)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(((__int64 (__fastcall *)(_QWORD, _QWORD))W32GetUserSessionState)(
                                                                a1,
                                                                (LARGE_INTEGER)a2.QuadPart)
                                                            + 19200)
                                                + 40LL)
                                    + 56LL)
                        + 16LL);
  return PostEventMessageEx((struct tagTHREADINFO *)v6, v6[59], 0xEu, 0LL, v5, a2, a3, 0LL);
}
