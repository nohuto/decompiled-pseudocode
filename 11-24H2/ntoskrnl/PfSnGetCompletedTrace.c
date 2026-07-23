/*
 * XREFs of PfSnGetCompletedTrace @ 0x140A395F0
 * Callers:
 *     PfSnQueryPrefetcherInformation @ 0x140A39508 (PfSnQueryPrefetcherInformation.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnGetCompletedTrace(volatile void *a1, unsigned int a2, unsigned int *a3)
{
  char v5; // r12
  char *v6; // rbx
  unsigned int *v7; // r14
  unsigned int v8; // eax
  unsigned int v9; // edi
  __int64 v11; // rax

  v5 = 1;
  ExAcquireFastMutex(&stru_140E67178);
  dword_140E671B4 = 2;
  v6 = (char *)qword_140E67168;
  if ( qword_140E67168 == &qword_140E67168 )
  {
    v9 = -2147483622;
  }
  else
  {
    v7 = (unsigned int *)((char *)qword_140E67168 + 24);
    v8 = *((_DWORD *)qword_140E67168 + 6);
    if ( v8 <= a2 )
    {
      v11 = *(_QWORD *)qword_140E67168;
      if ( *((PVOID **)qword_140E67168 + 1) != &qword_140E67168 || *(PVOID *)(v11 + 8) != qword_140E67168 )
        __fastfail(3u);
      qword_140E67168 = *(PVOID *)qword_140E67168;
      *(_QWORD *)(v11 + 8) = &qword_140E67168;
      --dword_140E671B0;
      KeReleaseGuardedMutex(&stru_140E67178);
      v5 = 0;
      if ( KeGetCurrentThread()->PreviousMode )
        ProbeForWrite(a1, a2, 8u);
      memmove((void *)a1, v6 + 16, *v7);
      *a3 = *v7;
      ExFreePoolWithTag(v6, 0);
      v9 = 0;
    }
    else
    {
      *a3 = v8;
      v9 = -1073741789;
    }
  }
  if ( v5 )
    KeReleaseGuardedMutex(&stru_140E67178);
  return v9;
}
