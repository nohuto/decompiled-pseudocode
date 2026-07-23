/*
 * XREFs of Amd64IsModifiedByBadActor @ 0x14048ED90
 * Callers:
 *     <none>
 * Callees:
 *     Amd64IsModifiedByBadActorInternal @ 0x14048EE74 (Amd64IsModifiedByBadActorInternal.c)
 */

__int64 __fastcall Amd64IsModifiedByBadActor(unsigned int a1, unsigned int a2, __int64 a3)
{
  int v3; // r9d
  __int64 v4; // rdi
  int v7; // edx
  int v9; // eax
  __int64 v10; // rcx

  v3 = 0;
  v4 = a3;
  if ( !a2 || a2 - 100 < 2 )
  {
    LODWORD(a3) = KeGetPcr()->Prcb.Number;
    v7 = 0;
    if ( a2 != 1 )
    {
      if ( a2 != 100 )
      {
        if ( a2 != 101 )
          return Amd64IsModifiedByBadActorInternal(
                   a1,
                   a2,
                   __readmsr(*((_DWORD *)&Amd64EventSelectRegisters + v7 + a1)),
                   v4);
        if ( *(_QWORD *)(KiProcessorBlock[a3] + 88) == -48LL )
          v7 = 0;
        else
          v7 = *(_DWORD *)(*(_QWORD *)(KiProcessorBlock[a3] + 88) + 52LL);
      }
      if ( *(_QWORD *)(KiProcessorBlock[a3] + 88) == -24LL )
        v9 = 0;
      else
        v9 = *(_DWORD *)(*(_QWORD *)(KiProcessorBlock[a3] + 88) + 28LL);
      v7 += v9;
    }
    v10 = *(_QWORD *)(KiProcessorBlock[a3] + 88);
    if ( v10 )
      v3 = *(_DWORD *)(v10 + 4);
    v7 += v3;
    return Amd64IsModifiedByBadActorInternal(a1, a2, __readmsr(*((_DWORD *)&Amd64EventSelectRegisters + v7 + a1)), v4);
  }
  return 3221225712LL;
}
