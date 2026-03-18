/*
 * XREFs of KiSetClockTimerDeadlineNoWake @ 0x1404A9EC4
 * Callers:
 *     KiUpdateGroupSchedulingRank @ 0x140299CB0 (KiUpdateGroupSchedulingRank.c)
 *     ?KiComputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KSCB@@@Z @ 0x14030C9D4 (-KiComputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_.c)
 *     KePrepareClockTimerForIdle @ 0x1405B911C (KePrepareClockTimerForIdle.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

NTSTATUS __fastcall KiSetClockTimerDeadlineNoWake(__int64 a1, int a2)
{
  NTSTATUS result; // eax
  char v3; // [rsp+30h] [rbp-68h] BYREF
  int v4; // [rsp+34h] [rbp-64h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+40h] [rbp-58h] BYREF
  int *v6; // [rsp+60h] [rbp-38h]
  __int64 v7; // [rsp+68h] [rbp-30h]
  char *v8; // [rsp+70h] [rbp-28h]
  __int64 v9; // [rsp+78h] [rbp-20h]

  result = 2 * a2;
  *(_BYTE *)(a1 + 16LL * a2 + 38308) &= ~2u;
  if ( (unsigned int)dword_140E070B8 > 5 )
  {
    v4 = a2;
    v6 = &v4;
    v7 = 4LL;
    v3 = 0;
    v8 = &v3;
    v9 = 1LL;
    return tlgWriteTransfer_EtwWriteTransfer(
             (__int64)&dword_140E070B8,
             (unsigned __int8 *)&dword_140047ACC,
             0LL,
             0LL,
             4u,
             &v5);
  }
  return result;
}
