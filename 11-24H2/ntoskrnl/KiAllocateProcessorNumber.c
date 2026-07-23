/*
 * XREFs of KiAllocateProcessorNumber @ 0x1405B857C
 * Callers:
 *     KiAllocateProcessorStateInitializationParameters @ 0x1405B3178 (KiAllocateProcessorStateInitializationParameters.c)
 *     KiConfigureInitialNodes @ 0x1405B89B8 (KiConfigureInitialNodes.c)
 * Callees:
 *     KiAdjustGroupConfiguration @ 0x1405B8204 (KiAdjustGroupConfiguration.c)
 *     KiAllocateSchedulerSubNode @ 0x1405B86DC (KiAllocateSchedulerSubNode.c)
 *     KiCommitGroupSubNodeAssignments @ 0x1405B88F4 (KiCommitGroupSubNodeAssignments.c)
 *     KiUncommitGroupSubNodeAssignments @ 0x1405B9190 (KiUncommitGroupSubNodeAssignments.c)
 */

__int64 __fastcall KiAllocateProcessorNumber(int a1, __int64 a2)
{
  int v3; // ebx
  unsigned __int16 v4; // si
  __int64 v5; // rdi
  unsigned __int16 v6; // r8
  __int64 v7; // rbp
  __int64 v8; // rdx
  __int64 SchedulerSubNode; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  unsigned int v12; // r9d
  __int64 *v13; // r8
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  int v17; // [rsp+50h] [rbp+8h]

  v3 = 0;
  v4 = -1;
  v5 = 0LL;
  v6 = 0;
  v7 = KeNodeBlock[a1];
  while ( v6 < (unsigned __int16)KiSubNodeCount )
  {
    v8 = KiSubNodeConfigBlock + 24LL * v6;
    if ( *(unsigned __int16 *)(v8 + 2) == a1
      && (unsigned int)__popcnt(*(_QWORD *)(v8 + 16)) < *(unsigned __int8 *)(v8 + 4) )
    {
      v5 = KiSubNodeConfigBlock + 24LL * v6;
      v4 = v6;
      break;
    }
    ++v6;
  }
  if ( (*(_BYTE *)(v5 + 5) & 2) == 0 )
  {
    KiAdjustGroupConfiguration(v5);
    if ( (*(_BYTE *)(v5 + 5) & 2) == 0 )
    {
      KiCommitGroupSubNodeAssignments(*(unsigned __int16 *)(v5 + 6));
      v3 = 1;
    }
  }
  if ( *(_QWORD *)(KiSubNodes + 8LL * v4) )
    goto LABEL_15;
  SchedulerSubNode = KiAllocateSchedulerSubNode(v5);
  if ( SchedulerSubNode )
  {
    *(_QWORD *)(KiSubNodes + 8LL * v4) = SchedulerSubNode;
    *(_QWORD *)(v7 + 8LL * *(unsigned __int16 *)(v5 + 6) + 32) = SchedulerSubNode;
LABEL_15:
    v13 = &KiGroupBlock[4 * *(unsigned __int16 *)(v5 + 6)];
    LOWORD(v17) = *(_WORD *)(v5 + 6);
    v12 = 0;
    v14 = *v13 + 1;
    _BitScanReverse64(&v15, v14);
    *v13 |= v14;
    HIWORD(v17) = (unsigned __int8)v15;
    *(_DWORD *)a2 = v17;
    *(_QWORD *)(v5 + 16) |= 1LL << *(_BYTE *)(a2 + 2);
    return v12;
  }
  v12 = -1073741670;
  if ( v3 )
    KiUncommitGroupSubNodeAssignments(*(unsigned __int16 *)(v5 + 6), v10, v11, 3221225626LL);
  return v12;
}
