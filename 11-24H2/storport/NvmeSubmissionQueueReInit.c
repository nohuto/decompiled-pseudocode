/*
 * XREFs of NvmeSubmissionQueueReInit @ 0x1400FA18C
 * Callers:
 *     NvmeControllerQueuesReInit @ 0x1400F3974 (NvmeControllerQueuesReInit.c)
 * Callees:
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

void __fastcall NvmeSubmissionQueueReInit(__int64 a1, __int64 a2)
{
  int v3; // edi
  __int64 v4; // r8
  unsigned int v5; // r14d
  unsigned int v6; // esi
  __int64 v7; // rdi

  *(_DWORD *)(a2 + 140) = 0;
  if ( *(_WORD *)(a2 + 136) )
  {
    v4 = *(unsigned int *)(a1 + 8);
    v3 = *(_DWORD *)(a1 + 8);
  }
  else
  {
    v3 = *(unsigned __int16 *)(a1 + 6);
    v4 = *(unsigned __int16 *)(a1 + 6);
  }
  memset_0(*(void **)a2, 0, v4 << 6);
  InitializeSListHead((PSLIST_HEADER)(a2 + 64));
  v5 = v3 - 1;
  v6 = 0;
  if ( v3 != 1 )
  {
    v7 = 0LL;
    do
    {
      *(_BYTE *)(*(_QWORD *)(a2 + 32) + v7 + 60) = 0;
      *(_BYTE *)(*(_QWORD *)(a2 + 32) + v7 + 61) = 0;
      *(_WORD *)(*(_QWORD *)(a2 + 32) + v7 + 54) = v6;
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(a2 + 64), (PSLIST_ENTRY)(v7 + *(_QWORD *)(a2 + 32)));
      ++v6;
      v7 += 128LL;
    }
    while ( v6 < v5 );
  }
}
