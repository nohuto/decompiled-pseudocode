/*
 * XREFs of PsSetProcessTelemetryAppState @ 0x1409394B0
 * Callers:
 *     PspExitProcess @ 0x1409387A0 (PspExitProcess.c)
 *     DbgkForwardException @ 0x140938C20 (DbgkForwardException.c)
 *     EtwpPsProvProcessEnumCallback @ 0x14093A830 (EtwpPsProvProcessEnumCallback.c)
 *     PsSetProcessFaultInformation @ 0x14093B330 (PsSetProcessFaultInformation.c)
 * Callees:
 *     PspLockProcessExclusive @ 0x14045AB10 (PspLockProcessExclusive.c)
 *     PspUnlockProcessExclusive @ 0x140462E74 (PspUnlockProcessExclusive.c)
 *     PsGetProcessDeepFreezeStats @ 0x14093961C (PsGetProcessDeepFreezeStats.c)
 *     EtwTraceAppStateChange @ 0x14094C00C (EtwTraceAppStateChange.c)
 */

__int64 __fastcall PsSetProcessTelemetryAppState(PRKPROCESS PROCESS, int a2)
{
  struct _KTHREAD *CurrentThread; // r12
  __int64 v5; // r13
  unsigned int v6; // esi
  unsigned __int64 v7; // r14
  unsigned __int64 ReadyTime; // rcx
  __int64 v9; // r15
  __int128 v11; // [rsp+20h] [rbp-60h] BYREF
  __int128 v12; // [rsp+30h] [rbp-50h]
  __int64 v13; // [rsp+40h] [rbp-40h]
  __int64 v14; // [rsp+48h] [rbp-38h]
  unsigned __int64 UserTime; // [rsp+50h] [rbp-30h]
  __int64 v16; // [rsp+58h] [rbp-28h]
  unsigned __int64 v17; // [rsp+60h] [rbp-20h]
  __int64 v18; // [rsp+68h] [rbp-18h]
  int v19; // [rsp+70h] [rbp-10h]
  int v20; // [rsp+74h] [rbp-Ch]

  CurrentThread = KeGetCurrentThread();
  UserTime = 0LL;
  v11 = 0LL;
  v16 = 0LL;
  v12 = 0LL;
  v19 = 0;
  do
  {
    PsGetProcessDeepFreezeStats(PROCESS, &v11);
    v5 = *((_QWORD *)&v11 + 1);
    v6 = 0;
    v7 = *((_QWORD *)&v11 + 1) - v12 - (unsigned __int64)PROCESS[3].SchedulingGroup;
    PspLockProcessExclusive((__int64)PROCESS, (__int64)CurrentThread);
    ReadyTime = PROCESS[3].ReadyTime;
    v9 = v11;
    if ( ReadyTime >> 61 != 3 && PROCESS[3].UserTime <= (unsigned __int64)v11 )
    {
      UserTime = PROCESS[3].UserTime;
      v19 = ReadyTime >> 61;
      v16 = ReadyTime & 0x1FFFFFFFFFFFFFFFLL;
      if ( a2 == 5 && ReadyTime >> 61 == 1 )
        a2 = 6;
      v6 = 1;
      PROCESS[3].UserTime = v11;
      PROCESS[3].ReadyTime = v7 ^ (v7 ^ ((__int64)a2 << 61)) & 0xE000000000000000uLL;
    }
    PspUnlockProcessExclusive((__int64)PROCESS);
  }
  while ( PROCESS[3].ReadyTime >> 61 != 3 && !v6 );
  if ( v6 )
  {
    v18 = v12;
    v13 = v9;
    v14 = v5;
    v17 = v7;
    v20 = a2;
    EtwTraceAppStateChange(PROCESS);
  }
  return v6;
}
