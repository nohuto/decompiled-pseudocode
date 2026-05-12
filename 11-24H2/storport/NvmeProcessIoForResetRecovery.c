/*
 * XREFs of NvmeProcessIoForResetRecovery @ 0x1400F9F34
 * Callers:
 *     NvmeControllerRequeueSQPendingRequests @ 0x1400F41F8 (NvmeControllerRequeueSQPendingRequests.c)
 * Callees:
 *     NvmeNamespaceCheckAndAcquirePoFx @ 0x1400F9E9C (NvmeNamespaceCheckAndAcquirePoFx.c)
 *     NvmeNamespaceReleasePoFx @ 0x1400F9EFC (NvmeNamespaceReleasePoFx.c)
 *     FreeAllSglAndContextInChainedSplitIoContext @ 0x14011A100 (FreeAllSglAndContextInChainedSplitIoContext.c)
 *     FreeNVMeChainedIoSplitContext @ 0x14011A240 (FreeNVMeChainedIoSplitContext.c)
 *     NvmeNamespaceQueueIo @ 0x14011D6B0 (NvmeNamespaceQueueIo.c)
 */

char __fastcall NvmeProcessIoForResetRecovery(__int64 a1, IRP *a2, unsigned int a3, char a4, __int64 a5)
{
  __int64 v5; // rbp
  unsigned __int8 v7; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _LARGE_INTEGER ByteOffset; // rdi
  unsigned __int16 v11; // dx
  _LARGE_INTEGER v12; // rcx
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // r8
  bool v16; // zf
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rcx
  unsigned int v20; // edx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rcx

  v5 = a3;
  v7 = 4;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  ByteOffset.QuadPart = 0LL;
  v11 = 0;
  if ( *(_BYTE *)(a1 + 668) )
    v7 = *(_BYTE *)(a1 + 668);
  if ( a4 && CurrentStackLocation->Parameters.WMI.ProviderId == 0x8765432100000003uLL )
  {
    ByteOffset = CurrentStackLocation->Parameters.Read.ByteOffset;
    v11 = *(_WORD *)(ByteOffset.QuadPart + 32);
  }
  CurrentStackLocation->Parameters.CreatePipe.Parameters = (_NAMED_PIPE_CREATE_PARAMETERS *)(CurrentStackLocation->Parameters.Create.EaLength
                                                                                           + 1);
  if ( CurrentStackLocation->Parameters.Create.EaLength > v7 )
  {
    if ( ByteOffset.QuadPart )
    {
      v15 = (unsigned int)_InterlockedExchange((volatile __int32 *)(a5 + 104), 5);
      LODWORD(v14) = _InterlockedIncrement((volatile signed __int32 *)(ByteOffset.QuadPart + 116));
      if ( (int)v14 < v11 )
        return v14;
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))FreeAllSglAndContextInChainedSplitIoContext)(
        *(_QWORD *)(a1 + 16),
        (_LARGE_INTEGER)ByteOffset.QuadPart,
        v15);
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))FreeNVMeChainedIoSplitContext)(
        *(_QWORD *)(a1 + 16),
        (unsigned int)v5,
        (_LARGE_INTEGER)ByteOffset.QuadPart,
        a2);
    }
    v16 = FeatureFixFUAForReadIoPerf == 0;
    a2->IoStatus.Information = 0LL;
    if ( !v16 && IoGetIoPriorityHint(a2) > IoPriorityLow )
      _InterlockedDecrement(*(volatile signed __int32 **)(*(_QWORD *)(a1 + 680) + 8 * v5));
    a2->IoStatus.Status = -2147483619;
    IofCompleteRequest(a2, 0);
    v17 = *(_QWORD *)(a1 + 128);
    if ( !*(_BYTE *)v17
      && _InterlockedExchangeAdd(*(volatile signed __int32 **)(*(_QWORD *)(v17 + 24) + 8 * v5), 0xFFFFFFFF) == 1 )
    {
      v18 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 128LL);
      if ( NvmeNamespaceCheckAndAcquirePoFx(a1) )
      {
        PoFxIdleComponent(**(_QWORD **)(*(_QWORD *)(a1 + 128) + 8LL), 0LL, 2LL);
        NvmeNamespaceReleasePoFx(a1);
      }
      v19 = *(_QWORD *)(v18 + 160);
      if ( *(_BYTE *)v19 == 1 )
        PoFxIdleComponent(**(_QWORD **)(v19 + 8), 0LL, 2LL);
    }
    v14 = *(_QWORD *)(a1 + 504);
    if ( v14 )
    {
      v20 = *(unsigned __int8 *)(v14 + 36);
      ++*(_DWORD *)(v14 + 32);
      v21 = *(_QWORD *)(a1 + 504);
      if ( (unsigned __int8)v20 < *(_BYTE *)(v21 + 37) )
      {
        v22 = 2LL * v20;
        *(_QWORD *)(v21 + 8 * v22 + 48) = a2;
        *(_QWORD *)(v21 + 8 * v22 + 40) = MEMORY[0xFFFFF78000000014];
      }
      v23 = *(_QWORD *)(a1 + 504);
      LOBYTE(v14) = (unsigned __int8)(v20 + 1) < *(_BYTE *)(v23 + 37) ? v20 + 1 : 0;
      *(_BYTE *)(v23 + 36) = v14;
    }
  }
  else
  {
    if ( !ByteOffset.QuadPart )
      goto LABEL_15;
    v12 = ByteOffset;
    if ( v11 )
    {
      v13 = v11;
      do
      {
        if ( *(_DWORD *)(v12.QuadPart + 104) != 5 && *(_DWORD *)(v12.QuadPart + 104) != 3 )
          _InterlockedExchange((volatile __int32 *)(v12.QuadPart + 104), 3);
        v12 = *(_LARGE_INTEGER *)(v12.QuadPart + 96);
        --v13;
      }
      while ( v13 );
    }
    LOBYTE(v14) = _interlockedbittestandset((volatile signed __int32 *)(ByteOffset.QuadPart + 108), 0);
    if ( (_BYTE)v14 != 1 )
LABEL_15:
      LOBYTE(v14) = NvmeNamespaceQueueIo(a1, a2, (unsigned int)v5);
  }
  return v14;
}
