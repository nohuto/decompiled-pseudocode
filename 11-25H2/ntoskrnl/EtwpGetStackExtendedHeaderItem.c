/*
 * XREFs of EtwpGetStackExtendedHeaderItem @ 0x14045839C
 * Callers:
 *     EtwpEventWriteFull @ 0x14030D050 (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x1409245D0 (EtwpWriteUserEvent.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x140256C10 (ObGetCurrentIrql.c)
 *     MmCanThreadFault @ 0x140348130 (MmCanThreadFault.c)
 *     EtwpExpandStackAndWalkFrameChain @ 0x140348E10 (EtwpExpandStackAndWalkFrameChain.c)
 */

char __fastcall EtwpGetStackExtendedHeaderItem(
        __int64 a1,
        struct _KTHREAD *a2,
        char a3,
        unsigned __int64 a4,
        char a5,
        signed __int64 *a6)
{
  unsigned __int64 v7; // r14
  signed __int64 v11; // rbx
  struct _KTHREAD *CurrentThread; // rdi
  __int16 v13; // ax
  __int16 v14; // ax
  __int16 v15; // dx
  char result; // al
  __int64 v17; // [rsp+30h] [rbp-38h] BYREF
  __int64 v18; // [rsp+88h] [rbp+20h] BYREF

  v7 = a4 + 32;
  v11 = 0LL;
  LODWORD(v18) = 0;
  LODWORD(v17) = 0;
  if ( a5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 1024));
    if ( (int)EtwpExpandStackAndWalkFrameChain((PVOID *)(a4 + 48), 0x100u, a4, 0x400u, (ULONG *)&v18) < 0 )
      goto LABEL_22;
    if ( (unsigned int)v18 <= 4 )
      LODWORD(v18) = 0;
    else
      LODWORD(v18) = v18 - 4;
  }
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread != a2
    || (CurrentThread->MiscFlags & 0x400) != 0
    || (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
  {
    goto LABEL_15;
  }
  if ( ObGetCurrentIrql() >= 2u )
  {
    if ( KeGetCurrentPrcb()->NestingLevel )
      goto LABEL_15;
    goto LABEL_7;
  }
  if ( !MmCanThreadFault()
    || BYTE6(CurrentThread[1].Queue)
    || KeGetCurrentThread()->ApcStateIndex == 1
    || (CurrentThread->SameThreadTransientFlags & 4) != 0
    || (a3 & 1) != 0 )
  {
LABEL_7:
    v11 = _InterlockedIncrement64(&EtwpStackMatchId);
    goto LABEL_15;
  }
  _InterlockedAdd((volatile signed __int32 *)(a1 + 1024), 1u);
  if ( (int)EtwpExpandStackAndWalkFrameChain(
              (PVOID *)(v7 + 8 * ((unsigned int)v18 + 2LL)),
              256 - (int)v18,
              a4,
              1u,
              (ULONG *)&v17) < 0 )
  {
LABEL_22:
    _InterlockedAdd((volatile signed __int32 *)(a1 + 1028), 1u);
    return 0;
  }
  if ( a6 )
    v11 = *a6;
LABEL_15:
  v13 = v17 + v18;
  if ( (_WORD)v17 + (_WORD)v18 || v11 )
  {
    *(_QWORD *)(v7 + 8) = v11;
    v14 = 8 * (v13 + 1);
    *(_WORD *)(v7 + 6) = v14;
    *(_DWORD *)(v7 + 2) = 6;
    v15 = v14 + 8;
    result = 1;
    *(_WORD *)v7 = v15;
    return result;
  }
  return 0;
}
