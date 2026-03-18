/*
 * XREFs of EtwpAdjustSiloTraceBuffers @ 0x14048EBF0
 * Callers:
 *     EtwpAdjustTraceBuffers @ 0x14048EAC0 (EtwpAdjustTraceBuffers.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x14024CFF4 (EtwpQueryUsedProcessorCount.c)
 *     EtwpUnlockBufferList @ 0x1403EEBF4 (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x1403EEC80 (EtwpLockBufferList.c)
 *     EtwpDequeueBuffer @ 0x140459200 (EtwpDequeueBuffer.c)
 *     EtwpFreeTraceBuffer @ 0x140483510 (EtwpFreeTraceBuffer.c)
 *     EtwpRemoveBufferFromGlobalList @ 0x1406503FC (EtwpRemoveBufferFromGlobalList.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140926F50 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x14095D644 (EtwpReleaseLoggerContext.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpAdjustSiloTraceBuffers(__int64 a1)
{
  unsigned int v1; // edi
  void *v3; // r14
  __int64 v4; // rax
  __int64 v5; // rbx
  int UsedProcessorCount; // eax
  unsigned int v7; // edx
  __int64 v8; // rcx
  char *v9; // rax
  __int64 v10; // rcx
  char *v11; // rbp
  __int64 v12; // r8
  unsigned __int8 i; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  for ( i = 0; v1 < *(_DWORD *)(a1 + 16); ++v1 )
  {
    v3 = 0LL;
    v4 = EtwpAcquireLoggerContextByLoggerId(a1, v1, 0LL);
    v5 = v4;
    if ( v4 )
    {
      if ( (*(_DWORD *)(v4 + 12) & 0x400) == 0 )
      {
        UsedProcessorCount = EtwpQueryUsedProcessorCount(v4, *(unsigned int *)(v4 + 228));
        if ( v7 > *(_DWORD *)(v8 + 224) && v7 > 2 * UsedProcessorCount )
        {
          EtwpLockBufferList(v8, &i);
          v9 = (char *)EtwpDequeueBuffer(v5, (_QWORD *)(v5 + 48));
          v11 = v9;
          if ( v9 )
            v3 = (void *)EtwpRemoveBufferFromGlobalList(v10, v9);
          EtwpUnlockBufferList(v5, &i);
          if ( v11 )
          {
            _InterlockedDecrement((volatile signed __int32 *)(v5 + 232));
            _InterlockedDecrement((volatile signed __int32 *)(v5 + 228));
            _InterlockedAdd(
              (volatile signed __int32 *)(*(_QWORD *)(v5 + 1360) + 4LL * (*(_DWORD *)(v5 + 300) & 1) + 4396),
              -*(_DWORD *)(v5 + 4));
            EtwpFreeTraceBuffer(v5, v11, v12);
            if ( v3 )
              ExFreePoolWithTag(v3, 0);
          }
        }
      }
      EtwpReleaseLoggerContext(v5, 0LL);
    }
  }
}
