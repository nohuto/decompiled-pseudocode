/*
 * XREFs of MiAllocateUserPhysicalPages @ 0x1407F84C8
 * Callers:
 *     NtAllocateUserPhysicalPages @ 0x1407F9B90 (NtAllocateUserPhysicalPages.c)
 *     NtAllocateUserPhysicalPagesEx @ 0x1407F9BB0 (NtAllocateUserPhysicalPagesEx.c)
 * Callees:
 *     MiSectionControlArea @ 0x1402D4800 (MiSectionControlArea.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     MiGetCrossPartitionCharges @ 0x14036E19C (MiGetCrossPartitionCharges.c)
 *     MiGetAweInfoPartition @ 0x1403CCDEC (MiGetAweInfoPartition.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x140404438 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1404044B8 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiAllocatePagesForMdl @ 0x14041225C (MiAllocatePagesForMdl.c)
 *     MiChargeProcessCommitment @ 0x140431D10 (MiChargeProcessCommitment.c)
 *     MiGetProcessPartition @ 0x14043E2C0 (MiGetProcessPartition.c)
 *     MiReturnProcessCommitment @ 0x1404561A4 (MiReturnProcessCommitment.c)
 *     MiPageChainCount @ 0x1404642D0 (MiPageChainCount.c)
 *     KeGetIdealNodeNumberThread @ 0x14048652C (KeGetIdealNodeNumberThread.c)
 *     MiHugePagesSupported @ 0x140495838 (MiHugePagesSupported.c)
 *     MiLockAwePagesShared @ 0x1404AF5B0 (MiLockAwePagesShared.c)
 *     MiUnlockAweVadsShared @ 0x1404BB0AC (MiUnlockAweVadsShared.c)
 *     MiReferenceAweHandle @ 0x1404D61C4 (MiReferenceAweHandle.c)
 *     MiFreeAwePagesFromMdl @ 0x140682134 (MiFreeAwePagesFromMdl.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     MiAllocateFastAwePages @ 0x1407F833C (MiAllocateFastAwePages.c)
 *     MiCreateProcessDefaultAweInfo @ 0x1407F9560 (MiCreateProcessDefaultAweInfo.c)
 *     MiResizeAweBitMap @ 0x1407F99A0 (MiResizeAweBitMap.c)
 *     SeSinglePrivilegeCheck @ 0x140853E90 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x1408C0590 (ProbeForWrite.c)
 *     MiCaptureAllocateMapExtendedParameters @ 0x14099F780 (MiCaptureAllocateMapExtendedParameters.c)
 *     MiChargeProcessPhysicalPages @ 0x140A82FDC (MiChargeProcessPhysicalPages.c)
 *     MiAllocateUserPhysicalRanges @ 0x140AB5888 (MiAllocateUserPhysicalRanges.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  int CrossPartitionCharges; // r13d
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  int v22; // eax
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // rax
  struct _KTHREAD *v25; // r12
  unsigned __int64 v26; // rdx
  _QWORD *v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // r9
  unsigned __int64 v32; // rdx
  __int16 v33; // cx
  char v34; // al
  int v35; // r15d
  unsigned int v36; // edx
  unsigned int v37; // r8d
  unsigned int IdealNodeNumberThread; // r14d
  char v39; // al
  int v40; // r12d
  __int64 v41; // rsi
  __int64 v42; // rax
  __int64 ProcessPartition; // rax
  __int16 v44; // r8
  unsigned __int64 v45; // r9
  __int64 v46; // r10
  __int64 v47; // r11
  unsigned __int64 v48; // rax
  unsigned int *PagesForMdl; // rcx
  unsigned __int64 v50; // r11
  __int64 *v51; // r8
  PVOID UserPhysicalRanges; // rax
  int FastAwePages; // eax
  unsigned int i; // ecx
  unsigned __int64 v55; // rdx
  unsigned int k; // edx
  unsigned __int64 v57; // rax
  unsigned __int64 *v58; // rdx
  unsigned __int64 v59; // rax
  __int64 v60; // r8
  unsigned __int64 v61; // rcx
  ULONG_PTR v62; // r9
  struct _KTHREAD *v63; // r13
  __int64 v64; // r8
  unsigned int *v65; // rcx
  unsigned int *v66; // r10
  PVOID v67; // rax
  unsigned __int64 v68; // r8
  __int64 v69; // rax
  __int64 v70; // r9
  __int64 v71; // r10
  unsigned int v72; // edx
  __int64 v73; // r14
  unsigned __int64 v74; // rax
  unsigned __int64 v75; // r14
  __int64 *v76; // r14
  __int64 *v77; // r14
  int v78; // eax
  _QWORD *v79; // rcx
  _QWORD *v80; // r10
  unsigned __int64 v81; // r15
  unsigned __int64 v82; // r9
  unsigned __int64 v83; // r8
  unsigned __int64 v84; // r14
  __int64 *v85; // rax
  bool j; // zf
  __int64 *v87; // r15
  void *v88; // rcx
  int v89; // [rsp+54h] [rbp-2E4h]
  unsigned int v90; // [rsp+54h] [rbp-2E4h]
  _KPROCESS *v91; // [rsp+58h] [rbp-2E0h]
  __int64 v92; // [rsp+68h] [rbp-2D0h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp-2C8h]
  PVOID P; // [rsp+78h] [rbp-2C0h]
  PVOID Object; // [rsp+80h] [rbp-2B8h] BYREF
  unsigned __int64 v96; // [rsp+88h] [rbp-2B0h]
  __int64 v97; // [rsp+90h] [rbp-2A8h]
  unsigned __int64 v98; // [rsp+98h] [rbp-2A0h]
  unsigned __int64 v99; // [rsp+A0h] [rbp-298h]
  unsigned __int64 v100; // [rsp+A8h] [rbp-290h]
  __int64 v101; // [rsp+B0h] [rbp-288h] BYREF
  unsigned __int64 v102; // [rsp+B8h] [rbp-280h]
  unsigned __int64 v103; // [rsp+C0h] [rbp-278h]
  unsigned __int64 v104; // [rsp+C8h] [rbp-270h]
  __int64 AweInfoPartition; // [rsp+D0h] [rbp-268h]
  _KPROCESS *Process; // [rsp+D8h] [rbp-260h]
  unsigned int *v107; // [rsp+E0h] [rbp-258h]
  PVOID v108; // [rsp+E8h] [rbp-250h]
  volatile void *Address; // [rsp+F0h] [rbp-248h]
  unsigned __int64 v110; // [rsp+F8h] [rbp-240h]
  __int64 v111; // [rsp+100h] [rbp-238h]
  unsigned __int64 v112; // [rsp+108h] [rbp-230h]
  PVOID v113; // [rsp+110h] [rbp-228h]
  _DWORD *v114; // [rsp+118h] [rbp-220h]
  unsigned __int64 *v115; // [rsp+120h] [rbp-218h]
  unsigned __int64 v116; // [rsp+128h] [rbp-210h]
  _BYTE v117[32]; // [rsp+140h] [rbp-1F8h] BYREF
  unsigned int v118; // [rsp+160h] [rbp-1D8h]
  char v119; // [rsp+171h] [rbp-1C7h]
  __int64 v120; // [rsp+178h] [rbp-1C0h]
  _OWORD v121[3]; // [rsp+190h] [rbp-1A8h] BYREF
  __int64 v122; // [rsp+1C0h] [rbp-178h] BYREF
  __int16 v123; // [rsp+1C8h] [rbp-170h]
  __int16 v124; // [rsp+1CAh] [rbp-16Eh]
  __int64 v125; // [rsp+1E0h] [rbp-158h]
  unsigned int v126; // [rsp+1E8h] [rbp-150h]
  int v127; // [rsp+1ECh] [rbp-14Ch]

  v115 = a2;
  Address = a3;
  memset(v121, 0, sizeof(v121));
  v101 = 0LL;
  Object = 0LL;
  memset_0(&v122, 0, 0x130uLL);
  memset_0(v117, 0, 0x48uLL);
  v7 = 0;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  PreviousMode = CurrentThread->PreviousMode;
  result = MiCaptureAllocateMapExtendedParameters(a4, v117);
  if ( result >= 0 )
  {
    if ( (v120 & 0xFFFFFFFFFFFFFFE5uLL) != 0 )
      return -1073741811;
    if ( (v120 & 0x1A) == 0 || (v10 = 0, ((unsigned __int8)v120 & (unsigned __int8)((v120 & 0x1A) - 1) & 0x1A) == 0) )
      v10 = 1;
    if ( !v10 )
      return -1073741811;
    v11 = 2;
    if ( (v120 & 2) != 0 )
    {
      v96 = 16LL;
    }
    else if ( (v120 & 8) != 0 )
    {
      v96 = 512LL;
    }
    else if ( (v120 & 0x10) != 0 )
    {
      if ( !(unsigned int)MiHugePagesSupported() )
        return -1073741637;
      v96 = 0x40000LL;
    }
    else
    {
      v96 = 0LL;
    }
    if ( v118 > (unsigned __int16)KeNumberNodes )
      return -1073741811;
    if ( PreviousMode )
    {
      v13 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
        v13 = (__int64)a2;
      *(_QWORD *)v13 = *(_QWORD *)v13;
      v12 = *a2;
      v98 = v12;
      v100 = v12;
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
      v98 = v12;
      v100 = v12;
      if ( !v12 )
        return 0;
    }
    v14 = 0LL;
    v92 = 0LL;
    result = MiReferenceAweHandle(Handle, v11, PreviousMode, &Object, &v101);
    if ( result >= 0 )
    {
      if ( v101 )
      {
        v15 = MiSectionControlArea(v101);
        v16 = Process;
        v14 = *(_QWORD *)(v15 + 8);
        v92 = v14;
      }
      else
      {
        v17 = (_KPROCESS *)Object;
        v91 = (_KPROCESS *)Object;
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
            KiStackAttachProcess(v17, 0, (__int64)v121);
            v7 |= 1u;
          }
          v97 = 0LL;
          if ( v14 )
          {
            v104 = v14;
          }
          else
          {
            LOBYTE(v18) = PreviousMode;
            CrossPartitionCharges = MiCreateProcessDefaultAweInfo(v18, &v92);
            if ( CrossPartitionCharges < 0 )
              goto LABEL_194;
            v104 = (unsigned __int64)v17;
            v14 = v92;
          }
          v20 = MiPageChainCount(v14);
          v21 = v20;
          v103 = v20;
          if ( v20 == 16 )
          {
            v89 = 4096;
          }
          else if ( v20 == 512 )
          {
            v89 = 0x1000000;
          }
          else
          {
            v22 = 0;
            if ( v21 == 0x40000 )
              v22 = 0x2000000;
            v89 = v22;
          }
          if ( (*(_DWORD *)(v14 + 8) & 8) != 0 )
            v7 |= 0x20u;
          v23 = v96;
          if ( v96 )
          {
            if ( v96 <= v21 || v96 % v21 || ((v96 - 1) & v96) != 0 )
            {
              CrossPartitionCharges = -1073741811;
              goto LABEL_194;
            }
          }
          else
          {
            v23 = v21;
            v96 = v21;
          }
          if ( v23 > 1 )
          {
            v24 = v23 * v12;
            if ( v12 >= v23 * v12 )
            {
              CrossPartitionCharges = -1073741584;
              goto LABEL_194;
            }
            v12 *= v23;
            v98 = v24;
            v100 = v24;
          }
          v25 = CurrentThread;
          if ( !v101 )
          {
            LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)v17);
            if ( (v17[1].DirectoryTableBase & 0x2000000000LL) != 0 )
            {
              UNLOCK_ADDRESS_SPACE_SHARED((__int64)v25, (__int64)v17);
              CrossPartitionCharges = -1073741558;
              goto LABEL_195;
            }
            if ( !(unsigned int)MiChargeProcessPhysicalPages(v17, v12) )
            {
              v28 = (__int64)v17;
              v29 = (__int64)v25;
LABEL_64:
              UNLOCK_ADDRESS_SPACE_SHARED(v29, v28);
              CrossPartitionCharges = -1073741523;
              goto LABEL_195;
            }
            v7 |= 4u;
            v30 = MiChargeProcessCommitment(v27, v26);
            v28 = (__int64)v17;
            v29 = (__int64)v25;
            if ( !v30 )
              goto LABEL_64;
            UNLOCK_ADDRESS_SPACE_SHARED((__int64)v25, (__int64)v17);
            v7 |= 2u;
          }
          AweInfoPartition = MiGetAweInfoPartition(v14);
          v32 = *(_QWORD *)(AweInfoPartition + 18504) + 1LL;
          v110 = v32;
          v108 = 0LL;
          v113 = 0LL;
          if ( v17[1].ReadyTime )
          {
            v33 = WORD2(v17[3].PerProcessorCycleTimes);
            if ( v33 == 332 || (v34 = 0, v33 == 452) )
              v34 = 1;
            if ( v34 )
            {
              if ( v32 > 0x100000000LL )
                v32 = 0x100000000LL;
              v110 = v32;
            }
          }
          v35 = (_DWORD)v32 << 12;
          CrossPartitionCharges = 0;
          v36 = 0x80000000;
          v37 = v89 | 0x80000000;
          if ( v118 )
          {
            IdealNodeNumberThread = v118 - 1;
            v39 = v119;
            if ( v119 )
              v37 = v89 | 0x80000002;
          }
          else
          {
            IdealNodeNumberThread = (unsigned __int16)KeGetIdealNodeNumberThread((__int64)v25);
            v39 = v119;
          }
          v40 = IdealNodeNumberThread;
          if ( !v39 )
            v40 = v36 | IdealNodeNumberThread;
          if ( (*(_DWORD *)(v92 + 8) & 4) != 0 )
            v37 |= 1u;
          v41 = v31 << 12;
          v42 = 0LL;
          if ( v31 != 1 )
            v42 = v31 << 12;
          v111 = v42;
          if ( v31 != 1 )
            v37 |= 0x30u;
          v90 = v37;
          ProcessPartition = MiGetProcessPartition((__int64)v91);
          if ( v47 == ProcessPartition && (v44 & 0x1000) != 0 && (v7 & 0x20) == 0 && v45 == 16 )
          {
            v46 = v92;
            j = (*(_DWORD *)(v47 + 4) & 0x10) == 0;
            v91 = (_KPROCESS *)Object;
            v48 = v100;
            v98 = v100;
            if ( j )
              v7 |= 0x80u;
          }
          else
          {
            v48 = v98;
          }
          v114 = (_DWORD *)(v46 + 8);
          while ( 1 )
          {
            PagesForMdl = 0LL;
            P = 0LL;
            v50 = v48 - v97;
            v102 = v48 - v97;
            if ( v103 == 1 )
            {
              if ( v50 > 0xC0000 )
                v50 = 786432LL;
              v102 = v50;
            }
            if ( (v7 & 0x40) != 0 || v50 / v103 > 0x20 )
            {
              v51 = 0LL;
            }
            else
            {
              v7 |= 0x40u;
              v51 = &v122;
              v122 = 0LL;
              v123 = 8 * (((((v50 / v103) << 12) + 4095) >> 12) + 6);
              v124 = 0;
              v125 = 0LL;
              v127 = 0;
              v126 = (unsigned int)(v50 / v103) << 12;
              PagesForMdl = (unsigned int *)P;
            }
            v99 = (unsigned __int64)v51;
            if ( (v7 & 0x20) != 0 )
            {
              UserPhysicalRanges = (PVOID)MiAllocateUserPhysicalRanges(
                                            AweInfoPartition,
                                            v50,
                                            v40,
                                            (*v114 >> 2) & 1,
                                            (__int64)v51);
              goto LABEL_138;
            }
            if ( v51 && (v7 & 0x90) == 0x80 )
            {
              FastAwePages = MiAllocateFastAwePages(v99, v46, IdealNodeNumberThread, v90, v110, v104);
              CrossPartitionCharges = FastAwePages;
              if ( FastAwePages < 0 )
              {
                if ( FastAwePages == -1073741523 )
                {
                  CrossPartitionCharges = -1073741670;
LABEL_166:
                  v17 = v91;
LABEL_167:
                  v73 = v97;
                  goto LABEL_168;
                }
                v7 &= 0xFFFFFF3F;
                goto LABEL_109;
              }
              v51 = (__int64 *)v99;
              PagesForMdl = (unsigned int *)v99;
              P = (PVOID)v99;
              v46 = v92;
              v50 = v102;
              v45 = v96;
            }
            if ( PagesForMdl )
              goto LABEL_139;
            if ( v50 < 0x10 || (v7 & 0x10) != 0 )
              goto LABEL_210;
            if ( v41 == 4096 )
            {
              for ( i = 0; i < 3; ++i )
              {
                v55 = MiPageSizes[i];
                if ( v50 >= v55 && v45 >= v55 )
                {
                  v41 = v55 << 12;
                  break;
                }
              }
            }
            PagesForMdl = (unsigned int *)MiAllocatePagesForMdl(
                                            AweInfoPartition,
                                            0,
                                            v35 - 4096,
                                            v41,
                                            v50 << 12,
                                            *(_DWORD *)(v46 + 52),
                                            IdealNodeNumberThread,
                                            v90 | 0x42,
                                            v104,
                                            v51);
            P = PagesForMdl;
            if ( PagesForMdl )
            {
LABEL_210:
              if ( PagesForMdl )
                goto LABEL_139;
              UserPhysicalRanges = MiAllocatePagesForMdl(
                                     AweInfoPartition,
                                     0,
                                     v35 - 4096,
                                     v111,
                                     v102 << 12,
                                     *(_DWORD *)(v92 + 52),
                                     IdealNodeNumberThread,
                                     v90,
                                     v104,
                                     (void *)v99);
LABEL_138:
              P = UserPhysicalRanges;
              PagesForMdl = (unsigned int *)UserPhysicalRanges;
              if ( UserPhysicalRanges )
              {
LABEL_139:
                v58 = (unsigned __int64 *)(PagesForMdl + 12);
                v107 = PagesForMdl + 12;
                v102 = (unsigned __int64)PagesForMdl[10] >> 12;
                v112 = v102;
                v59 = 0LL;
                v60 = (__int64)&PagesForMdl[2 * v102 + 12];
                do
                {
                  v61 = *v58;
                  if ( *v58 <= v59 )
                    v61 = v59;
                  v59 = v61;
                  ++v58;
                }
                while ( v58 != (unsigned __int64 *)v60 );
                v99 = v61 / v103;
                while ( 1 )
                {
                  if ( !v101 )
                  {
                    LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)v91);
                    if ( (v91[1].DirectoryTableBase & 0x2000000000LL) != 0 )
                      break;
                  }
                  v62 = MiLockAwePagesShared(v92, (__int64)CurrentThread);
                  if ( v99 < *(_QWORD *)(v92 + 24) )
                  {
                    v64 = *(_QWORD *)(v92 + 32);
                    v65 = v107;
                    v66 = &v107[2 * v102];
                    do
                    {
                      _InterlockedOr(
                        (volatile signed __int32 *)(v64 + 4 * ((*(_QWORD *)v65 / v103) >> 5)),
                        1 << ((*(_QWORD *)v65 / v103) & 0x1F));
                      v65 = v107 + 2;
                      v107 = v65;
                    }
                    while ( v65 != v66 );
                    MiUnlockAweVadsShared((__int64)CurrentThread, v62);
                    v91 = (_KPROCESS *)Object;
                    if ( !v101 )
                      UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)Object);
                    v67 = P;
                    *(_QWORD *)P = v108;
                    v108 = v67;
                    v113 = v67;
                    v68 = v103 * v112;
                    v99 = v103 * v112;
                    if ( (v7 & 0x20) == 0 )
                    {
                      _InterlockedAdd64((volatile signed __int64 *)(AweInfoPartition + 19624), v68);
                      v69 = MiGetProcessPartition((__int64)Process);
                      if ( v69 != v71 )
                      {
                        v72 = 4;
                        if ( v70 != 1 )
                          v72 = 2;
                        CrossPartitionCharges = MiGetCrossPartitionCharges(v71, v72, 1, v68);
                        v68 = v99;
                      }
                      v91 = (_KPROCESS *)Object;
                    }
                    v97 += v68;
                    v48 = v100;
                    v98 = v100;
                    goto LABEL_163;
                  }
                  v63 = CurrentThread;
                  MiUnlockAweVadsShared((__int64)CurrentThread, v62);
                  if ( !v101 )
                    UNLOCK_ADDRESS_SPACE_SHARED((__int64)v63, (__int64)v91);
                  CrossPartitionCharges = MiResizeAweBitMap(v92);
                  if ( CrossPartitionCharges < 0 && v99 >= *(_QWORD *)(v92 + 24) )
                  {
                    v77 = (__int64 *)P;
                    MiFreeAwePagesFromMdl(v92, (ULONG_PTR)P);
                    if ( v77 != &v122 )
                      ExFreePoolWithTag(v77, 0);
                    goto LABEL_166;
                  }
                  CrossPartitionCharges = 0;
                }
                v17 = v91;
                UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)v91);
                v76 = (__int64 *)P;
                MiFreeAwePagesFromMdl(v92, (ULONG_PTR)P);
                if ( v76 != &v122 )
                  ExFreePoolWithTag(v76, 0);
                CrossPartitionCharges = -1073741558;
                goto LABEL_167;
              }
              v78 = CrossPartitionCharges;
              v73 = v97;
              if ( !v97 )
                v78 = -1073741670;
              CrossPartitionCharges = v78;
              v17 = v91;
LABEL_168:
              if ( (v7 & 1) != 0 )
              {
                KiUnstackDetachProcess((__int64)v121, 0);
                LOBYTE(v7) = v7 & 0xFE;
              }
              if ( CrossPartitionCharges < 0 )
              {
                v75 = v96;
              }
              else
              {
                v74 = v73;
                v75 = v96;
                *v115 = v74 / v96;
              }
              v79 = v108;
              P = v108;
              v80 = Address;
              v81 = v103;
              while ( v79 )
              {
                v107 = (unsigned int *)(v79 + 6);
                v82 = (unsigned __int64)*((unsigned int *)v79 + 10) >> 12;
                v112 = v82;
                v83 = 0LL;
                v116 = 0LL;
                while ( v83 < v82 )
                {
                  *v80++ = v79[v83 + 6];
                  Address = v80;
                  v83 += v75 / v81;
                  v116 = v83;
                }
                v79 = (_QWORD *)*v79;
                P = v79;
              }
              v84 = v98;
              v85 = (__int64 *)v108;
              for ( j = v108 == 0LL; ; j = v87 == 0LL )
              {
                P = v85;
                if ( j )
                  break;
                v87 = (__int64 *)*v85;
                if ( v85 != &v122 )
                  ExFreePoolWithTag(v85, 0);
                v85 = v87;
              }
              v12 = v84 - v97;
              v100 = v12;
LABEL_194:
              v25 = CurrentThread;
LABEL_195:
              if ( v12 )
              {
                if ( (v7 & 2) != 0 )
                {
                  LOCK_ADDRESS_SPACE_SHARED((__int64)v25, (__int64)v17);
                  MiReturnProcessCommitment((__int64)v17, v12);
                  UNLOCK_ADDRESS_SPACE_SHARED((__int64)v25, (__int64)v17);
                }
                if ( (v7 & 4) != 0 )
                {
                  _InterlockedAdd64((volatile signed __int64 *)&v17[3].ProfileListHead, -(__int64)v12);
                  v17 = (_KPROCESS *)Object;
                }
              }
              if ( (v7 & 1) != 0 )
                KiUnstackDetachProcess((__int64)v121, 0);
              if ( (v7 & 8) == 0 )
              {
                v88 = (void *)v101;
                if ( !v101 )
                  v88 = v17;
                ObfDereferenceObjectWithTag(v88, 0x68506D4Du);
              }
              return CrossPartitionCharges;
            }
            for ( k = 0; ; ++k )
            {
              if ( k > 1 )
                goto LABEL_134;
              if ( v41 > v111 && v41 == MiPageSizes[k] << 12 )
              {
                v57 = MiPageSizes[k + 1];
                if ( v102 >= v57 && v96 >= v57 )
                  break;
              }
            }
            if ( k )
            {
              if ( (v90 & 0x1000000) != 0 )
                k = 2;
            }
            else if ( (v90 & 0x2000000) != 0 )
            {
              goto LABEL_131;
            }
LABEL_134:
            if ( k > 1 )
            {
LABEL_131:
              v7 |= 0x10u;
              goto LABEL_109;
            }
            v41 = MiPageSizes[k + 1] << 12;
LABEL_109:
            v48 = v98;
LABEL_163:
            if ( v97 == v48 )
              goto LABEL_166;
            v46 = v92;
            v45 = v96;
          }
        }
        v7 = 8;
      }
      Object = v16;
      v91 = v16;
      v17 = v16;
      goto LABEL_33;
    }
  }
  return result;
}
