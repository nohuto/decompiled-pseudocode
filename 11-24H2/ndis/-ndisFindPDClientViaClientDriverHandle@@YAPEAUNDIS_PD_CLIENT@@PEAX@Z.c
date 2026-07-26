/*
 * XREFs of ?ndisFindPDClientViaClientDriverHandle@@YAPEAUNDIS_PD_CLIENT@@PEAX@Z @ 0x14013C7B0
 * Callers:
 *     ?ndisOidPrePDCloseProvider@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14013CB50 (-ndisOidPrePDCloseProvider@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPrePDOpenProvider@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14013CEF0 (-ndisOidPrePDOpenProvider@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015F4B0 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015F730 (--1KLockHolder@@QEAA@XZ.c)
 */

KPushLockBase *__fastcall ndisFindPDClientViaClientDriverHandle(void *a1)
{
  KPushLockBase *v2; // rbx
  KPushLockBase *Value; // rdx
  KLockThisExclusive v5; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  KLockThisExclusive::KLockThisExclusive(&v5, qword_14011CF58);
  Value = (KPushLockBase *)qword_14011CF58[1].m_Lock.Value;
  while ( Value != &qword_14011CF58[1] )
  {
    v2 = Value;
    if ( Value[10].m_Lock.Ptr == a1 )
      break;
    Value = (KPushLockBase *)Value->m_Lock.Value;
    v2 = 0LL;
  }
  KLockHolder::~KLockHolder(&v5);
  return v2;
}
