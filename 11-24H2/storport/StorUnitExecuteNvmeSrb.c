/*
 * XREFs of StorUnitExecuteNvmeSrb @ 0x140053630
 * Callers:
 *     RaUnitScsiIrp @ 0x140002710 (RaUnitScsiIrp.c)
 *     RaDriverScsiIrp @ 0x1400038A0 (RaDriverScsiIrp.c)
 * Callees:
 *     RaidZeroXrb @ 0x140012070 (RaidZeroXrb.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1400121C0 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x140012900 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidAdapterPoFxActivateComponent @ 0x14001DA40 (RaidAdapterPoFxActivateComponent.c)
 *     StorAllocateContiguousIoResources @ 0x14001EE28 (StorAllocateContiguousIoResources.c)
 *     RaidAdapterMapBuffers @ 0x140024BF0 (RaidAdapterMapBuffers.c)
 *     RaAllocateIoResource @ 0x1400278D0 (RaAllocateIoResource.c)
 */

__int64 __fastcall StorUnitExecuteNvmeSrb(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 ContiguousIoResources; // rax
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // r15
  __int64 v16; // rcx
  __int64 v17; // rax
  char v18; // al
  __int64 v19; // rax
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+40h] [rbp+8h] BYREF

  ProcNumber = 0;
  v3 = *(_QWORD *)(a2 + 184);
  v5 = *(_QWORD *)(a1 + 24);
  v6 = *(_QWORD *)(v3 + 8);
  *(_BYTE *)(v3 + 3) |= 1u;
  *(_BYTE *)(v6 + 3) = 0;
  v7 = v6 + *(unsigned int *)(v6 + 120);
  *(_QWORD *)(*(_QWORD *)(a2 + 184) + 24LL) = 0LL;
  if ( *(_BYTE *)(v6 + 2) != 40 )
    return 3221225473LL;
  if ( DisableIEEE1667
    && *(_BYTE *)(v7 + 80) == 1
    && (unsigned int)(unsigned __int8)*(_DWORD *)(v7 + 16) - 129 <= 1
    && *(_BYTE *)(v7 + 59) == 0xEE )
  {
    return 3221225659LL;
  }
  KeGetCurrentProcessorNumberEx(&ProcNumber);
  *(struct _PROCESSOR_NUMBER *)(v6 + 96) = ProcNumber;
  v10 = *(_QWORD *)(a2 + 184);
  *(_BYTE *)(a2 + 141) = -88;
  *(_QWORD *)(v10 + 8) = v6;
  if ( *(_BYTE *)(v7 + 80) == 1 )
  {
    v11 = 316LL;
    if ( *(_DWORD *)v5 != 1314275652 )
      v11 = 524LL;
    ContiguousIoResources = StorAllocateContiguousIoResources(
                              ((*(_DWORD *)(v11 + v5) + 7) & 0xFFFFFFF8) + 1184,
                              v9,
                              (_QWORD *)v5);
  }
  else
  {
    ContiguousIoResources = (__int64)RaAllocateIoResource(*(_QWORD *)(a1 + 728) + 64LL);
  }
  if ( !ContiguousIoResources )
    return 3221225473LL;
  v14 = ContiguousIoResources + 48;
  v15 = ContiguousIoResources + 1184;
  RaidZeroXrb(ContiguousIoResources + 48, v13, 0, 0LL);
  if ( *(_BYTE *)(v6 + 2) == 40 )
    v16 = *(_QWORD *)(v6 + 104);
  else
    v16 = *(_QWORD *)(v6 + 40);
  *(_QWORD *)(v14 + 160) = a2;
  *(_QWORD *)(v14 + 168) = v6;
  *(_QWORD *)(v14 + 224) = a1;
  v17 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(v14 + 136) = 0LL;
  *(_QWORD *)(v14 + 104) = v17;
  *(_QWORD *)(v14 + 768) = v16;
  if ( (*(_BYTE *)(v5 + 4660) & 1) != 0 )
  {
    *(_DWORD *)(v14 + 20) = *(_DWORD *)(v6 + 96);
  }
  else
  {
    *(_WORD *)(v14 + 20) = -1;
    *(_BYTE *)(v14 + 22) = -1;
  }
  v18 = *(_BYTE *)(v14 + 16);
  *(_DWORD *)(v14 + 24) = 0;
  *(_BYTE *)(v14 + 16) = v18 & 0xE3 | 4;
  *(_QWORD *)(v14 + 176) = *(_QWORD *)(v6 + 80);
  v19 = *(_QWORD *)(v6 + 64);
  *(_QWORD *)(v14 + 192) = 0LL;
  *(_QWORD *)(v14 + 184) = v19;
  *(_QWORD *)(v6 + 96) = v14;
  *(_QWORD *)(v6 + 104) = v15;
  RaidAdapterMapBuffers((int *)v5, a2);
  *(_QWORD *)(v14 + 656) = StorUnitExecuteNvmeSrbComplete;
  if ( *(_QWORD *)(v5 + 4960) )
    RaidAdapterPoFxActivateComponent(v5, 0LL, 1LL);
  if ( *(_BYTE *)(v5 + 4370) )
    RaidAdapterRaiseIrqlAndExecuteXrb(v5, (_QWORD *)v14);
  else
    RaidAdapterPostScatterGatherExecute(v5, v14);
  return 259LL;
}
