/*
 * XREFs of NvmeControllerCancelAllIoCompletionDPCs @ 0x1400EB5E8
 * Callers:
 *     NvmeAdapterCompleteAllRequestsForSurpriseRemove @ 0x1400CD54C (NvmeAdapterCompleteAllRequestsForSurpriseRemove.c)
 *     NvmeControllerResetRecovery @ 0x140137858 (NvmeControllerResetRecovery.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NvmeControllerCancelAllIoCompletionDPCs(__int64 a1)
{
  _DWORD *v1; // r14
  unsigned int v3; // edi
  unsigned int i; // esi
  __int64 v5; // rdx
  __int64 result; // rax

  v1 = g_CpuInfo;
  if ( *(_QWORD *)(a1 + 864) )
  {
    v3 = 0;
    if ( *(_WORD *)(a1 + 26) )
    {
      do
      {
        for ( i = 0; i < v1[3]; ++i )
        {
          v5 = *(_QWORD *)(*(_QWORD *)(a1 + 864) + ((unsigned __int64)v3 << 7) + 64);
          if ( v5 )
            KeRemoveQueueDpc((PRKDPC)(v5 + ((unsigned __int64)i << 6)));
        }
        result = *(unsigned __int16 *)(a1 + 26);
        ++v3;
      }
      while ( v3 < (unsigned int)result );
    }
  }
  return result;
}
