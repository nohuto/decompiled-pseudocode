/*
 * XREFs of ExpUuidSaveSequenceNumberIf @ 0x140A7CC9C
 * Callers:
 *     ExUuidCreate @ 0x1408DB8F0 (ExUuidCreate.c)
 *     NtAllocateUuids @ 0x140A7C950 (NtAllocateUuids.c)
 * Callees:
 *     ExpUuidSaveSequenceNumber @ 0x1407B1504 (ExpUuidSaveSequenceNumber.c)
 */

__int64 ExpUuidSaveSequenceNumberIf()
{
  __int64 result; // rax

  result = 0LL;
  if ( ExpUuidSequenceNumberNotSaved == 1 )
  {
    result = ExpUuidSaveSequenceNumber();
    if ( (int)result >= 0 )
      ExpUuidSequenceNumberNotSaved = 0;
  }
  return result;
}
