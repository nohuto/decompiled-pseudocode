/*
 * XREFs of ?xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z @ 0x1401D6118
 * Callers:
 *     xxxClientShutdown @ 0x1401D608C (xxxClientShutdown.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x140042064 (xxxSendTransformableMessageTimeout.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x1400616D0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140076C10 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDDq @ 0x1401C2F30 (WPP_RECORDER_AND_TRACE_SF_DDDq.c)
 *     DestroyWindowsTimers @ 0x14023E90C (DestroyWindowsTimers.c)
 */

__int64 __fastcall xxxClientShutdown2(struct tagBWL *a1, __int64 a2, int a3)
{
  int v4; // r13d
  __int64 v6; // rdx
  struct tagDRAWITEMSTRUCT *v7; // r15
  __int64 v8; // r12
  __int64 v9; // rbp
  __int64 *i; // r14
  struct tagTHREADINFO **v11; // rbx
  bool v12; // di
  bool v13; // si
  __int64 UserSessionState; // rax
  int v15; // r8d
  int v16; // edx
  unsigned __int64 v17; // r8
  __int64 v18; // rdx
  int v20; // [rsp+20h] [rbp-78h]
  int v21; // [rsp+28h] [rbp-70h]
  int v22; // [rsp+30h] [rbp-68h]
  int v23; // [rsp+38h] [rbp-60h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+60h] [rbp-38h] BYREF
  struct tagTHREADINFO *v25; // [rsp+A0h] [rbp+8h]

  v4 = a2;
  v25 = PtiCurrent((__int64)a1, a2);
  v7 = (struct tagDRAWITEMSTRUCT *)(a3 & 0xC0000001);
  v8 = a3 & 0x108;
  v9 = a3 & 0x100;
  for ( i = (__int64 *)((char *)a1 + 32); *i != 1; ++i )
  {
    LOBYTE(v6) = 1;
    v11 = (struct tagTHREADINFO **)HMValidateHandleNoSecure(*i, v6);
    if ( v11 )
    {
      v12 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x400) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 4u;
      v13 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v12 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(&WPP_GLOBAL_Control, v6);
        LOBYTE(v15) = v13;
        LOBYTE(v16) = v12;
        WPP_RECORDER_AND_TRACE_SF_DDDq(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
          v16,
          v15,
          *(_QWORD *)(UserSessionState + 69416),
          v20,
          v21,
          v22,
          v23,
          v4,
          v9,
          (char)v7,
          (char)v11);
      }
      Win32HM_LockIntoThread<0>((__int64)v25, (__int64)v11, BugCheckParameter3);
      v17 = 0LL;
      if ( v4 == 17 )
      {
        if ( !xxxSendTransformableMessageTimeout(v11, 17LL, 0LL, v7, 0, 0, 0LL, 1, 1) )
        {
          Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v18);
          return 3LL;
        }
      }
      else
      {
        LOBYTE(v17) = v9 != 0;
        xxxSendTransformableMessageTimeout(v11, 22LL, v17, v7, 0, 0, 0LL, 1, 1);
        if ( v8 == 264 )
          DestroyWindowsTimers(v11);
      }
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v18);
    }
  }
  return 1LL;
}
