/*
 * XREFs of RtlInitializeUnicodePrefix @ 0x140AABDE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall RtlInitializeUnicodePrefix(PUNICODE_PREFIX_TABLE PrefixTable)
{
  *(_DWORD *)&PrefixTable->NodeTypeCode = 2048;
  PrefixTable->LastNextEntry = 0LL;
  PrefixTable->NextPrefixTree = (PUNICODE_PREFIX_TABLE_ENTRY)PrefixTable;
}
