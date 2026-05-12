/*
 * XREFs of RaidAdapterDiagnosticIoctl @ 0x14018169C
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14002B3B0 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidAllocateSrb @ 0x14000EB90 (RaidAllocateSrb.c)
 *     RaSrbSetMiniportContext @ 0x140010610 (RaSrbSetMiniportContext.c)
 *     StorFreeContiguousIoResources @ 0x140010B84 (StorFreeContiguousIoResources.c)
 *     RaidXrbDeallocateResources @ 0x140011E50 (RaidXrbDeallocateResources.c)
 *     RaidZeroXrb @ 0x140012070 (RaidZeroXrb.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1400121C0 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x140012900 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x14001C05C (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidAdapterPoFxIdleComponent @ 0x14001D890 (RaidAdapterPoFxIdleComponent.c)
 *     RaidAdapterPoFxActivateComponent @ 0x14001DA40 (RaidAdapterPoFxActivateComponent.c)
 *     StorAllocateContiguousIoResources @ 0x14001EE28 (StorAllocateContiguousIoResources.c)
 *     RaidSrbStatusToNtStatus @ 0x14001EF94 (RaidSrbStatusToNtStatus.c)
 *     RaidFreeSrb @ 0x140036888 (RaidFreeSrb.c)
 *     RaidXrbSetCompletionRoutine @ 0x14003D864 (RaidXrbSetCompletionRoutine.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidDiagnosticIoctlStatusToNtStatus @ 0x1400652A0 (RaidDiagnosticIoctlStatusToNtStatus.c)
 *     WPP_SF_DD @ 0x140067CBC (WPP_SF_DD.c)
 *     WPP_SF_qq @ 0x140067E84 (WPP_SF_qq.c)
 *     RaBuildDiagnosticBufferForMiniport @ 0x14008913C (RaBuildDiagnosticBufferForMiniport.c)
 *     RaidCallerIsAdmin @ 0x14008B354 (RaidCallerIsAdmin.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memmove @ 0x140143780 (memmove.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall RaidAdapterDiagnosticIoctl(__int64 a1, __int64 a2)
{
  int v2; // ebx
  int v5; // edi
  unsigned int *Srb; // r14
  unsigned int *v7; // r12
  __int64 v8; // r15
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 ContiguousIoResources; // rax
  __int64 v13; // rdx
  __int64 v14; // rdi
  unsigned int v15; // eax
  __int64 v16; // rax
  int v17; // eax
  int v18; // ecx
  __int64 v19; // rdx
  __int128 v20; // xmm0
  __int64 v21; // rdx
  unsigned int v22; // eax
  __int64 v23; // rax
  __int64 v24; // r15
  bool v25; // zf
  unsigned __int64 v26; // rcx
  __int64 v27; // rdx
  int *v28; // rax
  const EVENT_DESCRIPTOR *v29; // rdx
  __int64 v30; // rdx
  char v31; // r12
  _BYTE *v32; // r9
  unsigned __int8 v33; // r10
  char v34; // r11
  char v35; // r15
  char v36; // r14
  char *v37; // r14
  unsigned int v38; // r13d
  unsigned __int64 v39; // r15
  __int64 v40; // r8
  int v41; // ecx
  char v42; // cl
  char v43; // r8
  _BYTE *v44; // rax
  unsigned int v45; // eax
  unsigned __int64 v46; // r8
  char v47; // al
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-59h]
  char v50; // [rsp+60h] [rbp-19h]
  char v51; // [rsp+61h] [rbp-18h]
  char v52; // [rsp+62h] [rbp-17h]
  int Size[3]; // [rsp+64h] [rbp-15h] BYREF
  unsigned int v54; // [rsp+70h] [rbp-9h] BYREF
  __int64 v55; // [rsp+78h] [rbp-1h]
  GUID v56; // [rsp+80h] [rbp+7h] BYREF

  v2 = 0;
  v55 = *(_QWORD *)(a2 + 184);
  *(_QWORD *)&Size[1] = 0LL;
  v5 = 0;
  v54 = 0;
  Srb = 0LL;
  Size[0] = *(_DWORD *)(v55 + 8);
  v7 = 0LL;
  if ( !RaidCallerIsAdmin() )
    goto LABEL_62;
  if ( *(struct _KTHREAD **)(a2 + 152) != KeGetCurrentThread() )
  {
    v7 = *(unsigned int **)&Size[1];
LABEL_62:
    v5 = -1073741790;
    goto LABEL_63;
  }
  v8 = *(_QWORD *)(a2 + 24);
  if ( v8 )
  {
    if ( *(_DWORD *)(v55 + 16) >= 0x14u && Size[0] >= 0x24u && *(_DWORD *)v8 == 20 && *(_DWORD *)(v8 + 4) == 20 )
    {
      v9 = *(_DWORD *)(v8 + 12);
      if ( v9 )
      {
        if ( v9 < 4 && *(int *)(v8 + 16) < 1 )
        {
          if ( v9 == 1 )
          {
            memset_0(*(void **)(a2 + 24), 0, (unsigned int)Size[0]);
            *(_DWORD *)v8 = 36;
            *(GUID *)(v8 + 8) = GUID_DIAGNOSTIC_PROVIDER_STORPORT;
            if ( Size[0] >= 0x1200038u )
            {
              *(_DWORD *)(v8 + 32) = 18874392;
              *(_DWORD *)(v8 + 36) = 2;
              *(_DWORD *)(v8 + 40) = *(_DWORD *)(a1 + 4932);
              *(_DWORD *)(v8 + 44) = *(_DWORD *)(a1 + 4928);
              memmove((void *)(v8 + 48), *(const void **)(a1 + 4936), 48LL * *(unsigned int *)(a1 + 4932));
              *(_DWORD *)(v8 + 18874416) = *(_DWORD *)(a1 + 5656);
              *(_DWORD *)(v8 + 18874420) = *(_DWORD *)(a1 + 5660);
              *(_DWORD *)(v8 + 24) = 18874392;
              *(_DWORD *)(v8 + 4) = 18874424;
              *(_QWORD *)(a2 + 56) = 18874424LL;
            }
            else
            {
              *(_DWORD *)(v8 + 24) = 18874392;
              v5 = -2147483643;
              *(_DWORD *)(v8 + 4) = 36;
              *(_QWORD *)(a2 + 56) = 36LL;
            }
            goto LABEL_70;
          }
          if ( (unsigned int)(v9 - 2) > 1 )
          {
            v5 = -1073741637;
            goto LABEL_70;
          }
          v5 = RaBuildDiagnosticBufferForMiniport(*(_QWORD *)(a1 + 8), a2, Size[0], &Size[1], &v54);
          if ( v5 >= 0 )
          {
            Srb = (unsigned int *)RaidAllocateSrb(*(_QWORD *)(a1 + 8), 2u, *(_BYTE *)(a1 + 482), 0);
            if ( Srb )
            {
              v11 = 316LL;
              if ( *(_DWORD *)a1 != 1314275652 )
                v11 = 524LL;
              ContiguousIoResources = StorAllocateContiguousIoResources(
                                        ((*(_DWORD *)(v11 + a1) + 7) & 0xFFFFFFF8) + 1184,
                                        v10,
                                        (_QWORD *)a1);
              v55 = ContiguousIoResources;
              if ( ContiguousIoResources )
              {
                v14 = ContiguousIoResources + 48;
                RaidZeroXrb(ContiguousIoResources + 48, v13, 0, 0LL);
                v7 = *(unsigned int **)&Size[1];
                v15 = v54;
                *(_QWORD *)(v14 + 184) = *(_QWORD *)&Size[1];
                *(_QWORD *)(v14 + 176) = a2;
                *(_QWORD *)(v14 + 168) = Srb;
                if ( *(_BYTE *)(a1 + 482) == 1 )
                {
                  Srb[15] = v15;
                  *((_QWORD *)Srb + 12) = v14;
                  *((_QWORD *)Srb + 10) = a2;
                  Srb[5] = 2;
                  *((_QWORD *)Srb + 8) = v7;
                  Srb[6] = 256;
                  Srb[10] = *(_DWORD *)(a1 + 4124);
                  v16 = Srb[13];
                  *(_WORD *)((char *)Srb + v16 + 8) = 0;
                  *((_BYTE *)Srb + v16 + 10) = 0;
                }
                else
                {
                  *((_QWORD *)Srb + 6) = v14;
                  *((_BYTE *)Srb + 2) = 2;
                  *((_QWORD *)Srb + 3) = v7;
                  Srb[4] = v15;
                  *(_WORD *)Srb = 88;
                  Srb[3] = 256;
                  Srb[5] = *(_DWORD *)(a1 + 4124);
                  *(_WORD *)((char *)Srb + 5) = 0;
                  *((_BYTE *)Srb + 7) = 0;
                }
                RaSrbSetMiniportContext((int *)a1, (__int64)Srb, v55 + 1184);
                *(_QWORD *)&Size[1] = v14 + 664;
                KeInitializeEvent((PRKEVENT)(v14 + 664), NotificationEvent, 0);
                RaidXrbSetCompletionRoutine(v14, (__int64)RaidXrbSignalCompletion);
                if ( *(_DWORD *)(v8 + 12) == 2 )
                  *(_BYTE *)(v14 + 17) |= 8u;
                if ( *(_DWORD *)(v8 + 12) == 3 && *(_QWORD *)(a1 + 4960) )
                  RaidAdapterPoFxActivateComponent(a1, 0LL, 1LL);
                if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
                  && BYTE1(WPP_GLOBAL_Control->Timer) )
                {
                  WPP_SF_qq(
                    (__int64)WPP_GLOBAL_Control->AttachedDevice,
                    0x47u,
                    (__int64)&WPP_f9c5a744b2853f8434526ecbb453d058_Traceguids,
                    v14,
                    Srb);
                }
                if ( *(_BYTE *)(a1 + 4370) )
                  v17 = RaidAdapterRaiseIrqlAndExecuteXrb(a1, (_QWORD *)v14);
                else
                  v17 = RaidAdapterPostScatterGatherExecute(a1, v14);
                v5 = v17;
                if ( v17 >= 0 )
                {
                  KeWaitForSingleObject(*(PVOID *)&Size[1], Executive, 0, 0, 0LL);
                  v5 = RaidSrbStatusToNtStatus(*((_BYTE *)Srb + 3));
                }
                if ( *(_DWORD *)(v8 + 12) == 3 )
                {
                  if ( (*(_BYTE *)(v55 + 65) & 1) != 0 )
                  {
                    RaidAdapterPoFxIdleComponentFromMiniport(a1, *(unsigned int *)(v55 + 796));
                    *(_BYTE *)(v55 + 65) &= ~1u;
                  }
                  if ( *(_QWORD *)(a1 + 4960) )
                    RaidAdapterPoFxIdleComponent(a1, 0LL, 0LL);
                }
                if ( v5 < 0 )
                {
                  v23 = 0LL;
                }
                else
                {
                  *(_QWORD *)&Size[1] = (char *)v7 + *v7;
                  memset_0((void *)v8, 0, (unsigned int)Size[0]);
                  v18 = v7[5];
                  if ( v18 == 6 )
                  {
                    v19 = *(_QWORD *)&Size[1];
                    v5 = -2147483643;
                    *(_DWORD *)v8 = 36;
                    *(_DWORD *)(v8 + 24) = *(_DWORD *)(v19 + 32);
                    v20 = *(_OWORD *)(v19 + 16);
                    *(_DWORD *)(v8 + 4) = 36;
                    *(_OWORD *)(v8 + 8) = v20;
                    *(_QWORD *)(a2 + 56) = 36LL;
LABEL_60:
                    v24 = v55;
                    RaidXrbDeallocateResources(v55 + 48, 0);
                    StorFreeContiguousIoResources(a1, v24);
                    goto LABEL_63;
                  }
                  if ( v18 )
                  {
                    v5 = RaidDiagnosticIoctlStatusToNtStatus(v18);
                    *(_QWORD *)(a2 + 56) = 0LL;
                    goto LABEL_60;
                  }
                  v21 = *(_QWORD *)&Size[1];
                  *(_DWORD *)v8 = 36;
                  v22 = *(_DWORD *)(v21 + 32);
                  if ( v22 >= Size[0] - 32 )
                    v22 = Size[0] - 32;
                  *(_DWORD *)(v8 + 4) = v22 + 32;
                  *(_DWORD *)(v8 + 24) = v22;
                  *(_OWORD *)(v8 + 8) = *(_OWORD *)(v21 + 16);
                  memmove((void *)(v8 + 32), (const void *)(v21 + 40), v22);
                  v23 = *(unsigned int *)(v8 + 4);
                }
                *(_QWORD *)(a2 + 56) = v23;
                if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
                  && BYTE1(WPP_GLOBAL_Control->Timer) )
                {
                  LODWORD(Timeout) = *((unsigned __int8 *)Srb + 3);
                  WPP_SF_DD(
                    (__int64)WPP_GLOBAL_Control->AttachedDevice,
                    0x48u,
                    (__int64)&WPP_f9c5a744b2853f8434526ecbb453d058_Traceguids,
                    v5,
                    Timeout);
                }
                goto LABEL_60;
              }
            }
            v5 = -1073741670;
          }
          v7 = *(unsigned int **)&Size[1];
LABEL_63:
          if ( v7 )
            ExFreePoolWithTag(v7, 0x72536152u);
          if ( Srb )
          {
            if ( *(_BYTE *)(a1 + 482) == 1 )
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
          goto LABEL_70;
        }
      }
    }
  }
  v5 = -1073741811;
LABEL_70:
  v25 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v5;
  if ( v25 )
    goto LABEL_136;
  v56 = 0LL;
  IoGetActivityIdIrp(a2, &v56);
  v27 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v27 == 14 )
  {
    if ( (byte_140171462 & 8) == 0 )
      goto LABEL_136;
    v29 = &EventNonReadWriteRequestComplete;
    goto LABEL_135;
  }
  if ( *(_BYTE *)v27 != 15 )
  {
    if ( *(_BYTE *)v27 != 27 )
      goto LABEL_136;
    if ( *(_BYTE *)(v27 + 1) == 7 && !*(_DWORD *)(v27 + 8) )
    {
      if ( (byte_140171462 & 0x40) != 0 )
      {
        v28 = *(int **)(a2 + 56);
        if ( v28 )
          v2 = *v28;
        LODWORD(Timeout) = v2;
        McTemplateK0pqd_EtwWriteTransfer(v26, v27, &v56, a2, Timeout, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_136;
    }
    if ( (byte_140171462 & 0x20) == 0 )
      goto LABEL_136;
    v29 = &EventPnpRequestComplete;
LABEL_135:
    LODWORD(Timeout) = *(_DWORD *)(a2 + 48);
    McTemplateK0pd_EtwWriteTransfer(v26, v29, &v56, a2, Timeout);
    goto LABEL_136;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_136;
  v30 = *(_QWORD *)(v27 + 8);
  v31 = 0;
  v32 = 0LL;
  v50 = 0;
  v33 = 0;
  v51 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  if ( *(_BYTE *)(v30 + 2) != 40 )
  {
    v42 = *(_BYTE *)(v30 + 72);
    v32 = *(_BYTE **)(v30 + 32);
    v33 = *(_BYTE *)(v30 + 11);
    v31 = *(_BYTE *)(v30 + 4);
    if ( !*(_BYTE *)(v30 + 2) )
      goto LABEL_111;
    goto LABEL_136;
  }
  v37 = 0LL;
  v52 = 0;
  if ( *(_DWORD *)(v30 + 20) )
    goto LABEL_136;
  v38 = 0;
  Size[0] = *(_DWORD *)(v30 + 56);
  if ( !Size[0] )
    goto LABEL_108;
  while ( 1 )
  {
    v26 = *(unsigned int *)(v30 + 4LL * v38 + 120);
    if ( (unsigned int)v26 >= 0x80 )
    {
      v39 = *(unsigned int *)(v30 + 16);
      if ( (unsigned int)v26 < (unsigned int)v39 )
        break;
    }
LABEL_101:
    if ( ++v38 >= Size[0] )
      goto LABEL_107;
  }
  v40 = (unsigned int)v26;
  v41 = *(_DWORD *)(v30 + v26) - 64;
  if ( v41 )
  {
    v26 = (unsigned int)(v41 - 1);
    if ( (_DWORD)v26 )
    {
      if ( (_DWORD)v26 == 1 )
      {
        v26 = v40 + 40;
        if ( v40 + 40 <= v39 )
        {
          if ( *(_DWORD *)(v30 + v40 + 12) )
            v37 = (char *)(v40 + v30 + 32);
          v32 = *(_BYTE **)(v30 + v40 + 24);
          goto LABEL_106;
        }
      }
    }
    else
    {
      v26 = v40 + 56;
      if ( v40 + 56 <= v39 )
      {
        v52 = 1;
        if ( *(_BYTE *)(v30 + v40 + 10) )
          v37 = (char *)(v40 + v30 + 24);
        v31 = *(_BYTE *)(v30 + v40 + 8);
        v32 = *(_BYTE **)(v30 + v40 + 16);
        v33 = *(_BYTE *)(v30 + v40 + 9);
      }
    }
    goto LABEL_100;
  }
  v26 = v40 + 40;
  if ( v40 + 40 > v39 )
  {
LABEL_100:
    if ( v52 )
      goto LABEL_107;
    goto LABEL_101;
  }
  if ( *(_BYTE *)(v30 + v40 + 10) )
    v37 = (char *)(v40 + v30 + 24);
  v32 = *(_BYTE **)(v30 + v40 + 16);
LABEL_106:
  v33 = *(_BYTE *)(v30 + v40 + 9);
  v31 = *(_BYTE *)(v30 + v40 + 8);
LABEL_107:
  v35 = 0;
LABEL_108:
  if ( v37 )
  {
    v42 = *v37;
    v36 = 0;
LABEL_111:
    LOBYTE(v26) = v42 - 8;
    if ( (v26 & 0x5D) == 0 )
    {
      if ( *(_BYTE *)(v30 + 3) == 1 || !v32 || !v33 )
        goto LABEL_131;
      v43 = 0;
      v26 = (unsigned __int64)&v32[v33];
      v44 = v32 + 8;
      if ( (unsigned __int8)((*v32 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v44 <= v26 )
        {
          v43 = 1;
          v35 = v32[2];
          v34 = v32[1] & 0xF;
          v36 = v32[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v44 <= v26 )
        {
          v34 = v32[2] & 0xF;
          v45 = v33;
          if ( (unsigned int)(unsigned __int8)v32[7] + 8 <= v33 )
            v45 = (unsigned __int8)v32[7] + 8;
          v26 = (unsigned __int64)(v32 + 13);
          v46 = (unsigned __int64)&v32[v45];
          if ( (unsigned __int64)(v32 + 13) > v46 )
            v50 = 0;
          else
            v50 = v32[12];
          if ( (unsigned __int64)(v32 + 14) > v46 )
            v51 = 0;
          else
            v51 = *(_BYTE *)v26;
          v43 = 1;
        }
        v36 = v51;
        v35 = v50;
      }
      if ( v43 )
      {
        LOBYTE(v2) = v35;
        v47 = v36;
      }
      else
      {
LABEL_131:
        v34 = 0;
        v47 = 0;
      }
      LODWORD(Timeout) = *(_DWORD *)(a2 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v26, v30, &v56, a2, Timeout, *(_BYTE *)(v30 + 3), v31, v34, v2, v47, a2);
    }
  }
LABEL_136:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v5;
}
