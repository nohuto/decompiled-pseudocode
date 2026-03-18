/*
 * XREFs of VidMmUnreferenceDmaBuffer @ 0x14003BD20
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1400090A0 (VidSchiProcessDpcCompletedPacket.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x140010190 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     VidSchUnreferenceDmaBuffer @ 0x1400909F8 (VidSchUnreferenceDmaBuffer.c)
 *     VidSchiDiscardQueuePacket @ 0x1400B0048 (VidSchiDiscardQueuePacket.c)
 * Callees:
 *     RemoveDMAReferences @ 0x14003BE2C (RemoveDMAReferences.c)
 *     VidSchUnreferenceDmaBuffer @ 0x1400909F8 (VidSchUnreferenceDmaBuffer.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidMmUnreferenceDmaBuffer(__int64 a1, char a2)
{
  __int64 result; // rax
  __int64 v4; // rsi
  __int64 i; // rdi
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rcx

  if ( a2 )
    return VidSchUnreferenceDmaBuffer(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)(a1 + 128) + 16LL) + 744LL), a1);
  result = *(_QWORD *)&g_IsInternalReleaseOrDbg;
  v4 = *(_QWORD *)(a1 + 96);
  if ( g_IsInternalReleaseOrDbg )
  {
    result = WdLogNewEntry5_WdTrace();
    *(_QWORD *)(result + 24) = a1;
    WdLogGlobalForLineNumber = 29972;
  }
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 136); i = (unsigned int)(i + 1) )
  {
    v8 = *(_QWORD *)(v4 + 8 * i);
    if ( v8 )
      result = RemoveDMAReferences(v8, 1LL);
  }
  v6 = *(_QWORD *)(a1 + 56);
  if ( v6 )
  {
    result = *(unsigned int *)(v6 + 156);
    if ( (int)result >= 1 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v6 + 156));
    }
    else
    {
      v7 = *(int *)(v6 + 156);
      g_DxgMmsBugcheckExportIndex = 1;
      result = WdLogSingleEntry5(0LL, 270LL, 41LL, v6, v7, 0LL);
      WdLogGlobalForLineNumber = 195;
    }
  }
  ++*(_DWORD *)(a1 + 20);
  return result;
}
