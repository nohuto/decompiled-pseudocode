/*
 * XREFs of VidSchiRequestSchedulerStatus @ 0x140115710
 * Callers:
 *     VidSchFlushAdapter @ 0x1400A5430 (VidSchFlushAdapter.c)
 *     VidSchTerminateAdapter @ 0x1400FBC90 (VidSchTerminateAdapter.c)
 *     VidSchInitializeAdapter @ 0x140115D50 (VidSchInitializeAdapter.c)
 * Callees:
 *     VidSchiGetSchedulerStatus @ 0x14004FE78 (VidSchiGetSchedulerStatus.c)
 */

__int64 __fastcall VidSchiRequestSchedulerStatus(__int64 a1, int a2, int a3)
{
  unsigned int v3; // edi

  v3 = 0;
  if ( a2 != 2 )
    ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 376), 1u);
  if ( *(_DWORD *)(a1 + 372) != a2 )
  {
    *(_DWORD *)(a1 + 372) = a2;
    *(_QWORD *)(a1 + 1536) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(a1 + 1504), 0, 0);
    if ( a3 )
    {
      *(_QWORD *)(a1 + 1584) = MEMORY[0xFFFFF78000000320];
      KeWaitForSingleObject((PVOID)(a1 + 1560), Executive, 0, 0, 0LL);
      if ( (unsigned int)VidSchiGetSchedulerStatus(a1) != a2 )
        v3 = -1073741823;
    }
  }
  if ( a2 != 2 )
    ExReleaseResourceLite((PERESOURCE)(a1 + 376));
  return v3;
}
