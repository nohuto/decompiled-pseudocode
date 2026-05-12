/*
 * XREFs of RaidAdapterGetMiniportDumpInfo @ 0x140182524
 * Callers:
 *     RaidAdapterPopulateMiniportDumpInfo @ 0x140182A40 (RaidAdapterPopulateMiniportDumpInfo.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RaidAllocateSrb @ 0x14000EB90 (RaidAllocateSrb.c)
 *     RaSrbSetMiniportContext @ 0x140010610 (RaSrbSetMiniportContext.c)
 *     StorFreeContiguousIoResources @ 0x140010B84 (StorFreeContiguousIoResources.c)
 *     RaidXrbDeallocateResources @ 0x140011E50 (RaidXrbDeallocateResources.c)
 *     RaidZeroXrb @ 0x140012070 (RaidZeroXrb.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1400121C0 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x140012900 (RaidAdapterPostScatterGatherExecute.c)
 *     StorAllocateContiguousIoResources @ 0x14001EE28 (StorAllocateContiguousIoResources.c)
 *     RaidSrbStatusToNtStatus @ 0x14001EF94 (RaidSrbStatusToNtStatus.c)
 *     RaidFreeSrb @ 0x140036888 (RaidFreeSrb.c)
 *     RaidXrbSetCompletionRoutine @ 0x14003D864 (RaidXrbSetCompletionRoutine.c)
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140056648 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_SF_DD @ 0x140067CBC (WPP_SF_DD.c)
 *     WPP_SF_qq @ 0x140067E84 (WPP_SF_qq.c)
 */

