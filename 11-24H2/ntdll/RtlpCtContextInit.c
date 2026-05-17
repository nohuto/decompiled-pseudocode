/*
 * XREFs of RtlpCtContextInit @ 0x1801479E4
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x180147750 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     RtlpAllocateAtom @ 0x18000D2C0 (RtlpAllocateAtom.c)
 *     TpAllocWork @ 0x18001BE50 (TpAllocWork.c)
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x1800991AC (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 *     RtlpCtContextFree @ 0x180147998 (RtlpCtContextFree.c)
 *     ZwCreateEvent @ 0x180162590 (ZwCreateEvent.c)
 */

__int64 __fastcall RtlpCtContextInit(unsigned __int64 **a1, int a2)
{
  unsigned __int64 *Atom; // rbx
  int Event; // edi

  *a1 = 0LL;
  Atom = (unsigned __int64 *)RtlpAllocateAtom(24LL);
  if ( Atom )
  {
    *(_OWORD *)Atom = 0LL;
    Atom[2] = 0LL;
    Event = ZwCreateEvent(Atom + 2, 2031619LL, 0LL, 0LL, 0);
    if ( Event < 0
      || (Event = TpAllocWork(Atom, (__int64)RtlpRtlpCtWaitForWnfQuiescentWorker, (int)Atom, 0LL), Event < 0)
      || (Event = RtlpSubscribeWnfStateChangeNotificationInternal(
                    Atom + 1,
                    WNF_SEB_DEV_MNF_CUSTOM_NOTIFICATION_RECEIVED,
                    a2,
                    (int)RtlpRtlpCtSelfSubscribeCallback,
                    (__int64)Atom,
                    0LL,
                    0,
                    4,
                    17),
          Event < 0) )
    {
      RtlpCtContextFree(Atom);
    }
    else
    {
      *a1 = Atom;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Event;
}
