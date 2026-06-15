/*
 * XREFs of ??0DummyBroadcastProvider@@QEAA@XZ @ 0x1800F67CC
 * Callers:
 *     ??$MakeAndInitialize@VDummyBroadcastProvider@@UIMulticastProvider@@AEAPEAUIMulticastManagerNotificationClient@@@Details@WRL@Microsoft@@YAJPEAPEAUIMulticastProvider@@AEAPEAUIMulticastManagerNotificationClient@@@Z @ 0x1800F65EC (--$MakeAndInitialize@VDummyBroadcastProvider@@UIMulticastProvider@@AEAPEAUIMulticastManagerNotif.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIMulticastProvider@@@WRL@Microsoft@@QEAA@XZ @ 0x1800DEDF4 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIMulticastProvider@@@WRL@Microsoft@@Q.c)
 */

DummyBroadcastProvider *__fastcall DummyBroadcastProvider::DummyBroadcastProvider(DummyBroadcastProvider *this)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMulticastProvider>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMulticastProvider>((__int64)this);
  *((_BYTE *)this + 16) = 1;
  *(_QWORD *)this = &DummyBroadcastProvider::`vftable';
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 24), 0, 0);
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  return this;
}
