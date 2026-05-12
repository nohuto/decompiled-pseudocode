/*
 * XREFs of StorpTelemetrySendAdapterSurfaceUfsHealthInfo @ 0x1400B99D8
 * Callers:
 *     StorpTelemetrySendAdapterUfsHealthInfo @ 0x1400BA1F0 (StorpTelemetrySendAdapterUfsHealthInfo.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RaidBuildMdlForXrb @ 0x14000EB30 (RaidBuildMdlForXrb.c)
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
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140035110 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1400351C0 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgKeywordOn @ 0x14003D27C (_tlgKeywordOn.c)
 *     Feature_SurfaceUfsHealthInfo_AV_fix__private_IsEnabledDeviceUsageNoInline @ 0x1400AAB10 (Feature_SurfaceUfsHealthInfo_AV_fix__private_IsEnabledDeviceUsageNoInline.c)
 *     StorpSwapUfsHealthDescriptorsVpdPage @ 0x1400B1E6C (StorpSwapUfsHealthDescriptorsVpdPage.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall StorpTelemetrySendAdapterSurfaceUfsHealthInfo(__int64 a1)
{
  __int64 v2; // r13
  __int64 v3; // r15
  _BYTE *v4; // rsi
  _BYTE *v5; // rdi
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 Srb; // rbx
  int v9; // edi
  __int64 v10; // rax
  __int64 ContiguousIoResources; // rax
  __int64 v12; // rdx
  _BYTE *Pool; // rax
  int v14; // eax
  unsigned int v15; // r10d
  _QWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  char v19; // r11
  __int64 v20; // rcx
  unsigned __int64 v21; // r9
  __int64 v22; // r8
  int v23; // ecx
  int v24; // ecx
  _BYTE *v25; // rax
  _QWORD *v26; // rdx
  char v27; // al
  int v28; // eax
  __int64 v29; // rcx
  __int16 v30; // ax
  bool v31; // zf
  const wchar_t *v32; // rdx
  int v33; // eax
  __int64 v34; // r8
  __int64 v35; // r9
  int v37; // [rsp+38h] [rbp-D0h] BYREF
  int v38; // [rsp+3Ch] [rbp-CCh] BYREF
  int v39; // [rsp+40h] [rbp-C8h] BYREF
  int v40; // [rsp+44h] [rbp-C4h] BYREF
  int v41; // [rsp+48h] [rbp-C0h] BYREF
  int v42; // [rsp+4Ch] [rbp-BCh] BYREF
  int v43; // [rsp+50h] [rbp-B8h] BYREF
  int v44; // [rsp+54h] [rbp-B4h] BYREF
  int v45; // [rsp+58h] [rbp-B0h] BYREF
  int v46; // [rsp+5Ch] [rbp-ACh] BYREF
  int v47; // [rsp+60h] [rbp-A8h] BYREF
  int v48; // [rsp+64h] [rbp-A4h] BYREF
  int v49; // [rsp+68h] [rbp-A0h] BYREF
  int v50; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v51; // [rsp+70h] [rbp-98h] BYREF
  __int64 v52; // [rsp+78h] [rbp-90h] BYREF
  __int64 v53; // [rsp+80h] [rbp-88h] BYREF
  __int64 v54; // [rsp+88h] [rbp-80h] BYREF
  __int64 v55; // [rsp+90h] [rbp-78h] BYREF
  __int64 v56; // [rsp+98h] [rbp-70h] BYREF
  __int64 v57; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v58; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v59; // [rsp+B0h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+B8h] [rbp-50h] BYREF
  __int64 *v61; // [rsp+D8h] [rbp-30h]
  __int64 v62; // [rsp+E0h] [rbp-28h]
  __int64 v63; // [rsp+E8h] [rbp-20h]
  __int64 v64; // [rsp+F0h] [rbp-18h]
  char v65[16]; // [rsp+F8h] [rbp-10h] BYREF
  int *v66; // [rsp+108h] [rbp+0h]
  __int64 v67; // [rsp+110h] [rbp+8h]
  _BYTE *v68; // [rsp+118h] [rbp+10h]
  int v69[2]; // [rsp+120h] [rbp+18h] BYREF
  int *v70; // [rsp+128h] [rbp+20h]
  __int64 v71; // [rsp+130h] [rbp+28h]
  int *v72; // [rsp+138h] [rbp+30h]
  __int64 v73; // [rsp+140h] [rbp+38h]
  int *v74; // [rsp+148h] [rbp+40h]
  __int64 v75; // [rsp+150h] [rbp+48h]
  int *v76; // [rsp+158h] [rbp+50h]
  __int64 v77; // [rsp+160h] [rbp+58h]
  int *v78; // [rsp+168h] [rbp+60h]
  __int64 v79; // [rsp+170h] [rbp+68h]
  int *v80; // [rsp+178h] [rbp+70h]
  __int64 v81; // [rsp+180h] [rbp+78h]
  int *v82; // [rsp+188h] [rbp+80h]
  __int64 v83; // [rsp+190h] [rbp+88h]
  __int64 *v84; // [rsp+198h] [rbp+90h]
  __int64 v85; // [rsp+1A0h] [rbp+98h]
  __int64 *v86; // [rsp+1A8h] [rbp+A0h]
  __int64 v87; // [rsp+1B0h] [rbp+A8h]
  __int64 *v88; // [rsp+1B8h] [rbp+B0h]
  __int64 v89; // [rsp+1C0h] [rbp+B8h]
  __int64 *v90; // [rsp+1C8h] [rbp+C0h]
  __int64 v91; // [rsp+1D0h] [rbp+C8h]
  __int64 *v92; // [rsp+1D8h] [rbp+D0h]
  __int64 v93; // [rsp+1E0h] [rbp+D8h]
  int *v94; // [rsp+1E8h] [rbp+E0h]
  __int64 v95; // [rsp+1F0h] [rbp+E8h]
  int *v96; // [rsp+1F8h] [rbp+F0h]
  __int64 v97; // [rsp+200h] [rbp+F8h]
  int *v98; // [rsp+208h] [rbp+100h]
  __int64 v99; // [rsp+210h] [rbp+108h]
  __int64 *v100; // [rsp+218h] [rbp+110h]
  __int64 v101; // [rsp+220h] [rbp+118h]
  __int64 *v102; // [rsp+228h] [rbp+120h]
  __int64 v103; // [rsp+230h] [rbp+128h]
  int *v104; // [rsp+238h] [rbp+130h]
  __int64 v105; // [rsp+240h] [rbp+138h]
  int *v106; // [rsp+248h] [rbp+140h]
  __int64 v107; // [rsp+250h] [rbp+148h]
  int *v108; // [rsp+258h] [rbp+150h]
  __int64 v109; // [rsp+260h] [rbp+158h]
  int *v110; // [rsp+268h] [rbp+160h]
  __int64 v111; // [rsp+270h] [rbp+168h]
  __int64 *v112; // [rsp+278h] [rbp+170h]
  __int64 v113; // [rsp+280h] [rbp+178h]

  v2 = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  if ( *(_DWORD *)a1 == 1314275652 )
  {
    v6 = a1 + 274;
  }
  else
  {
    v6 = a1 + 482;
    if ( *(_DWORD *)a1 != 1094997074 )
      v6 = 98LL;
  }
  Srb = RaidAllocateSrb(*(_QWORD *)(a1 + 8), 0, *(_BYTE *)v6, 1);
  if ( !Srb )
    goto LABEL_6;
  v10 = 316LL;
  if ( *(_DWORD *)a1 != 1314275652 )
    v10 = 524LL;
  ContiguousIoResources = StorAllocateContiguousIoResources(
                            ((*(_DWORD *)(v10 + a1) + 7) & 0xFFFFFFF8) + 1184,
                            v7,
                            (_QWORD *)a1);
  v2 = ContiguousIoResources;
  if ( !ContiguousIoResources )
    goto LABEL_6;
  v3 = ContiguousIoResources + 48;
  RaidZeroXrb(ContiguousIoResources + 48, v12, 0, 0LL);
  *(_QWORD *)(v3 + 168) = Srb;
  Pool = (_BYTE *)RaidAllocatePool(64LL, 510LL, 1700028754LL, *(_QWORD *)(a1 + 8));
  v4 = Pool;
  if ( !Pool
    || (memset_0(Pool, 0, 0x1FEuLL),
        *(_QWORD *)(v3 + 176) = 0LL,
        *(_QWORD *)(v3 + 184) = v4,
        v14 = RaidBuildMdlForXrb(v3, v4, 0x1FEu),
        v15 = 0,
        v14 < 0) )
  {
LABEL_6:
    v9 = -1073741670;
    goto LABEL_64;
  }
  v16 = (_QWORD *)(a1 + 144);
  if ( *(_BYTE *)v6 == 1 )
  {
    *(_QWORD *)(Srb + 96) = v3;
    *(_DWORD *)(Srb + 20) = 0;
    *(_QWORD *)(Srb + 64) = v4;
    *(_DWORD *)(Srb + 60) = 510;
    *(_DWORD *)(Srb + 24) = 320;
    *(_DWORD *)(Srb + 40) = 10;
    if ( (_QWORD *)*v16 == v16 )
    {
      MEMORY[8] = 0;
      MEMORY[0xA] = 0;
    }
    else
    {
      v5 = (_BYTE *)(*v16 - 64LL);
      v17 = *(unsigned int *)(Srb + 52);
      *(_BYTE *)(v17 + Srb + 8) = v5[104];
      *(_BYTE *)(v17 + Srb + 9) = v5[105];
      *(_BYTE *)(v17 + Srb + 10) = v5[106];
    }
    v18 = Srb + *(unsigned int *)(Srb + 120);
    *(_DWORD *)v18 = 64;
    *(_DWORD *)(v18 + 4) = 32;
    if ( *(_BYTE *)(Srb + 2) == 40 )
    {
      v19 = 0;
      if ( !*(_DWORD *)(Srb + 20) && *(_DWORD *)(Srb + 56) )
      {
        do
        {
          v20 = *(unsigned int *)(Srb + 4LL * v15 + 120);
          if ( (unsigned int)v20 >= 0x80 )
          {
            v21 = *(unsigned int *)(Srb + 16);
            if ( (unsigned int)v20 < (unsigned int)v21 )
            {
              v22 = (unsigned int)v20;
              v23 = *(_DWORD *)(v20 + Srb) - 64;
              if ( v23 )
              {
                v24 = v23 - 1;
                if ( v24 )
                {
                  if ( v24 == 1 && v22 + 40 <= v21 )
                    break;
                }
                else if ( v22 + 56 <= v21 )
                {
                  v19 = 1;
                  *(_BYTE *)(v22 + Srb + 10) = 6;
                }
              }
              else if ( v22 + 40 <= v21 )
              {
                *(_BYTE *)(v22 + Srb + 10) = 6;
                break;
              }
              if ( v19 )
                break;
            }
          }
          ++v15;
        }
        while ( v15 < *(_DWORD *)(Srb + 56) );
      }
    }
    else
    {
      *(_BYTE *)(Srb + 10) = 6;
    }
    *(_BYTE *)(v18 + 25) |= 1u;
    *(_BYTE *)(v18 + 24) = 18;
    *(_BYTE *)(v18 + 26) = -64;
    *(_BYTE *)(v18 + 28) = -2;
    v25 = *(_BYTE **)(Srb + 64);
  }
  else
  {
    *(_QWORD *)(Srb + 48) = v3;
    *(_BYTE *)(Srb + 2) = 0;
    *(_QWORD *)(Srb + 24) = v4;
    *(_DWORD *)(Srb + 16) = 510;
    *(_DWORD *)(Srb + 12) = 320;
    *(_DWORD *)(Srb + 20) = 10;
    v26 = (_QWORD *)*v16;
    if ( (_QWORD *)*v16 == v16 )
    {
      *(_WORD *)(Srb + 5) = 0;
      v27 = 0;
    }
    else
    {
      v5 = v26 - 8;
      *(_BYTE *)(Srb + 5) = *((_BYTE *)v26 + 40);
      *(_BYTE *)(Srb + 6) = *((_BYTE *)v26 + 41);
      v27 = *((_BYTE *)v26 + 42);
    }
    *(_BYTE *)(Srb + 7) = v27;
    *(_BYTE *)(Srb + 10) = 6;
    *(_BYTE *)(Srb + 73) |= 1u;
    v25 = v4;
    *(_BYTE *)(Srb + 72) = 18;
    *(_BYTE *)(Srb + 74) = -64;
    *(_BYTE *)(Srb + 76) = -2;
  }
  *(_QWORD *)(v3 + 184) = v25;
  *(_QWORD *)(v3 + 224) = v5;
  RaSrbSetMiniportContext((int *)a1, Srb, v2 + 1184);
  KeInitializeEvent((PRKEVENT)(v3 + 664), NotificationEvent, 0);
  *(_QWORD *)(v3 + 656) = RaidXrbSignalCompletion;
  if ( *(_QWORD *)(a1 + 4960) )
    RaidAdapterPoFxActivateComponent(a1, 0LL, 1LL);
  if ( *(_BYTE *)(a1 + 4370) )
    v28 = RaidAdapterRaiseIrqlAndExecuteXrb(a1, (_QWORD *)v3);
  else
    v28 = RaidAdapterPostScatterGatherExecute(a1, v3);
  v9 = v28;
  if ( v28 >= 0 )
  {
    KeWaitForSingleObject((PVOID)(v3 + 664), Executive, 0, 0, 0LL);
    v9 = RaidSrbStatusToNtStatus(*(_BYTE *)(Srb + 3));
  }
  if ( *(_QWORD *)(a1 + 4960) )
  {
    if ( (*(_BYTE *)(v3 + 17) & 1) != 0 )
    {
      RaidAdapterPoFxIdleComponentFromMiniport(a1, *(unsigned int *)(v3 + 748));
      *(_BYTE *)(v3 + 17) &= ~1u;
    }
    RaidAdapterPoFxIdleComponent(a1, 0LL, 0LL);
  }
  if ( v9 >= 0 )
  {
    if ( v4[1] != 0xC0 )
    {
LABEL_52:
      v9 = -1073741808;
      goto LABEL_64;
    }
    StorpSwapUfsHealthDescriptorsVpdPage(v4);
    v30 = *((_WORD *)v4 + 254);
    if ( v30 )
    {
      v29 = 1LL;
      if ( v30 != 1 )
      {
        v9 = -1073741735;
        goto LABEL_64;
      }
      v31 = *((_WORD *)v4 + 1) == 510;
    }
    else
    {
      v31 = *((_WORD *)v4 + 1) == 508;
    }
    if ( !v31 || *((_DWORD *)v4 + 5) < *((_DWORD *)v4 + 4) || *((_DWORD *)v4 + 9) < *((_DWORD *)v4 + 8) )
      goto LABEL_52;
    if ( (unsigned int)dword_140170178 > 5 && tlgKeywordOn(v29, 0x400000000000LL) )
    {
      v32 = *(const wchar_t **)(a1 + 4720);
      v61 = &v52;
      v52 = 0x1000000LL;
      v63 = a1 + 5064;
      v62 = 8LL;
      v64 = 16LL;
      tlgCreate1Sz_wchar_t((__int64)v65, v32);
      LOWORD(v37) = *((_WORD *)v4 + 254);
      v70 = &v37;
      v38 = *((_DWORD *)v4 + 4);
      v72 = &v38;
      v39 = *((_DWORD *)v4 + 5);
      v74 = &v39;
      v40 = *((_DWORD *)v4 + 6);
      v76 = &v40;
      v41 = *((_DWORD *)v4 + 8);
      v78 = &v41;
      v42 = *((_DWORD *)v4 + 9);
      v80 = &v42;
      v43 = *((_DWORD *)v4 + 10);
      v82 = &v43;
      v53 = *((_QWORD *)v4 + 6);
      v84 = &v53;
      v54 = *((_QWORD *)v4 + 8);
      v86 = &v54;
      v55 = *((_QWORD *)v4 + 10);
      v88 = &v55;
      v56 = *((_QWORD *)v4 + 11);
      v90 = &v56;
      v57 = *((_QWORD *)v4 + 12);
      v92 = &v57;
      v44 = *((_DWORD *)v4 + 28);
      v94 = &v44;
      v33 = *((_DWORD *)v4 + 30);
      v66 = v69;
      v67 = 2LL;
      v68 = v4;
      *(_QWORD *)v69 = 510LL;
      v71 = 2LL;
      v73 = 4LL;
      v75 = 4LL;
      v77 = 4LL;
      v79 = 4LL;
      v81 = 4LL;
      v83 = 4LL;
      v85 = 8LL;
      v87 = 8LL;
      v89 = 8LL;
      v91 = 8LL;
      v93 = 8LL;
      v95 = 4LL;
      v45 = v33;
      v97 = 4LL;
      v96 = &v45;
      v46 = *((_DWORD *)v4 + 31);
      v98 = &v46;
      v58 = *((_QWORD *)v4 + 16);
      v100 = &v58;
      v59 = *((_QWORD *)v4 + 17);
      v102 = &v59;
      v47 = *((_DWORD *)v4 + 36);
      v104 = &v47;
      v48 = *((_DWORD *)v4 + 40);
      v106 = &v48;
      v49 = *((_DWORD *)v4 + 44);
      v108 = &v49;
      v50 = *((_DWORD *)v4 + 45);
      v110 = &v50;
      LODWORD(v51) = *((_DWORD *)v4 + 46);
      v112 = &v51;
      v99 = 4LL;
      v101 = 8LL;
      v103 = 8LL;
      v105 = 4LL;
      v107 = 4LL;
      v109 = 4LL;
      v111 = 4LL;
      v113 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer((__int64)v69, (unsigned __int8 *)dword_14016047D, v34, v35, 0x1Du, &v60);
    }
  }
LABEL_64:
  if ( (unsigned int)Feature_SurfaceUfsHealthInfo_AV_fix__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v2 )
    {
      RaidXrbDeallocateResources(v3, 0);
      StorFreeContiguousIoResources(a1, v2);
    }
    if ( v4 )
      ExFreePoolWithTag(v4, 0x65546152u);
  }
  else
  {
    if ( v4 )
      ExFreePoolWithTag(v4, 0x65546152u);
    if ( v2 )
    {
      RaidXrbDeallocateResources(v3, 0);
      StorFreeContiguousIoResources(a1, v2);
    }
  }
  if ( Srb )
  {
    if ( *(_BYTE *)v6 == 1 )
    {
      *(_QWORD *)(Srb + 80) = 0LL;
      *(_QWORD *)(Srb + 104) = 0LL;
    }
    else
    {
      *(_QWORD *)(Srb + 48) = 0LL;
      *(_QWORD *)(Srb + 56) = 0LL;
    }
    ExFreePoolWithTag((PVOID)Srb, 0x72536152u);
  }
  return (unsigned int)v9;
}
