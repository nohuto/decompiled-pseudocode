/*
 * XREFs of EtwpGetPmcProfileSource @ 0x14079A910
 * Callers:
 *     EtwQueryPerformanceTraceInformation @ 0x14082425C (EtwQueryPerformanceTraceInformation.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402F0970 (KeReleaseMutex.c)
 */

__int64 __fastcall EtwpGetPmcProfileSource(__int64 a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v6; // esi
  unsigned int v7; // r9d
  unsigned int v8; // eax
  unsigned int i; // r8d

  v6 = 0;
  KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
  v7 = EtwpPmcProfile;
  v8 = 4 * EtwpPmcProfile + 16;
  *a3 = v8;
  if ( a2 > v8 )
  {
    v6 = -1073741789;
  }
  else
  {
    for ( i = 0; i < v7; ++i )
      *(_DWORD *)(a1 + 4LL * i + 16) = *((__int16 *)qword_140EFED68 + 308 * i + 304);
  }
  KeReleaseMutex(&EtwpGroupMaskMutex, 0);
  return v6;
}
