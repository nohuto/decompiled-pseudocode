/*
 * XREFs of ?Allocate@TokenQueueTableEntry@CTokenManager@@SAPEAXPEAU_RTL_GENERIC_TABLE@@K@Z @ 0x14004D2C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall CTokenManager::TokenQueueTableEntry::Allocate(
        struct _RTL_GENERIC_TABLE *Table,
        __int64 ByteSize,
        __int64 a3,
        __int64 a4)
{
  PVOID result; // rax

  ByteSize = (unsigned int)ByteSize;
  result = 0LL;
  if ( (_DWORD)ByteSize )
  {
    if ( (unsigned int)ByteSize > 0x7FFFFFFFuLL )
      return result;
  }
  else
  {
    ByteSize = 1LL;
  }
  return (PVOID)ExAllocatePool2(256LL, ByteSize, 1702120788LL, a4);
}
