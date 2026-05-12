/*
 * XREFs of RaidAdapterScsiMiniportIoctlWithAddress @ 0x14001DF90
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x14002B3B0 (RaidAdapterDeviceControlIrp.c)
 *     RaUnitScsiMiniportIoctl @ 0x140035FB8 (RaUnitScsiMiniportIoctl.c)
 * Callees:
 *     RaUnitAcquireRemoveLock @ 0x140004540 (RaUnitAcquireRemoveLock.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x140012900 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidAdapterScatterGatherExecuteBidirectionalRequest @ 0x140012F48 (RaidAdapterScatterGatherExecuteBidirectionalRequest.c)
 *     RaidAdapterFindUnit @ 0x14001BA70 (RaidAdapterFindUnit.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x14001BDD0 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x14001C05C (RaidAdapterPoFxIdleComponentFromMiniport.c)
 *     RaidAdapterPoFxIdleComponent @ 0x14001D890 (RaidAdapterPoFxIdleComponent.c)
 *     RaidAdapterPoFxActivateComponent @ 0x14001DA40 (RaidAdapterPoFxActivateComponent.c)
 *     RaidGetSrbIoctlFromIrp @ 0x14001EC18 (RaidGetSrbIoctlFromIrp.c)
 *     StorAllocateContiguousIoResources @ 0x14001EE28 (StorAllocateContiguousIoResources.c)
 *     RaidSrbStatusToNtStatus @ 0x14001EF94 (RaidSrbStatusToNtStatus.c)
 *     RaidAdapterScatterGatherExecute @ 0x140025860 (RaidAdapterScatterGatherExecute.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x140052DF0 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140052EC8 (McTemplateK0pd_EtwWriteTransfer.c)
 *     RaidFreeRemappedScatterGatherListMdl @ 0x140055E84 (RaidFreeRemappedScatterGatherListMdl.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x1400569AC (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaidAdapterMapUsermodeNvmeDoorbellAddress @ 0x14005C28C (RaidAdapterMapUsermodeNvmeDoorbellAddress.c)
 *     RaidLogAllocationFailure @ 0x14008D748 (RaidLogAllocationFailure.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RaidAdapterScsiMiniportIoctlWithAddress(__int64 a1, __int64 a2, int a3, char a4, char a5, int a6)
{
  _BYTE *v6; // r14
  __int64 ContiguousIoResources; // r13
  __int64 v10; // r12
  __int64 v11; // r15
  __int64 v12; // rbx
  int SrbIoctlFromIrp; // eax
  int v14; // edi
  bool v15; // zf
  __int64 v16; // rdi
  __int64 Pool2; // r12
  __int64 v18; // rdi
  __int64 v19; // rax
  char *v20; // rax
  ULONG v21; // edx
  struct _MDL *Mdl; // rax
  char v23; // cl
  char v24; // r8
  char v25; // r9
  ULONG v26; // eax
  _BYTE *v27; // rdx
  __int64 v28; // rcx
  char *v29; // r8
  __int64 v30; // rcx
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // r8
  __int64 v34; // rdi
  int v35; // edi
  bool v36; // di
  __int64 *v37; // rax
  __int64 v38; // rcx
  void (__fastcall *v39)(__int64, _QWORD, bool); // rax
  __int64 v40; // rcx
  int v41; // eax
  char v42; // al
  char *v43; // r12
  __int64 v44; // rax
  unsigned int v45; // ecx
  __int64 v46; // rax
  __int64 v47; // rcx
  struct _MDL *v48; // rcx
  int v49; // edx
  char *v50; // rcx
  char v51; // al
  __int64 v53; // rax
  KIRQL v54; // al
  __int64 v55; // rcx
  __int64 v56; // rdx
  void (__fastcall *v57)(__int64, _QWORD, bool); // rax
  __int64 v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rdi
  __int16 IoPriorityHint; // ax
  char *v62; // r8
  __int64 v63; // rdx
  __int64 *v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rax
  void (__fastcall *v67)(__int64, __int64, _QWORD); // rax
  __int64 v68; // rax
  __int64 *Unit; // rax
  __int64 v70; // rax
  _DWORD *v71; // rax
  __int64 *v72; // rax
  __int64 v73; // r12
  __int64 v74; // rdx
  char v75; // si
  unsigned __int8 v76; // r8
  char v77; // r9
  char v78; // bl
  char v79; // r11
  unsigned __int8 *v80; // r10
  unsigned int v81; // eax
  unsigned int *v82; // r12
  unsigned int v83; // ecx
  __int64 *v84; // rax
  __int64 v85; // r9
  __int64 v86; // rdx
  void (__fastcall *v87)(__int64, _QWORD, bool); // rax
  unsigned __int64 v88; // r8
  signed __int32 v89; // eax
  signed __int32 v90; // ett
  __int64 v91; // rax
  unsigned __int64 v92; // r15
  int v93; // ecx
  int v94; // ecx
  unsigned __int64 v95; // rcx
  char v96; // r10
  _BYTE *v97; // rax
  char *v98; // r11
  unsigned int v99; // eax
  int Irp; // [rsp+20h] [rbp-E8h]
  KIRQL v101; // [rsp+60h] [rbp-A8h]
  KIRQL v102; // [rsp+60h] [rbp-A8h]
  int v103; // [rsp+64h] [rbp-A4h]
  unsigned int v104; // [rsp+64h] [rbp-A4h]
  bool v106; // [rsp+68h] [rbp-A0h]
  unsigned int v107; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v108; // [rsp+70h] [rbp-98h]
  ULONG Length; // [rsp+78h] [rbp-90h] BYREF
  int v110; // [rsp+7Ch] [rbp-8Ch]
  char *v111; // [rsp+80h] [rbp-88h]
  __int64 v112; // [rsp+88h] [rbp-80h]
  __int64 v113; // [rsp+90h] [rbp-78h]
  __int64 v114; // [rsp+98h] [rbp-70h]
  __int64 *v115; // [rsp+A0h] [rbp-68h]
  PVOID VirtualAddress[2]; // [rsp+A8h] [rbp-60h] BYREF

  v6 = 0LL;
  v110 = a3;
  VirtualAddress[0] = 0LL;
  Length = 0;
  v107 = 0;
  v113 = 0LL;
  HIBYTE(v103) = 0;
  ContiguousIoResources = 0LL;
  v115 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  SrbIoctlFromIrp = RaidGetSrbIoctlFromIrp(
                      a2,
                      (unsigned int)VirtualAddress,
                      (unsigned int)&Length,
                      (unsigned int)&v107,
                      2);
  v14 = SrbIoctlFromIrp;
  if ( SrbIoctlFromIrp < 0 )
  {
    *(_DWORD *)(a2 + 48) = SrbIoctlFromIrp;
    v46 = 0LL;
    goto LABEL_55;
  }
  if ( *(_DWORD *)a1 == 1314275652 )
  {
    v10 = a1 + 176;
  }
  else if ( *(_DWORD *)a1 == 1094997074 )
  {
    v10 = a1 + 384;
  }
  v15 = *(_BYTE *)(v10 + 98) == 1;
  v16 = *(_QWORD *)(a1 + 8);
  v108 = v10;
  if ( !v15 )
  {
    Pool2 = ExAllocatePool2(64LL, 88LL, 1918067026LL);
    if ( !Pool2 && v16 )
      RaidLogAllocationFailure(v16, 64, 88, 1918067026, 0x80000000);
    goto LABEL_7;
  }
  v70 = ExAllocatePool2(64LL, 144LL, 1918067026LL);
  v11 = v70;
  if ( !v70 && v16 )
  {
    RaidLogAllocationFailure(v16, 64, 144, 1918067026, 0x80000000);
    goto LABEL_157;
  }
  Pool2 = v70;
  if ( !v70 )
  {
LABEL_7:
    v114 = Pool2;
    v11 = Pool2;
    v112 = Pool2;
    if ( Pool2 )
      goto LABEL_8;
    v10 = v108;
LABEL_157:
    v14 = -1073741801;
    goto LABEL_76;
  }
  *(_WORD *)v70 = 8;
  *(_DWORD *)(v70 + 12) = 1;
  *(_BYTE *)(v70 + 2) = 40;
  *(_DWORD *)(v70 + 8) = 1397899864;
  *(_DWORD *)(v70 + 16) = 144;
  *(_DWORD *)(v70 + 20) = 2;
  *(_WORD *)(v70 + 36) = 2;
  *(_QWORD *)(v70 + 52) = 128LL;
  *(_WORD *)(v70 + 128) = 1;
  *(_DWORD *)(v70 + 132) = 4;
  v114 = v70;
  v112 = v70;
LABEL_8:
  v18 = 316LL;
  v19 = 316LL;
  if ( *(_DWORD *)a1 != 1314275652 )
    v19 = 524LL;
  ContiguousIoResources = StorAllocateContiguousIoResources(((*(_DWORD *)(v19 + a1) + 7) & 0xFFFFFFF8) + 1184);
  if ( !ContiguousIoResources )
  {
    if ( !*(_QWORD *)(a1 + 120) )
      goto LABEL_74;
    if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 128), 1u) )
      goto LABEL_74;
    ContiguousIoResources = *(_QWORD *)(a1 + 120);
    if ( !ContiguousIoResources )
      goto LABEL_74;
  }
  v12 = ContiguousIoResources + 48;
  v20 = (char *)VirtualAddress[0];
  *(_BYTE *)(ContiguousIoResources + 64) &= 0x1Cu;
  *(_BYTE *)(ContiguousIoResources + 65) &= 0x70u;
  v21 = Length;
  *(_WORD *)(ContiguousIoResources + 68) = -1;
  *(_WORD *)(ContiguousIoResources + 828) = -1;
  *(_DWORD *)(ContiguousIoResources + 48) = 523124044;
  *(_QWORD *)(ContiguousIoResources + 56) = 0LL;
  *(_BYTE *)(ContiguousIoResources + 70) = -1;
  *(_DWORD *)(ContiguousIoResources + 72) = 0;
  *(_QWORD *)(ContiguousIoResources + 152) = 0LL;
  *(_QWORD *)(ContiguousIoResources + 160) = 0LL;
  *(_QWORD *)(ContiguousIoResources + 184) = 0LL;
  *(_QWORD *)(ContiguousIoResources + 200) = 0LL;
  *(_QWORD *)(ContiguousIoResources + 192) = 0LL;
  *(_QWORD *)(ContiguousIoResources + 240) = 0LL;
  *(_QWORD *)(ContiguousIoResources + 208) = 0LL;
  *(_QWORD *)(ContiguousIoResources + 216) = 0LL;
  *(_QWORD *)(ContiguousIoResources + 264) = 0LL;
  *(_QWORD *)(ContiguousIoResources + 272) = 0LL;
  *(_QWORD *)(ContiguousIoResources + 168) = 0LL;
  *(_QWORD *)(ContiguousIoResources + 744) = 0LL;
  *(_QWORD *)(ContiguousIoResources + 752) = 0LL;
  *(_QWORD *)(ContiguousIoResources + 760) = 0LL;
  *(_QWORD *)(ContiguousIoResources + 768) = 0LL;
  *(_QWORD *)(ContiguousIoResources + 792) = 0LL;
  *(_QWORD *)(ContiguousIoResources + 808) = 0LL;
  *(_QWORD *)(ContiguousIoResources + 816) = 0LL;
  *(_DWORD *)(ContiguousIoResources + 824) = 0;
  *(_QWORD *)(ContiguousIoResources + 832) = 0LL;
  *(_DWORD *)(ContiguousIoResources + 848) = -1;
  *(_DWORD *)(ContiguousIoResources + 856) = 0;
  *(_DWORD *)(ContiguousIoResources + 864) = 0;
  *(_QWORD *)(ContiguousIoResources + 872) = 0LL;
  *(_OWORD *)(ContiguousIoResources + 880) = 0LL;
  *(_QWORD *)(ContiguousIoResources + 896) = 0LL;
  *(_QWORD *)(ContiguousIoResources + 904) = 0LL;
  *(_QWORD *)(ContiguousIoResources + 912) = 0LL;
  *(_QWORD *)(ContiguousIoResources + 920) = 0LL;
  v111 = v20;
  Mdl = IoAllocateMdl(v20, v21, 0, 0, 0LL);
  *(_QWORD *)(ContiguousIoResources + 152) = Mdl;
  if ( !Mdl )
  {
LABEL_74:
    v14 = -1073741801;
LABEL_75:
    v10 = v108;
    goto LABEL_76;
  }
  *(_BYTE *)(ContiguousIoResources + 64) |= 1u;
  MmBuildMdlForNonPagedPool(Mdl);
  v23 = a5;
  v24 = v110;
  v25 = a4;
  BYTE2(v103) = a5;
  LOBYTE(v103) = v110;
  BYTE1(v103) = a4;
  if ( a6 == 1 )
  {
    Unit = RaidAdapterFindUnit(a1, v103);
    v23 = a5;
    v24 = v110;
    v25 = a4;
    v115 = Unit;
    *(_QWORD *)(ContiguousIoResources + 272) = Unit;
  }
  if ( *(_BYTE *)(v108 + 98) == 1 )
  {
    v59 = v114;
    v60 = *(unsigned int *)(Pool2 + 52);
    v113 = Pool2;
    *(_QWORD *)(Pool2 + 96) = v12;
    *(_DWORD *)(v59 + 20) = 2;
    *(_DWORD *)(v59 + 24) = 192;
    *(_QWORD *)(Pool2 + 80) = a2;
    IoPriorityHint = IoGetIoPriorityHint((PIRP)a2);
    v62 = v111;
    v63 = v114;
    *(_WORD *)(Pool2 + 36) = IoPriorityHint;
    v27 = (_BYTE *)(v63 + 2);
    *(_DWORD *)(Pool2 + 40) = *((_DWORD *)v62 + 3);
    *(_DWORD *)(Pool2 + 60) = Length;
    LOBYTE(IoPriorityHint) = v110;
    *(_QWORD *)(Pool2 + 64) = v62;
    *(_BYTE *)(v60 + Pool2 + 8) = IoPriorityHint;
    *(_BYTE *)(v60 + Pool2 + 9) = a4;
    *(_BYTE *)(v60 + Pool2 + 10) = a5;
    v18 = 316LL;
    *(_QWORD *)(ContiguousIoResources + 216) = Pool2;
    *(_QWORD *)(ContiguousIoResources + 224) = *(_QWORD *)(Pool2 + 80);
    v30 = *(_QWORD *)(Pool2 + 64);
  }
  else
  {
    v26 = Length;
    v27 = (_BYTE *)(Pool2 + 2);
    *(_BYTE *)(Pool2 + 7) = v23;
    v28 = v114;
    *(_BYTE *)(Pool2 + 5) = v24;
    v29 = v111;
    *(_QWORD *)(Pool2 + 48) = v12;
    *(_QWORD *)(v28 + 24) = v29;
    *(_WORD *)Pool2 = 88;
    *(_BYTE *)(Pool2 + 2) = 2;
    *(_BYTE *)(Pool2 + 6) = v25;
    *(_DWORD *)(Pool2 + 12) = 192;
    *(_DWORD *)(Pool2 + 16) = v26;
    *(_DWORD *)(v28 + 20) = *((_DWORD *)v29 + 3);
    *(_QWORD *)(ContiguousIoResources + 216) = Pool2;
    *(_QWORD *)(ContiguousIoResources + 224) = a2;
    v30 = *(_QWORD *)(v28 + 24);
  }
  *(_QWORD *)(ContiguousIoResources + 232) = v30;
  v31 = ContiguousIoResources + 1184;
  v32 = *(_DWORD *)a1;
  if ( *v27 == 40 )
  {
    if ( v32 != 1314275652 )
      v18 = 524LL;
    if ( ((*(_DWORD *)(v18 + a1) + 7) & 0xFFFFFFF8) != 0 )
      *(_QWORD *)(Pool2 + 104) = v31;
  }
  else
  {
    if ( v32 != 1314275652 )
      v18 = 524LL;
    if ( ((*(_DWORD *)(v18 + a1) + 7) & 0xFFFFFFF8) != 0 )
      *(_QWORD *)(Pool2 + 56) = v31;
  }
  KeInitializeEvent((PRKEVENT)(ContiguousIoResources + 712), NotificationEvent, 0);
  *(_QWORD *)(ContiguousIoResources + 704) = RaidXrbSignalCompletion;
  if ( *(_QWORD *)(a1 + 4960) )
    RaidAdapterPoFxActivateComponent(a1, 0LL, 1LL);
  if ( *(_BYTE *)(a1 + 4370) )
  {
    v101 = KfRaiseIrql(2u);
    if ( *(_BYTE *)(a1 + 4370) )
    {
      v34 = *(_QWORD *)(ContiguousIoResources + 216);
      if ( *(_BYTE *)(v34 + 2) == 40 )
        v35 = *(_DWORD *)(v34 + 24);
      else
        v35 = *(_DWORD *)(v34 + 12);
      if ( (*(_BYTE *)(a1 + 4371) & 4) != 0 )
      {
        v36 = (v35 & 0x40) != 0;
        if ( *(_QWORD *)(ContiguousIoResources + 152) )
        {
          v37 = (__int64 *)(a1 + 880);
          if ( a1 != -880 )
          {
            v38 = *v37;
            if ( *v37 )
            {
              v33 = *(_QWORD *)(v38 + 8);
              if ( v33 )
              {
                if ( *(int *)(a1 + 908) >= 3 && (v39 = *(void (__fastcall **)(__int64, _QWORD, bool))(v33 + 240)) != 0LL )
                {
                  v39(v38, *(_QWORD *)(ContiguousIoResources + 152), v36);
                }
                else
                {
                  LOBYTE(v33) = 1;
                  KeFlushIoBuffers(*(_QWORD *)(ContiguousIoResources + 152), v36, v33);
                }
              }
            }
          }
        }
        v40 = *(_QWORD *)(ContiguousIoResources + 184);
        if ( v40 )
        {
          v84 = (__int64 *)(a1 + 880);
          if ( a1 != -880 )
          {
            v85 = *v84;
            if ( *v84 )
            {
              v86 = *(_QWORD *)(v85 + 8);
              if ( v86 )
              {
                if ( *(int *)(a1 + 908) >= 3 && (v87 = *(void (__fastcall **)(__int64, _QWORD, bool))(v86 + 240)) != 0LL )
                {
                  v87(v85, *(_QWORD *)(ContiguousIoResources + 184), v36);
                }
                else
                {
                  LOBYTE(v33) = 1;
                  KeFlushIoBuffers(v40, v36, v33);
                }
              }
            }
          }
        }
      }
      else
      {
        if ( *(_QWORD *)(ContiguousIoResources + 184) )
        {
          v41 = RaidAdapterScatterGatherExecuteBidirectionalRequest(
                  a1,
                  (unsigned int *)(ContiguousIoResources + 48),
                  v33);
          goto LABEL_37;
        }
        if ( (v35 & 0xC0) != 0 )
        {
          v41 = RaidAdapterScatterGatherExecute(a1, ContiguousIoResources + 48);
          goto LABEL_37;
        }
      }
    }
    v41 = RaidAdapterPostScatterGatherExecute(a1, ContiguousIoResources + 48);
LABEL_37:
    v14 = v41;
    KeLowerIrql(v101);
    goto LABEL_38;
  }
  v14 = RaidAdapterPostScatterGatherExecute(a1, ContiguousIoResources + 48);
LABEL_38:
  if ( v14 >= 0 )
  {
    KeWaitForSingleObject((PVOID)(ContiguousIoResources + 712), Executive, 0, 0, 0LL);
    v14 = RaidSrbStatusToNtStatus(*(unsigned __int8 *)(Pool2 + 3));
  }
  v42 = *(_BYTE *)(ContiguousIoResources + 65);
  if ( (v42 & 1) != 0 )
  {
    RaidAdapterPoFxIdleComponentFromMiniport(a1, *(unsigned int *)(ContiguousIoResources + 796));
    *(_BYTE *)(ContiguousIoResources + 65) &= ~1u;
    v42 = *(_BYTE *)(ContiguousIoResources + 65);
  }
  if ( (v42 & 2) == 0 )
    goto LABEL_43;
  if ( a6 == 1 )
  {
    v73 = (__int64)v115;
    if ( !v115 )
    {
LABEL_43:
      v43 = v111;
      goto LABEL_44;
    }
  }
  else
  {
    v72 = RaidAdapterFindUnit(a1, v103);
    v73 = (__int64)v72;
    if ( !v72 || (unsigned int)RaUnitAcquireRemoveLock((__int64)v72, a2, 1) )
      goto LABEL_43;
  }
  RaidUnitPoFxIdleComponentFromMiniport(v73, *(_DWORD *)(ContiguousIoResources + 796));
  *(_BYTE *)(ContiguousIoResources + 65) &= ~2u;
  if ( a6 == 1 )
    goto LABEL_43;
  v88 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
  v89 = *(_DWORD *)(v88 + *(_QWORD *)(v73 + 40));
  while ( (v89 & 1) == 0 )
  {
    v90 = v89;
    v89 = _InterlockedCompareExchange((volatile signed __int32 *)(v88 + *(_QWORD *)(v73 + 40)), v89 - 2, v89);
    if ( v90 == v89 )
      goto LABEL_173;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v73 + 1032), 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(v73 + 520), 0, 0);
LABEL_173:
  v43 = (char *)VirtualAddress[0];
LABEL_44:
  if ( *(_QWORD *)(a1 + 4960) )
    RaidAdapterPoFxIdleComponent(a1, 0LL, 0LL);
  if ( v14 < 0 )
    goto LABEL_75;
  if ( *(_QWORD *)(v43 + 4) == 0x5551455441455243LL && (*((_DWORD *)v43 + 17) & 0x30) == 0x10 )
  {
    v14 = RaidAdapterMapUsermodeNvmeDoorbellAddress(a1, a2);
    v44 = v113;
    v11 = v112;
    v10 = v108;
    if ( v14 >= 0 )
      goto LABEL_50;
LABEL_76:
    v46 = 0LL;
    goto LABEL_55;
  }
  v44 = v113;
  v10 = v108;
LABEL_50:
  if ( *(_BYTE *)(v11 + 2) == 40 )
    v45 = *(_DWORD *)(v44 + 60);
  else
    v45 = *(_DWORD *)(v11 + 16);
  if ( v107 < v45 )
    v45 = v107;
  v46 = v45;
LABEL_55:
  *(_QWORD *)(a2 + 56) = v46;
  if ( !ContiguousIoResources )
    goto LABEL_66;
  if ( v12 )
  {
    if ( *(_QWORD *)(v12 + 112) )
    {
      v53 = *(_QWORD *)(v12 + 168);
      if ( *(_BYTE *)(v53 + 2) == 40 )
        v106 = (*(_DWORD *)(v53 + 24) & 0x40) == 0;
      else
        v106 = (*(_BYTE *)(v53 + 12) & 0x40) == 0;
      if ( RaidVerifierEnabled )
        RaidFreeRemappedScatterGatherListMdl(v12);
      v54 = KfRaiseIrql(2u);
      v102 = v54;
      if ( *(_QWORD *)(v12 + 216) != -880LL )
      {
        v55 = *(_QWORD *)(*(_QWORD *)(v12 + 216) + 880LL);
        if ( v55 )
        {
          v56 = *(_QWORD *)(v55 + 8);
          if ( v56 )
          {
            v57 = *(void (__fastcall **)(__int64, _QWORD, bool))(v56 + 96);
            if ( v57 )
              v57(v55, *(_QWORD *)(v12 + 112), v106);
            v54 = v102;
          }
        }
      }
      v58 = *(_QWORD *)(v12 + 152);
      *(_QWORD *)(v12 + 112) = 0LL;
      *(_QWORD *)(v12 + 144) = 0LL;
      if ( v58 )
      {
        v64 = (__int64 *)(*(_QWORD *)(v12 + 216) + 880LL);
        if ( *(_QWORD *)(v12 + 216) != -880LL )
        {
          v65 = *v64;
          if ( *v64 )
          {
            v66 = *(_QWORD *)(v65 + 8);
            if ( v66 )
            {
              v67 = *(void (__fastcall **)(__int64, __int64, _QWORD))(v66 + 96);
              if ( v67 )
                v67(v65, v58, 0LL);
            }
          }
        }
        v54 = v102;
        *(_QWORD *)(v12 + 152) = 0LL;
      }
      KeLowerIrql(v54);
    }
    v47 = *(_QWORD *)(v12 + 104);
    if ( v47 && (*(_BYTE *)(v12 + 16) & 1) != 0 )
    {
      if ( (*(_BYTE *)(v47 + 10) & 2) != 0 )
        MmUnlockPages((PMDL)v47);
      IoFreeMdl(*(PMDL *)(v12 + 104));
      *(_BYTE *)(v12 + 16) &= ~1u;
      *(_QWORD *)(v12 + 104) = 0LL;
    }
    v48 = *(struct _MDL **)(v12 + 136);
    if ( v48 )
    {
      MmUnlockPages(v48);
      IoFreeMdl(*(PMDL *)(v12 + 136));
      *(_QWORD *)(v12 + 136) = 0LL;
    }
  }
  if ( ContiguousIoResources == *(_QWORD *)(a1 + 120) )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 128), 0);
    goto LABEL_66;
  }
  if ( *(_DWORD *)a1 != 1094997074 )
  {
    if ( *(_DWORD *)a1 == 1314275652 && *(_BYTE *)(a1 + 1152) && *(_DWORD *)(a1 + 1172) == 3 )
      goto LABEL_152;
LABEL_65:
    MmFreeContiguousMemory((PVOID)ContiguousIoResources);
    goto LABEL_66;
  }
  if ( !*(_BYTE *)(a1 + 888) || *(_DWORD *)(a1 + 908) != 3 )
    goto LABEL_65;
LABEL_152:
  LOBYTE(Irp) = 1;
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, int))(*(_QWORD *)(*(_QWORD *)(a1 + 880) + 8LL) + 24LL))(
    *(_QWORD *)(a1 + 880),
    *(unsigned int *)(ContiguousIoResources + 16),
    *(_QWORD *)(ContiguousIoResources + 24),
    ContiguousIoResources,
    Irp);
LABEL_66:
  if ( v11 )
  {
    if ( *(_BYTE *)(v10 + 98) == 1 )
    {
      v68 = v113;
      if ( !v113 )
        v68 = v11;
      *(_QWORD *)(v68 + 80) = 0LL;
      *(_QWORD *)(v68 + 104) = 0LL;
    }
    else
    {
      *(_QWORD *)(v11 + 48) = 0LL;
      *(_QWORD *)(v11 + 56) = 0LL;
    }
    ExFreePoolWithTag((PVOID)v11, 0x72536152u);
  }
  v15 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v14;
  if ( v15 )
    goto LABEL_73;
  *(_OWORD *)VirtualAddress = 0LL;
  IoGetActivityIdIrp(a2, VirtualAddress);
  v50 = *(char **)(a2 + 184);
  v51 = *v50;
  if ( *v50 != 15 )
  {
    if ( v51 == 14 )
    {
      if ( (byte_140171462 & 8) != 0 )
        McTemplateK0pd_EtwWriteTransfer(
          v50,
          &EventNonReadWriteRequestComplete,
          VirtualAddress,
          a2,
          *(_DWORD *)(a2 + 48));
    }
    else if ( v51 == 27 )
    {
      if ( v50[1] == 7 && !*((_DWORD *)v50 + 2) )
      {
        if ( (byte_140171462 & 0x40) != 0 )
        {
          v71 = *(_DWORD **)(a2 + 56);
          if ( v71 )
            LODWORD(v6) = *v71;
          McTemplateK0pqd_EtwWriteTransfer(
            (_DWORD)v50,
            v49,
            (unsigned int)VirtualAddress,
            a2,
            (char)v6,
            *(_DWORD *)(a2 + 48));
        }
      }
      else if ( (byte_140171462 & 0x20) != 0 )
      {
        McTemplateK0pd_EtwWriteTransfer(v50, &EventPnpRequestComplete, VirtualAddress, a2, *(_DWORD *)(a2 + 48));
      }
    }
    goto LABEL_73;
  }
  if ( byte_140171461 >= 0 )
    goto LABEL_73;
  v74 = *((_QWORD *)v50 + 1);
  v75 = 0;
  v76 = 0;
  v77 = 0;
  v78 = 0;
  v79 = 0;
  if ( *(_BYTE *)(v74 + 2) != 40 )
  {
    LODWORD(v95) = *(unsigned __int8 *)(v74 + 72);
    v6 = *(_BYTE **)(v74 + 32);
    v76 = *(_BYTE *)(v74 + 11);
    v75 = *(_BYTE *)(v74 + 4);
    if ( *(_BYTE *)(v74 + 2) )
      goto LABEL_73;
LABEL_198:
    LOBYTE(v95) = v95 - 8;
    if ( (v95 & 0x5D) != 0 )
      goto LABEL_73;
    if ( *(_BYTE *)(v74 + 3) == 1 || !v6 || !v76 )
      goto LABEL_215;
    v96 = 0;
    v95 = (unsigned __int64)&v6[v76];
    v97 = v6 + 8;
    if ( (unsigned __int8)((*v6 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v97 > v95 )
        goto LABEL_214;
      v78 = v6[2];
      v77 = v6[1] & 0xF;
      v79 = v6[3];
    }
    else
    {
      if ( (unsigned __int64)v97 > v95 )
        goto LABEL_214;
      v98 = v6 + 13;
      v77 = v6[2] & 0xF;
      v99 = v76;
      if ( (unsigned int)(unsigned __int8)v6[7] + 8 <= v76 )
        v99 = (unsigned __int8)v6[7] + 8;
      v95 = (unsigned __int64)&v6[v99];
      if ( (unsigned __int64)v98 <= v95 )
        v78 = v6[12];
      if ( (unsigned __int64)(v6 + 14) > v95 )
        v79 = 0;
      else
        v79 = *v98;
    }
    v96 = 1;
LABEL_214:
    if ( v96 )
    {
LABEL_216:
      McTemplateK0pduuuuup_EtwWriteTransfer(
        v95,
        v74,
        (unsigned int)VirtualAddress,
        a2,
        *(_DWORD *)(a2 + 48),
        *(_BYTE *)(v74 + 3),
        v75,
        v77,
        v78,
        v79,
        a2);
      goto LABEL_73;
    }
LABEL_215:
    v79 = 0;
    v78 = 0;
    v77 = 0;
    goto LABEL_216;
  }
  v80 = 0LL;
  if ( *(_DWORD *)(v74 + 20) )
    goto LABEL_73;
  v81 = *(_DWORD *)(v74 + 56);
  v107 = 0;
  v104 = v81;
  if ( !v81 )
    goto LABEL_189;
  v82 = (unsigned int *)(v74 + 120);
  v83 = v81;
  while ( 1 )
  {
    v91 = *v82;
    if ( (unsigned int)v91 < 0x80 )
      goto LABEL_195;
    v92 = *(unsigned int *)(v74 + 16);
    if ( (unsigned int)v91 >= (unsigned int)v92 )
      goto LABEL_195;
    v93 = *(_DWORD *)(v74 + v91);
    if ( v93 != 64 )
      break;
    if ( v91 + 40 <= v92 )
    {
      if ( !*(_BYTE *)(v74 + v91 + 10) )
        goto LABEL_187;
LABEL_186:
      v80 = (unsigned __int8 *)(v91 + v74 + 24);
LABEL_187:
      v6 = *(_BYTE **)(v74 + v91 + 16);
      goto LABEL_188;
    }
LABEL_194:
    v83 = v104;
LABEL_195:
    ++v82;
    if ( ++v107 >= v83 )
      goto LABEL_189;
  }
  v94 = v93 - 65;
  if ( !v94 )
  {
    if ( v91 + 56 <= v92 )
    {
      if ( *(_BYTE *)(v74 + v91 + 10) )
        goto LABEL_186;
      goto LABEL_187;
    }
    goto LABEL_194;
  }
  if ( v94 != 1 || v91 + 40 > v92 )
    goto LABEL_194;
  if ( *(_DWORD *)(v74 + v91 + 12) )
    v80 = (unsigned __int8 *)(v91 + v74 + 32);
  v6 = *(_BYTE **)(v74 + v91 + 24);
LABEL_188:
  v75 = *(_BYTE *)(v74 + v91 + 8);
  v76 = *(_BYTE *)(v74 + v91 + 9);
LABEL_189:
  if ( v80 )
  {
    LODWORD(v95) = *v80;
    goto LABEL_198;
  }
LABEL_73:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v14;
}