__int64 __fastcall RaidAdapterGetMiniportDumpInfo(__int64 a1, __int64 a2, __int64 a3, char a4, _QWORD *a5)
{
  _QWORD *v5; // r12
  _QWORD *v6; // rdi
  __int64 v8; // r14
  unsigned __int16 v9; // bx
  unsigned int v10; // ebp
  unsigned int v11; // r15d
  int v12; // ebx
  _DWORD *v13; // rsi
  int v14; // ecx
  int v15; // eax
  unsigned int v16; // edi
  unsigned __int16 v17; // r13
  _QWORD *v18; // rbx
  __int64 v19; // rax
  _BYTE *v20; // rbp
  __int64 v21; // rcx
  __int64 v22; // rcx
  bool v23; // zf
  __int64 v24; // rdx
  _QWORD *Srb; // rdi
  __int64 v26; // rax
  __int64 ContiguousIoResources; // rax
  __int64 v28; // rdx
  __int64 v29; // r13
  __int64 v31; // rbp
  int v32; // eax
  _QWORD *v33; // rax
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-88h]
  __int64 v35; // [rsp+38h] [rbp-70h]
  __int64 v36; // [rsp+40h] [rbp-68h]
  _QWORD *v37; // [rsp+48h] [rbp-60h]
  __int64 Pool; // [rsp+50h] [rbp-58h]
  char v40; // [rsp+B8h] [rbp+10h]
  __int64 v41; // [rsp+C0h] [rbp+18h]

  v41 = a3;
  v5 = (_QWORD *)(a2 + 24);
  v6 = *(_QWORD **)(a2 + 24);
  v35 = 0LL;
  v36 = 0LL;
  v8 = a1;
  *a5 = 0LL;
  v9 = 0;
  v40 = 0;
  v37 = 0LL;
  v10 = 0;
  if ( v6 == (_QWORD *)(a2 + 24) )
  {
LABEL_8:
    *(_DWORD *)(a3 + 72) = v9 << 16;
    if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
    {
      v11 = 24;
      v10 = 16 * v9 + (a4 != 0 ? 16 : 24);
      if ( v10 > 0x18 )
        v11 = 16 * v9 + (a4 != 0 ? 16 : 24);
    }
    else if ( 16 * ((unsigned __int64)v9 + 1) <= 0x18 )
    {
      v11 = 24;
    }
    else
    {
      v11 = 16 * (v9 + 1);
    }
    Pool = RaidAllocatePool(64LL, v11, 1145266514LL, *(_QWORD *)(v8 + 8));
    v13 = (_DWORD *)Pool;
    if ( !Pool )
      return (unsigned int)-1073741670;
    if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() && !a4 )
    {
      v36 = Pool;
      v15 = 1196246085;
      *(_WORD *)(Pool + 12) = v9;
      v14 = 28;
      *(_WORD *)(Pool + 14) = 1;
      *(_DWORD *)(Pool + 16) = 16;
    }
    else
    {
      v10 = 32;
      v35 = Pool;
      v14 = 32;
      *(_DWORD *)(Pool + 12) = v9;
      v15 = 1196246089;
    }
    v16 = 0;
    v17 = 0;
    *(_DWORD *)Pool = v14;
    *(_DWORD *)(Pool + 4) = v10;
    *(_DWORD *)(Pool + 8) = v15;
    Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline();
    v18 = (_QWORD *)*v5;
    if ( (_QWORD *)*v5 != v5 )
    {
      v19 = v41;
      do
      {
        if ( v18[6] == v19 )
        {
          v20 = (_BYTE *)v18[5];
          if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
          {
            v22 = v35 + 16;
            if ( !a4 )
              v22 = v36 + 24;
            v21 = v16 + v22;
          }
          else
          {
            v21 = v35 + 16 * (v17 + 1LL);
          }
          *(_WORD *)v21 = 1;
          ++v17;
          *(_DWORD *)(v21 + 4) = 4;
          *(_BYTE *)(v21 + 8) = v20[82];
          *(_BYTE *)(v21 + 9) = v20[83];
          *(_BYTE *)(v21 + 10) = v20[84];
          v23 = (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() == 0;
          v19 = v41;
          if ( !v23 )
            v16 += 16;
        }
        v18 = (_QWORD *)*v18;
      }
      while ( v18 != v5 );
      v13 = (_DWORD *)Pool;
      v8 = a1;
    }
    Srb = (_QWORD *)RaidAllocateSrb(*(_QWORD *)(v8 + 8), 0x2Au, *(_BYTE *)(v8 + 482), 0);
    if ( !Srb )
    {
      v12 = -1073741670;
      goto LABEL_41;
    }
    v26 = 316LL;
    if ( *(_DWORD *)v8 != 1314275652 )
      v26 = 524LL;
    ContiguousIoResources = StorAllocateContiguousIoResources(
                              ((*(_DWORD *)(v26 + v8) + 7) & 0xFFFFFFF8) + 1184,
                              v24,
                              (_QWORD *)v8);
    v29 = ContiguousIoResources;
    if ( ContiguousIoResources )
    {
      v31 = ContiguousIoResources + 48;
      RaidZeroXrb(ContiguousIoResources + 48, v28, 0, 0LL);
      *(_BYTE *)(v31 + 17) |= 8u;
      *(_QWORD *)(v31 + 176) = 0LL;
      *(_QWORD *)(v31 + 184) = v13;
      *(_QWORD *)(v31 + 168) = Srb;
      if ( *(_BYTE *)(v8 + 482) == 1 )
      {
        *((_DWORD *)Srb + 15) = v11;
        *((_DWORD *)Srb + 6) = 256;
        Srb[12] = v31;
        Srb[10] = 0LL;
        *((_DWORD *)Srb + 5) = 42;
        Srb[8] = v13;
        *((_DWORD *)Srb + 10) = 10;
        v40 = 1;
        v37 = Srb;
        if ( !*(_BYTE *)(v8 + 4370) )
          *((_DWORD *)Srb + 6) = 192;
      }
      else
      {
        *((_DWORD *)Srb + 4) = v11;
        *((_DWORD *)Srb + 3) = 256;
        Srb[6] = v31;
        *((_BYTE *)Srb + 2) = 42;
        Srb[3] = v13;
        *(_WORD *)Srb = 88;
        *((_DWORD *)Srb + 5) = 10;
        if ( !*(_BYTE *)(v8 + 4370) )
          *((_DWORD *)Srb + 3) = 192;
      }
      RaSrbSetMiniportContext((int *)v8, (__int64)Srb, v29 + 1184);
      KeInitializeEvent((PRKEVENT)(v31 + 664), NotificationEvent, 0);
      RaidXrbSetCompletionRoutine(v31, (__int64)RaidXrbSignalCompletion);
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) )
      {
        WPP_SF_qq(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x43u,
          (__int64)&WPP_f9c5a744b2853f8434526ecbb453d058_Traceguids,
          v31,
          Srb);
      }
      if ( *(_BYTE *)(v8 + 4370) )
        v32 = RaidAdapterRaiseIrqlAndExecuteXrb(v8, (_QWORD *)v31);
      else
        v32 = RaidAdapterPostScatterGatherExecute(v8, v31);
      v12 = v32;
      if ( v32 >= 0 )
      {
        KeWaitForSingleObject((PVOID)(v31 + 664), Executive, 0, 0, 0LL);
        v12 = RaidSrbStatusToNtStatus(*((_BYTE *)Srb + 3));
      }
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) )
      {
        LODWORD(Timeout) = *((unsigned __int8 *)Srb + 3);
        WPP_SF_DD(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x44u,
          (__int64)&WPP_f9c5a744b2853f8434526ecbb453d058_Traceguids,
          v12,
          Timeout);
      }
      if ( v12 >= 0 )
      {
        if ( *v13 >= 0x18u && v13[2] == 1297105993 )
        {
          *a5 = v13;
          v13 = 0LL;
        }
        else
        {
          v12 = -1073739509;
        }
      }
      RaidXrbDeallocateResources(v31, 0);
      StorFreeContiguousIoResources(v8, v29);
      if ( v40 == 1 )
      {
        v33 = v37;
        if ( !v37 )
          v33 = Srb;
        v33[10] = 0LL;
        v33[13] = 0LL;
LABEL_40:
        RaidFreeSrb(Srb);
        if ( !v13 )
          return (unsigned int)v12;
LABEL_41:
        ExFreePoolWithTag(v13, 0x44436152u);
        return (unsigned int)v12;
      }
    }
    else
    {
      v12 = -1073741670;
    }
    Srb[6] = 0LL;
    Srb[7] = 0LL;
    goto LABEL_40;
  }
  do
  {
    if ( v6[6] == a3 )
    {
      ++v9;
      if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() && v9 == 0xFFFF )
        return (unsigned int)-1073741637;
      a3 = v41;
    }
    v6 = (_QWORD *)*v6;
  }
  while ( v6 != v5 );
  if ( v9 <= 4u )
    goto LABEL_8;
  return (unsigned int)-1073741637;
}
