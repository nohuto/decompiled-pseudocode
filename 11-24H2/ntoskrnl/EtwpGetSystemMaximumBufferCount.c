/*
 * XREFs of EtwpGetSystemMaximumBufferCount @ 0x1409CF9AC
 * Callers:
 *     EtwpAllocateTraceBufferPool @ 0x1409CF86C (EtwpAllocateTraceBufferPool.c)
 *     EtwpUpdateTrace @ 0x140ADA038 (EtwpUpdateTrace.c)
 * Callees:
 *     MmGetNumberOfPhysicalPages @ 0x140454120 (MmGetNumberOfPhysicalPages.c)
 *     MmGetMaximumNonPagedPoolInBytes @ 0x1404AA3A8 (MmGetMaximumNonPagedPoolInBytes.c)
 */

unsigned __int64 __fastcall EtwpGetSystemMaximumBufferCount(unsigned int *a1)
{
  unsigned __int64 MaximumNonPagedPoolInBytes; // rax
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // r8
  unsigned int v6; // eax

  if ( a1[75] == 1 )
  {
    v3 = MmSizeOfPagedPoolInBytes;
  }
  else
  {
    MmGetNumberOfPhysicalPages(0);
    MaximumNonPagedPoolInBytes = MmGetMaximumNonPagedPoolInBytes();
    if ( v3 >= MaximumNonPagedPoolInBytes )
      v3 = MaximumNonPagedPoolInBytes;
  }
  if ( (a1[204] & 2) != 0 && (v6 = a1[3], (v6 & 0x2000000) != 0) && (v6 & 0x400) != 0 )
    v4 = 50 * v3;
  else
    v4 = v3 * (unsigned int)EtwpMaxNonPagedPoolUsage;
  return v4 / 0x64 / a1[1];
}
