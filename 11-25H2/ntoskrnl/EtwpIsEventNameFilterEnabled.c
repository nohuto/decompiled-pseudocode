/*
 * XREFs of EtwpIsEventNameFilterEnabled @ 0x1404ECAD0
 * Callers:
 *     EtwpEventWriteFull @ 0x14030D050 (EtwpEventWriteFull.c)
 *     EtwpApplyEventNameFilter @ 0x1404EC710 (EtwpApplyEventNameFilter.c)
 *     EtwpWriteUserEvent @ 0x1409245D0 (EtwpWriteUserEvent.c)
 * Callees:
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

char __fastcall EtwpIsEventNameFilterEnabled(
        __int64 a1,
        unsigned int a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        __int64 a5,
        char a6)
{
  __int64 v6; // rax
  char v7; // bp
  unsigned __int8 CurrentIrql; // di
  __int64 v12; // rsi
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rbx
  __int64 v16; // rcx
  int v17; // eax
  unsigned __int8 v18; // al

  v6 = *(_QWORD *)(a1 + 384);
  v7 = 0;
  CurrentIrql = 0;
  if ( !v6 )
    return 0;
  v12 = 104LL * a2;
  v13 = v12 + v6;
  v14 = *(_DWORD *)(v12 + v6);
  if ( !a6 )
  {
    if ( (v14 & 0x80000400) == 0x80000400 )
    {
      v15 = *(_QWORD *)(v13 + 96);
      goto LABEL_7;
    }
    return 0;
  }
  if ( (v14 & 0x80002000) != 0x80002000 )
    return 0;
  v15 = *(_QWORD *)(v13 + 56);
LABEL_7:
  if ( !v15 )
    return 0;
  if ( a3 < 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  }
  v16 = *(_QWORD *)(a1 + 384);
  v17 = *(_DWORD *)(v16 + v12);
  if ( a6 )
  {
    if ( (v17 & 0x80002000) != 0x80002000 )
      goto LABEL_17;
    v15 = *(_QWORD *)(v16 + v12 + 56);
  }
  else
  {
    if ( (v17 & 0x80000400) != 0x80000400 )
      goto LABEL_17;
    v15 = *(_QWORD *)(v16 + v12 + 96);
  }
  if ( v15 )
  {
LABEL_17:
    v18 = *(_BYTE *)(v15 + 1);
    if ( (a4 <= v18 || !v18)
      && (!a5 || (a5 & *(_QWORD *)(v15 + 8)) != 0 && (a5 & *(_QWORD *)(v15 + 16)) == *(_QWORD *)(v15 + 16)) )
    {
      v7 = 1;
    }
  }
  if ( a3 < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return v7;
}
