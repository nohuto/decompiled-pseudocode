/*
 * XREFs of ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1402AFCE4
 * Callers:
 *     ?xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1402B0050 (-xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1402B0300 (-xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxDupConvTerminate@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1402B0680 (-xxxDupConvTerminate@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1402B07D0 (-xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1402B0B20 (-xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1402B0BF0 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnadviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1402B0E90 (-xxxUnadviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxFreeDdeConv @ 0x1402B1314 (xxxFreeDdeConv.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x140061700 (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ @ 0x140183234 (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ.c)
 *     FreeDdeXact @ 0x140269EC0 (FreeDdeXact.c)
 */

void __fastcall PopState(struct tagDDECONV *a1, __int64 a2)
{
  _QWORD *v2; // rdi
  __int64 v4; // rbx
  struct tagTHREADINFO *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  char *v9; // rcx
  __int64 v10; // rdx
  struct _HEAD *v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+28h] [rbp-20h]
  ULONG_PTR BugCheckParameter3[3]; // [rsp+30h] [rbp-18h] BYREF

  v2 = (_QWORD *)((char *)a1 + 56);
  v4 = *((_QWORD *)a1 + 7);
  v5 = PtiCurrent((__int64)a1, a2);
  Win32HM_LockIntoThread<0>((__int64)v5, v4, BugCheckParameter3);
  v6 = *v2;
  v13 = v2;
  v14 = *(_QWORD *)(v6 + 24);
  v7 = v14;
  v8 = HMAssignmentLock(&v13, 0LL);
  v9 = (char *)a1 + 64;
  if ( v7 )
    v9 = (char *)(v8 + 24);
  HMAssignmentUnlock(v9);
  v11 = (struct _HEAD *)Win32HMThreadLockBase<tagMENU,0,1>::ManualUnlock<void>(BugCheckParameter3, v10);
  if ( v11 )
    FreeDdeXact(v11);
  Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3, v12);
}
