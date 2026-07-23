/*
 * XREFs of ExfWaitForRundownProtectionRelease @ 0x1402BB63C
 * Callers:
 *     ExWaitForRundownProtectionRelease @ 0x1402BB610 (ExWaitForRundownProtectionRelease.c)
 *     CmLoadAppKey @ 0x14092FCDC (CmLoadAppKey.c)
 *     PfSnPrefetchSections @ 0x140938134 (PfSnPrefetchSections.c)
 *     PfSnPrefetchSectionsCleanup @ 0x1409384F0 (PfSnPrefetchSectionsCleanup.c)
 *     PfSnPrefetchScenario @ 0x14094A830 (PfSnPrefetchScenario.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 */

int __fastcall ExfWaitForRundownProtectionRelease(volatile signed __int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rtt
  int v5; // edx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v12; // [rsp+30h] [rbp-30h] BYREF
  __int128 Object; // [rsp+38h] [rbp-28h] BYREF
  char *v14; // [rsp+48h] [rbp-18h]
  signed __int32 v15[4]; // [rsp+50h] [rbp-10h] BYREF
  int v16; // [rsp+70h] [rbp+10h] BYREF

  *(_QWORD *)v15 = 1LL;
  v14 = 0LL;
  v2 = a2 >> 1;
  v3 = a2;
  Object = 0LL;
  while ( 1 )
  {
    v12 = v2;
    v4 = v3;
    v3 = _InterlockedCompareExchange64(a1, (signed __int64)&v12 + 1, v3);
    if ( v4 == v3 )
      break;
    v2 = v3 >> 1;
  }
  if ( v2 )
  {
    v16 = 0;
    if ( KeGetCurrentIrql() < 2u )
    {
      if ( MEMORY[0xFFFFF7800000036A] <= 1u )
      {
LABEL_11:
        LOWORD(Object) = 1;
        v14 = (char *)&Object + 8;
        *((_QWORD *)&Object + 1) = (char *)&Object + 8;
        v3 = (unsigned __int64)v15;
        BYTE2(Object) = 6;
        DWORD1(Object) = 0;
        if ( _interlockedbittestandreset(v15, 0) )
          LODWORD(v3) = KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      }
      else if ( MEMORY[0xFFFFF78000000297] )
      {
        v7 = __rdtsc();
        v8 = v7 + (unsigned int)ExpSpinCycleCount;
        while ( 1 )
        {
          v3 = (unsigned __int64)v15;
          __asm { monitorx rax, rcx, rdx }
          if ( (v15[0] & 1) == 0 )
            break;
          v9 = v7;
          v10 = __rdtsc();
          v7 = v10;
          if ( v10 < v9 || v10 >= v8 )
            goto LABEL_11;
          __asm { mwaitx  rax, rcx, rbx }
        }
      }
      else
      {
        LODWORD(v3) = ExpSpinCycleCount / (unsigned int)MEMORY[0xFFFFF780000002D6];
        v5 = 0;
        while ( (v15[0] & 1) != 0 )
        {
          if ( v5 == (_DWORD)v3 )
            goto LABEL_11;
          _mm_pause();
          ++v5;
        }
      }
    }
    else
    {
      while ( 1 )
      {
        LODWORD(v3) = v15[0];
        if ( (v15[0] & 1) == 0 )
          break;
        KeYieldProcessorEx(&v16);
      }
    }
  }
  return v3;
}
