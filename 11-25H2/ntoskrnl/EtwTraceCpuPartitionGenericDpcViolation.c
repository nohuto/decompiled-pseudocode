/*
 * XREFs of EtwTraceCpuPartitionGenericDpcViolation @ 0x1406417A0
 * Callers:
 *     KiCpuPartitionCheckGenericDpc @ 0x1405BC29C (KiCpuPartitionCheckGenericDpc.c)
 * Callees:
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140256C60 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
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
