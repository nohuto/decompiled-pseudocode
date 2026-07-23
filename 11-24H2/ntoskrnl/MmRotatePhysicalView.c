/*
 * XREFs of MmRotatePhysicalView @ 0x140A231B0
 * Callers:
 *     <none>
 * Callees:
 *     MiObtainReferencedVadEx @ 0x140344D30 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVad @ 0x1403626E0 (MiUnlockAndDereferenceVad.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x14038E15C (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiGetProcessPartition @ 0x1404329B0 (MiGetProcessPartition.c)
 *     MiGetVadCacheAttribute @ 0x1404A0228 (MiGetVadCacheAttribute.c)
 *     MiLogVirtualRotateEvent @ 0x1407EE044 (MiLogVirtualRotateEvent.c)
 *     MiRotateToFrameBuffer @ 0x140A233E4 (MiRotateToFrameBuffer.c)
 *     MiRotateToFrameBufferNoCopy @ 0x140A23700 (MiRotateToFrameBufferNoCopy.c)
 *     MiReplaceRotateWithDemandZero @ 0x140A5D478 (MiReplaceRotateWithDemandZero.c)
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
  __int64 v13; // r9
  __int64 v14; // rax
  void *v15; // rbp
  unsigned int VadCacheAttribute; // eax
  int v17; // eax
  NTSTATUS v18; // ebx
  PVOID v20; // r14
  __int64 v21; // [rsp+80h] [rbp+8h] BYREF
  __int64 ProcessPartition; // [rsp+88h] [rbp+10h]

  LODWORD(v21) = 0;
  v6 = 0LL;
  v7 = *NumberOfBytes;
  v11 = (char *)VirtualAddress;
  if ( ((unsigned __int16)VirtualAddress & 0xFFF) != 0 )
  {
    v18 = -1073741585;
    goto LABEL_13;
  }
  if ( (v7 & 0xFFF) != 0 )
    goto LABEL_24;
  if ( Direction >= MmMaximumRotateDirection )
  {
    v18 = -1073741583;
    goto LABEL_13;
  }
  v12 = (unsigned __int64)VirtualAddress + v7 - 1;
  if ( v12 <= (unsigned __int64)VirtualAddress )
  {
LABEL_24:
    v18 = -1073741584;
    goto LABEL_13;
  }
  ProcessPartition = MiGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
  v14 = MiObtainReferencedVadEx((unsigned __int64)v11, 0LL, (int *)&v21, v13);
  v15 = (void *)v14;
  if ( !v14 )
  {
    v18 = v21;
    if ( (_DWORD)v21 == -1073741664 )
      v18 = -1073741819;
    goto LABEL_13;
  }
  if ( (*(_DWORD *)(v14 + 48) & 0x70) != 0x40
    || (*(unsigned int *)(v14 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v14 + 33) << 32)) < v12 >> 12 )
  {
    v18 = -1073741800;
    goto LABEL_12;
  }
  VadCacheAttribute = MiGetVadCacheAttribute(v14);
  if ( Direction > MmToFrameBufferNoCopy )
  {
    if ( Direction == MmToRegularMemoryNoCopy )
    {
      v18 = MiReplaceRotateWithDemandZeroNoCopy((__int64)v15, (unsigned __int64)v11, v12, VadCacheAttribute);
      MiUnlockAndDereferenceVad(v15);
      *NumberOfBytes = v7;
      if ( (WORD2(PerfGlobalGroupMask[0]) & 0x8000) != 0 && v7 )
        MiLogVirtualRotateEvent((__int64)v11, v7, 3);
      return v18;
    }
    v20 = Context;
    v18 = v21;
    while ( v7 )
    {
      v21 = 0LL;
      v18 = MiReplaceRotateWithDemandZero(v15, v11, v7, CopyFunction, v20, &v21);
      v6 += v21;
      if ( v18 == 1073741849 )
        break;
      v7 -= v21;
      v11 += v21;
    }
    goto LABEL_12;
  }
  if ( Direction )
    v17 = MiRotateToFrameBufferNoCopy(v15, v11, NewMdl, v7 >> 12);
  else
    v17 = MiRotateToFrameBuffer(
            ProcessPartition,
            (_DWORD)v15,
            (_DWORD)v11,
            (_DWORD)NewMdl,
            v7 >> 12,
            (__int64)CopyFunction,
            (__int64)Context);
  v18 = v17;
  if ( v17 < 0 )
  {
LABEL_12:
    MiUnlockAndDereferenceVad(v15);
LABEL_13:
    *NumberOfBytes = v6;
    return v18;
  }
  MiUnlockAndDereferenceVad(v15);
  *NumberOfBytes = v7;
  if ( (WORD2(PerfGlobalGroupMask[0]) & 0x8000) != 0 )
  {
    if ( v7 )
      MiLogVirtualRotateEvent((__int64)v11, v7, Direction);
  }
  return 0;
}
