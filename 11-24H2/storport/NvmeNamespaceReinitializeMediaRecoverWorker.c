/*
 * XREFs of NvmeNamespaceReinitializeMediaRecoverWorker @ 0x14010B7C0
 * Callers:
 *     <none>
 * Callees:
 *     StorEtwNvmeControllerEvent @ 0x1400A9028 (StorEtwNvmeControllerEvent.c)
 *     BuildGetLogPageCommand @ 0x1400BE764 (BuildGetLogPageCommand.c)
 *     NvmeControllerProcessCommandSync @ 0x1400BF2F4 (NvmeControllerProcessCommandSync.c)
 *     NvmeAllocateDmaBuffer @ 0x1400E97F4 (NvmeAllocateDmaBuffer.c)
 *     NvmeFreeDmaBuffer @ 0x1400F8B80 (NvmeFreeDmaBuffer.c)
 *     NvmeNamespaceAcquireRemoveLock @ 0x1400FB9D8 (NvmeNamespaceAcquireRemoveLock.c)
 *     NvmeNamespaceCleanupSanitizeContext @ 0x1400FC698 (NvmeNamespaceCleanupSanitizeContext.c)
 *     NvmeControllerReuseExtendedCommand @ 0x140129C4C (NvmeControllerReuseExtendedCommand.c)
 */

