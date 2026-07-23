/*
 * XREFs of EtwpGetStackExtendedHeaderItem @ 0x1403DD150
 * Callers:
 *     EtwpEventWriteFull @ 0x140326D30 (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x140AD78A0 (EtwpWriteUserEvent.c)
 * Callees:
 *     MmCanThreadFault @ 0x1402331D0 (MmCanThreadFault.c)
 *     KeGetEffectiveIrql @ 0x1402883D0 (KeGetEffectiveIrql.c)
 *     EtwpExpandStackAndWalkFrameChain @ 0x1403DD360 (EtwpExpandStackAndWalkFrameChain.c)
 */

char __fastcall EtwpGetStackExtendedHeaderItem(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        char a5,
        signed __int64 *a6)
{
  __int64 v7; // r14
  signed __int64 v10; // rbx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int16 v14; // ax
  __int16 v15; // ax
  __int16 v16; // dx
  char result; // al
  __int64 v18; // [rsp+30h] [rbp-38h] BYREF
  __int64 v19; // [rsp+88h] [rbp+20h] BYREF

  v7 = a4 + 32;
  v10 = 0LL;
  LODWORD(v19) = 0;
  LODWORD(v18) = 0;
  if ( a5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 1024));
    if ( (int)EtwpExpandStackAndWalkFrameChain((PVOID *)(a4 + 48), 0x100u, (__int64)&v19) < 0 )
      goto LABEL_22;
    if ( (unsigned int)v19 <= 4 )
      LODWORD(v19) = 0;
    else
      LODWORD(v19) = v19 - 4;
  }
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread != (struct _KTHREAD *)a2
    || (CurrentThread->MiscFlags & 0x400) != 0
    || (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
  {
    goto LABEL_15;
  }
  if ( KeGetEffectiveIrql(a1, a2) >= 2u )
  {
    if ( KeGetCurrentPrcb()->NestingLevel )
      goto LABEL_15;
    goto LABEL_7;
  }
  if ( !MmCanThreadFault(v13, v12)
    || BYTE6(CurrentThread[1].Queue)
    || KeGetCurrentThread()->ApcStateIndex == 1
    || (CurrentThread->SameThreadTransientFlags & 4) != 0
    || (a3 & 1) != 0 )
  {
LABEL_7:
    v10 = _InterlockedIncrement64(&EtwpStackMatchId);
    goto LABEL_15;
  }
  _InterlockedAdd((volatile signed __int32 *)(a1 + 1024), 1u);
  if ( (int)EtwpExpandStackAndWalkFrameChain(
              (PVOID *)(v7 + 8 * ((unsigned int)v19 + 2LL)),
              256 - (int)v19,
              (__int64)&v18) < 0 )
  {
LABEL_22:
    _InterlockedAdd((volatile signed __int32 *)(a1 + 1028), 1u);
    return 0;
  }
  if ( a6 )
    v10 = *a6;
LABEL_15:
  v14 = v18 + v19;
  if ( (_WORD)v18 + (_WORD)v19 || v10 )
  {
    *(_QWORD *)(v7 + 8) = v10;
    v15 = 8 * (v14 + 1);
    *(_WORD *)(v7 + 6) = v15;
    *(_DWORD *)(v7 + 2) = 6;
    v16 = v15 + 8;
    result = 1;
    *(_WORD *)v7 = v16;
    return result;
  }
  return 0;
}
