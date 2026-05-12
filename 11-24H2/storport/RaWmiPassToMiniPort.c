/*
 * XREFs of RaWmiPassToMiniPort @ 0x1401B73F4
 * Callers:
 *     RaWmiIrpNormalRequest @ 0x1401B7348 (RaWmiIrpNormalRequest.c)
 *     RaWmiIrpRegisterRequest @ 0x1401BBBA0 (RaWmiIrpRegisterRequest.c)
 * Callees:
 *     RaidAllocateSrb @ 0x14000EB90 (RaidAllocateSrb.c)
 *     StorFreeContiguousIoResources @ 0x140010B84 (StorFreeContiguousIoResources.c)
 *     RaidXrbDeallocateResources @ 0x140011E50 (RaidXrbDeallocateResources.c)
 *     RaidZeroXrb @ 0x140012070 (RaidZeroXrb.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1400121C0 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x140012900 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x14001BDD0 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x14001C05C (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidAdapterPoFxIdleComponent @ 0x14001D890 (RaidAdapterPoFxIdleComponent.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x14001DA00 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidAdapterPoFxActivateComponent @ 0x14001DA40 (RaidAdapterPoFxActivateComponent.c)
 *     StorAllocateContiguousIoResources @ 0x14001EE28 (StorAllocateContiguousIoResources.c)
 *     RaidSrbStatusToNtStatus @ 0x14001EF94 (RaidSrbStatusToNtStatus.c)
 *     RaidFreeSrb @ 0x140036888 (RaidFreeSrb.c)
 *     RaidBuildMdlAndLockPagesForXrb @ 0x140036920 (RaidBuildMdlAndLockPagesForXrb.c)
 *     RaidXrbSetCompletionRoutine @ 0x14003D864 (RaidXrbSetCompletionRoutine.c)
 *     WPP_SF_DDD @ 0x140067D0C (WPP_SF_DDD.c)
 *     WPP_SF_qD @ 0x140067D68 (WPP_SF_qD.c)
 *     WPP_SF_qqq @ 0x140067F40 (WPP_SF_qqq.c)
 */

