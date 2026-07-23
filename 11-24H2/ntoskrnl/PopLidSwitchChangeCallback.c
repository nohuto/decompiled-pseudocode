/*
 * XREFs of PopLidSwitchChangeCallback @ 0x140A9CE60
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x140491E08 (PopQueueWorkItem.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PopInvokeWin32Callout @ 0x1409A49A8 (PopInvokeWin32Callout.c)
 */

__int64 __fastcall PopLidSwitchChangeCallback(_QWORD *a1, int *a2, int a3)
{
  __int64 v3; // r9
  __int128 v4; // xmm0
  __int128 v6; // [rsp+20h] [rbp-60h] BYREF
  __int128 v7; // [rsp+30h] [rbp-50h]
  __int128 v8; // [rsp+40h] [rbp-40h]
  __int64 v9; // [rsp+50h] [rbp-30h]
  __int128 v10; // [rsp+58h] [rbp-28h] BYREF
  int v11; // [rsp+68h] [rbp-18h]

  v10 = 0uLL;
  v3 = *(_QWORD *)&GUID_LIDSWITCH_STATE_CHANGE.Data1 - *a1;
  if ( *(_QWORD *)&GUID_LIDSWITCH_STATE_CHANGE.Data1 == *a1 )
    v3 = *(_QWORD *)GUID_LIDSWITCH_STATE_CHANGE.Data4 - a1[1];
  if ( v3 || a3 != 4 || !a2 )
    return 3221225485LL;
  v4 = *(_OWORD *)a1;
  v11 = *a2;
  v10 = v4;
  LODWORD(v9) = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  if ( PsWin32CalloutsEstablished )
  {
    DWORD2(v7) = 20;
    *(_QWORD *)&v8 = &v10;
    DWORD2(v8) = 0;
    v9 = 0LL;
    PopInvokeWin32Callout(5u, &v6, 2, 0LL);
  }
  PopQueueWorkItem((__int64)&PopRecordLidStateWorkItem, DelayedWorkQueue);
  return 0LL;
}
