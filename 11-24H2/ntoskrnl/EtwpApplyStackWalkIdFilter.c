/*
 * XREFs of EtwpApplyStackWalkIdFilter @ 0x14040EDA4
 * Callers:
 *     EtwpEventWriteFull @ 0x140326D30 (EtwpEventWriteFull.c)
 *     EtwpApplyStackWalkFilterOnUserEvent @ 0x140A419F0 (EtwpApplyStackWalkFilterOnUserEvent.c)
 * Callees:
 *     EtwpPerfectHashFunctionSearch @ 0x14040EE80 (EtwpPerfectHashFunctionSearch.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

bool __fastcall EtwpApplyStackWalkIdFilter(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 v4; // rbp
  unsigned __int16 v6; // si
  bool v7; // di
  unsigned __int8 CurrentIrql; // bl
  _BYTE *v10; // rdx
  unsigned __int8 v11; // al
  unsigned __int8 v12; // al
  _BYTE *v13; // rdx

  v4 = a3;
  v6 = a1;
  v7 = 1;
  if ( a4 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
    }
    v10 = *(_BYTE **)(104 * v4 + *(_QWORD *)(a2 + 640) + 48);
    if ( v10 )
    {
      v11 = EtwpPerfectHashFunctionSearch(v6);
      v7 = *v10 == v11;
    }
    if ( KiIrqlFlags )
    {
      LOBYTE(v10) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
    }
    __writecr8(CurrentIrql);
  }
  else if ( *(_QWORD *)(104LL * a3 + *(_QWORD *)(a2 + 640) + 48) )
  {
    v12 = EtwpPerfectHashFunctionSearch((unsigned __int16)a1);
    return *v13 == v12;
  }
  return v7;
}
