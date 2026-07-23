/*
 * XREFs of PopSendSessionInfo @ 0x1409A02DC
 * Callers:
 *     PopAdaptivePowerSettingCallback @ 0x14075E310 (PopAdaptivePowerSettingCallback.c)
 *     PopReleaseAdaptiveLock @ 0x1409A183C (PopReleaseAdaptiveLock.c)
 * Callees:
 *     PopInvokeWin32Callout @ 0x1409A49A8 (PopInvokeWin32Callout.c)
 */

__int64 __fastcall PopSendSessionInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int128 v5; // [rsp+20h] [rbp-40h] BYREF
  __int128 v6; // [rsp+30h] [rbp-30h]
  __int128 v7; // [rsp+40h] [rbp-20h]
  __int64 v8; // [rsp+50h] [rbp-10h]

  result = 0LL;
  v5 = 0LL;
  LODWORD(v8) = 0;
  v6 = 0LL;
  v7 = 0LL;
  if ( PsWin32CalloutsEstablished )
  {
    *(_QWORD *)&v7 = a4;
    DWORD2(v6) = 20;
    DWORD2(v7) = 0;
    v8 = 0LL;
    return PopInvokeWin32Callout(5LL, &v5, 1LL);
  }
  return result;
}
