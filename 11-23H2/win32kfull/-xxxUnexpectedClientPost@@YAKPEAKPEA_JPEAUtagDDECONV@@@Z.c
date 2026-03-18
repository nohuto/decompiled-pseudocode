/*
 * XREFs of ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FA5B8
 * Callers:
 *     ?xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F9890 (-xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxDDETrackPostHook @ 0x1C01FAA84 (xxxDDETrackPostHook.c)
 * Callees:
 *     ?AbnormalDDEPost@@YAKPEAUtagDDECONV@@K@Z @ 0x1C01F8D1C (-AbnormalDDEPost@@YAKPEAUtagDDECONV@@K@Z.c)
 *     ?AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C01F8F78 (-AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?SpontaneousTerminate@@YAKPEAKPEAUtagDDECONV@@@Z @ 0x1C01F93F0 (-SpontaneousTerminate@@YAKPEAKPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdvise@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F9500 (-xxxAdvise@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxExecute@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F9C5C (-xxxExecute@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FA044 (-xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxClientFreeDDEHandle @ 0x1C0211E90 (xxxClientFreeDDEHandle.c)
 */

__int64 __fastcall xxxUnexpectedClientPost(unsigned int *a1, void **a2, struct tagDDECONV *a3)
{
  unsigned int (*v4)(unsigned int *, __int64 *, struct tagDDECONV *); // rdx

  switch ( *a1 )
  {
    case 0x3E1u:
      return SpontaneousTerminate(a1, a3);
    case 0x3E2u:
      return xxxAdvise(a1, a2, (struct tagDDECONV **)a3);
    case 0x3E3u:
      v4 = (unsigned int (*)(unsigned int *, __int64 *, struct tagDDECONV *))xxxUnadviseAck;
      return AnticipatePost(*((struct tagDDECONV **)a3 + 4), v4, 0LL, 0LL, 0LL, 0) != 0LL ? 2 : 0;
    case 0x3E4u:
      xxxClientFreeDDEHandle(*a2, 1LL);
      return 3LL;
    case 0x3E5u:
      return AbnormalDDEPost(a3, *a1);
    case 0x3E6u:
      v4 = (unsigned int (*)(unsigned int *, __int64 *, struct tagDDECONV *))xxxRequestAck;
      return AnticipatePost(*((struct tagDDECONV **)a3 + 4), v4, 0LL, 0LL, 0LL, 0) != 0LL ? 2 : 0;
    case 0x3E7u:
      return xxxPoke(a1, a2, a3);
    case 0x3E8u:
      return xxxExecute(a1, a2, a3);
  }
  return 0LL;
}
