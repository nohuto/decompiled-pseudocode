/*
 * XREFs of TpInitializePackage @ 0x1800A52A0
 * Callers:
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlCreateTagHeap @ 0x1800A5370 (RtlCreateTagHeap.c)
 *     TppQueryMaximumGroupCount @ 0x1800A5614 (TppQueryMaximumGroupCount.c)
 *     NtQuerySystemInformation @ 0x180162350 (NtQuerySystemInformation.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS TpInitializePackage()
{
  int TagHeap; // eax
  NTSTATUS result; // eax
  unsigned __int16 MaximumGroupCount; // ax
  struct _PEB *v3; // rax
  _DWORD SystemInformation[262]; // [rsp+20h] [rbp-418h] BYREF
  ULONG ReturnLength; // [rsp+440h] [rbp+8h] BYREF

  memset_thunk_772440563353939046(SystemInformation, 0, 0x408uLL);
  TagHeap = RtlCreateTagHeap(NtCurrentPeb()->ProcessHeap);
  ReturnLength = 0;
  TppHeapTag = TagHeap;
  result = NtQuerySystemInformation(SystemNumaProcessorMap, SystemInformation, 0x408u, &ReturnLength);
  if ( result >= 0 )
  {
    if ( ReturnLength >= 4
      && (TppNumberNodes = SystemInformation[0] + 1,
          MaximumGroupCount = TppQueryMaximumGroupCount(),
          (TppMaximumGroups = MaximumGroupCount) != 0) )
    {
      v3 = NtCurrentPeb();
      v3->TppWorkerpListLock = 0LL;
      v3 = (struct _PEB *)((char *)v3 + 912);
      v3->Mutant = v3;
      *(_QWORD *)&v3->InheritedAddressSpace = v3;
      return 0;
    }
    else
    {
      return -1073741595;
    }
  }
  return result;
}
