/*
 * XREFs of NvmeControllerCreateAERExtendedCommandPool @ 0x1400EBDB4
 * Callers:
 *     NvmeControllerCreateAsyncEventContext @ 0x1400EBF04 (NvmeControllerCreateAsyncEventContext.c)
 * Callees:
 *     NvmeControllerAllocateExtendedCommand @ 0x1401290D8 (NvmeControllerAllocateExtendedCommand.c)
 */

__int64 __fastcall NvmeControllerCreateAERExtendedCommandPool(__int64 a1, unsigned __int16 a2)
{
  union _SLIST_HEADER *v3; // rcx
  unsigned __int16 v5; // bx
  __int64 result; // rax
  __int64 ExtendedCommand; // rax

  v3 = *(union _SLIST_HEADER **)(a1 + 1416);
  v5 = 0;
  if ( !v3 )
    return 0LL;
  InitializeSListHead(v3 + 1);
  if ( a2 )
  {
    do
    {
      ExtendedCommand = NvmeControllerAllocateExtendedCommand(a1);
      if ( !ExtendedCommand )
        break;
      *(_DWORD *)(ExtendedCommand + 48) |= 4u;
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1416) + 8LL) + 8LL * v5) = ExtendedCommand;
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(*(_QWORD *)(a1 + 1416) + 16LL), (PSLIST_ENTRY)(ExtendedCommand + 16));
      ++v5;
    }
    while ( v5 < a2 );
  }
  result = v5;
  **(_WORD **)(a1 + 1416) = v5;
  return result;
}
