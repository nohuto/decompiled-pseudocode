/*
 * XREFs of PopFxPepPerfInfoFree @ 0x14074E2B4
 * Callers:
 *     PopFxPepPerfInfoQuery @ 0x14074E334 (PopFxPepPerfInfoQuery.c)
 *     PopFxRegisterComponentPerfStates @ 0x14074E534 (PopFxRegisterComponentPerfStates.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PopFxPepPerfInfoFree(_QWORD *P)
{
  __int64 i; // rdi
  void *v3; // rcx
  void *v4; // rcx

  if ( P )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)P; i = (unsigned int)(i + 1) )
    {
      if ( !HIDWORD(P[6 * i + 4]) )
      {
        v3 = (void *)P[6 * i + 6];
        if ( v3 )
          ExFreePoolWithTag(v3, 0x4D584650u);
      }
      v4 = (void *)P[6 * i + 2];
      if ( v4 )
        ExFreePoolWithTag(v4, 0x4D584650u);
    }
    ExFreePoolWithTag(P, 0x4D584650u);
  }
}
