/*
 * XREFs of ?VidSchiAdvanceContextSubmissionId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x14000EA9C
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1400090A0 (VidSchiProcessDpcCompletedPacket.c)
 * Callees:
 *     VidSchUnwaitFlipQueue @ 0x14000EC30 (VidSchUnwaitFlipQueue.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiAdvanceContextSubmissionId(struct HwQueueStagingList *a1, struct _VIDSCH_QUEUE_PACKET *a2)
{
  _QWORD *v2; // r9
  unsigned __int64 *v3; // rbx
  __int64 v6; // r8
  __int64 v7; // rsi
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // r9

  v2 = (_QWORD *)*((_QWORD *)a2 + 11);
  v3 = (unsigned __int64 *)((char *)a2 + 112);
  v6 = v2[13];
  v7 = *(_QWORD *)(v2[12] + 24LL);
  v8 = v2[20];
  if ( v8 && *v3 <= v8 )
  {
    if ( !*(_BYTE *)(v6 + 204)
      && !_InterlockedCompareExchange((volatile signed __int32 *)(v6 + 200), 0, 0)
      && (*(_BYTE *)(v7 + 3268) & 1) == 0 )
    {
      v9 = v2[20];
      v10 = *v3;
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 281LL, 1792LL, v10, v9, 0LL);
      WdLogGlobalForLineNumber = 906;
    }
    WdLogSingleEntry1(4LL, *v3);
    WdLogGlobalForLineNumber = 11965;
  }
  else
  {
    if ( *(_BYTE *)(v6 + 204)
      || _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 200), 0, 0)
      || (*(_BYTE *)(v7 + 3268) & 1) != 0 )
    {
      WdLogSingleEntry2(4LL, a2, *v3);
      WdLogGlobalForLineNumber = 11984;
    }
    else
    {
      WdLogSingleEntry3(4LL, a2, *v3, v2[20]);
      WdLogGlobalForLineNumber = 11993;
    }
    *(_QWORD *)(*((_QWORD *)a2 + 11) + 160LL) = *v3;
    if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 11) + 104LL) + 1832LL) )
      VidSchUnwaitFlipQueue(a1, v7);
  }
}
