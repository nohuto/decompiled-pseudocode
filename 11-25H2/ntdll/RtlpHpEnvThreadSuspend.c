/*
 * XREFs of RtlpHpEnvThreadSuspend @ 0x180033BC0
 * Callers:
 *     RtlpHpLfhPrivateSlotListCompact @ 0x180033990 (RtlpHpLfhPrivateSlotListCompact.c)
 * Callees:
 *     NtClose @ 0x180163400 (NtClose.c)
 *     ZwQueryInformationThread @ 0x1801636C0 (ZwQueryInformationThread.c)
 *     ZwResumeThread @ 0x180163C60 (ZwResumeThread.c)
 *     ZwGetContextThread @ 0x180165170 (ZwGetContextThread.c)
 *     ZwOpenThread @ 0x180165930 (ZwOpenThread.c)
 *     NtSuspendThread @ 0x180166BF0 (NtSuspendThread.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpHpEnvThreadSuspend(unsigned int a1, __int64 a2, HANDLE *a3, _DWORD *a4)
{
  int ContextThread; // ebx
  HANDLE Handle; // [rsp+30h] [rbp-D0h] BYREF
  int v10; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v11; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v12; // [rsp+48h] [rbp-B8h] BYREF
  int v13; // [rsp+50h] [rbp-B0h]
  int v14; // [rsp+54h] [rbp-ACh]
  _QWORD v15[2]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v16[3]; // [rsp+68h] [rbp-98h] BYREF
  int v17; // [rsp+80h] [rbp-80h]
  int v18; // [rsp+84h] [rbp-7Ch]
  __int128 v19; // [rsp+88h] [rbp-78h]
  _BYTE v20[1232]; // [rsp+A0h] [rbp-60h] BYREF

  Handle = 0LL;
  v18 = 0;
  v15[0] = 0LL;
  v16[1] = 0LL;
  v17 = 0;
  v16[2] = 0LL;
  v16[0] = 48LL;
  v15[1] = a1;
  v19 = 0LL;
  ContextThread = ZwOpenThread(&Handle, 2074LL, v16, v15);
  if ( ContextThread >= 0 )
  {
    ContextThread = NtSuspendThread(Handle, 0LL);
    if ( ContextThread >= 0 )
    {
      ContextThread = ZwGetContextThread(Handle, v20);
      if ( ContextThread >= 0 )
      {
        v11 = 0LL;
        v12 = &v11;
        v14 = 8;
        v13 = 6232;
        ContextThread = ZwQueryInformationThread(Handle, 58LL, &v12);
        if ( ContextThread >= 0 )
        {
          if ( v11 != a2 )
          {
            v10 = 0;
            ZwQueryInformationThread(Handle, 33LL, &v10);
            ContextThread = 0;
            *a3 = Handle;
            *a4 = BYTE2(v10);
            return (unsigned int)ContextThread;
          }
          ContextThread = -2147483631;
        }
      }
      ZwResumeThread(Handle, 0LL);
    }
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)ContextThread;
}
