/*
 * XREFs of RtlpFcNotifyFeatureUsageTarget @ 0x140A363D4
 * Callers:
 *     RtlpFcSendFeatureUsageNotifications @ 0x140A36334 (RtlpFcSendFeatureUsageNotifications.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwQueryWnfStateData @ 0x1406A9210 (ZwQueryWnfStateData.c)
 *     ZwUpdateWnfStateData @ 0x1406AA030 (ZwUpdateWnfStateData.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpFcNotifyFeatureUsageTarget(__int64 a1, _DWORD *a2)
{
  _DWORD *Pool2; // rdi
  int WnfStateData; // ebx
  __int64 v5; // rdx
  _DWORD v7[2]; // [rsp+48h] [rbp-20h] BYREF

  v7[0] = *a2;
  v7[1] = a2[1];
  Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
  if ( Pool2 )
  {
    while ( 1 )
    {
      WnfStateData = ZwQueryWnfStateData((__int64)v7, 0LL);
      if ( WnfStateData >= 0 )
        break;
      if ( WnfStateData != -1073741823 )
        goto LABEL_10;
    }
    v5 = 0LL;
    do
    {
      if ( Pool2[2 * v5] == *(_DWORD *)a1 && LOWORD(Pool2[2 * v5 + 1]) == *(_WORD *)(a1 + 4) )
        break;
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (unsigned int)v5 < 0x200 );
LABEL_10:
    ExFreePoolWithTag(Pool2, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)WnfStateData;
}
