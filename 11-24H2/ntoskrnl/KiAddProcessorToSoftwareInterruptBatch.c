/*
 * XREFs of KiAddProcessorToSoftwareInterruptBatch @ 0x1402DAC1C
 * Callers:
 *     KiGroupSchedulingGenerationEnd @ 0x1402DA488 (KiGroupSchedulingGenerationEnd.c)
 * Callees:
 *     KeAddGroupAffinityEx @ 0x140287710 (KeAddGroupAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x140287740 (KeAddProcessorAffinityEx.c)
 */

char __fastcall KiAddProcessorToSoftwareInterruptBatch(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v4; // edx
  unsigned __int16 *v5; // rdi

  LOBYTE(v2) = *(_BYTE *)(a1 + 1);
  if ( (_BYTE)v2 )
  {
    if ( (_BYTE)v2 == 1 )
    {
      v4 = *(_DWORD *)(a1 + 4);
      if ( v4 == *(_DWORD *)(a2 + 36) )
        return v2;
      v5 = (unsigned __int16 *)(a1 + 8);
      *(_BYTE *)(a1 + 1) = 2;
      KeAddProcessorAffinityEx((unsigned __int16 *)(a1 + 8), v4);
    }
    else
    {
      v5 = (unsigned __int16 *)(a1 + 8);
    }
    LOBYTE(v2) = KeAddGroupAffinityEx(v5, *(unsigned __int8 *)(a2 + 208), *(_QWORD *)(a2 + 200));
  }
  else
  {
    *(_BYTE *)(a1 + 1) = 1;
    v2 = *(_DWORD *)(a2 + 36);
    *(_DWORD *)(a1 + 4) = v2;
  }
  return v2;
}
