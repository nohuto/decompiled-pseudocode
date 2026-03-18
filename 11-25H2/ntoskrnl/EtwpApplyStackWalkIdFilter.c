/*
 * XREFs of EtwpApplyStackWalkIdFilter @ 0x14041DEDC
 * Callers:
 *     EtwpEventWriteFull @ 0x14030D050 (EtwpEventWriteFull.c)
 *     EtwpApplyStackWalkFilterOnUserEvent @ 0x1409260C4 (EtwpApplyStackWalkFilterOnUserEvent.c)
 * Callees:
 *     EtwpPerfectHashFunctionSearch @ 0x14041DFC0 (EtwpPerfectHashFunctionSearch.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

bool __fastcall EtwpApplyStackWalkIdFilter(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // rbp
  unsigned __int16 v6; // si
  bool v7; // di
  __int64 v8; // rdx
  unsigned __int8 CurrentIrql; // bl
  _BYTE *v11; // rdx
  unsigned __int8 v12; // al
  unsigned __int8 v13; // al
  _BYTE *v14; // rdx

  v4 = (unsigned int)a3;
  v6 = a1;
  v7 = 1;
  if ( a4 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1);
    }
    v11 = *(_BYTE **)(104 * v4 + *(_QWORD *)(a2 + 384) + 48);
    if ( v11 )
    {
      v12 = EtwpPerfectHashFunctionSearch(v6, v11, a3);
      v7 = *v11 == v12;
    }
    if ( KiIrqlFlags )
    {
      LOBYTE(v11) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
    }
    __writecr8(CurrentIrql);
  }
  else
  {
    v8 = *(_QWORD *)(104LL * (unsigned int)a3 + *(_QWORD *)(a2 + 384) + 48);
    if ( v8 )
    {
      v13 = EtwpPerfectHashFunctionSearch((unsigned __int16)a1, v8, a3);
      return *v14 == v13;
    }
  }
  return v7;
}
