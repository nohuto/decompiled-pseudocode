/*
 * XREFs of EtwTiLogSetContextThread @ 0x140A1AB28
 * Callers:
 *     PspWow64SetContextThread @ 0x1408EA8C4 (PspWow64SetContextThread.c)
 *     PspSetContextThreadInternal @ 0x14091FB00 (PspSetContextThreadInternal.c)
 * Callees:
 *     EtwProviderEnabled @ 0x140262770 (EtwProviderEnabled.c)
 *     EtwpTiVadQueryEventWrite @ 0x140262ED4 (EtwpTiVadQueryEventWrite.c)
 *     EtwpTiFillProcessIdentity @ 0x1402633C0 (EtwpTiFillProcessIdentity.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwpTiFillThreadIdentity @ 0x14045F510 (EtwpTiFillThreadIdentity.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     EtwpTiParseContextRecord @ 0x140A1AD98 (EtwpTiParseContextRecord.c)
 */

char __fastcall EtwTiLogSetContextThread(char a1, __int64 a2, __int64 a3, unsigned int a4)
{
  struct _KTHREAD *CurrentThread; // rax
  char v8; // bl
  __int64 v9; // r15
  __int64 Process; // rdi
  const EVENT_DESCRIPTOR *EventDescriptor; // r14
  int v12; // eax
  int v13; // eax
  int v14; // r9d
  int v15; // eax
  int v16; // r9d
  int v17; // eax
  int v18; // r9d
  __int64 v19; // rsi
  unsigned int v20; // edi
  __int64 v21; // rsi
  char v22; // dl
  __int64 v23; // rcx
  __int64 v24; // rax
  __int16 v25; // ax
  __int64 *v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int16 v31; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v32; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v33; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[38]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v35[12]; // [rsp+2C0h] [rbp+1C0h] BYREF
  unsigned int v36; // [rsp+388h] [rbp+288h] BYREF

  v36 = a4;
  LOBYTE(CurrentThread) = EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0xC000uLL);
  v8 = 0;
  if ( (_BYTE)CurrentThread )
  {
    CurrentThread = KeGetCurrentThread();
    v9 = *(_QWORD *)(a2 + 544);
    Process = (__int64)CurrentThread->ApcState.Process;
    if ( Process != v9 )
    {
      EventDescriptor = (const EVENT_DESCRIPTOR *)THREATINT_SETTHREADCONTEXT_REMOTE_KERNEL_CALLER;
      if ( a1 )
        EventDescriptor = &THREATINT_SETTHREADCONTEXT_REMOTE;
      LOBYTE(CurrentThread) = EtwEventEnabled(EtwThreatIntProvRegHandle, EventDescriptor);
      if ( (_BYTE)CurrentThread )
      {
        v12 = EtwpTiFillProcessIdentity(UserData, Process, &v32);
        v13 = EtwpTiFillThreadIdentity((__int64)&UserData[v12], (__int64)KeGetCurrentThread());
        v15 = EtwpTiFillProcessIdentity(&UserData[v13 + v14].Ptr, v9, &v33);
        v17 = EtwpTiFillThreadIdentity((__int64)&UserData[v15 + v16], a2);
        v19 = (unsigned int)(v17 + v18);
        v20 = v19 + 1;
        v21 = v19;
        if ( EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x4000000uLL) )
        {
          v25 = EtwpTiParseContextRecord(v35, v36, a3);
          v26 = v35;
          v27 = v20;
          v31 = v25;
          v22 = v25;
          *(_QWORD *)&UserData[v21].Size = 4LL;
          ++v20;
          UserData[v21].Ptr = (ULONGLONG)&v36;
          UserData[v27].Ptr = (ULONGLONG)&v31;
          *(_QWORD *)&UserData[v27].Size = 2LL;
          v28 = 12LL;
          do
          {
            v29 = v20++;
            v29 *= 2LL;
            *(&UserData[0].Ptr + v29) = (ULONGLONG)v26++;
            *((_QWORD *)&UserData[0].Size + v29) = 8LL;
            --v28;
          }
          while ( v28 );
        }
        else
        {
          v31 = 0;
          UserData[v21].Ptr = (ULONGLONG)&qword_14001A228;
          v22 = 0;
          *(_QWORD *)&UserData[v21].Size = 2LL;
          v23 = 12LL;
          do
          {
            v24 = v20++;
            v24 *= 2LL;
            *(&UserData[0].Ptr + v24) = (ULONGLONG)&qword_14001A228;
            *((_QWORD *)&UserData[0].Size + v24) = 8LL;
            --v23;
          }
          while ( v23 );
        }
        if ( (v22 & 1) != 0 && EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0x8000000uLL) )
          v8 = 1;
        LOBYTE(CurrentThread) = EtwpTiVadQueryEventWrite(UserData, 38, v20, v9, (__int64)v35, 1u, EventDescriptor, v8);
      }
    }
  }
  return (char)CurrentThread;
}
