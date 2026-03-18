/*
 * XREFs of EtwTraceCpuPartitionDpcSchedulingViolation @ 0x1406416E4
 * Callers:
 *     KiCpuPartitionCheckDpcEnqueue @ 0x1404F8988 (KiCpuPartitionCheckDpcEnqueue.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

void __fastcall EtwTraceCpuPartitionDpcSchedulingViolation(__int64 a1, int a2)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-38h] BYREF
  int *v3; // [rsp+50h] [rbp-28h]
  int v4; // [rsp+58h] [rbp-20h]
  int v5; // [rsp+5Ch] [rbp-1Ch]
  __int64 v6; // [rsp+80h] [rbp+8h] BYREF
  int v7; // [rsp+88h] [rbp+10h] BYREF

  v7 = a2;
  v6 = a1;
  if ( EtwCpuPartitionProvRegHandle )
  {
    if ( EtwEventEnabled(EtwCpuPartitionProvRegHandle, &CPU_PARTITION_EVENT_DPC_SCHEDULING_VIOLATION) )
    {
      UserData.Reserved = 0;
      v5 = 0;
      UserData.Ptr = (ULONGLONG)&v6;
      UserData.Size = 8;
      v3 = &v7;
      v4 = 4;
      EtwWriteEx(
        EtwCpuPartitionProvRegHandle,
        &CPU_PARTITION_EVENT_DPC_SCHEDULING_VIOLATION,
        0LL,
        0,
        0LL,
        0LL,
        2u,
        &UserData);
    }
  }
}
