/*
 * XREFs of NvmeControllerDrainAllFreeCommandIdFromIoSQs @ 0x1400ECC70
 * Callers:
 *     NvmeControllerResetRecovery @ 0x140137858 (NvmeControllerResetRecovery.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NvmeControllerDrainAllFreeCommandIdFromIoSQs(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 result; // rax

  v1 = 0;
  if ( *(_QWORD *)(a1 + 728) && *(_WORD *)(a1 + 22) )
  {
    do
    {
      ExpInterlockedFlushSList((PSLIST_HEADER)(*(_QWORD *)(a1 + 728) + 64LL + 192LL * v1));
      result = *(unsigned __int16 *)(a1 + 22);
      ++v1;
    }
    while ( v1 < (unsigned int)result );
  }
  return result;
}
