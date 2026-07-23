/*
 * XREFs of EtwTiLogSuspendResumeThread @ 0x140A0D004
 * Callers:
 *     PsMultiResumeThread @ 0x140455D04 (PsMultiResumeThread.c)
 *     PsSuspendThread @ 0x140A0CF10 (PsSuspendThread.c)
 * Callees:
 *     EtwProviderEnabled @ 0x140262770 (EtwProviderEnabled.c)
 *     EtwpTiFillProcessIdentity @ 0x1402633C0 (EtwpTiFillProcessIdentity.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     EtwpTiFillThreadIdentity @ 0x14045F510 (EtwpTiFillThreadIdentity.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall EtwTiLogSuspendResumeThread(int a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v7; // r15
  const EVENT_DESCRIPTOR *v8; // rbx
  int v9; // eax
  int v10; // eax
  int v11; // r9d
  int v12; // eax
  int v13; // r9d
  int v14; // eax
  int v15; // r9d
  unsigned __int64 v16; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v19[32]; // [rsp+50h] [rbp-B0h] BYREF
  int v20; // [rsp+190h] [rbp+90h] BYREF

  if ( a1 >= 0 )
  {
    v20 = a1;
    if ( KeGetCurrentThread()->PreviousMode == 1 )
    {
      if ( EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x300000uLL) )
      {
        v7 = *(_QWORD *)(a2 + 544);
        v8 = (const EVENT_DESCRIPTOR *)THREATINT_SUSPEND_THREAD;
        if ( !a4 )
          v8 = &THREATINT_RESUME_THREAD;
        if ( EtwEventEnabled(EtwThreatIntProvRegHandle, v8) )
        {
          UserData.Reserved = 0;
          UserData.Ptr = (ULONGLONG)&v20;
          UserData.Size = 4;
          v9 = EtwpTiFillProcessIdentity(v19, v7, &v16);
          v10 = EtwpTiFillThreadIdentity((__int64)(&UserData + (unsigned int)(v9 + 1)), a2);
          v12 = EtwpTiFillProcessIdentity(&UserData.Ptr + 2 * (unsigned int)(v10 + v11), *(_QWORD *)(a3 + 544), &v17);
          v14 = EtwpTiFillThreadIdentity((__int64)(&UserData + (unsigned int)(v12 + v13)), a3);
          EtwWrite(EtwThreatIntProvRegHandle, v8, 0LL, v14 + v15, &UserData);
        }
      }
    }
  }
}
