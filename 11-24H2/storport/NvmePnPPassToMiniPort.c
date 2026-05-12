/*
 * XREFs of NvmePnPPassToMiniPort @ 0x1400DC2FC
 * Callers:
 *     NvmeAdapterReleaseResources @ 0x14019B0CC (NvmeAdapterReleaseResources.c)
 * Callees:
 *     RaidAllocateSrb @ 0x14000EB90 (RaidAllocateSrb.c)
 *     RaSrbSetMiniportContext @ 0x140010610 (RaSrbSetMiniportContext.c)
 *     RaidXrbDeallocateResources @ 0x140011E50 (RaidXrbDeallocateResources.c)
 *     RaidZeroXrb @ 0x140012070 (RaidZeroXrb.c)
 *     NVMeAllocateContiguousIoResources @ 0x1400875F0 (NVMeAllocateContiguousIoResources.c)
 *     NVMeFreeContiguousIoResources @ 0x14008770C (NVMeFreeContiguousIoResources.c)
 *     NvmeAdapterExecuteXrb @ 0x1400CFAA4 (NvmeAdapterExecuteXrb.c)
 *     NvmeAdapterRaiseIrqlAndExecuteXrb @ 0x1400D63DC (NvmeAdapterRaiseIrqlAndExecuteXrb.c)
 */

__int64 NvmePnPPassToMiniPort(__int64 a1, int a2, __int64 a3, ...)
{
  __int64 v3; // rdi
  __int64 v4; // r14
  __int64 v5; // rbp
  __int64 v6; // r15
  int v7; // eax
  __int64 Srb; // rbx
  __int64 ContiguousIoResources; // r13
  int v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned int v14; // esi
  __int64 v15; // r12
  unsigned int v16; // ecx
  __int64 v17; // rsi
  char v18; // r11
  __int64 v19; // r8
  __int64 v20; // rdx
  int v21; // eax
  int v22; // r15d
  unsigned int v23; // ebp
  unsigned int v26; // [rsp+90h] [rbp+18h]
  union _LARGE_INTEGER Interval; // [rsp+98h] [rbp+20h] BYREF
  va_list Intervala; // [rsp+98h] [rbp+20h]
  va_list va1; // [rsp+A0h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(Intervala, a3);
  Interval.QuadPart = va_arg(va1, _QWORD);
  v3 = *(_QWORD *)(a1 + 64);
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = *(_DWORD *)v3;
  if ( *(_DWORD *)v3 == 1314278989 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(v3 + 16) + 128LL);
    v7 = *(_DWORD *)v3;
  }
  if ( v7 != 1314275652 )
    return 3221225485LL;
  if ( !*(_QWORD *)(v3 + 400) || !*(_QWORD *)(v3 + 408) )
    return 0LL;
  Srb = 0LL;
  Interval.QuadPart = -1000LL;
  v26 = 0;
  ContiguousIoResources = 0LL;
  v11 = *(_DWORD *)v3;
  v12 = 316LL;
  v13 = 524LL;
  if ( *(_DWORD *)v3 != 1314275652 )
    v12 = 524LL;
  v14 = (*(_DWORD *)(v12 + v3) + 7) & 0xFFFFFFF8;
  if ( v11 == 1314275652 )
  {
    v15 = v3 + 274;
  }
  else
  {
    v15 = v3 + 482;
    if ( v11 != 1094997074 )
      v15 = 98LL;
  }
  while ( 1 )
  {
    if ( !Srb )
      Srb = RaidAllocateSrb(*(_QWORD *)(v3 + 8), 0x25u, *(_BYTE *)v15, 0);
    if ( !ContiguousIoResources )
      ContiguousIoResources = NVMeAllocateContiguousIoResources(v14 + 1184, v13, (_QWORD *)v3);
    if ( Srb && ContiguousIoResources )
    {
      v17 = ContiguousIoResources + 48;
      RaidZeroXrb(ContiguousIoResources + 48, v13, 0, 0LL);
      *(_QWORD *)(ContiguousIoResources + 216) = Srb;
      *(_QWORD *)(ContiguousIoResources + 224) = *(_QWORD *)(Srb + 48);
      if ( *(_BYTE *)v15 == 1 )
      {
        v4 = Srb;
        v5 = Srb + *(unsigned int *)(Srb + 52);
        v6 = Srb + *(unsigned int *)(Srb + 120);
        *(_QWORD *)(Srb + 64) = 0LL;
        *(_QWORD *)(Srb + 96) = v17;
        *(_DWORD *)(Srb + 20) = 37;
        *(_DWORD *)(Srb + 24) = 256;
        *(_DWORD *)(Srb + 40) = 10;
        *(_DWORD *)(Srb + 60) = 0;
        *(_DWORD *)v6 = 98;
        *(_DWORD *)(v6 + 4) = 16;
        *(_DWORD *)(v6 + 12) = a2;
        *(_BYTE *)(v6 + 8) = 0;
        *(_QWORD *)(ContiguousIoResources + 232) = *(_QWORD *)(Srb + 64);
      }
      RaSrbSetMiniportContext((int *)v3, Srb, ContiguousIoResources + 1184);
      if ( **(_DWORD **)(a1 + 64) != 1314278989 )
      {
        if ( *(_BYTE *)v15 == 1 )
        {
          *(_DWORD *)(v6 + 16) = 1;
          *(_WORD *)(v5 + 8) = 0;
          *(_BYTE *)(v5 + 10) = v18;
        }
        else
        {
          *(_WORD *)(Srb + 5) = 0;
          *(_DWORD *)(Srb + 64) = 1;
          *(_BYTE *)(Srb + 7) = v18;
        }
      }
      KeInitializeEvent((PRKEVENT)(ContiguousIoResources + 712), NotificationEvent, 0);
      v20 = ContiguousIoResources + 48;
      *(_QWORD *)(ContiguousIoResources + 704) = RaidXrbSignalCompletion;
      if ( (*(_DWORD *)(v3 + 144) & 0x1000LL) != 0 )
        v21 = NvmeAdapterRaiseIrqlAndExecuteXrb((_DWORD *)v3, v20);
      else
        v21 = NvmeAdapterExecuteXrb((_DWORD *)v3, v20, v19);
      v22 = v21;
      if ( v21 >= 0 )
        KeWaitForSingleObject((PVOID)(ContiguousIoResources + 712), Executive, 0, 0, 0LL);
      v23 = 0;
      if ( v22 == 258 )
        v23 = -1073741643;
      goto LABEL_36;
    }
    v16 = v26++;
    if ( v16 >= 3 )
      break;
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)Intervala);
  }
  v17 = 0LL;
  v23 = -1073741801;
  if ( !ContiguousIoResources )
    goto LABEL_37;
LABEL_36:
  RaidXrbDeallocateResources(v17, 0);
  NVMeFreeContiguousIoResources(v3);
LABEL_37:
  if ( Srb )
  {
    if ( *(_BYTE *)v15 == 1 )
    {
      if ( !v4 )
        v4 = Srb;
      *(_QWORD *)(v4 + 80) = 0LL;
      *(_QWORD *)(v4 + 104) = 0LL;
    }
    else
    {
      *(_QWORD *)(Srb + 48) = 0LL;
      *(_QWORD *)(Srb + 56) = 0LL;
    }
    ExFreePoolWithTag((PVOID)Srb, 0x72536152u);
  }
  return v23;
}
