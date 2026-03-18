/*
 * XREFs of ProcessorpInitPreferredCpuSet @ 0x1400C8A34
 * Callers:
 *     ProcessorInitGlobalState @ 0x1400C895C (ProcessorInitGlobalState.c)
 * Callees:
 *     <none>
 */

void ProcessorpInitPreferredCpuSet()
{
  int v0; // eax
  void *Pool2; // rax
  USHORT ActiveGroupCount; // ax
  unsigned __int16 v3; // cx
  unsigned __int16 i; // si
  __int64 v5; // rdi
  ULONG v6; // ebx
  ULONG ActiveProcessorCount; // eax
  USHORT v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0;
  v0 = KeQuerySystemCpuPartitionAffinity(0LL, 0LL, &v8);
  if ( v0 == -1073741789 )
  {
    if ( v8 )
    {
      Pool2 = (void *)ExAllocatePool2(256LL, 16LL * v8, 1232102209LL);
      ProcessorpPreferredCpuSet = Pool2;
      if ( Pool2 )
      {
        if ( (int)KeQuerySystemCpuPartitionAffinity(Pool2, v8, &v8) >= 0 )
        {
          ActiveGroupCount = KeQueryActiveGroupCount();
          v3 = v8;
          if ( v8 < ActiveGroupCount )
          {
LABEL_10:
            ProcessorpPreferredCpuSetActive = 1;
            ProcessorpPreferredCpuSetGroupCount = v3;
            return;
          }
          for ( i = 0; i < v3; ++i )
          {
            v5 = 16LL * i;
            v6 = KeCountSetBitsGroupAffinity((char *)ProcessorpPreferredCpuSet + v5);
            ActiveProcessorCount = KeQueryActiveProcessorCountEx(*(_WORD *)((char *)ProcessorpPreferredCpuSet + v5 + 8));
            v3 = v8;
            if ( v6 < ActiveProcessorCount )
              goto LABEL_10;
          }
        }
      }
    }
  }
  else if ( v0 >= 0 )
  {
    return;
  }
  if ( ProcessorpPreferredCpuSet )
  {
    ExFreePoolWithTag(ProcessorpPreferredCpuSet, 0);
    ProcessorpPreferredCpuSet = 0LL;
  }
}
