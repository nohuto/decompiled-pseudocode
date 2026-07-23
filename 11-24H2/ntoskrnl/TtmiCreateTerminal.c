/*
 * XREFs of TtmiCreateTerminal @ 0x14076F708
 * Callers:
 *     TtmpDispatchCreateTerminal @ 0x14076B818 (TtmpDispatchCreateTerminal.c)
 *     TtmInitCurrentSession @ 0x14099D6C8 (TtmInitCurrentSession.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x14027BEE0 (RtlFindClearBitsAndSet.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     KeInitializeTimer @ 0x14044A0E0 (KeInitializeTimer.c)
 *     KeInitializeDpc @ 0x14044A220 (KeInitializeDpc.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     TtmiUpdateActiveTerminalCount @ 0x14076A484 (TtmiUpdateActiveTerminalCount.c)
 *     TtmiLogTerminalCreated @ 0x14076EA8C (TtmiLogTerminalCreated.c)
 *     TtmpSetTerminalPendingCleanup @ 0x140770584 (TtmpSetTerminalPendingCleanup.c)
 *     ObInsertObjectEx @ 0x140853900 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x1408A4B90 (ObCreateObjectEx.c)
 *     TtmiLogError @ 0x14099E04C (TtmiLogError.c)
 */

__int64 __fastcall TtmiCreateTerminal(__int64 a1, __int64 a2, char a3, _QWORD *a4, _DWORD *DeferredContext, _QWORD *a6)
{
  ULONG ClearBitsAndSet; // eax
  int v10; // r9d
  unsigned __int64 v11; // rdi
  unsigned int v12; // ebx
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // rdx
  int Object; // eax
  _QWORD *v17; // rdx
  int inserted; // eax
  __int128 v20; // [rsp+50h] [rbp-48h] BYREF
  __int128 v21; // [rsp+60h] [rbp-38h]
  __int128 v22; // [rsp+70h] [rbp-28h]

  *a4 = 0LL;
  *DeferredContext = -1;
  ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)(a1 + 56), 1u, 0);
  v11 = ClearBitsAndSet;
  if ( ClearBitsAndSet == -1 )
  {
    v12 = -1073741756;
    TtmiLogError("TtmiAcquireTerminalId", 1599LL, 0xFFFFFFFFLL, 3221225540LL);
    v13 = 3221225540LL;
    v14 = 3221225540LL;
    v15 = 720LL;
LABEL_3:
    TtmiLogError("TtmiCreateTerminal", v15, v14, v13);
    return v12;
  }
  LOBYTE(v10) = a3;
  v21 = 0LL;
  DWORD2(v21) = a3 == 0 ? 0x200 : 0;
  v20 = 0LL;
  LODWORD(v20) = 48;
  v22 = 0LL;
  Object = ObCreateObjectEx(0, (_DWORD)TtmpTerminalObjectType, (unsigned int)&v20, v10);
  v12 = Object;
  if ( Object < 0 )
  {
    v13 = (unsigned int)Object;
    v14 = (unsigned int)Object;
    *(_BYTE *)(*(_QWORD *)(a1 + 64) + (v11 >> 3)) &= ~(1 << (v11 & 7));
    v15 = 753LL;
    goto LABEL_3;
  }
  PsReferenceSiloContext(0LL);
  memset_0(0LL, 0, 0x120uLL);
  MEMORY[0x18] = 1416459348;
  MEMORY[0x1C] = v11;
  if ( (_DWORD)v11 )
  {
    MEMORY[0x28] = 1;
    MEMORY[0x114] = 1;
    MEMORY[0x30] = 2;
    MEMORY[0x48] = 300000000LL;
  }
  else
  {
    MEMORY[0x28] = 3;
    MEMORY[0x114] = 3;
    MEMORY[0x30] = 0;
    MEMORY[0x24] |= 0x10u;
    MEMORY[0x50] = MEMORY[0xFFFFF78000000008];
    TtmiUpdateActiveTerminalCount((_DWORD *)a1, 1, 26);
  }
  KeInitializeTimer((PKTIMER)0x58);
  KeInitializeDpc((PRKDPC)0x98, (PKDEFERRED_ROUTINE)TtmpScheduledEvaluationDpc, 0LL);
  MEMORY[0xD8] = 0LL;
  MEMORY[0xE8] = TtmpScheduledEvaluationWorker;
  MEMORY[0xF0] = 0LL;
  _InterlockedAdd((volatile signed __int32 *)(a1 + 8), 1u);
  MEMORY[0x10] = a1;
  v17 = *(_QWORD **)(a1 + 48);
  if ( *v17 != a1 + 40 )
    __fastfail(3u);
  MEMORY[8] = *(_QWORD *)(a1 + 48);
  MEMORY[0] = a1 + 40;
  *v17 = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  TtmiLogTerminalCreated(0LL, v11);
  inserted = ObInsertObjectEx(0LL, 0, 0LL, (__int64)a4);
  v12 = inserted;
  if ( inserted >= 0 )
  {
    *DeferredContext = v11;
    if ( a6 )
      *a6 = 0LL;
    else
      ObfDereferenceObject(0LL);
    return 0;
  }
  else
  {
    TtmiLogError("TtmiCreateTerminal", 843LL, (unsigned int)inserted, (unsigned int)inserted);
    TtmpSetTerminalPendingCleanup(a1, 0LL);
  }
  return v12;
}
