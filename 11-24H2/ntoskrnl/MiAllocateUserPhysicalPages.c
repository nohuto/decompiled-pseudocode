/*
 * XREFs of MiAllocateUserPhysicalPages @ 0x1407F8C38
 * Callers:
 *     NtAllocateUserPhysicalPages @ 0x1407FA300 (NtAllocateUserPhysicalPages.c)
 *     NtAllocateUserPhysicalPagesEx @ 0x1407FA320 (NtAllocateUserPhysicalPagesEx.c)
 * Callees:
 *     MiGetAweInfoPartition @ 0x140266FBC (MiGetAweInfoPartition.c)
 *     MiGetCrossPartitionCharges @ 0x140269C84 (MiGetCrossPartitionCharges.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     MiSectionControlArea @ 0x140355A80 (MiSectionControlArea.c)
 *     MiAllocatePagesForMdl @ 0x14039469C (MiAllocatePagesForMdl.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1403C63D8 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1403C6458 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiChargeProcessCommitment @ 0x140424250 (MiChargeProcessCommitment.c)
 *     MiGetProcessPartition @ 0x1404329B0 (MiGetProcessPartition.c)
 *     MiReturnProcessCommitment @ 0x14044AEE4 (MiReturnProcessCommitment.c)
 *     MiPageChainCount @ 0x14045AA00 (MiPageChainCount.c)
 *     KeGetIdealNodeNumberThread @ 0x140481B1C (KeGetIdealNodeNumberThread.c)
 *     MiHugePagesSupported @ 0x1404900F8 (MiHugePagesSupported.c)
 *     MiLockAwePagesShared @ 0x1404A9FAC (MiLockAwePagesShared.c)
 *     MiUnlockAweVadsShared @ 0x1404B5F4C (MiUnlockAweVadsShared.c)
 *     MiReferenceAweHandle @ 0x1404CF614 (MiReferenceAweHandle.c)
 *     MiFreeAwePagesFromMdl @ 0x140683324 (MiFreeAwePagesFromMdl.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiAllocateFastAwePages @ 0x1407F8AAC (MiAllocateFastAwePages.c)
 *     MiCreateProcessDefaultAweInfo @ 0x1407F9CD0 (MiCreateProcessDefaultAweInfo.c)
 *     MiResizeAweBitMap @ 0x1407FA110 (MiResizeAweBitMap.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 *     MiCaptureAllocateMapExtendedParameters @ 0x140987F30 (MiCaptureAllocateMapExtendedParameters.c)
 *     MiChargeProcessPhysicalPages @ 0x140A7DAFC (MiChargeProcessPhysicalPages.c)
 *     MiAllocateUserPhysicalRanges @ 0x140AAFD18 (MiAllocateUserPhysicalRanges.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall MiAllocateUserPhysicalPages(
        HANDLE Handle,
        unsigned __int64 *a2,
        volatile void *a3,
        volatile void *a4)
{
  int v7; // edi
  KPROCESSOR_MODE PreviousMode; // r12
  NTSTATUS result; // eax
  int v10; // eax
  ACCESS_MASK v11; // edx
  unsigned __int64 v12; // r14
  __int64 v13; // rcx
  __int64 v14; // r15
  unsigned __int64 v15; // rax
  _KPROCESS *v16; // r13
  _KPROCESS *v17; // rsi
  __int64 v18; // rcx
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // r9
  int CrossPartitionCharges; // r13d
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  int v24; // eax
  unsigned __int64 v25; // rax
  struct _KTHREAD *v26; // r12
  unsigned __int64 v27; // rdx
  _QWORD *v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // r9
  unsigned __int64 v33; // rdx
  __int16 v34; // cx
  char v35; // al
  int v36; // r15d
  unsigned int v37; // edx
  unsigned int v38; // r8d
  unsigned int IdealNodeNumberThread; // r14d
  char v40; // al
  int v41; // r12d
  __int64 v42; // rsi
  __int64 v43; // rax
  __int64 ProcessPartition; // rax
  __int16 v45; // r8
  unsigned __int64 v46; // r9
  __int64 v47; // r10
  __int64 v48; // r11
  unsigned __int64 v49; // rax
  unsigned int *PagesForMdl; // rcx
  unsigned __int64 v51; // r11
  __int64 *v52; // r8
  PVOID UserPhysicalRanges; // rax
  int FastAwePages; // eax
  unsigned int i; // ecx
  unsigned __int64 v56; // rdx
  unsigned int v57; // edx
  unsigned __int64 v58; // rax
  unsigned __int64 *v59; // rdx
  unsigned __int64 v60; // rax
  __int64 v61; // r8
  unsigned __int64 v62; // rcx
  ULONG_PTR v63; // r9
  struct _KTHREAD *v64; // r13
  __int64 v65; // r8
  unsigned int *v66; // rcx
  unsigned int *v67; // r10
  PVOID v68; // rax
  __int64 v69; // rax
  __int64 v70; // r10
  unsigned int v71; // edx
  __int64 v72; // r14
  unsigned __int64 v73; // rax
  unsigned __int64 v74; // r14
  __int64 *v75; // r14
  __int64 *v76; // r14
  int v77; // eax
  _QWORD *v78; // rcx
  _QWORD *v79; // r10
  unsigned __int64 v80; // r15
  unsigned __int64 v81; // r14
  __int64 *v82; // rax
  bool j; // zf
  __int64 *v84; // r15
  void *v85; // rcx
  int v86; // [rsp+54h] [rbp-2E4h]
  unsigned int v87; // [rsp+54h] [rbp-2E4h]
  _KPROCESS *v88; // [rsp+58h] [rbp-2E0h]
  __int64 v89; // [rsp+68h] [rbp-2D0h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp-2C8h]
  PVOID P; // [rsp+78h] [rbp-2C0h]
  PVOID Object; // [rsp+80h] [rbp-2B8h] BYREF
  unsigned __int64 v93; // [rsp+88h] [rbp-2B0h]
  __int64 v94; // [rsp+90h] [rbp-2A8h]
  unsigned __int64 v95; // [rsp+98h] [rbp-2A0h]
  unsigned __int64 v96; // [rsp+A0h] [rbp-298h]
  unsigned __int64 v97; // [rsp+A8h] [rbp-290h]
  __int64 v98; // [rsp+B0h] [rbp-288h] BYREF
  unsigned __int64 v99; // [rsp+B8h] [rbp-280h]
  unsigned __int64 v100; // [rsp+C0h] [rbp-278h]
  unsigned __int64 v101; // [rsp+C8h] [rbp-270h]
  __int64 AweInfoPartition; // [rsp+D0h] [rbp-268h]
  _KPROCESS *Process; // [rsp+D8h] [rbp-260h]
  unsigned int *v104; // [rsp+E0h] [rbp-258h]
  PVOID v105; // [rsp+E8h] [rbp-250h]
  volatile void *Address; // [rsp+F0h] [rbp-248h]
  unsigned __int64 v107; // [rsp+F8h] [rbp-240h]
  __int64 v108; // [rsp+100h] [rbp-238h]
  unsigned __int64 v109; // [rsp+108h] [rbp-230h]
  PVOID v110; // [rsp+110h] [rbp-228h]
  _DWORD *v111; // [rsp+118h] [rbp-220h]
  unsigned __int64 *v112; // [rsp+120h] [rbp-218h]
  unsigned __int64 v113; // [rsp+128h] [rbp-210h]
  _BYTE v114[32]; // [rsp+140h] [rbp-1F8h] BYREF
  unsigned int v115; // [rsp+160h] [rbp-1D8h]
  char v116; // [rsp+171h] [rbp-1C7h]
  __int64 v117; // [rsp+178h] [rbp-1C0h]
  _OWORD v118[3]; // [rsp+190h] [rbp-1A8h] BYREF
  __int64 v119; // [rsp+1C0h] [rbp-178h] BYREF
  __int16 v120; // [rsp+1C8h] [rbp-170h]
  __int16 v121; // [rsp+1CAh] [rbp-16Eh]
  __int64 v122; // [rsp+1E0h] [rbp-158h]
  unsigned int v123; // [rsp+1E8h] [rbp-150h]
  int v124; // [rsp+1ECh] [rbp-14Ch]

  v112 = a2;
  Address = a3;
  memset(v118, 0, sizeof(v118));
  v98 = 0LL;
  Object = 0LL;
  memset_0(&v119, 0, 0x130uLL);
  memset_0(v114, 0, 0x48uLL);
  v7 = 0;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  PreviousMode = CurrentThread->PreviousMode;
  result = MiCaptureAllocateMapExtendedParameters(a4, v114);
  if ( result >= 0 )
  {
    if ( (v117 & 0xFFFFFFFFFFFFFFE5uLL) != 0 )
      return -1073741811;
    if ( (v117 & 0x1A) == 0 || (v10 = 0, ((unsigned __int8)v117 & (unsigned __int8)((v117 & 0x1A) - 1) & 0x1A) == 0) )
      v10 = 1;
    if ( !v10 )
      return -1073741811;
    v11 = 2;
    if ( (v117 & 2) != 0 )
    {
      v93 = 16LL;
    }
    else if ( (v117 & 8) != 0 )
    {
      v93 = 512LL;
    }
    else if ( (v117 & 0x10) != 0 )
    {
      if ( !(unsigned int)MiHugePagesSupported() )
        return -1073741637;
      v93 = 0x40000LL;
    }
    else
    {
      v93 = 0LL;
    }
    if ( v115 > (unsigned __int16)KeNumberNodes )
      return -1073741811;
    if ( PreviousMode )
    {
      v13 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
        v13 = (__int64)a2;
      *(_QWORD *)v13 = *(_QWORD *)v13;
      v12 = *a2;
      v95 = v12;
      v97 = v12;
      if ( !v12 )
        return 0;
      if ( v12 > 0x1FFFFFFFFFFFFFFFLL )
        return -1073741584;
      ProbeForWrite(Address, 8 * v12, 8u);
      v11 = 2;
    }
    else
    {
      v12 = *a2;
      v95 = v12;
      v97 = v12;
      if ( !v12 )
        return 0;
    }
    v14 = 0LL;
    v89 = 0LL;
    result = MiReferenceAweHandle(Handle, v11, PreviousMode, &Object, &v98);
    if ( result >= 0 )
    {
      if ( v98 )
      {
        v15 = MiSectionControlArea(v98);
        v16 = Process;
        v14 = *(_QWORD *)(v15 + 8);
        v89 = v14;
      }
      else
      {
        v17 = (_KPROCESS *)Object;
        v88 = (_KPROCESS *)Object;
        v16 = Process;
        if ( Object )
        {
LABEL_33:
          if ( !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, PreviousMode) )
          {
            CrossPartitionCharges = -1073741727;
            goto LABEL_194;
          }
          if ( v17 != v16 )
          {
            KiStackAttachProcess(v17, 0, (__int64)v118);
            v7 |= 1u;
          }
          v94 = 0LL;
          if ( v14 )
          {
            v101 = v14;
          }
          else
          {
            LOBYTE(v18) = PreviousMode;
            CrossPartitionCharges = MiCreateProcessDefaultAweInfo(v18, &v89);
            if ( CrossPartitionCharges < 0 )
              goto LABEL_194;
            v101 = (unsigned __int64)v17;
            v14 = v89;
          }
          v22 = MiPageChainCount(v14);
          v23 = v22;
          v100 = v22;
          if ( v22 == 16 )
          {
            v86 = 4096;
          }
          else if ( v22 == 512 )
          {
            v86 = 0x1000000;
          }
          else
          {
            v24 = 0;
            if ( v23 == 0x40000 )
              v24 = 0x2000000;
            v86 = v24;
          }
          if ( (*(_DWORD *)(v14 + 8) & 8) != 0 )
            v7 |= 0x20u;
          v20 = v93;
          if ( v93 )
          {
            if ( v93 <= v23 || v93 % v23 || ((v93 - 1) & v93) != 0 )
            {
              CrossPartitionCharges = -1073741811;
              goto LABEL_194;
            }
          }
          else
          {
            v20 = v23;
            v93 = v23;
          }
          if ( v20 > 1 )
          {
            v25 = v20 * v12;
            if ( v12 >= v20 * v12 )
            {
              CrossPartitionCharges = -1073741584;
              goto LABEL_194;
            }
            v12 *= v20;
            v95 = v25;
            v97 = v25;
          }
          v26 = CurrentThread;
          if ( !v98 )
          {
            LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)v17);
            if ( (v17[1].DirectoryTableBase & 0x2000000000LL) != 0 )
            {
              UNLOCK_ADDRESS_SPACE_SHARED((__int64)v26, (__int64)v17);
              CrossPartitionCharges = -1073741558;
              goto LABEL_195;
            }
            if ( !(unsigned int)MiChargeProcessPhysicalPages(v17, v12) )
            {
              v29 = (__int64)v17;
              v30 = (__int64)v26;
LABEL_64:
              UNLOCK_ADDRESS_SPACE_SHARED(v30, v29);
              CrossPartitionCharges = -1073741523;
              goto LABEL_195;
            }
            v7 |= 4u;
            v31 = MiChargeProcessCommitment(v28, v27);
            v29 = (__int64)v17;
            v30 = (__int64)v26;
            if ( !v31 )
              goto LABEL_64;
            UNLOCK_ADDRESS_SPACE_SHARED((__int64)v26, (__int64)v17);
            v7 |= 2u;
          }
          AweInfoPartition = MiGetAweInfoPartition(v14);
          v33 = *(_QWORD *)(AweInfoPartition + 18504) + 1LL;
          v107 = v33;
          v105 = 0LL;
          v110 = 0LL;
          if ( v17[1].ReadyTime )
          {
            v34 = WORD2(v17[3].PerProcessorCycleTimes);
            if ( v34 == 332 || (v35 = 0, v34 == 452) )
              v35 = 1;
            if ( v35 )
            {
              if ( v33 > 0x100000000LL )
                v33 = 0x100000000LL;
              v107 = v33;
            }
          }
          v36 = (_DWORD)v33 << 12;
          CrossPartitionCharges = 0;
          v37 = 0x80000000;
          v38 = v86 | 0x80000000;
          if ( v115 )
          {
            IdealNodeNumberThread = v115 - 1;
            v40 = v116;
            if ( v116 )
              v38 = v86 | 0x80000002;
          }
          else
          {
            IdealNodeNumberThread = (unsigned __int16)KeGetIdealNodeNumberThread((__int64)v26);
            v40 = v116;
          }
          v41 = IdealNodeNumberThread;
          if ( !v40 )
            v41 = v37 | IdealNodeNumberThread;
          if ( (*(_DWORD *)(v89 + 8) & 4) != 0 )
            v38 |= 1u;
          v42 = v32 << 12;
          v43 = 0LL;
          if ( v32 != 1 )
            v43 = v32 << 12;
          v108 = v43;
          if ( v32 != 1 )
            v38 |= 0x30u;
          v87 = v38;
          ProcessPartition = MiGetProcessPartition((__int64)v88);
          if ( v48 == ProcessPartition && (v45 & 0x1000) != 0 && (v7 & 0x20) == 0 && v46 == 16 )
          {
            v47 = v89;
            j = (*(_DWORD *)(v48 + 4) & 0x10) == 0;
            v88 = (_KPROCESS *)Object;
            v49 = v97;
            v95 = v97;
            if ( j )
              v7 |= 0x80u;
          }
          else
          {
            v49 = v95;
          }
          v111 = (_DWORD *)(v47 + 8);
          while ( 1 )
          {
            PagesForMdl = 0LL;
            P = 0LL;
            v51 = v49 - v94;
            v99 = v49 - v94;
            if ( v100 == 1 )
            {
              if ( v51 > 0xC0000 )
                v51 = 786432LL;
              v99 = v51;
            }
            if ( (v7 & 0x40) != 0 || v51 / v100 > 0x20 )
            {
              v52 = 0LL;
            }
            else
            {
              v7 |= 0x40u;
              v52 = &v119;
              v119 = 0LL;
              v120 = 8 * (((((v51 / v100) << 12) + 4095) >> 12) + 6);
              v121 = 0;
              v122 = 0LL;
              v124 = 0;
              v123 = (unsigned int)(v51 / v100) << 12;
              PagesForMdl = (unsigned int *)P;
            }
            v96 = (unsigned __int64)v52;
            if ( (v7 & 0x20) != 0 )
            {
              UserPhysicalRanges = (PVOID)MiAllocateUserPhysicalRanges(
                                            AweInfoPartition,
                                            v51,
                                            v41,
                                            (*v111 >> 2) & 1,
                                            (__int64)v52);
              goto LABEL_138;
            }
            if ( v52 && (v7 & 0x90) == 0x80 )
            {
              FastAwePages = MiAllocateFastAwePages(v96, v47, IdealNodeNumberThread, v87, v107, v101);
              CrossPartitionCharges = FastAwePages;
              if ( FastAwePages < 0 )
              {
                if ( FastAwePages == -1073741523 )
                {
                  CrossPartitionCharges = -1073741670;
LABEL_166:
                  v17 = v88;
LABEL_167:
                  v72 = v94;
                  goto LABEL_168;
                }
                v7 &= 0xFFFFFF3F;
                goto LABEL_109;
              }
              v52 = (__int64 *)v96;
              PagesForMdl = (unsigned int *)v96;
              P = (PVOID)v96;
              v47 = v89;
              v51 = v99;
              v46 = v93;
            }
            if ( PagesForMdl )
              goto LABEL_139;
            if ( v51 < 0x10 || (v7 & 0x10) != 0 )
              goto LABEL_210;
            if ( v42 == 4096 )
            {
              for ( i = 0; i < 3; ++i )
              {
                v56 = MiPageSizes[i];
                if ( v51 >= v56 && v46 >= v56 )
                {
                  v42 = v56 << 12;
                  break;
                }
              }
            }
            PagesForMdl = (unsigned int *)MiAllocatePagesForMdl(
                                            AweInfoPartition,
                                            0,
                                            v36 - 4096,
                                            v42,
                                            v51 << 12,
                                            *(_DWORD *)(v47 + 52),
                                            IdealNodeNumberThread,
                                            v87 | 0x42,
                                            v101,
                                            v52);
            P = PagesForMdl;
            if ( PagesForMdl )
            {
LABEL_210:
              if ( PagesForMdl )
                goto LABEL_139;
              UserPhysicalRanges = MiAllocatePagesForMdl(
                                     AweInfoPartition,
                                     0,
                                     v36 - 4096,
                                     v108,
                                     v99 << 12,
                                     *(_DWORD *)(v89 + 52),
                                     IdealNodeNumberThread,
                                     v87,
                                     v101,
                                     (void *)v96);
LABEL_138:
              P = UserPhysicalRanges;
              PagesForMdl = (unsigned int *)UserPhysicalRanges;
              if ( UserPhysicalRanges )
              {
LABEL_139:
                v59 = (unsigned __int64 *)(PagesForMdl + 12);
                v104 = PagesForMdl + 12;
                v99 = (unsigned __int64)PagesForMdl[10] >> 12;
                v109 = v99;
                v60 = 0LL;
                v61 = (__int64)&PagesForMdl[2 * v99 + 12];
                do
                {
                  v62 = *v59;
                  if ( *v59 <= v60 )
                    v62 = v60;
                  v60 = v62;
                  ++v59;
                }
                while ( v59 != (unsigned __int64 *)v61 );
                v96 = v62 / v100;
                while ( 1 )
                {
                  if ( !v98 )
                  {
                    LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)v88);
                    if ( (v88[1].DirectoryTableBase & 0x2000000000LL) != 0 )
                      break;
                  }
                  v63 = MiLockAwePagesShared(v89, (__int64)CurrentThread);
                  if ( v96 < *(_QWORD *)(v89 + 24) )
                  {
                    v65 = *(_QWORD *)(v89 + 32);
                    v66 = v104;
                    v67 = &v104[2 * v99];
                    do
                    {
                      _InterlockedOr(
                        (volatile signed __int32 *)(v65 + 4 * ((*(_QWORD *)v66 / v100) >> 5)),
                        1 << ((*(_QWORD *)v66 / v100) & 0x1F));
                      v66 = v104 + 2;
                      v104 = v66;
                    }
                    while ( v66 != v67 );
                    MiUnlockAweVadsShared((__int64)CurrentThread, v63);
                    v88 = (_KPROCESS *)Object;
                    if ( !v98 )
                      UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)Object);
                    v68 = P;
                    *(_QWORD *)P = v105;
                    v105 = v68;
                    v110 = v68;
                    v20 = v100;
                    v19 = v100 * v109;
                    v96 = v100 * v109;
                    if ( (v7 & 0x20) == 0 )
                    {
                      _InterlockedAdd64((volatile signed __int64 *)(AweInfoPartition + 19624), v19);
                      v69 = MiGetProcessPartition((__int64)Process);
                      if ( v69 != v70 )
                      {
                        v71 = 4;
                        if ( v20 != 1 )
                          v71 = 2;
                        CrossPartitionCharges = MiGetCrossPartitionCharges(v70, v71, 1, v19);
                        v19 = v96;
                      }
                      v88 = (_KPROCESS *)Object;
                    }
                    v94 += v19;
                    v49 = v97;
                    v95 = v97;
                    goto LABEL_163;
                  }
                  v64 = CurrentThread;
                  MiUnlockAweVadsShared((__int64)CurrentThread, v63);
                  if ( !v98 )
                    UNLOCK_ADDRESS_SPACE_SHARED((__int64)v64, (__int64)v88);
                  CrossPartitionCharges = MiResizeAweBitMap(v89);
                  if ( CrossPartitionCharges < 0 && v96 >= *(_QWORD *)(v89 + 24) )
                  {
                    v76 = (__int64 *)P;
                    MiFreeAwePagesFromMdl(v89, (ULONG_PTR)P);
                    if ( v76 != &v119 )
                      ExFreePoolWithTag(v76, 0);
                    goto LABEL_166;
                  }
                  CrossPartitionCharges = 0;
                }
                v17 = v88;
                UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)v88);
                v75 = (__int64 *)P;
                MiFreeAwePagesFromMdl(v89, (ULONG_PTR)P);
                if ( v75 != &v119 )
                  ExFreePoolWithTag(v75, 0);
                CrossPartitionCharges = -1073741558;
                goto LABEL_167;
              }
              v77 = CrossPartitionCharges;
              v72 = v94;
              if ( !v94 )
                v77 = -1073741670;
              CrossPartitionCharges = v77;
              v17 = v88;
LABEL_168:
              if ( (v7 & 1) != 0 )
              {
                KiUnstackDetachProcess((__int64)v118, 0, v19, v20);
                LOBYTE(v7) = v7 & 0xFE;
              }
              if ( CrossPartitionCharges < 0 )
              {
                v74 = v93;
              }
              else
              {
                v73 = v72;
                v74 = v93;
                *v112 = v73 / v93;
              }
              v78 = v105;
              P = v105;
              v79 = Address;
              v80 = v100;
              while ( v78 )
              {
                v104 = (unsigned int *)(v78 + 6);
                v20 = (unsigned __int64)*((unsigned int *)v78 + 10) >> 12;
                v109 = v20;
                v19 = 0LL;
                v113 = 0LL;
                while ( v19 < v20 )
                {
                  *v79++ = v78[v19 + 6];
                  Address = v79;
                  v19 += v74 / v80;
                  v113 = v19;
                }
                v78 = (_QWORD *)*v78;
                P = v78;
              }
              v81 = v95;
              v82 = (__int64 *)v105;
              for ( j = v105 == 0LL; ; j = v84 == 0LL )
              {
                P = v82;
                if ( j )
                  break;
                v84 = (__int64 *)*v82;
                if ( v82 != &v119 )
                  ExFreePoolWithTag(v82, 0);
                v82 = v84;
              }
              v12 = v81 - v94;
              v97 = v12;
LABEL_194:
              v26 = CurrentThread;
LABEL_195:
              if ( v12 )
              {
                if ( (v7 & 2) != 0 )
                {
                  LOCK_ADDRESS_SPACE_SHARED((__int64)v26, (__int64)v17);
                  MiReturnProcessCommitment((__int64)v17, v12);
                  UNLOCK_ADDRESS_SPACE_SHARED((__int64)v26, (__int64)v17);
                }
                if ( (v7 & 4) != 0 )
                {
                  _InterlockedAdd64((volatile signed __int64 *)&v17[3].ProfileListHead, -(__int64)v12);
                  v17 = (_KPROCESS *)Object;
                }
              }
              if ( (v7 & 1) != 0 )
                KiUnstackDetachProcess((__int64)v118, 0, v19, v20);
              if ( (v7 & 8) == 0 )
              {
                v85 = (void *)v98;
                if ( !v98 )
                  v85 = v17;
                ObfDereferenceObjectWithTag(v85, 0x68506D4Du);
              }
              return CrossPartitionCharges;
            }
            v57 = 0;
            v19 = v99;
            v20 = v93;
            while ( 1 )
            {
              if ( v57 > 1 )
                goto LABEL_134;
              if ( v42 > v108 && v42 == MiPageSizes[v57] << 12 )
              {
                v58 = MiPageSizes[v57 + 1];
                if ( v99 >= v58 && v93 >= v58 )
                  break;
              }
              ++v57;
            }
            if ( v57 )
            {
              if ( (v87 & 0x1000000) != 0 )
                v57 = 2;
            }
            else if ( (v87 & 0x2000000) != 0 )
            {
              goto LABEL_131;
            }
LABEL_134:
            if ( v57 > 1 )
            {
LABEL_131:
              v7 |= 0x10u;
              goto LABEL_109;
            }
            v42 = MiPageSizes[v57 + 1] << 12;
LABEL_109:
            v49 = v95;
LABEL_163:
            if ( v94 == v49 )
              goto LABEL_166;
            v47 = v89;
            v46 = v93;
          }
        }
        v7 = 8;
      }
      Object = v16;
      v88 = v16;
      v17 = v16;
      goto LABEL_33;
    }
  }
  return result;
}
