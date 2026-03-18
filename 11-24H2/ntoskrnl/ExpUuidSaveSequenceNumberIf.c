/*
 * XREFs of ExpUuidSaveSequenceNumberIf @ 0x140A8B754
 * Callers:
 *     ExUuidCreate @ 0x1408EA880 (ExUuidCreate.c)
 *     NtAllocateUuids @ 0x140A8B540 (NtAllocateUuids.c)
 * Callees:
 *     ExpUuidSaveSequenceNumber @ 0x1407C0CD4 (ExpUuidSaveSequenceNumber.c)
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
