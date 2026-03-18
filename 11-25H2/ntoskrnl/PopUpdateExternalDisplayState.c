/*
 * XREFs of PopUpdateExternalDisplayState @ 0x140AB5944
 * Callers:
 *     PopPowerInformationInternal @ 0x140A1B29C (PopPowerInformationInternal.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopQueueWorkItem @ 0x140497BA0 (PopQueueWorkItem.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     PopAcquirePolicyLock @ 0x140B57E80 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B57ED0 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopUpdateExternalDisplayState(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v8; // [rsp+20h] [rbp-58h]
  char v9; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+38h] [rbp-40h] BYREF
  char *v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+60h] [rbp-18h]
  int v13; // [rsp+64h] [rbp-14h]

  v2 = a1;
  PopAcquirePolicyLock(a1, a2);
  PopConsoleExternalDisplayConnected = v2;
  if ( (unsigned int)dword_140E07680 > 5 )
  {
    v13 = 0;
    v11 = &v9;
    v9 = v2;
    v12 = 1;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07680, (unsigned __int8 *)byte_1400492D0, 0LL, 0LL, 3u, &v10);
  }
  PopQueueWorkItem((__int64)&PopExternalMonitorUpdatedWorkItem, DelayedWorkQueue);
  return PopReleasePolicyLock(v4, v3, v5, v6, v8);
}