__int64 __fastcall RaWmiPassToMiniPort(__int64 a1, char a2, __int64 a3)
{
  char *Srb; // rdi
  __int64 v5; // rdx
  __int64 v6; // r15
  char *v7; // r13
  char v8; // bl
  int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rbp
  ULONG v13; // r14d
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 ContiguousIoResources; // rax
  __int64 v19; // rdx
  int v20; // eax
  _DWORD *v21; // rcx
  int v22; // r14d
  char *v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // eax
  bool v27; // zf
  __int64 v28; // rax
  __int64 v29; // rcx
  char v30; // al
  char v31; // al
  _QWORD *v32; // r12
  int v33; // eax
  _DWORD *v34; // rax
  int v35; // ecx
  __int64 v37; // r8
  __int64 v38; // rax
  char v39; // al
  __int64 v40; // rax
  PDEVICE_OBJECT v41; // rcx
  int v42; // eax
  unsigned __int16 v43; // dx
  int v44; // r8d
  int v45; // r9d
  _BYTE *v46; // rcx
  char v47; // al
  __int64 v48; // r14
  volatile signed __int32 *v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rcx
  char v52; // dl
  __int64 v53; // r12
  __int64 v54; // rcx
  __int64 v55; // [rsp+20h] [rbp-88h]
  __int64 v56; // [rsp+28h] [rbp-80h]
  __int64 v57; // [rsp+30h] [rbp-78h]
  _DWORD *v58; // [rsp+38h] [rbp-70h]
  _DWORD *v59; // [rsp+40h] [rbp-68h]
  char *v60; // [rsp+48h] [rbp-60h]
  __int64 v61; // [rsp+50h] [rbp-58h]
  ULONG v65; // [rsp+C8h] [rbp+20h]

  Srb = 0LL;
  v5 = *(_QWORD *)(a1 + 64);
  v6 = 0LL;
  v61 = 0LL;
  v7 = 0LL;
  v57 = 0LL;
  v8 = 0;
  v60 = 0LL;
  v9 = *(_DWORD *)v5;
  if ( *(_DWORD *)v5 == 1094997074 )
  {
    v12 = 0LL;
    v58 = (_DWORD *)v5;
    v11 = v5;
  }
  else if ( v9 == 1431193940 )
  {
    v11 = *(_QWORD *)(v5 + 24);
    v12 = v5;
    v58 = (_DWORD *)v11;
  }
  else
  {
    v58 = 0LL;
    v10 = 0LL;
    v11 = 0LL;
    v12 = 0LL;
    if ( v9 == 1314275652 )
      v10 = v5;
    if ( v10 )
    {
      v22 = -1073741637;
      v34 = (_DWORD *)(a3 + 16);
      goto LABEL_64;
    }
  }
  v13 = *(_DWORD *)(a3 + 16);
  v65 = v13;
  v59 = (_DWORD *)(a3 + 16);
  if ( a2 == 9 && *(_DWORD *)(a3 + 16) <= **(_DWORD **)(a3 + 24) )
    v13 = **(_DWORD **)(a3 + 24);
  if ( *(_DWORD *)v11 == 1314275652 )
  {
    v14 = v11 + 176;
    v15 = v11 + 274;
  }
  else if ( *(_DWORD *)v11 == 1094997074 )
  {
    v14 = v11 + 384;
    v15 = v11 + 482;
  }
  else
  {
    v14 = 0LL;
    v15 = 98LL;
  }
  v57 = v14;
  Srb = (char *)RaidAllocateSrb(*(_QWORD *)(v11 + 8), 0x17u, *(_BYTE *)(v14 + 98), 0);
  if ( !Srb )
    goto LABEL_88;
  v17 = 316LL;
  if ( *(_DWORD *)v11 != 1314275652 )
    v17 = 524LL;
  ContiguousIoResources = StorAllocateContiguousIoResources(
                            ((*(_DWORD *)(v17 + v11) + 7) & 0xFFFFFFF8) + 1184,
                            v16,
                            (_QWORD *)v11);
  v61 = ContiguousIoResources;
  if ( !ContiguousIoResources )
  {
LABEL_88:
    v34 = v59;
    v22 = -1073741801;
    goto LABEL_64;
  }
  v6 = ContiguousIoResources + 48;
  RaidZeroXrb(ContiguousIoResources + 48, v19, 0, 0LL);
  *(_QWORD *)(v6 + 176) = *((_QWORD *)Srb + 6);
  *(_QWORD *)(v6 + 168) = Srb;
  v20 = RaidBuildMdlAndLockPagesForXrb(v6, *(void **)(a3 + 24), v13);
  v21 = v59;
  v22 = v20;
  if ( v20 >= 0 )
  {
    if ( *(_BYTE *)(v57 + 98) == 1 )
    {
      v7 = &Srb[*((unsigned int *)Srb + 13)];
      *((_DWORD *)Srb + 5) = 23;
      v37 = *((unsigned int *)Srb + 30);
      *((_QWORD *)Srb + 12) = v6;
      v23 = &Srb[v37];
      v38 = *(_QWORD *)(a3 + 24);
      *((_DWORD *)Srb + 15) = v65;
      *((_QWORD *)Srb + 8) = v38;
      *((_DWORD *)Srb + 6) = 320;
      *((_DWORD *)Srb + 10) = 10;
      *(_DWORD *)v23 = 96;
      *((_DWORD *)v23 + 1) = 16;
      v23[8] = a2;
      *((_QWORD *)v23 + 2) = *(_QWORD *)(a3 + 8);
      v24 = *((_QWORD *)Srb + 8);
      v60 = Srb;
    }
    else
    {
      v23 = 0LL;
      *((_QWORD *)Srb + 6) = v6;
      Srb[2] = 23;
      v24 = *(_QWORD *)(a3 + 24);
      *((_DWORD *)Srb + 4) = v65;
      Srb[4] = a2;
      *((_QWORD *)Srb + 3) = v24;
      *(_WORD *)Srb = 88;
      *((_QWORD *)Srb + 4) = *(_QWORD *)(a3 + 8);
      *((_DWORD *)Srb + 3) = 320;
      *((_DWORD *)Srb + 5) = 10;
    }
    *(_QWORD *)(v6 + 184) = v24;
    v25 = v61 + 1184;
    v26 = *v58;
    if ( Srb[2] == 40 )
    {
      v27 = v26 == 1314275652;
      v28 = 316LL;
      if ( !v27 )
        v28 = 524LL;
      if ( ((*(_DWORD *)(v28 + v11) + 7) & 0xFFFFFFF8) != 0 )
        *((_QWORD *)Srb + 13) = v25;
    }
    else
    {
      v27 = v26 == 1314275652;
      v40 = 316LL;
      if ( !v27 )
        v40 = 524LL;
      if ( ((*(_DWORD *)(v40 + v11) + 7) & 0xFFFFFFF8) != 0 )
        *((_QWORD *)Srb + 7) = v25;
    }
    v29 = *(_QWORD *)(a1 + 64);
    if ( *(_DWORD *)v29 == 1431193940 )
    {
      v30 = *(_BYTE *)(v29 + 104);
      if ( *(_BYTE *)v15 == 1 )
      {
        v7[8] = v30;
        v7[9] = *(_BYTE *)(v29 + 105);
        v31 = *(_BYTE *)(v29 + 106);
LABEL_25:
        v7[10] = v31;
        goto LABEL_26;
      }
      Srb[5] = v30;
      Srb[6] = *(_BYTE *)(v29 + 105);
      v39 = *(_BYTE *)(v29 + 106);
    }
    else
    {
      v46 = *(_BYTE **)(v11 + 144);
      if ( *(_BYTE *)v15 == 1 )
        v23[9] = 1;
      else
        Srb[9] = 1;
      v47 = *(_BYTE *)v15;
      if ( v46 == (_BYTE *)(v11 + 144) )
      {
        if ( v47 == 1 )
        {
          *((_WORD *)v7 + 4) = 0;
          v7[10] = 0;
        }
        else
        {
          *(_WORD *)(Srb + 5) = 0;
          Srb[7] = 0;
        }
LABEL_26:
        KeInitializeEvent((PRKEVENT)(v6 + 664), NotificationEvent, 0);
        RaidXrbSetCompletionRoutine(v6, (__int64)RaidXrbSignalCompletion);
        if ( Srb[2] == 40 )
        {
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
          {
            if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
              WPP_SF_qqq(
                (__int64)WPP_GLOBAL_Control->AttachedDevice,
                0xBu,
                (__int64)&WPP_a308b383eb68399a6972abfba8c43d0a_Traceguids,
                v6,
                v60,
                *((_QWORD *)v60 + 13));
            v41 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
            {
              v42 = (unsigned __int8)v7[10];
              v43 = 12;
              v44 = (unsigned __int8)v7[9];
              v45 = (unsigned __int8)v7[8];
              goto LABEL_112;
            }
          }
        }
        else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
        {
          if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
            WPP_SF_qqq(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              0xDu,
              (__int64)&WPP_a308b383eb68399a6972abfba8c43d0a_Traceguids,
              v6,
              Srb,
              *((_QWORD *)Srb + 7));
          v41 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
          {
            v42 = (unsigned __int8)Srb[7];
            v43 = 14;
            v44 = (unsigned __int8)Srb[6];
            v45 = (unsigned __int8)Srb[5];
LABEL_112:
            LODWORD(v56) = v42;
            LODWORD(v55) = v44;
            WPP_SF_DDD(
              (__int64)v41->AttachedDevice,
              v43,
              (__int64)&WPP_a308b383eb68399a6972abfba8c43d0a_Traceguids,
              v45,
              v55,
              v56);
          }
        }
        if ( v12 )
        {
          v48 = *(_QWORD *)(v12 + 24);
          if ( *(_QWORD *)(v48 + 4960) )
          {
            RaidAdapterPoFxActivateComponent(*(_QWORD *)(v12 + 24), 0LL, 1LL);
            v8 = 2;
          }
          if ( RaidUnitCheckAndAcquirePoFx(v12) )
          {
            if ( (*(_BYTE *)(v48 + 108) & 1) != 0 )
            {
              _InterlockedAdd64((volatile signed __int64 *)(v12 + 2168), 1uLL);
              if ( (*(_BYTE *)(v48 + 108) & 2) != 0 )
                _InterlockedAdd64((volatile signed __int64 *)(v12 + 2176), 1uLL);
            }
            v49 = *(volatile signed __int32 **)(v12 + 1872);
            if ( (v49[37] & 1) != 0 )
            {
              _InterlockedAdd(v49 + 36, 1u);
              v49 = *(volatile signed __int32 **)(v12 + 1872);
            }
            v50 = 5LL;
            v51 = *(_QWORD *)v49;
            if ( !*(_DWORD *)(v12 + 1036) )
              v50 = 1LL;
            PoFxActivateComponent(v51, 0LL, v50);
            v8 |= 1u;
            ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v12 + 1864));
          }
          v32 = v58 + 1240;
        }
        else
        {
          v32 = (_QWORD *)(v11 + 4960);
          if ( *(_QWORD *)(v11 + 4960) )
            RaidAdapterPoFxActivateComponent(v11, 0LL, 1LL);
        }
        if ( *(_BYTE *)(v11 + 4370) )
          v33 = RaidAdapterRaiseIrqlAndExecuteXrb(v11, (_QWORD *)v6);
        else
          v33 = RaidAdapterPostScatterGatherExecute(v11, v6);
        v22 = v33;
        if ( v33 >= 0 )
        {
          KeWaitForSingleObject((PVOID)(v6 + 664), Executive, 0, 0, 0LL);
          v22 = RaidSrbStatusToNtStatus(Srb[3]);
        }
        if ( v12 )
        {
          if ( (*(_BYTE *)(v6 + 17) & 2) != 0 )
          {
            RaidUnitPoFxIdleComponentFromMiniport(v12, *(_DWORD *)(v6 + 748));
            *(_BYTE *)(v6 + 17) &= ~2u;
          }
          v53 = *(_QWORD *)(v12 + 24);
          if ( (v8 & 1) != 0 && RaidUnitCheckAndAcquirePoFx(v12) )
          {
            PoFxIdleComponent(**(_QWORD **)(v12 + 1872), 0LL, 0LL);
            ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v12 + 1864));
          }
          if ( (unsigned __int8)v8 < 2u || !*(_QWORD *)(v53 + 4960) )
            goto LABEL_37;
          v54 = v53;
        }
        else
        {
          if ( !*v32 )
          {
LABEL_37:
            v21 = v59;
            if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
            {
              LODWORD(v55) = v22;
              WPP_SF_qD(
                (__int64)WPP_GLOBAL_Control->AttachedDevice,
                0xFu,
                (__int64)&WPP_a308b383eb68399a6972abfba8c43d0a_Traceguids,
                v6,
                v55);
              v21 = v59;
            }
            goto LABEL_39;
          }
          if ( (*(_BYTE *)(v6 + 17) & 1) != 0 )
          {
            RaidAdapterPoFxIdleComponentFromMiniport(v11, *(unsigned int *)(v6 + 748));
            *(_BYTE *)(v6 + 17) &= ~1u;
          }
          v54 = v11;
        }
        RaidAdapterPoFxIdleComponent(v54, 0LL, 0LL);
        goto LABEL_37;
      }
      v52 = v46[40];
      if ( v47 == 1 )
      {
        v7[8] = v52;
        v7[9] = v46[41];
        v31 = v46[42];
        goto LABEL_25;
      }
      Srb[5] = v52;
      Srb[6] = v46[41];
      v39 = v46[42];
    }
    Srb[7] = v39;
    goto LABEL_26;
  }
LABEL_39:
  v34 = v21;
  if ( v22 < 0 )
  {
LABEL_64:
    v35 = 0;
    goto LABEL_42;
  }
  if ( Srb[2] == 40 )
    v35 = *((_DWORD *)v60 + 15);
  else
    v35 = *((_DWORD *)Srb + 4);
LABEL_42:
  *v34 = v35;
  if ( v61 )
  {
    RaidXrbDeallocateResources(v6, 0);
    StorFreeContiguousIoResources(v11, v61);
  }
  if ( Srb )
  {
    if ( *(_BYTE *)(v57 + 98) == 1 )
    {
      *((_QWORD *)Srb + 10) = 0LL;
      *((_QWORD *)Srb + 13) = 0LL;
    }
    else
    {
      *((_QWORD *)Srb + 6) = 0LL;
      *((_QWORD *)Srb + 7) = 0LL;
    }
    RaidFreeSrb(Srb);
  }
  return (unsigned int)v22;
}
