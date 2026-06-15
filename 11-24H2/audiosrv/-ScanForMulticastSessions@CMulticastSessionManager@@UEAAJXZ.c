/*
 * XREFs of ?ScanForMulticastSessions@CMulticastSessionManager@@UEAAJXZ @ 0x180100B00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800271A0 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ @ 0x180027E54 (-GetSerialWorkQueue@@YAAEAVCSerialWorkQueue@@XZ.c)
 */

__int64 __fastcall CMulticastSessionManager::ScanForMulticastSessions(CMulticastSessionManager *this)
{
  struct CSerialWorkQueue *SerialWorkQueue; // rax
  int v3; // eax
  unsigned int v4; // ebx
  int v6[2]; // [rsp+20h] [rbp-48h] BYREF
  CMulticastSessionManager *v7; // [rsp+28h] [rbp-40h]
  int *v8; // [rsp+58h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  SerialWorkQueue = GetSerialWorkQueue();
  v7 = this;
  *(_QWORD *)v6 = &off_18017D5B8;
  v8 = v6;
  v3 = CSerialWorkQueue::QueueWorkItem((__int64)SerialWorkQueue, (__int64 *)v6);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD2,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\multicastsessionmanager.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