void __fastcall NvmeNamespaceReinitializeMediaRecoverWorker(PVOID IoObject, __int64 Context, PIO_WORKITEM IoWorkItem)
{
  __int64 *v3; // rdi
  int v5; // ebp
  __int64 v6; // r8
  __int64 v7; // r8
  int DmaBuffer; // eax
  unsigned int v9; // r8d
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r14
  int v15; // eax
  __int64 v16; // rdx
  unsigned int v17; // ecx
  __int128 v18; // [rsp+A0h] [rbp-28h] BYREF

  v3 = *(__int64 **)(Context + 616);
  v5 = 1;
  v18 = 0LL;
  NvmeControllerReuseExtendedCommand(*(_QWORD *)(Context + 16), v3);
  if ( (int)NvmeNamespaceAcquireRemoveLock(Context, *(_QWORD *)(Context + 624)) >= 0 )
  {
    DmaBuffer = NvmeAllocateDmaBuffer(*(_QWORD *)(Context + 16), 0x200u, v6, (void **)&v18, (_QWORD *)&v18 + 1, 0);
    v10 = *v3;
    if ( DmaBuffer >= 0 )
    {
      LOBYTE(v9) = -127;
      *(_DWORD *)(*v3 + 4256) = *(_DWORD *)(v10 + 4256) | 1;
      *(_DWORD *)(*v3 + 4256) |= 0x20u;
      *(_DWORD *)(*v3 + 4256) |= 2u;
      *(_WORD *)(*v3 + 4252) = 0;
      *(_QWORD *)(*v3 + 4192) = NvmeNamespaceSanitizeRecoverCompletionRoutine;
      *(_QWORD *)(*v3 + 4216) = Context;
      *(_OWORD *)(*v3 + 4160) = v18;
      *(_QWORD *)(*v3 + 4200) = v3;
      *(_QWORD *)(*v3 + 4240) = v3;
      v11 = *v3;
      *((_WORD *)v3 + 26) = *(_WORD *)(Context + 640);
      BuildGetLogPageCommand(
        *(_QWORD *)(Context + 16),
        v11 + 4096,
        v9,
        0x200u,
        *((__int64 *)&v18 + 1),
        -1,
        0LL,
        0,
        v11,
        v3[1]);
      v12 = NvmeControllerProcessCommandSync(*(_QWORD *)(Context + 16), v3, 0);
      v13 = *v3;
      if ( v12 >= 0 )
      {
        v14 = *(_QWORD *)(v13 + 4160);
        if ( (*(_BYTE *)(v14 + 2) & 7) == 3 )
        {
          NvmeControllerReuseExtendedCommand(*(_QWORD *)(Context + 16), v3);
          v15 = *(_DWORD *)(v14 + 4);
          if ( (v15 & 8) == 0 )
            v5 = v15 & 7;
          *(_DWORD *)(*v3 + 4256) |= 1u;
          *(_DWORD *)(*v3 + 4256) |= 0x20u;
          *(_DWORD *)(*v3 + 4256) &= ~2u;
          *(_WORD *)(*v3 + 4252) = 0;
          *(_QWORD *)(*v3 + 4192) = NvmeNamespaceSanitizeRecoverCompletionRoutine;
          v16 = *v3;
          v17 = *(_DWORD *)(*v3 + 4136) & 0xFFFFFFF8;
          *(_BYTE *)(v16 + 4096) = -124;
          *(_DWORD *)(v16 + 4140) = 0;
          *(_DWORD *)(v16 + 4136) = ((v5 | v17) & 0xFFFFFFF7 ^ (8 * ((v15 & 8) != 0))) & 0xFFFFFC0F;
          if ( (int)NvmeControllerProcessCommandSync(*(_QWORD *)(Context + 16), v3, 0) < 0 )
            StorEtwNvmeControllerEvent(
              *(_QWORD *)(Context + 16),
              1,
              2,
              (__int64)L"Sanitize Recover Command Failed",
              L"NVMeStatus",
              *(_WORD *)(*v3 + 4260),
              &word_140150F48,
              0,
              &word_140150F48,
              0,
              &word_140150F48,
              0,
              (void *)&word_140150F48,
              0,
              (void *)&word_140150F48,
              0,
              (void *)&word_140150F48,
              0,
              (void *)&word_140150F48,
              0);
        }
        else
        {
          StorEtwNvmeControllerEvent(
            *(_QWORD *)(Context + 16),
            1,
            2,
            (__int64)L"Last sanitize command completed successfully. Bail out.",
            L"NVMeStatus",
            *(_WORD *)(v13 + 4260),
            &word_140150F48,
            0,
            &word_140150F48,
            0,
            &word_140150F48,
            0,
            (void *)&word_140150F48,
            0,
            (void *)&word_140150F48,
            0,
            (void *)&word_140150F48,
            0,
            (void *)&word_140150F48,
            0);
        }
      }
      else
      {
        StorEtwNvmeControllerEvent(
          *(_QWORD *)(Context + 16),
          1,
          2,
          (__int64)L"Get Sanitize Log Page Failed",
          L"NVMeStatus",
          *(_WORD *)(v13 + 4260),
          &word_140150F48,
          0,
          &word_140150F48,
          0,
          &word_140150F48,
          0,
          (void *)&word_140150F48,
          0,
          (void *)&word_140150F48,
          0,
          (void *)&word_140150F48,
          0,
          (void *)&word_140150F48,
          0);
      }
    }
    else
    {
      StorEtwNvmeControllerEvent(
        *(_QWORD *)(Context + 16),
        1,
        2,
        (__int64)L"Failed to Allocate DMA buffer for sanitize recover.",
        L"NVMeStatus",
        *(_WORD *)(v10 + 4260),
        &word_140150F48,
        0,
        &word_140150F48,
        0,
        &word_140150F48,
        0,
        (void *)&word_140150F48,
        0,
        (void *)&word_140150F48,
        0,
        (void *)&word_140150F48,
        0,
        (void *)&word_140150F48,
        0);
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 120));
  }
  else
  {
    StorEtwNvmeControllerEvent(
      *(_QWORD *)(Context + 16),
      1,
      2,
      (__int64)L"Failed to acquire remove lock for sanitize recover.",
      L"NVMeStatus",
      *(_WORD *)(*v3 + 4260),
      &word_140150F48,
      0,
      &word_140150F48,
      0,
      &word_140150F48,
      0,
      (void *)&word_140150F48,
      0,
      (void *)&word_140150F48,
      0,
      (void *)&word_140150F48,
      0,
      (void *)&word_140150F48,
      0);
  }
  if ( (_QWORD)v18 )
    NvmeFreeDmaBuffer(*(_QWORD *)(Context + 16), 0x200u, v7, v18, *((__int64 *)&v18 + 1));
  NvmeNamespaceCleanupSanitizeContext(Context);
}
