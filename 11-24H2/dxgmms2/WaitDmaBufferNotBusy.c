/*
 * XREFs of WaitDmaBufferNotBusy @ 0x1400B7760
 * Callers:
 *     ?VidMmTrimDmaPool@@YAXPEAUVIDMM_DMA_POOL@@_N@Z @ 0x140097798 (-VidMmTrimDmaPool@@YAXPEAUVIDMM_DMA_POOL@@_N@Z.c)
 *     VidMmAcquireDmaBuffer @ 0x1400B7930 (VidMmAcquireDmaBuffer.c)
 *     RemoveDmaBufferFromPool @ 0x1400B7C44 (RemoveDmaBufferFromPool.c)
 * Callees:
 *     VidSchiInterlockedRemoveEntryList @ 0x140034A80 (VidSchiInterlockedRemoveEntryList.c)
 *     VidSchIsWorkerThread @ 0x1400355D0 (VidSchIsWorkerThread.c)
 *     memset @ 0x140056340 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1400B5584 (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1400B5974 (VidSchRegisterCompletionEvent.c)
 */

// write access to const memory has been detected, the output may be wrong!
_BOOL8 __fastcall WaitDmaBufferNotBusy(_QWORD *a1, __int64 a2, char a3, _BYTE *a4)
{
  __int64 v8; // rax
  __int64 v9; // r15
  int v10; // eax
  __int64 v11; // rcx
  int v13; // ecx
  unsigned int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rdx
  _QWORD v17[20]; // [rsp+38h] [rbp-59h] BYREF

  if ( g_IsInternalReleaseOrDbg )
  {
    v8 = WdLogNewEntry5_WdTrace(a1);
    *(_QWORD *)(v8 + 24) = a1[1];
    *(_QWORD *)(v8 + 32) = a2;
    WdLogGlobalForLineNumber = 228;
  }
  if ( a4 )
    *a4 = 0;
  memset(v17, 0, sizeof(v17));
  LODWORD(v17[2]) = 0;
  v9 = *a1;
  if ( VidSchIsWorkerThread(*(_QWORD *)(*(_QWORD *)(*a1 + 16LL) + 744LL)) )
  {
    v15 = *(unsigned int *)(a2 + 40);
    v16 = *(unsigned int *)(a2 + 36);
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 22LL, a2, v16, v15);
    WdLogGlobalForLineNumber = 195;
LABEL_18:
    v17[3] = *(_QWORD *)(v11 + 256);
    v13 = v17[3] != 0LL ? 2 : 0;
    v14 = v17[4] & 0xFFFFFFFD;
    goto LABEL_16;
  }
  v10 = *(_DWORD *)(a2 + 28);
  LOBYTE(v17[19]) = a3;
  if ( (v10 & 2) != 0 )
    goto LABEL_8;
  v11 = a1[2];
  if ( !v11 )
    goto LABEL_8;
  if ( (*(_DWORD *)(v11 + 392) & 0x10) == 0 )
    goto LABEL_18;
  v17[3] = *(_QWORD *)(v11 + 280);
  v13 = v17[3] != 0LL ? 4 : 0;
  v14 = v17[4] & 0xFFFFFFFB;
LABEL_16:
  LODWORD(v17[4]) = v14 | v13;
LABEL_8:
  VidSchRegisterCompletionEvent(*(_QWORD *)(*(_QWORD *)(v9 + 16) + 744LL), (__int64)v17);
  while ( *(_BYTE *)(a2 + 24) == 1 )
  {
    if ( (unsigned int)VidSchWaitForCompletionEvent(*(_QWORD *)(*(_QWORD *)(*a1 + 16LL) + 744LL), (__int64)v17, 1) == -1073741130 )
    {
      if ( a4 )
        *a4 = 1;
      return VidSchiInterlockedRemoveEntryList(
               (KSPIN_LOCK *)(*(_QWORD *)(*(_QWORD *)(*a1 + 16LL) + 744LL) + 2000LL),
               v17,
               0LL);
    }
  }
  return VidSchiInterlockedRemoveEntryList(
           (KSPIN_LOCK *)(*(_QWORD *)(*(_QWORD *)(*a1 + 16LL) + 744LL) + 2000LL),
           v17,
           0LL);
}
