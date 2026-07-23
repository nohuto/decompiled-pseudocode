/*
 * XREFs of RtlpHpLfhSubsegmentPrefetchRange @ 0x1800DD8F0
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x180061270 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhSubsegmentInitialize @ 0x180065C18 (RtlpHpLfhSubsegmentInitialize.c)
 * Callees:
 *     ZwSetInformationVirtualMemory @ 0x180163640 (ZwSetInformationVirtualMemory.c)
 */

NTSTATUS __fastcall RtlpHpLfhSubsegmentPrefetchRange(__int64 a1, unsigned int a2, unsigned __int32 a3, char a4)
{
  unsigned __int8 *v5; // rbx
  NTSTATUS result; // eax
  unsigned __int8 *v7; // rdi
  _MEMORY_RANGE_ENTRY v8; // [rsp+30h] [rbp-18h] BYREF
  int v9; // [rsp+58h] [rbp+10h] BYREF

  v5 = (unsigned __int8 *)(a1 + a2);
  result = a3;
  v7 = &v5[a3];
  if ( (RtlpHpLfhPerfFlags & 2) != 0 )
  {
    if ( (a4 & 1) != 0 )
    {
      v8.NumberOfBytes = a3;
      v8.VirtualAddress = (PVOID)(a1 + a2);
      v9 = 1;
      result = ZwSetInformationVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, VmPrefetchInformation, 1uLL, &v8, &v9, 4u);
    }
    if ( (a4 & 2) != 0 && v5 < v7 )
    {
      do
      {
        result = *v5;
        v5 += 4096;
      }
      while ( v5 < v7 );
    }
  }
  return result;
}
