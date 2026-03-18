/*
 * XREFs of IoGetFileMemoryPartitionInformation @ 0x14045C6C0
 * Callers:
 *     MiCreateImageOrDataSection @ 0x140941B00 (MiCreateImageOrDataSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IoGetFileMemoryPartitionInformation(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 208);
  result = 0LL;
  if ( v1 )
    return *(_QWORD *)(v1 + 72);
  return result;
}
