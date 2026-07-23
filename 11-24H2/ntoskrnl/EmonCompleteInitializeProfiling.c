/*
 * XREFs of EmonCompleteInitializeProfiling @ 0x140B50CD0
 * Callers:
 *     <none>
 * Callees:
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x14053F86C (HalpQueryMaximumRegisteredProcessorCount.c)
 *     KeAllocateProcessorProfileStructures @ 0x1405AD3D0 (KeAllocateProcessorProfileStructures.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall EmonCompleteInitializeProfiling(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rax
  unsigned int v4; // edi
  __int64 v5; // rax
  unsigned int v6; // ebx
  __int64 v7; // rsi
  unsigned int MaximumRegisteredProcessorCount; // eax
  __int64 v9; // r8
  __int64 v10; // rdi
  _PROCESSOR_PROFILE_CONTROL_AREA *v11; // rbx
  size_t v12; // rdi
  size_t v13; // r8
  unsigned __int64 v14; // rcx
  void *v15; // rcx
  unsigned int PebsBufferBase; // ecx
  _PROCESSOR_PROFILE_CONTROL_AREA *v17; // [rsp+30h] [rbp+8h] BYREF

  if ( EmonPebsAvailable )
  {
    LODWORD(a2) = KeGetPcr()->Prcb.Number;
    v2 = (unsigned int)a2;
    v3 = *(_QWORD *)(KiProcessorBlock[a2] + 88);
    if ( v3 )
      v4 = *(_DWORD *)(v3 + 4);
    else
      v4 = 0;
    v5 = v3 + 24;
    if ( v5 )
      v6 = *(_DWORD *)(v5 + 4);
    else
      v6 = 0;
    v7 = 4096LL;
    if ( ((_DWORD)a2
       || (MaximumRegisteredProcessorCount = HalpQueryMaximumRegisteredProcessorCount(),
           (int)KeAllocateProcessorProfileStructures(
                  MaximumRegisteredProcessorCount,
                  4096LL,
                  (_PROCESSOR_PROFILE_CONTROL_AREA **)&EmonDsManagementAreas,
                  1) >= 0))
      && (v17 = (_PROCESSOR_PROFILE_CONTROL_AREA *)(EmonDsManagementAreas + 160 * v2),
          (int)KeAllocateProcessorProfileStructures(0, 0LL, &v17, 0) >= 0) )
    {
      if ( EmonPebsEntrySize )
        v7 = EmonPebsEntrySize * (0x1000u / EmonPebsEntrySize);
      v9 = v4;
      v10 = v6;
      v11 = v17;
      v12 = 8 * v10;
      v13 = 8 * v9;
      if ( EmonPebs64Bit )
      {
        v14 = v17->PebsDsSaveArea.As32Bit.PebsGpCounterReset[0];
        v17->PebsDsSaveArea.As32Bit.PebsGpCounterReset[1] = v14;
        v11->PebsDsSaveArea.As32Bit.PebsGpCounterReset[2] = v7 + v14;
        v11->PebsDsSaveArea.As32Bit.PebsGpCounterReset[3] = v14;
        memset_0(&v11->RawBuffer + 8, 0, v13);
        v15 = &v11->RawBuffer + 16;
      }
      else
      {
        PebsBufferBase = v17->PebsDsSaveArea.As32Bit.PebsBufferBase;
        v17->PebsDsSaveArea.As32Bit.PebsBufferBase = PebsBufferBase;
        v11->PebsDsSaveArea.As32Bit.PebsIndex = PebsBufferBase;
        v11->PebsDsSaveArea.As32Bit.PebsAbsoluteMaximum = PebsBufferBase + v7;
        v11->PebsDsSaveArea.As32Bit.PebsInterruptThreshold = PebsBufferBase;
        memset_0(&v11->RawBuffer + 4, 0, v13);
        v15 = &v11->RawBuffer + 12;
      }
      memset_0(v15, 0, v12);
      __writemsr(0x600u, (unsigned __int64)v11);
    }
    else
    {
      EmonPebsAvailable = 0;
    }
  }
}
