/*
 * XREFs of NvmeControllerGetPreferredIoQueueDepth @ 0x1400EECBC
 * Callers:
 *     NvmeControllerEssentialInitialize @ 0x1400ECE18 (NvmeControllerEssentialInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NvmeControllerGetPreferredIoQueueDepth(__int64 a1)
{
  unsigned int v1; // r8d

  v1 = 1024;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 4LL) )
  {
    v1 = *(_DWORD *)(*(_QWORD *)(a1 + 1048) + 4LL);
    goto LABEL_9;
  }
  if ( PhysicalMemorySize )
  {
    if ( (unsigned __int64)PhysicalMemorySize < 0x800000000LL )
    {
      if ( (unsigned __int64)PhysicalMemorySize <= 0x1000000000LL )
        goto LABEL_9;
    }
    else if ( (unsigned __int64)PhysicalMemorySize <= 0x1000000000LL )
    {
      v1 = 2048;
      goto LABEL_9;
    }
    v1 = 4096;
  }
LABEL_9:
  if ( v1 >= (unsigned int)(unsigned __int16)*(_DWORD *)(a1 + 584) + 1 )
    return (unsigned int)(unsigned __int16)*(_DWORD *)(a1 + 584) + 1;
  return v1;
}
