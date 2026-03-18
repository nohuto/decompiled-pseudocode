/*
 * XREFs of MmRotatePhysicalView @ 0x140A2E770
 * Callers:
 *     <none>
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x1402BAFA0 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1402FBE30 (MiObtainReferencedVadEx.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x1403CE11C (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiGetProcessPartition @ 0x14043E2C0 (MiGetProcessPartition.c)
 *     MiGetVadCacheAttribute @ 0x1404A5498 (MiGetVadCacheAttribute.c)
 *     MiLogVirtualRotateEvent @ 0x1407EDA74 (MiLogVirtualRotateEvent.c)
 *     MiRotateToFrameBuffer @ 0x140A2E9A4 (MiRotateToFrameBuffer.c)
 *     MiRotateToFrameBufferNoCopy @ 0x140A2ECC0 (MiRotateToFrameBufferNoCopy.c)
 *     MiReplaceRotateWithDemandZero @ 0x140A64CA8 (MiReplaceRotateWithDemandZero.c)
 */

NTSTATUS __stdcall MmRotatePhysicalView(
        PVOID VirtualAddress,
        PSIZE_T NumberOfBytes,
        PMDL NewMdl,
        MM_ROTATE_DIRECTION Direction,
        PMM_ROTATE_COPY_CALLBACK_FUNCTION CopyFunction,
        PVOID Context)
{
  ULONG_PTR v6; // r12
  ULONG_PTR v7; // rdi
  char *v11; // rsi
  unsigned __int64 v12; // rbx
  __int64 v13; // rax
  void *v14; // rbp
  unsigned int VadCacheAttribute; // eax
  int v16; // eax
  NTSTATUS v17; // ebx
  PVOID v19; // r14
  __int64 v20; // [rsp+80h] [rbp+8h] BYREF
  __int64 ProcessPartition; // [rsp+88h] [rbp+10h]

  LODWORD(v20) = 0;
  v6 = 0LL;
  v7 = *NumberOfBytes;
  v11 = (char *)VirtualAddress;
  if ( ((unsigned __int16)VirtualAddress & 0xFFF) != 0 )
  {
    v17 = -1073741585;
    goto LABEL_13;
  }
  if ( (v7 & 0xFFF) != 0 )
    goto LABEL_24;
  if ( Direction >= MmMaximumRotateDirection )
  {
    v17 = -1073741583;
    goto LABEL_13;
  }
  v12 = (unsigned __int64)VirtualAddress + v7 - 1;
  if ( v12 <= (unsigned __int64)VirtualAddress )
  {
LABEL_24:
    v17 = -1073741584;
    goto LABEL_13;
  }
  ProcessPartition = MiGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
  v13 = MiObtainReferencedVadEx((unsigned __int64)v11, 0LL, (int *)&v20);
  v14 = (void *)v13;
  if ( !v13 )
  {
    v17 = v20;
    if ( (_DWORD)v20 == -1073741664 )
      v17 = -1073741819;
    goto LABEL_13;
  }
  if ( (*(_DWORD *)(v13 + 48) & 0x70) != 0x40
    || (*(unsigned int *)(v13 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v13 + 33) << 32)) < v12 >> 12 )
  {
    v17 = -1073741800;
    goto LABEL_12;
  }
  VadCacheAttribute = MiGetVadCacheAttribute(v13);
  if ( Direction > MmToFrameBufferNoCopy )
  {
    if ( Direction == MmToRegularMemoryNoCopy )
    {
      v17 = MiReplaceRotateWithDemandZeroNoCopy((__int64)v14, (unsigned __int64)v11, v12, VadCacheAttribute);
      MiUnlockAndDereferenceVad(v14);
      *NumberOfBytes = v7;
      if ( (WORD2(PerfGlobalGroupMask[0]) & 0x8000) != 0 && v7 )
        MiLogVirtualRotateEvent((__int64)v11, v7, 3);
      return v17;
    }
    v19 = Context;
    v17 = v20;
    while ( v7 )
    {
      v20 = 0LL;
      v17 = MiReplaceRotateWithDemandZero(v14, v11, v7, CopyFunction, v19, &v20);
      v6 += v20;
      if ( v17 == 1073741849 )
        break;
      v7 -= v20;
      v11 += v20;
    }
    goto LABEL_12;
  }
  if ( Direction )
    v16 = MiRotateToFrameBufferNoCopy(v14, v11, NewMdl, v7 >> 12);
  else
    v16 = MiRotateToFrameBuffer(
            ProcessPartition,
            (_DWORD)v14,
            (_DWORD)v11,
            (_DWORD)NewMdl,
            v7 >> 12,
            (__int64)CopyFunction,
            (__int64)Context);
  v17 = v16;
  if ( v16 < 0 )
  {
LABEL_12:
    MiUnlockAndDereferenceVad(v14);
LABEL_13:
    *NumberOfBytes = v6;
    return v17;
  }
  MiUnlockAndDereferenceVad(v14);
  *NumberOfBytes = v7;
  if ( (WORD2(PerfGlobalGroupMask[0]) & 0x8000) != 0 )
  {
    if ( v7 )
      MiLogVirtualRotateEvent((__int64)v11, v7, Direction);
  }
  return 0;
}
