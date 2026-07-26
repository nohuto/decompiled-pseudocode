/*
 * XREFs of TrackNblContextVerifierFailure @ 0x1400AAB20
 * Callers:
 *     NdisFSendNetBufferLists @ 0x14001FCC0 (NdisFSendNetBufferLists.c)
 *     NdisSendNetBufferLists @ 0x140031410 (NdisSendNetBufferLists.c)
 *     NdisFIndicateReceiveNetBufferLists @ 0x140033A40 (NdisFIndicateReceiveNetBufferLists.c)
 *     ?ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x140039CC0 (-ndisMIndicateNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisAddNblContextTerminator@@YAPEAU_NET_BUFFER_LIST@@PEAPEAU1@PEAKPEAU_NDIS_OBJECT_HEADER@@@Z @ 0x14008E9C0 (-ndisAddNblContextTerminator@@YAPEAU_NET_BUFFER_LIST@@PEAPEAU1@PEAKPEAU_NDIS_OBJECT_HEADER@@@Z.c)
 * Callees:
 *     ??1KAcquireSpinLock@@QEAA@XZ @ 0x140069420 (--1KAcquireSpinLock@@QEAA@XZ.c)
 */

void __fastcall TrackNblContextVerifierFailure(__int64 a1, __int64 a2)
{
  KIRQL v4; // al
  LARGE_INTEGER PerformanceCounter; // rax
  KAcquireSpinLock v6; // [rsp+20h] [rbp-18h] BYREF

  v6.m_lock = (KSpinLockBase *)&qword_1401268D0;
  v4 = KeAcquireSpinLockRaiseToDpc(&qword_1401268D0);
  ++dword_1401268D8;
  v6.m_oldIrql = v4;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  qword_1401268E8 = a2;
  qword_1401268E0 = PerformanceCounter.QuadPart;
  qword_1401268F0 = a1;
  KAcquireSpinLock::~KAcquireSpinLock(&v6);
}
