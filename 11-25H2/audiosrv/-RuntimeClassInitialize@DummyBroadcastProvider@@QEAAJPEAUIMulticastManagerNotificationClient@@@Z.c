/*
 * XREFs of ?RuntimeClassInitialize@DummyBroadcastProvider@@QEAAJPEAUIMulticastManagerNotificationClient@@@Z @ 0x1800F7F08
 * Callers:
 *     ??$MakeAndInitialize@VDummyBroadcastProvider@@UIMulticastProvider@@AEAPEAUIMulticastManagerNotificationClient@@@Details@WRL@Microsoft@@YAJPEAPEAUIMulticastProvider@@AEAPEAUIMulticastManagerNotificationClient@@@Z @ 0x1800F65EC (--$MakeAndInitialize@VDummyBroadcastProvider@@UIMulticastProvider@@AEAPEAUIMulticastManagerNotif.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DummyBroadcastProvider::RuntimeClassInitialize(
        DummyBroadcastProvider *this,
        struct IMulticastManagerNotificationClient *a2)
{
  *((_QWORD *)this + 14) = a2;
  return 0LL;
}
