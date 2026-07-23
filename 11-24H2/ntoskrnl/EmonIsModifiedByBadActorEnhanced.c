/*
 * XREFs of EmonIsModifiedByBadActorEnhanced @ 0x140559880
 * Callers:
 *     <none>
 * Callees:
 *     EmonIsModifiedByBadActorInternalEnhanced @ 0x14055992C (EmonIsModifiedByBadActorInternalEnhanced.c)
 */

__int64 __fastcall EmonIsModifiedByBadActorEnhanced(unsigned int a1, int a2, __int64 a3)
{
  __int64 v3; // rax
  _DWORD *v5; // r10
  int v6; // edx
  int v7; // edx
  unsigned __int64 v9; // r8

  LODWORD(v3) = KeGetPcr()->Prcb.Number;
  v5 = *(_DWORD **)(KiProcessorBlock[v3] + 88);
  if ( a2 )
  {
    v6 = a2 - 1;
    if ( v6 )
    {
      v7 = v6 - 99;
      if ( v7 )
      {
        if ( v7 == 1 )
          v5 += 18;
        else
          v5 = 0LL;
      }
      else
      {
        v5 += 12;
      }
    }
    else
    {
      v5 += 6;
    }
  }
  if ( *v5 )
  {
    if ( *v5 != 1 )
      return 3221225712LL;
    v9 = (15LL << (4 * (unsigned __int8)a1)) & __readmsr(0x38Du);
  }
  else
  {
    v9 = __readmsr(a1 + 390);
  }
  return EmonIsModifiedByBadActorInternalEnhanced(a1, v5, v9, a3);
}
