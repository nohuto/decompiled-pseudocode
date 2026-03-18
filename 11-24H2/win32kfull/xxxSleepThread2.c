/*
 * XREFs of xxxSleepThread2 @ 0x140063CE4
 * Callers:
 *     xxxRealInternalGetMessage @ 0x140107DFC (xxxRealInternalGetMessage.c)
 *     xxxIsDragging @ 0x140109A1C (xxxIsDragging.c)
 *     xxxSleepThread @ 0x14010A09C (xxxSleepThread.c)
 *     xxxInterSendMsgEx @ 0x14011A1D0 (xxxInterSendMsgEx.c)
 *     xxxWaitMessageEx @ 0x14016DD60 (xxxWaitMessageEx.c)
 *     NtUserWaitMessage @ 0x14016DDD0 (NtUserWaitMessage.c)
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 *     NtUserRealWaitMessageEx @ 0x14029A6B0 (NtUserRealWaitMessageEx.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x140063D90 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     ?xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z @ 0x140064910 (-xxxUpdateInputHangInfo@@YAXPEAUtagWND@@W4INPUTHANGTIME@@@Z.c)
 */

__int64 __fastcall xxxSleepThread2(__int64 a1, __int64 a2, int a3, int a4, enum SLEEP_STATUS *a5)
{
  int v5; // edi
  unsigned int v8; // r14d
  unsigned int v9; // ebx
  unsigned int v10; // ebx

  v5 = 0;
  v8 = a2;
  v9 = a1;
  if ( (a1 & 7) == 7 || (a1 & 6) != 0 && *(_QWORD *)(*((_QWORD *)PtiCurrent(a1, a2) + 59) + 112LL) )
  {
    v5 = 1;
    xxxUpdateInputHangInfo(0LL, 0LL);
  }
  v10 = xxxRealSleepThread(v9, v8, a3, a4, a5);
  if ( v5 )
    xxxUpdateInputHangInfo(0LL, 1LL);
  return v10;
}
