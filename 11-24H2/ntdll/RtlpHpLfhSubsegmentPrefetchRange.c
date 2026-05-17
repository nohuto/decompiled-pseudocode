/*
 * XREFs of RtlpHpLfhSubsegmentPrefetchRange @ 0x1800E2320
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x18004B690 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhSubsegmentInitialize @ 0x180050038 (RtlpHpLfhSubsegmentInitialize.c)
 * Callees:
 *     ZwSetInformationVirtualMemory @ 0x180165280 (ZwSetInformationVirtualMemory.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentPrefetchRange(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  unsigned __int8 *v5; // rbx
  __int64 result; // rax
  unsigned __int8 *v7; // rdi
  _QWORD v8[3]; // [rsp+30h] [rbp-18h] BYREF
  int v9; // [rsp+58h] [rbp+10h] BYREF

  v5 = (unsigned __int8 *)(a1 + a2);
  result = a3;
  v7 = &v5[a3];
  if ( (RtlpHpLfhPerfFlags & 2) != 0 )
  {
    if ( (a4 & 1) != 0 )
    {
      v8[1] = a3;
      v8[0] = a1 + a2;
      v9 = 1;
      result = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD *, int *, int))ZwSetInformationVirtualMemory)(
                 -1LL,
                 0LL,
                 1LL,
                 v8,
                 &v9,
                 4);
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
