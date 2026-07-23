/*
 * XREFs of EtwTiLogSuspendResumeProcess @ 0x140A5A3D4
 * Callers:
 *     PsMultiResumeProcess @ 0x140455C30 (PsMultiResumeProcess.c)
 *     PsThawMultiProcess @ 0x1404E6564 (PsThawMultiProcess.c)
 *     PsSuspendProcess @ 0x140A0CD70 (PsSuspendProcess.c)
 *     PsFreezeProcess @ 0x140ACF964 (PsFreezeProcess.c)
 * Callees:
 *     EtwProviderEnabled @ 0x140262770 (EtwProviderEnabled.c)
 *     EtwpTiFillProcessIdentity @ 0x1402633C0 (EtwpTiFillProcessIdentity.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     EtwpTiFillThreadIdentity @ 0x14045F510 (EtwpTiFillThreadIdentity.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall EtwTiLogSuspendResumeProcess(int a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v7; // rsi
  int v8; // ebx
  int v9; // ebx
  __int64 *v10; // rbx
  int v11; // eax
  int v12; // eax
  int v13; // r9d
  int v14; // eax
  int v15; // r9d
  unsigned __int64 v16; // [rsp+30h] [rbp-128h] BYREF
  unsigned __int64 v17; // [rsp+38h] [rbp-120h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-118h] BYREF
  _QWORD v19[28]; // [rsp+50h] [rbp-108h] BYREF
  int v20; // [rsp+160h] [rbp+8h] BYREF

  if ( a1 >= 0 )
  {
    v20 = a1;
    if ( KeGetCurrentThread()->PreviousMode == 1 )
    {
      if ( EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0xC00000uLL) )
      {
        v7 = *(_QWORD *)(a2 + 544);
        if ( a4 )
        {
          v8 = a4 - 1;
          if ( v8 )
          {
            v9 = v8 - 1;
            if ( v9 )
            {
              if ( v9 != 1 )
                return;
              v10 = THREATINT_THAW_PROCESS;
            }
            else
            {
              v10 = (__int64 *)&THREATINT_FREEZE_PROCESS;
            }
          }
          else
          {
            v10 = THREATINT_RESUME_PROCESS;
          }
        }
        else
        {
          v10 = THREATINT_SUSPEND_PROCESS;
        }
        if ( EtwEventEnabled(EtwThreatIntProvRegHandle, (PCEVENT_DESCRIPTOR)v10) )
        {
          UserData.Reserved = 0;
          UserData.Ptr = (ULONGLONG)&v20;
          UserData.Size = 4;
          v11 = EtwpTiFillProcessIdentity(v19, v7, &v16);
          v12 = EtwpTiFillThreadIdentity((__int64)(&UserData + (unsigned int)(v11 + 1)), a2);
          v14 = EtwpTiFillProcessIdentity(&UserData.Ptr + 2 * (unsigned int)(v12 + v13), a3, &v17);
          EtwWrite(EtwThreatIntProvRegHandle, (PCEVENT_DESCRIPTOR)v10, 0LL, v14 + v15, &UserData);
        }
      }
    }
  }
}
