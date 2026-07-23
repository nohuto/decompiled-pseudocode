/*
 * XREFs of ExpUuidSaveSequenceNumberIf @ 0x140A87C44
 * Callers:
 *     ExUuidCreate @ 0x14085C0B0 (ExUuidCreate.c)
 *     NtAllocateUuids @ 0x140A87A30 (NtAllocateUuids.c)
 * Callees:
 *     ExpUuidSaveSequenceNumber @ 0x1407C1124 (ExpUuidSaveSequenceNumber.c)
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
