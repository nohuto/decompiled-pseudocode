/*
 * XREFs of TrackNblContextVerifierFailure @ 0x1400A2970
 * Callers:
 *     NdisFSendNetBufferLists @ 0x1400192A0 (NdisFSendNetBufferLists.c)
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x14001A8A0 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     NdisFIndicateReceiveNetBufferLists @ 0x140025990 (NdisFIndicateReceiveNetBufferLists.c)
 *     NdisSendNetBufferLists @ 0x140027C10 (NdisSendNetBufferLists.c)
 *     ?ndisAddNblContextTerminator@@YAPEAU_NET_BUFFER_LIST@@PEAPEAU1@PEAKPEAU_NDIS_OBJECT_HEADER@@@Z @ 0x140072EC0 (-ndisAddNblContextTerminator@@YAPEAU_NET_BUFFER_LIST@@PEAPEAU1@PEAKPEAU_NDIS_OBJECT_HEADER@@@Z.c)
 * Callees:
 *     ??1KAcquireSpinLock@@QEAA@XZ @ 0x14004DC50 (--1KAcquireSpinLock@@QEAA@XZ.c)
 */

void __fastcall TrackNblContextVerifierFailure(__int64 a1, __int64 a2)
{
  KIRQL v4; // al
  LARGE_INTEGER PerformanceCounter; // rax
  KAcquireSpinLock v6; // [rsp+20h] [rbp-18h] BYREF

  v6.m_lock = (KSpinLockBase *)&qword_14011C890;
  v4 = KeAcquireSpinLockRaiseToDpc(&qword_14011C890);
  ++dword_14011C898;
  v6.m_oldIrql = v4;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  qword_14011C8A8 = a2;
  qword_14011C8A0 = PerformanceCounter.QuadPart;
  qword_14011C8B0 = a1;
  KAcquireSpinLock::~KAcquireSpinLock(&v6);
}
