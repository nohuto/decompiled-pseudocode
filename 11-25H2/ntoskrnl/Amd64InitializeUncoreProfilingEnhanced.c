/*
 * XREFs of Amd64InitializeUncoreProfilingEnhanced @ 0x1405688D8
 * Callers:
 *     Amd64InitializeUncoreProfiling @ 0x1405688B0 (Amd64InitializeUncoreProfiling.c)
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x1402783E0 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x140278FE0 (KeRevertToUserGroupAffinityThread.c)
 *     KeQueryActiveProcessorCountEx @ 0x1403AE660 (KeQueryActiveProcessorCountEx.c)
 *     Amd64InitializeCacheStatusEnhanced @ 0x140568184 (Amd64InitializeCacheStatusEnhanced.c)
 *     Amd64InitializeDataFabricStatusEnhanced @ 0x1405685BC (Amd64InitializeDataFabricStatusEnhanced.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

void Amd64InitializeUncoreProfilingEnhanced()
{
  ULONG ActiveProcessorCount; // eax
  char v6; // bl
  __int64 v7; // rdi
  __int64 v8; // rsi
  unsigned int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-40h] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+40h] [rbp-20h] BYREF

  _RAX = 0x80000000LL;
  __asm { cpuid }
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  if ( (unsigned int)_RAX >= 0x8000001E && (Amd64PerfFeatures & 6) != 0 )
  {
    ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
    v6 = 0;
    if ( ActiveProcessorCount )
    {
      v7 = 0LL;
      v8 = ActiveProcessorCount;
      do
      {
        v9 = *(_DWORD *)((char *)KiGlobalState + v7);
        Affinity.Reserved[1] = 0;
        Affinity.Reserved[2] = 0;
        *(_DWORD *)&Affinity.Group = (unsigned __int16)(v9 >> 6);
        Affinity.Mask = 1LL << (v9 & 0x3F);
        if ( v6 )
        {
          KeSetSystemGroupAffinityThread(&Affinity, 0LL);
        }
        else
        {
          KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
          v6 = 1;
        }
        if ( (Amd64PerfFeatures & 2) != 0 )
          Amd64InitializeDataFabricStatusEnhanced();
        if ( (Amd64PerfFeatures & 4) != 0 )
          Amd64InitializeCacheStatusEnhanced(v11, v10, v12, v13);
        v7 += 4LL;
        --v8;
      }
      while ( v8 );
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    }
  }
}
