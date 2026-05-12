/*
 * XREFs of RaUnitScsiFreeDumpPointersIoctl @ 0x1400525C0
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x14002C620 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RaidAllocateSrb @ 0x14000EB90 (RaidAllocateSrb.c)
 *     StorFreeContiguousIoResources @ 0x140010B84 (StorFreeContiguousIoResources.c)
 *     RaidXrbDeallocateResources @ 0x140011E50 (RaidXrbDeallocateResources.c)
 *     RaidZeroXrb @ 0x140012070 (RaidZeroXrb.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1400121C0 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x140012900 (RaidAdapterPostScatterGatherExecute.c)
 *     StorAllocateContiguousIoResources @ 0x14001EE28 (StorAllocateContiguousIoResources.c)
 *     RaidSrbStatusToNtStatus @ 0x14001EF94 (RaidSrbStatusToNtStatus.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     WPP_SF_DD @ 0x140067CBC (WPP_SF_DD.c)
 *     WPP_SF_qq @ 0x140067E84 (WPP_SF_qq.c)
 *     StorPortReleaseAdditionalCrashDumpArea @ 0x1400A1EC8 (StorPortReleaseAdditionalCrashDumpArea.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall RaUnitScsiFreeDumpPointersIoctl(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // ebx
  unsigned int v6; // ebp
  void *v7; // r14
  __int64 v8; // r15
  unsigned int *Srb; // rdi
  _QWORD *v10; // rcx
  __int64 *v11; // r12
  void *v12; // rcx
  __int64 Pool; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 ContiguousIoResources; // rax
  __int64 v17; // rdx
  __int64 v18; // rbp
  bool v19; // zf
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  int *v22; // rax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // r9
  __int64 v26; // rcx
  void (__fastcall *v27)(_QWORD); // rax
  unsigned int *v28; // r8
  __int64 v29; // rdx
  char v30; // r14
  _BYTE *v31; // r9
  unsigned __int8 v32; // r10
  char v33; // r11
  char v34; // r13
  char v35; // r12
  char *v36; // rdi
  unsigned int v37; // r8d
  unsigned int *v38; // rax
  __int64 v39; // rax
  unsigned __int64 v40; // r15
  char v41; // cl
  char v42; // r8
  _BYTE *v43; // rax
  char *v44; // r12
  unsigned int v45; // eax
  char v46; // al
  char v48; // [rsp+60h] [rbp-78h]
  char v49; // [rsp+60h] [rbp-78h]
  __int64 v50; // [rsp+68h] [rbp-70h]
  int v51; // [rsp+68h] [rbp-70h]
  __int64 v52; // [rsp+70h] [rbp-68h]
  unsigned int *v53; // [rsp+78h] [rbp-60h]
  __int64 v54; // [rsp+78h] [rbp-60h]
  void *v55; // [rsp+80h] [rbp-58h]
  __int128 v56; // [rsp+88h] [rbp-50h] BYREF

  v2 = *(_QWORD *)(a1 + 24);
  LOBYTE(v3) = 0;
  v6 = 0;
  v7 = 0LL;
  v8 = 0LL;
  *(_QWORD *)&v56 = 0LL;
  Srb = 0LL;
  v53 = 0LL;
  v48 = 0;
  v52 = v2;
  if ( *(_BYTE *)(a2 + 64) )
  {
    v6 = -1073741790;
    goto LABEL_27;
  }
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 16LL) < 0x68u )
  {
    v6 = -1073741811;
    goto LABEL_27;
  }
  v10 = *(_QWORD **)(a2 + 24);
  v55 = v10;
  if ( *(_DWORD *)v10 != 4 )
  {
    v6 = -1073741735;
    goto LABEL_27;
  }
  v11 = (__int64 *)v10[5];
  v50 = v10[1] + 16LL;
  while ( v11 )
  {
    if ( !*v11 )
    {
      v12 = (void *)v11[10];
      if ( v12 )
      {
        ExFreePoolWithTag(v12, 0);
        *(_OWORD *)(v11 + 9) = 0LL;
      }
    }
    v11 = (__int64 *)*v11;
  }
  if ( *(_BYTE *)(a1 + 1861) != 1 || !v52 )
    goto LABEL_58;
  Pool = RaidAllocatePool(64LL, 112LL, 1145266514LL, *(_QWORD *)(a1 + 8));
  v7 = (void *)Pool;
  if ( !Pool )
  {
    v6 = -1073741670;
    goto LABEL_27;
  }
  *(_DWORD *)Pool = 7340288;
  *(_DWORD *)(Pool + 56) = *((_DWORD *)v55 + 6);
  *(_DWORD *)(Pool + 72) = *(_DWORD *)(v50 + 4);
  *(_DWORD *)(Pool + 76) = *(_DWORD *)(v50 + 8);
  *(_DWORD *)(Pool + 80) = *(_DWORD *)(v50 + 24);
  *(_DWORD *)(Pool + 84) = *(_DWORD *)(v50 + 28);
  *(_DWORD *)(Pool + 88) = *(_DWORD *)(v50 + 48);
  *(_DWORD *)(Pool + 92) = *(_DWORD *)(v50 + 52);
  *(_QWORD *)(Pool + 96) = *(_QWORD *)(v50 + 56);
  *(_BYTE *)(Pool + 104) = *(_BYTE *)(v50 + 72);
  *(_BYTE *)(Pool + 105) = *(_BYTE *)(v50 + 82);
  *(_BYTE *)(Pool + 106) = *(_BYTE *)(v50 + 89);
  *(_BYTE *)(Pool + 107) = *(_BYTE *)(v50 + 97);
  *(_QWORD *)(Pool + 64) = *(_QWORD *)(v50 + 64);
  Srb = (unsigned int *)RaidAllocateSrb(*(_QWORD *)(a1 + 8), 0x27u, *(_BYTE *)(v50 + 98), 0);
  if ( Srb )
  {
    v15 = 316LL;
    if ( *(_DWORD *)v52 != 1314275652 )
      v15 = 524LL;
    ContiguousIoResources = StorAllocateContiguousIoResources(
                              ((*(_DWORD *)(v15 + v52) + 7) & 0xFFFFFFF8) + 1184,
                              v14,
                              (_QWORD *)v52);
    *(_QWORD *)&v56 = ContiguousIoResources;
    v18 = ContiguousIoResources;
    if ( !ContiguousIoResources )
    {
      v6 = -1073741670;
      goto LABEL_23;
    }
    v8 = ContiguousIoResources + 48;
    RaidZeroXrb(ContiguousIoResources + 48, v17, 0, 0LL);
    *(_QWORD *)(v8 + 176) = a2;
    *(_QWORD *)(v8 + 184) = v7;
    *(_QWORD *)(v8 + 168) = Srb;
    if ( *(_BYTE *)(v50 + 98) == 1 )
    {
      Srb[5] = 39;
      *((_QWORD *)Srb + 8) = v7;
      Srb[15] = 112;
      Srb[6] = 256;
      v48 = 1;
      v53 = Srb;
      if ( !*(_BYTE *)(v52 + 4370) )
        Srb[6] = 128;
      v23 = Srb[13];
      *((_QWORD *)Srb + 13) = v18 + 1184;
      Srb[10] = 10;
      *((_QWORD *)Srb + 10) = a2;
      *((_QWORD *)Srb + 12) = v8;
      *((_BYTE *)Srb + v23 + 8) = *(_BYTE *)(a1 + 104);
      *((_BYTE *)Srb + v23 + 9) = *(_BYTE *)(a1 + 105);
      *((_BYTE *)Srb + v23 + 10) = *(_BYTE *)(a1 + 106);
    }
    else
    {
      *((_BYTE *)Srb + 2) = 39;
      *((_QWORD *)Srb + 3) = v7;
      Srb[4] = 112;
      *(_WORD *)Srb = 88;
      Srb[3] = 256;
      if ( !*(_BYTE *)(v52 + 4370) )
        Srb[3] = 128;
      Srb[5] = 10;
      *((_BYTE *)Srb + 5) = *(_BYTE *)(a1 + 104);
      *((_BYTE *)Srb + 6) = *(_BYTE *)(a1 + 105);
      *((_BYTE *)Srb + 7) = *(_BYTE *)(a1 + 106);
      *((_QWORD *)Srb + 7) = v18 + 1184;
      *((_QWORD *)Srb + 6) = v8;
    }
    KeInitializeEvent((PRKEVENT)(v8 + 664), NotificationEvent, 0);
    *(_QWORD *)(v8 + 656) = RaidXrbSignalCompletion;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) )
    {
      WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 34LL, &WPP_e6323699744f33baefc587a6e43a33df_Traceguids, v8, Srb);
    }
    if ( *(_BYTE *)(v52 + 4370) )
      v24 = RaidAdapterRaiseIrqlAndExecuteXrb(v52, (_QWORD *)v8);
    else
      v24 = RaidAdapterPostScatterGatherExecute(v52, v8);
    v25 = (unsigned int)v24;
    if ( v24 >= 0 )
    {
      KeWaitForSingleObject((PVOID)(v8 + 664), Executive, 0, 0, 0LL);
      v25 = (unsigned int)RaidSrbStatusToNtStatus(*((_BYTE *)Srb + 3));
    }
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) )
    {
      WPP_SF_DD(
        WPP_GLOBAL_Control->AttachedDevice,
        35LL,
        &WPP_e6323699744f33baefc587a6e43a33df_Traceguids,
        v25,
        *((unsigned __int8 *)Srb + 3));
    }
    v6 = 0;
LABEL_58:
    v26 = *(_QWORD *)(a1 + 24);
    if ( *(_WORD *)(v26 + 5026) )
    {
      v27 = *(void (__fastcall **)(_QWORD))(v26 + 5048);
      if ( v27 )
        v27(*(_QWORD *)(v26 + 5032));
    }
    StorPortReleaseAdditionalCrashDumpArea(*(_QWORD *)(a1 + 24) + 880LL, v50);
    ExFreePoolWithTag(*((PVOID *)v55 + 1), 0x44436152u);
    memset_0(v55, 0, 0x68uLL);
    *(_QWORD *)(a2 + 56) = 0LL;
    if ( (_QWORD)v56 )
    {
      RaidXrbDeallocateResources(v8, 0);
      StorFreeContiguousIoResources(v52, v56);
    }
    if ( !Srb )
    {
LABEL_25:
      if ( !v7 )
        goto LABEL_27;
      goto LABEL_26;
    }
    if ( v48 == 1 )
    {
      v28 = v53;
      if ( !v53 )
        v28 = Srb;
      *((_QWORD *)v28 + 10) = 0LL;
      *((_QWORD *)v28 + 13) = 0LL;
      goto LABEL_24;
    }
LABEL_23:
    *((_QWORD *)Srb + 6) = 0LL;
    *((_QWORD *)Srb + 7) = 0LL;
LABEL_24:
    ExFreePoolWithTag(Srb, 0x72536152u);
    goto LABEL_25;
  }
  v6 = -1073741670;
LABEL_26:
  ExFreePoolWithTag(v7, 0x44436152u);
LABEL_27:
  v19 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v6;
  if ( v19 )
    goto LABEL_122;
  v56 = 0LL;
  IoGetActivityIdIrp(a2, &v56);
  v21 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v21 == 14 )
  {
    if ( (byte_140171462 & 8) != 0 )
      McTemplateK0pd_EtwWriteTransfer(v20, &EventNonReadWriteRequestComplete, &v56, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_122;
  }
  if ( *(_BYTE *)v21 != 15 )
  {
    if ( *(_BYTE *)v21 == 27 )
    {
      if ( *(_BYTE *)(v21 + 1) != 7 || *(_DWORD *)(v21 + 8) )
      {
        if ( (byte_140171462 & 0x20) != 0 )
          McTemplateK0pd_EtwWriteTransfer(v20, &EventPnpRequestComplete, &v56, a2, *(_DWORD *)(a2 + 48));
      }
      else if ( (byte_140171462 & 0x40) != 0 )
      {
        v22 = *(int **)(a2 + 56);
        if ( v22 )
          v3 = *v22;
        McTemplateK0pqd_EtwWriteTransfer(v20, v21, (unsigned int)&v56, a2, v3, *(_DWORD *)(a2 + 48));
      }
    }
    goto LABEL_122;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_122;
  v29 = *(_QWORD *)(v21 + 8);
  v30 = 0;
  v31 = 0LL;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  if ( *(_BYTE *)(v29 + 2) != 40 )
  {
    v41 = *(_BYTE *)(v29 + 72);
    v31 = *(_BYTE **)(v29 + 32);
    v32 = *(_BYTE *)(v29 + 11);
    v30 = *(_BYTE *)(v29 + 4);
    if ( *(_BYTE *)(v29 + 2) )
      goto LABEL_122;
LABEL_100:
    LOBYTE(v20) = v41 - 8;
    if ( (v20 & 0x5D) != 0 )
      goto LABEL_122;
    if ( *(_BYTE *)(v29 + 3) == 1 || !v31 || !v32 )
      goto LABEL_118;
    v42 = 0;
    v20 = (unsigned __int64)&v31[v32];
    v43 = v31 + 8;
    if ( (unsigned __int8)((*v31 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v43 > v20 )
        goto LABEL_116;
      v34 = v31[2];
      v33 = v31[1] & 0xF;
      v35 = v31[3];
    }
    else
    {
      if ( (unsigned __int64)v43 > v20 )
        goto LABEL_116;
      v44 = v31 + 13;
      v33 = v31[2] & 0xF;
      v45 = v32;
      if ( (unsigned int)(unsigned __int8)v31[7] + 8 <= v32 )
        v45 = (unsigned __int8)v31[7] + 8;
      v20 = (unsigned __int64)&v31[v45];
      if ( (unsigned __int64)v44 <= v20 )
        v34 = v31[12];
      if ( (unsigned __int64)(v31 + 14) > v20 )
        v35 = 0;
      else
        v35 = *v44;
    }
    v42 = 1;
LABEL_116:
    if ( v42 )
    {
      LOBYTE(v3) = v34;
      v46 = v35;
LABEL_119:
      McTemplateK0pduuuuup_EtwWriteTransfer(
        v20,
        v29,
        (unsigned int)&v56,
        a2,
        *(_DWORD *)(a2 + 48),
        *(_BYTE *)(v29 + 3),
        v30,
        v33,
        v3,
        v46,
        a2);
      goto LABEL_122;
    }
LABEL_118:
    v33 = 0;
    v46 = 0;
    goto LABEL_119;
  }
  v36 = 0LL;
  v49 = 0;
  if ( *(_DWORD *)(v29 + 20) )
    goto LABEL_122;
  LODWORD(v20) = 0;
  v51 = 0;
  if ( !*(_DWORD *)(v29 + 56) )
    goto LABEL_97;
  v37 = *(_DWORD *)(v29 + 56);
  v38 = (unsigned int *)(v29 + 120);
  v54 = v29 + 120;
  while ( 1 )
  {
    v39 = *v38;
    if ( (unsigned int)v39 >= 0x80 )
    {
      v40 = *(unsigned int *)(v29 + 16);
      if ( (unsigned int)v39 < (unsigned int)v40 )
        break;
    }
LABEL_91:
    LODWORD(v20) = v20 + 1;
    v38 = (unsigned int *)(v54 + 4);
    v51 = v20;
    v54 += 4LL;
    if ( (unsigned int)v20 >= v37 )
      goto LABEL_97;
  }
  if ( *(_DWORD *)(v39 + v29) != 64 )
  {
    LODWORD(v20) = *(_DWORD *)(v39 + v29) - 65;
    if ( *(_DWORD *)(v39 + v29) == 65 )
    {
      LODWORD(v20) = v39 + 56;
      if ( v39 + 56 <= v40 )
      {
        v49 = 1;
        if ( *(_BYTE *)(v39 + v29 + 10) )
          v36 = (char *)(v39 + v29 + 24);
        v30 = *(_BYTE *)(v39 + v29 + 8);
        v31 = *(_BYTE **)(v39 + v29 + 16);
        v32 = *(_BYTE *)(v39 + v29 + 9);
      }
    }
    else if ( *(_DWORD *)(v39 + v29) == 66 )
    {
      LODWORD(v20) = v39 + 40;
      if ( v39 + 40 <= v40 )
      {
        if ( *(_DWORD *)(v39 + v29 + 12) )
          v36 = (char *)(v39 + v29 + 32);
        v31 = *(_BYTE **)(v39 + v29 + 24);
        goto LABEL_96;
      }
    }
    goto LABEL_89;
  }
  LODWORD(v20) = v39 + 40;
  if ( v39 + 40 > v40 )
  {
LABEL_89:
    if ( v49 )
      goto LABEL_97;
    LODWORD(v20) = v51;
    v37 = *(_DWORD *)(v29 + 56);
    goto LABEL_91;
  }
  if ( *(_BYTE *)(v39 + v29 + 10) )
    v36 = (char *)(v39 + v29 + 24);
  v31 = *(_BYTE **)(v39 + v29 + 16);
LABEL_96:
  v32 = *(_BYTE *)(v39 + v29 + 9);
  v30 = *(_BYTE *)(v39 + v29 + 8);
LABEL_97:
  if ( v36 )
  {
    v41 = *v36;
    goto LABEL_100;
  }
LABEL_122:
  IofCompleteRequest((PIRP)a2, 0);
  return v6;
}
