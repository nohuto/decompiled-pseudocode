/*
 * XREFs of EtwTraceCpuPartitionGenericDpcViolation @ 0x14064D76C
 * Callers:
 *     KiCpuPartitionCheckGenericDpc @ 0x1405C01CC (KiCpuPartitionCheckGenericDpc.c)
 * Callees:
 *     EtwWriteEx @ 0x140259680 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

void __fastcall EtwTraceCpuPartitionGenericDpcViolation(__int64 a1)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-28h] BYREF
  __int64 v2; // [rsp+70h] [rbp+8h] BYREF

  v2 = a1;
  if ( EtwCpuPartitionProvRegHandle )
  {
    if ( EtwEventEnabled(EtwCpuPartitionProvRegHandle, &CPU_PARTITION_EVENT_GENERIC_DPC_VIOLATION) )
    {
      UserData.Reserved = 0;
      UserData.Ptr = (ULONGLONG)&v2;
      UserData.Size = 8;
      EtwWriteEx(
        EtwCpuPartitionProvRegHandle,
        &CPU_PARTITION_EVENT_GENERIC_DPC_VIOLATION,
        0LL,
        0,
        0LL,
        0LL,
        1u,
        &UserData);
    }
  }
}
