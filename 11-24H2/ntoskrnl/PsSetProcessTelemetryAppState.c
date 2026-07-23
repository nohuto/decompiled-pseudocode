/*
 * XREFs of PsSetProcessTelemetryAppState @ 0x1408F3B80
 * Callers:
 *     PspExitProcess @ 0x1408F2E70 (PspExitProcess.c)
 *     DbgkForwardException @ 0x1408F32F0 (DbgkForwardException.c)
 *     PsSetProcessFaultInformation @ 0x140A55880 (PsSetProcessFaultInformation.c)
 *     EtwpPsProvProcessEnumCallback @ 0x140A56950 (EtwpPsProvProcessEnumCallback.c)
 * Callees:
 *     PspLockProcessExclusive @ 0x14044FF38 (PspLockProcessExclusive.c)
 *     PspUnlockProcessExclusive @ 0x140458484 (PspUnlockProcessExclusive.c)
 *     EtwTraceAppStateChange @ 0x1408F057C (EtwTraceAppStateChange.c)
 *     PsGetProcessDeepFreezeStats @ 0x1408F3CEC (PsGetProcessDeepFreezeStats.c)
 */

__int64 __fastcall PsSetProcessTelemetryAppState(struct _EX_RUNDOWN_REF *PROCESS, int a2)
{
  struct _KTHREAD *CurrentThread; // r12
  __int64 v5; // r13
  unsigned int v6; // esi
  unsigned __int64 v7; // r14
  unsigned __int64 Count; // rcx
  __int64 v9; // r15
  __int128 v11; // [rsp+20h] [rbp-60h] BYREF
  __int128 v12; // [rsp+30h] [rbp-50h]
  _QWORD v13[2]; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v14; // [rsp+50h] [rbp-30h]
  __int64 v15; // [rsp+58h] [rbp-28h]
  unsigned __int64 v16; // [rsp+60h] [rbp-20h]
  __int64 v17; // [rsp+68h] [rbp-18h]
  int v18; // [rsp+70h] [rbp-10h]
  int v19; // [rsp+74h] [rbp-Ch]

  CurrentThread = KeGetCurrentThread();
  v14 = 0LL;
  v11 = 0LL;
  v15 = 0LL;
  v12 = 0LL;
  v18 = 0;
  do
  {
    PsGetProcessDeepFreezeStats(PROCESS, &v11);
    v5 = *((_QWORD *)&v11 + 1);
    v6 = 0;
    v7 = *((_QWORD *)&v11 + 1) - v12 - PROCESS[209].Count;
    PspLockProcessExclusive((__int64)PROCESS, (__int64)CurrentThread);
    Count = PROCESS[212].Count;
    v9 = v11;
    if ( Count >> 61 != 3 && PROCESS[211].Count <= (unsigned __int64)v11 )
    {
      v14 = PROCESS[211].Count;
      v18 = Count >> 61;
      v15 = Count & 0x1FFFFFFFFFFFFFFFLL;
      if ( a2 == 5 && Count >> 61 == 1 )
        a2 = 6;
      v6 = 1;
      PROCESS[211].Count = v11;
      PROCESS[212].Count = v7 ^ (v7 ^ ((__int64)a2 << 61)) & 0xE000000000000000uLL;
    }
    PspUnlockProcessExclusive((__int64)PROCESS);
  }
  while ( PROCESS[212].Count >> 61 != 3 && !v6 );
  if ( v6 )
  {
    v17 = v12;
    v13[0] = v9;
    v13[1] = v5;
    v16 = v7;
    v19 = a2;
    EtwTraceAppStateChange(PROCESS, (__int64)v13);
  }
  return v6;
}
