/*
 * XREFs of ?xxxImmUnloadLayout@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1402803B0
 * Callers:
 *     ?xxxImmUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@K@Z @ 0x140195E58 (-xxxImmUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@K@Z.c)
 *     ?xxxImmActivateAndUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@PEAUtagKL@@K@Z @ 0x14027FC08 (-xxxImmActivateAndUnloadThreadsLayout@@YAXPEAPEAUtagTHREADINFO@@IPEAUtagTLBLOCK@@PEAUtagKL@@K@Z.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 */

void __fastcall xxxImmUnloadLayout(struct tagTHREADINFO *a1, __int64 a2)
{
  struct tagTHREADINFO *v2; // rbx
  struct tagDRAWITEMSTRUCT *v3; // rdi
  struct tagTHREADINFO *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 UserSessionState; // rax
  __int64 v8; // rdx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+50h] [rbp-18h] BYREF
  __int64 v10; // [rsp+70h] [rbp+8h] BYREF

  v10 = 0LL;
  v2 = a1;
  v3 = (struct tagDRAWITEMSTRUCT *)(int)a2;
  if ( *((_QWORD *)a1 + 103) )
  {
    if ( *((_QWORD *)a1 + 60) )
    {
      if ( (_DWORD)a2 != 1
        || (a1 = *(struct tagTHREADINFO **)(W32GetUserSessionState(a1, a2) + 19928), (*(_DWORD *)a1 & 4) != 0)
        || (a1 = (struct tagTHREADINFO *)*(unsigned __int16 *)(*((_QWORD *)v2 + 60) + 42LL),
            LOWORD(a1) = (unsigned __int16)a1 & 0xF000,
            (_WORD)a1 == 0xE000) )
      {
        v4 = PtiCurrent((__int64)a1, a2);
        Win32HM_LockIntoThread<0>((__int64)v4, *((_QWORD *)v2 + 103), BugCheckParameter3);
        UserSessionState = W32GetUserSessionState(v6, v5);
        xxxSendTransformableMessageTimeout(
          *((struct tagTHREADINFO ***)v2 + 103),
          647LL,
          0x11uLL,
          v3,
          8u,
          *(_DWORD *)(UserSessionState + 69368),
          (unsigned __int64 *)&v10,
          1,
          0);
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v8);
      }
    }
  }
}
