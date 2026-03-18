/*
 * XREFs of EtwpGetStackExtendedHeaderItem @ 0x1403ED180
 * Callers:
 *     EtwpEventWriteFull @ 0x140328590 (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x140920F90 (EtwpWriteUserEvent.c)
 * Callees:
 *     KeGetEffectiveIrql @ 0x140257DC0 (KeGetEffectiveIrql.c)
 *     MmCanThreadFault @ 0x14027DC40 (MmCanThreadFault.c)
 *     EtwpExpandStackAndWalkFrameChain @ 0x1403ED390 (EtwpExpandStackAndWalkFrameChain.c)
 */

char __fastcall EtwpGetStackExtendedHeaderItem(
        __int64 a1,
        struct _KTHREAD *a2,
        char a3,
        __int64 a4,
        char a5,
        signed __int64 *a6)
{
  __int64 v7; // r14
  signed __int64 v10; // rbx
  struct _KTHREAD *CurrentThread; // rdi
  __int16 v12; // ax
  __int16 v13; // ax
  __int16 v14; // dx
  char result; // al
  __int64 v16; // [rsp+30h] [rbp-38h] BYREF
  __int64 v17; // [rsp+88h] [rbp+20h] BYREF

  v7 = a4 + 32;
  v10 = 0LL;
  LODWORD(v17) = 0;
  LODWORD(v16) = 0;
  if ( a5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 1024));
    if ( (int)EtwpExpandStackAndWalkFrameChain((PVOID *)(a4 + 48), 0x100u, (__int64)&v17) < 0 )
      goto LABEL_22;
    if ( (unsigned int)v17 <= 4 )
      LODWORD(v17) = 0;
    else
      LODWORD(v17) = v17 - 4;
  }
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread != a2
    || (CurrentThread->MiscFlags & 0x400) != 0
    || (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
  {
    goto LABEL_15;
  }
  if ( KeGetEffectiveIrql() >= 2u )
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
    v10 = _InterlockedIncrement64(&EtwpStackMatchId);
    goto LABEL_15;
  }
  _InterlockedAdd((volatile signed __int32 *)(a1 + 1024), 1u);
  if ( (int)EtwpExpandStackAndWalkFrameChain(
              (PVOID *)(v7 + 8 * ((unsigned int)v17 + 2LL)),
              256 - (int)v17,
              (__int64)&v16) < 0 )
  {
LABEL_22:
    _InterlockedAdd((volatile signed __int32 *)(a1 + 1028), 1u);
    return 0;
  }
  if ( a6 )
    v10 = *a6;
LABEL_15:
  v12 = v16 + v17;
  if ( (_WORD)v16 + (_WORD)v17 || v10 )
  {
    *(_QWORD *)(v7 + 8) = v10;
    v13 = 8 * (v12 + 1);
    *(_WORD *)(v7 + 6) = v13;
    *(_DWORD *)(v7 + 2) = 6;
    v14 = v13 + 8;
    result = 1;
    *(_WORD *)v7 = v14;
    return result;
  }
  return 0;
}
