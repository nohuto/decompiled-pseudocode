/*
 * XREFs of TpInitializePackage @ 0x1800340DC
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlCreateTagHeap @ 0x1800341B0 (RtlCreateTagHeap.c)
 *     TppQueryMaximumGroupCount @ 0x180034454 (TppQueryMaximumGroupCount.c)
 *     NtQuerySystemInformation @ 0x1801638E0 (NtQuerySystemInformation.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS TpInitializePackage()
{
  ULONG TagHeap; // eax
  NTSTATUS result; // eax
  unsigned __int16 MaximumGroupCount; // ax
  struct _PEB *v3; // rax
  _DWORD SystemInformation[262]; // [rsp+20h] [rbp-418h] BYREF
  ULONG ReturnLength; // [rsp+440h] [rbp+8h] BYREF

  memset_thunk_772440563353939046(SystemInformation, 0, 0x408uLL);
  TagHeap = RtlCreateTagHeap(NtCurrentPeb()->ProcessHeap, 0, (PWSTR)L"Threadpool!", (PWSTR)L"Cleanup Group");
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
