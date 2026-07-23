/*
 * XREFs of IopCreateFile @ 0x1408EE530
 * Callers:
 *     PopCreateHiberFile @ 0x140745C64 (PopCreateHiberFile.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x140774510 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpSysVolTakeOwnership @ 0x140774CC8 (RtlpSysVolTakeOwnership.c)
 *     SmKmStoreFileCreateForIoType @ 0x14078B834 (SmKmStoreFileCreateForIoType.c)
 *     MiCreatePagingFile @ 0x1407DE4C4 (MiCreatePagingFile.c)
 *     PfpVolumeOpenAndVerify @ 0x1408E9330 (PfpVolumeOpenAndVerify.c)
 *     PfSnIsVolumeMounted @ 0x1408ED378 (PfSnIsVolumeMounted.c)
 *     IopOpenLinkOrRenameTarget @ 0x1408ED610 (IopOpenLinkOrRenameTarget.c)
 *     IoCreateFile @ 0x1408EDC10 (IoCreateFile.c)
 *     IoCreateFileEx @ 0x1408EE290 (IoCreateFileEx.c)
 *     NtOpenFile @ 0x1408EE430 (NtOpenFile.c)
 *     NtCreateFile @ 0x1408EE4A0 (NtCreateFile.c)
 *     PfSnGetPrefetchInstructions @ 0x140987464 (PfSnGetPrefetchInstructions.c)
 *     NtCreateUserProcess @ 0x1409BC1D0 (NtCreateUserProcess.c)
 *     NtCreateNamedPipeFile @ 0x140A2A640 (NtCreateNamedPipeFile.c)
 *     NtCreateMailslotFile @ 0x140A79B40 (NtCreateMailslotFile.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14025AB10 (RtlRaiseStatus.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     PsGetCurrentSilo @ 0x1403FA570 (PsGetCurrentSilo.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406A85C0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     IopCloseFile @ 0x140845AF0 (IopCloseFile.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     ObOpenObjectByNameEx @ 0x14085B430 (ObOpenObjectByNameEx.c)
 *     FsRtlInsertExtraCreateParameter @ 0x1408EDBB0 (FsRtlInsertExtraCreateParameter.c)
 *     IopCleanupExtraCreateParameters @ 0x1408EF8F0 (IopCleanupExtraCreateParameters.c)
 *     FsRtlFreeExtraCreateParameter @ 0x1408EFDB0 (FsRtlFreeExtraCreateParameter.c)
 *     ObCloseHandle @ 0x1408EFEC0 (ObCloseHandle.c)
 *     FsRtlAllocateExtraCreateParameterList @ 0x1409CDAD0 (FsRtlAllocateExtraCreateParameterList.c)
 *     FsRtlAllocateExtraCreateParameter @ 0x1409EE820 (FsRtlAllocateExtraCreateParameter.c)
 *     IoCheckEaBufferValidity @ 0x140A15E10 (IoCheckEaBufferValidity.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopCreateFile(
        HANDLE *a1,
        int a2,
        __int64 a3,
        NTSTATUS *a4,
        HANDLE *a5,
        int a6,
        int a7,
        unsigned int a8,
        int a9,
        _QWORD *a10,
        ULONG EaLength,
        int a12,
        _DWORD *a13,
        int a14,
        int a15,
        __int16 *Src)
{
  int v16; // r12d
  int v17; // edi
  char v18; // r15
  char PreviousMode; // al
  struct _KPRCB *CurrentPrcb; // rsi
  _GENERAL_LOOKASIDE *P; // r14
  __int64 v22; // rbx
  struct _KPRCB *v23; // rdx
  _GENERAL_LOOKASIDE *v24; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  _QWORD *v28; // r14
  ULONG v29; // r13d
  unsigned __int64 v30; // rsi
  _QWORD *v31; // r13
  __int64 v32; // rdi
  PVOID *v33; // r14
  struct _KTHREAD *CurrentThread; // rax
  int v35; // esi
  void *v36; // rcx
  int v37; // edi
  struct _KPRCB *v38; // rdx
  _GENERAL_LOOKASIDE *v39; // rcx
  _QWORD *v40; // r14
  ULONG v41; // r13d
  size_t v42; // r8
  int v43; // ecx
  PVOID v44; // rcx
  __int64 v45; // rax
  struct _KPRCB *v46; // rdx
  _GENERAL_LOOKASIDE *v47; // rcx
  _GENERAL_LOOKASIDE *L; // r14
  unsigned __int64 v49; // rax
  void *v50; // rax
  int v51; // eax
  void (__stdcall *v52)(PVOID); // rdx
  void *v53; // rcx
  struct _KPRCB *v54; // rdx
  _GENERAL_LOOKASIDE *v55; // rcx
  _KPROCESS *Process; // rcx
  struct _KPRCB *v57; // rdx
  _GENERAL_LOOKASIDE *v58; // rcx
  __int16 v59; // ax
  struct _KPRCB *v60; // rdx
  _GENERAL_LOOKASIDE *v61; // rcx
  void *Pool2; // rax
  NTSTATUS v63; // r14d
  struct _KPRCB *v64; // rdx
  _GENERAL_LOOKASIDE *v65; // rcx
  struct _KPRCB *v66; // rdx
  void (__stdcall *FreeEx)(PVOID); // rdx
  struct _ECP_LIST *v68; // r12
  NTSTATUS Parameter; // r14d
  _OWORD *v70; // rdi
  bool v71; // al
  bool v72; // al
  void *v73; // rcx
  unsigned int v74; // [rsp+40h] [rbp-88h]
  ULONG v75; // [rsp+48h] [rbp-80h]
  unsigned __int64 v76; // [rsp+58h] [rbp-70h]
  _QWORD *v77; // [rsp+60h] [rbp-68h]
  HANDLE Handle; // [rsp+68h] [rbp-60h] BYREF
  PECP_LIST EcpList; // [rsp+70h] [rbp-58h] BYREF
  PVOID EcpContext; // [rsp+78h] [rbp-50h] BYREF
  size_t Size; // [rsp+80h] [rbp-48h]
  struct _KTHREAD *v82; // [rsp+88h] [rbp-40h]

  v16 = a14;
  v17 = a9;
  v76 = 0LL;
  Handle = 0LL;
  v18 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (a14 & 0x100) == 0 )
    v18 = PreviousMode;
  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[8].P;
  ++P->TotalAllocates;
  v22 = (__int64)RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( !v22 )
  {
    ++P->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[8].L;
    ++L->TotalAllocates;
    v22 = (__int64)RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( !v22 )
    {
      ++L->AllocateMisses;
      v22 = guard_dispatch_icall_no_overrides((unsigned int)L->Type);
    }
  }
  if ( !v22 )
    return 3221225626LL;
  *(_DWORD *)v22 = CurrentPrcb->Number;
  if ( !v18 && (a14 & 0x200) == 0 )
    goto LABEL_25;
  if ( (a7 & 0xFFFFFFF8) != 0
    || (a6 & 0xFFA50048) != 0
    || a8 > 5
    || (a9 & 0xEF000000) != 0
    || (a9 & 0x30) != 0 && (a2 & 0x100000) == 0
    || (a2 & 0x10000) == 0 && (a9 & 0x1000) != 0
    || (a9 & 0x30) == 0x30
    || (a9 & 0x41) == 1 && ((a9 & 0xEF5C0ACC) != 0 || a8 - 1 > 2)
    || (a9 & 0x100100) == 0x100100
    || (a9 & 0x10100) == 0x10100
    || (a9 & 0x110000) == 0x110000
    || (a2 & 4) != 0 && (a9 & 8) != 0 )
  {
    goto LABEL_10;
  }
  if ( IopFailZeroAccessCreate && !a2 )
  {
    v46 = KeGetCurrentPrcb();
    v47 = v46->PPLookasideList[8].P;
    ++v47->TotalFrees;
    if ( LOWORD(v47->ListHead.Alignment) < v47->Depth
      || (++v47->FreeMisses,
          v47 = v46->PPLookasideList[8].L,
          ++v47->TotalFrees,
          LOWORD(v47->ListHead.Alignment) < v47->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v47->ListHead, (PSLIST_ENTRY)v22);
    }
    else
    {
      ++v47->FreeMisses;
      if ( (void (__stdcall *)(PVOID))v47->FreeEx == ExFreePool )
      {
        ExFreePool((PVOID)v22);
        return 3221225506LL;
      }
      guard_dispatch_icall_no_overrides(v22);
    }
    return 3221225506LL;
  }
  switch ( a12 )
  {
    case 0:
      goto LABEL_25;
    case 1:
      if ( !a13 || (*a13 & 0xFFFFFFFC) != 0 || a13[1] > 1u || a13[2] > 1u || (a7 & 4) != 0 || a8 - 1 > 2 )
        goto LABEL_10;
      break;
    case 2:
      if ( !a13 || (a7 & 0xFFFFFFFD) == 0 || (a7 & 4) != 0 || a8 != 2 )
        goto LABEL_10;
      break;
    default:
      goto LABEL_25;
  }
  if ( (a9 & 0xFFFFFFCD) != 0 )
    goto LABEL_10;
LABEL_25:
  if ( !v18 )
  {
    v17 = a9 & 0x7FFFFFFF;
    if ( a9 >= 0 )
      v17 = a9;
    v16 = a14 | 0x400;
    if ( a9 >= 0 )
      v16 = a14;
    if ( a5 )
    {
      if ( (__int64)*a5 < 0 )
        goto LABEL_10;
      Handle = *a5;
    }
    if ( (v17 & 0x10000000) == 0 )
    {
      *(_QWORD *)(v22 + 216) = 0LL;
      v40 = a10;
      v41 = EaLength;
      goto LABEL_64;
    }
    if ( EaLength >= 0x18 )
    {
      *(_QWORD *)(v22 + 216) = *a10;
      v40 = (_QWORD *)a10[1];
      v41 = *((_DWORD *)a10 + 4);
      if ( EaLength >= 0x20 )
      {
        v30 = a10[3];
LABEL_65:
        if ( !v40 || !v41 )
        {
          *(_QWORD *)(v22 + 72) = 0LL;
          goto LABEL_41;
        }
        Pool2 = (void *)ExAllocatePool2(0x42uLL);
        *(_QWORD *)(v22 + 72) = Pool2;
        if ( Pool2 )
        {
          *(_DWORD *)(v22 + 80) = v41;
          memmove(Pool2, v40, v41);
          v63 = IoCheckEaBufferValidity(*(PFILE_FULL_EA_INFORMATION *)(v22 + 72), v41, (PULONG)a4 + 2);
          v74 = v63;
          if ( v63 < 0 )
          {
            ExFreePoolWithTag(*(PVOID *)(v22 + 72), 0);
            *a4 = v63;
            v66 = KeGetCurrentPrcb();
            v39 = v66->PPLookasideList[8].P;
            ++v39->TotalFrees;
            if ( LOWORD(v39->ListHead.Alignment) >= v39->Depth )
            {
              ++v39->FreeMisses;
              v39 = v66->PPLookasideList[8].L;
              ++v39->TotalFrees;
              if ( LOWORD(v39->ListHead.Alignment) >= v39->Depth )
              {
                ++v39->FreeMisses;
                FreeEx = (void (__stdcall *)(PVOID))v39->FreeEx;
                v53 = (void *)v22;
                if ( FreeEx == ExFreePool )
                  goto LABEL_98;
                goto LABEL_182;
              }
            }
LABEL_53:
            RtlpInterlockedPushEntrySList(&v39->ListHead, (PSLIST_ENTRY)v22);
            return v74;
          }
LABEL_42:
          *(_DWORD *)v22 = 14680072;
          *(_DWORD *)(v22 + 32) = 0;
          v31 = (_QWORD *)(v22 + 24);
          Size = v22 + 24;
          *(_QWORD *)(v22 + 24) = 0LL;
          *(_QWORD *)(v22 + 56) = Handle;
          *(_DWORD *)(v22 + 64) = v17 & 0xFFFFFF;
          *(_WORD *)(v22 + 68) = a6;
          *(_WORD *)(v22 + 70) = a7;
          *(_DWORD *)(v22 + 88) = a8;
          *(_WORD *)(v22 + 136) = 0;
          *(_BYTE *)(v22 + 138) = 0;
          *(_DWORD *)(v22 + 84) = v16;
          *(_QWORD *)(v22 + 40) = 0LL;
          v32 = a3;
          *(_QWORD *)(v22 + 48) = a3;
          *(_DWORD *)(v22 + 120) = a12;
          *(_QWORD *)(v22 + 128) = a13;
          *(_DWORD *)(v22 + 152) = a15;
          *(_BYTE *)(v22 + 156) = v18;
          *(_OWORD *)(v22 + 160) = 0LL;
          *(_OWORD *)(v22 + 176) = 0LL;
          *(_WORD *)(v22 + 160) = 40;
          *(_QWORD *)(v22 + 192) = 1LL;
          if ( Src )
          {
            v42 = *Src;
            if ( v42 > 0x28 )
              v42 = 40LL;
            memmove((void *)(v22 + 160), Src, v42);
          }
          if ( !v30 )
            goto LABEL_44;
          EcpContext = 0LL;
          v68 = *(struct _ECP_LIST **)(v22 + 168);
          EcpList = v68;
          Parameter = FsRtlAllocateExtraCreateParameter(
                        &GUID_ECP_DUAL_OPLOCK_KEY,
                        0x24u,
                        0,
                        0LL,
                        0x6A536F49u,
                        &EcpContext);
          v74 = Parameter;
          v70 = EcpContext;
          if ( Parameter >= 0 )
          {
            *(_OWORD *)EcpContext = *(_OWORD *)v30;
            v70[1] = *(_OWORD *)(v30 + 16);
            v71 = *(_DWORD *)v70
               || *((_WORD *)v70 + 2)
               || *((_WORD *)v70 + 3)
               || *((_BYTE *)v70 + 8)
               || *((_BYTE *)v70 + 9)
               || *((_BYTE *)v70 + 10)
               || *((_BYTE *)v70 + 11)
               || *((_BYTE *)v70 + 12)
               || *((_BYTE *)v70 + 13)
               || *((_BYTE *)v70 + 14)
               || *((_BYTE *)v70 + 15);
            *((_BYTE *)v70 + 32) = v71;
            v72 = *((_DWORD *)v70 + 4)
               || *((_WORD *)v70 + 10)
               || *((_WORD *)v70 + 11)
               || *((_BYTE *)v70 + 24)
               || *((_BYTE *)v70 + 25)
               || *((_BYTE *)v70 + 26)
               || *((_BYTE *)v70 + 27)
               || *((_BYTE *)v70 + 28)
               || *((_BYTE *)v70 + 29)
               || *((_BYTE *)v70 + 30)
               || *((_BYTE *)v70 + 31);
            *((_BYTE *)v70 + 33) = v72;
            if ( v68 )
              goto LABEL_228;
            Parameter = FsRtlAllocateExtraCreateParameterList(0, &EcpList);
            v74 = Parameter;
            v68 = EcpList;
            if ( Parameter >= 0 )
            {
              *(_QWORD *)(v22 + 168) = EcpList;
LABEL_228:
              Parameter = FsRtlInsertExtraCreateParameter(v68, v70);
              v74 = Parameter;
              if ( Parameter >= 0 )
                v70 = 0LL;
              EcpContext = v70;
            }
          }
          if ( Parameter < 0 )
          {
            if ( v68 )
              IopCleanupExtraCreateParameters(v22);
            if ( v70 )
              FsRtlFreeExtraCreateParameter(v70);
            v73 = *(void **)(v22 + 72);
            if ( v73 )
              ExFreePoolWithTag(v73, 0);
            *a4 = Parameter;
LABEL_52:
            v38 = KeGetCurrentPrcb();
            v39 = v38->PPLookasideList[8].P;
            ++v39->TotalFrees;
            if ( LOWORD(v39->ListHead.Alignment) >= v39->Depth )
            {
              ++v39->FreeMisses;
              v39 = v38->PPLookasideList[8].L;
              ++v39->TotalFrees;
              if ( LOWORD(v39->ListHead.Alignment) >= v39->Depth )
              {
                ++v39->FreeMisses;
                v52 = (void (__stdcall *)(PVOID))v39->FreeEx;
                v53 = (void *)v22;
                if ( v52 == ExFreePool )
                {
LABEL_98:
                  ExFreePool(v53);
                  return v74;
                }
LABEL_182:
                guard_dispatch_icall_no_overrides(v53);
                return v74;
              }
            }
            goto LABEL_53;
          }
          v32 = a3;
LABEL_44:
          if ( *(_QWORD *)(v22 + 192) == 1LL )
            *(_QWORD *)(v22 + 192) = PsGetCurrentSilo();
          *(_DWORD *)(v22 + 16) = 0;
          v33 = (PVOID *)(v22 + 8);
          EcpList = (PECP_LIST)(v22 + 8);
          *(_QWORD *)(v22 + 8) = 0LL;
          CurrentThread = KeGetCurrentThread();
          ++CurrentThread->OtherOperationCount;
          __incgsdword(0x2EE4u);
          v35 = ObOpenObjectByNameEx(v32, (__int64)IoFileObjectType, v18, 0LL, a2, v22, *(_QWORD *)(v22 + 192), &Handle);
          v74 = v35;
          v36 = *(void **)(v22 + 72);
          if ( v36 )
            ExFreePoolWithTag(v36, 0);
          IopCleanupExtraCreateParameters(v22);
          v37 = *(_DWORD *)(v22 + 32);
          if ( v35 >= 0 )
          {
            if ( v37 == -1096154543 )
            {
              *((_DWORD *)*v33 + 20) |= 0x40000u;
              *((_DWORD *)*v33 + 20) &= ~0x2000000u;
              *a1 = Handle;
              *((_QWORD *)a4 + 1) = *v31;
              *a4 = *(_DWORD *)(v22 + 16);
              v74 = *(_DWORD *)(v22 + 16);
LABEL_51:
              if ( v37 == -1096154543 && *v33 )
                ObfDereferenceObject(*v33);
              goto LABEL_52;
            }
            ObCloseHandle(Handle, v18);
            v35 = -1073741788;
            v74 = -1073741788;
          }
          v43 = *(_DWORD *)(v22 + 16);
          if ( v43 < 0 )
          {
            v35 = *(_DWORD *)(v22 + 16);
            v74 = v35;
            if ( v43 == -1073741191 || (v43 & 0xC0000000) == 0x80000000 )
            {
              *a4 = v43;
              *((_QWORD *)a4 + 1) = *v31;
            }
          }
          else
          {
            v44 = *v33;
            if ( *v33 )
            {
              if ( v37 == -1096154543 )
              {
                if ( (*((_DWORD *)v44 + 20) & 0x40000) == 0 )
                  IopCloseFile(0LL, (struct _FILE_OBJECT *)*v33, 1LL, 1LL);
              }
              else
              {
                if ( *((_WORD *)v44 + 44) )
                  ExFreePoolWithTag(*((PVOID *)v44 + 12), 0);
                *((_QWORD *)*v33 + 1) = 0LL;
                ObfDereferenceObject(*v33);
              }
            }
          }
          if ( v35 == -1073741772 )
          {
            v45 = *v31;
            if ( *v31 == 2684354563LL || v45 == 2684354572LL || v45 == 2684354585LL )
              v74 = -1073741184;
          }
          goto LABEL_51;
        }
        v64 = KeGetCurrentPrcb();
        v65 = v64->PPLookasideList[8].P;
        ++v65->TotalFrees;
        if ( LOWORD(v65->ListHead.Alignment) < v65->Depth
          || (++v65->FreeMisses,
              v65 = v64->PPLookasideList[8].L,
              ++v65->TotalFrees,
              LOWORD(v65->ListHead.Alignment) < v65->Depth) )
        {
          RtlpInterlockedPushEntrySList(&v65->ListHead, (PSLIST_ENTRY)v22);
        }
        else
        {
          ++v65->FreeMisses;
          if ( (void (__stdcall *)(PVOID))v65->FreeEx == ExFreePool )
            ExFreePool((PVOID)v22);
          else
            guard_dispatch_icall_no_overrides(v22);
        }
        return 3221225626LL;
      }
LABEL_64:
      v30 = 0LL;
      goto LABEL_65;
    }
LABEL_10:
    v23 = KeGetCurrentPrcb();
    v24 = v23->PPLookasideList[8].P;
    ++v24->TotalFrees;
    if ( LOWORD(v24->ListHead.Alignment) < v24->Depth
      || (++v24->FreeMisses,
          v24 = v23->PPLookasideList[8].L,
          ++v24->TotalFrees,
          LOWORD(v24->ListHead.Alignment) < v24->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v24->ListHead, (PSLIST_ENTRY)v22);
    }
    else
    {
      ++v24->FreeMisses;
      if ( (void (__stdcall *)(PVOID))v24->FreeEx == ExFreePool )
      {
        ExFreePool((PVOID)v22);
        return 3221225485LL;
      }
      guard_dispatch_icall_no_overrides(v22);
    }
    return 3221225485LL;
  }
  v26 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
    v26 = (__int64)a1;
  *(_QWORD *)v26 = *(_QWORD *)v26;
  v27 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
    v27 = (__int64)a4;
  *(_DWORD *)v27 = *(_DWORD *)v27;
  if ( a5 )
  {
    if ( ((unsigned __int8)a5 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    Handle = *a5;
    if ( (__int64)Handle < 0 )
      RtlRaiseStatus(-1073741811);
  }
  else
  {
    Handle = 0LL;
  }
  if ( (a9 & 0x10000000) == 0 )
  {
    *(_QWORD *)(v22 + 216) = 0LL;
    v28 = a10;
    v77 = a10;
    v29 = EaLength;
    v75 = EaLength;
    v30 = 0LL;
    goto LABEL_40;
  }
  if ( !a10 )
  {
    v54 = KeGetCurrentPrcb();
    v55 = v54->PPLookasideList[8].P;
    ++v55->TotalFrees;
    if ( LOWORD(v55->ListHead.Alignment) < v55->Depth
      || (++v55->FreeMisses,
          v55 = v54->PPLookasideList[8].L,
          ++v55->TotalFrees,
          LOWORD(v55->ListHead.Alignment) < v55->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v55->ListHead, (PSLIST_ENTRY)v22);
    }
    else
    {
      ++v55->FreeMisses;
      if ( (void (__stdcall *)(PVOID))v55->FreeEx == ExFreePool )
        ExFreePool((PVOID)v22);
      else
        guard_dispatch_icall_no_overrides(v22);
    }
    return 3221225485LL;
  }
  v82 = KeGetCurrentThread();
  Process = v82->ApcState.Process;
  if ( Process[1].ReadyTime )
  {
    v59 = WORD2(Process[3].PerProcessorCycleTimes);
    if ( v59 == 332 || v59 == 452 )
    {
      if ( EaLength && ((unsigned __int8)a10 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( EaLength < 0x10 )
      {
        v60 = KeGetCurrentPrcb();
        v61 = v60->PPLookasideList[8].P;
        ++v61->TotalFrees;
        if ( LOWORD(v61->ListHead.Alignment) < v61->Depth
          || (++v61->FreeMisses,
              v61 = v60->PPLookasideList[8].L,
              ++v61->TotalFrees,
              LOWORD(v61->ListHead.Alignment) < v61->Depth) )
        {
          RtlpInterlockedPushEntrySList(&v61->ListHead, (PSLIST_ENTRY)v22);
        }
        else
        {
          ++v61->FreeMisses;
          if ( (void (__stdcall *)(PVOID))v61->FreeEx == ExFreePool )
            ExFreePool((PVOID)v22);
          else
            guard_dispatch_icall_no_overrides(v22);
        }
        return 3221225485LL;
      }
      *(_QWORD *)(v22 + 216) = *a10;
      v28 = (_QWORD *)*((unsigned int *)a10 + 2);
      v77 = v28;
      v29 = *((_DWORD *)a10 + 3);
      v75 = v29;
      if ( EaLength >= 0x18 )
      {
        v30 = *((unsigned int *)a10 + 4);
        v76 = v30;
        if ( !*((_DWORD *)a10 + 4) )
          goto LABEL_40;
        if ( (v30 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v30 + 32 <= 0x7FFFFFFF0000LL && v30 + 32 >= v30 )
          goto LABEL_40;
LABEL_151:
        v29 = v75;
        v28 = v77;
        goto LABEL_113;
      }
      goto LABEL_113;
    }
  }
  if ( EaLength && ((unsigned __int8)a10 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( EaLength >= 0x18 )
  {
    *(_QWORD *)(v22 + 216) = *a10;
    v28 = (_QWORD *)a10[1];
    v77 = v28;
    v29 = *((_DWORD *)a10 + 4);
    v75 = v29;
    if ( EaLength >= 0x20 )
    {
      v30 = a10[3];
      v76 = v30;
      if ( !v30 )
        goto LABEL_40;
      if ( (v30 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v30 + 32 <= 0x7FFFFFFF0000LL && v30 + 32 >= v30 )
      {
LABEL_40:
        *(_QWORD *)(v22 + 72) = 0LL;
        if ( v28 && v29 )
        {
          if ( ((unsigned __int8)v28 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          Size = v29;
          v49 = (unsigned __int64)v28 + v29;
          if ( v49 < (unsigned __int64)v28 || v49 > 0x7FFFFFFF0000LL )
          {
            v28 = v77;
            v30 = v76;
            v29 = v75;
          }
          v50 = (void *)ExAllocatePool2(0x63uLL);
          *(_QWORD *)(v22 + 72) = v50;
          *(_DWORD *)(v22 + 80) = v29;
          memmove(v50, v28, Size);
          v51 = IoCheckEaBufferValidity(*(PFILE_FULL_EA_INFORMATION *)(v22 + 72), v29, (PULONG)a4 + 2);
          if ( v51 < 0 )
          {
            *a4 = v51;
            RtlRaiseStatus(v51);
          }
          goto LABEL_42;
        }
LABEL_41:
        *(_DWORD *)(v22 + 80) = 0;
        goto LABEL_42;
      }
      goto LABEL_151;
    }
LABEL_113:
    v30 = v76;
    goto LABEL_40;
  }
  v57 = KeGetCurrentPrcb();
  v58 = v57->PPLookasideList[8].P;
  ++v58->TotalFrees;
  if ( LOWORD(v58->ListHead.Alignment) < v58->Depth
    || (++v58->FreeMisses,
        v58 = v57->PPLookasideList[8].L,
        ++v58->TotalFrees,
        LOWORD(v58->ListHead.Alignment) < v58->Depth) )
  {
    RtlpInterlockedPushEntrySList(&v58->ListHead, (PSLIST_ENTRY)v22);
  }
  else
  {
    ++v58->FreeMisses;
    if ( (void (__stdcall *)(PVOID))v58->FreeEx == ExFreePool )
      ExFreePool((PVOID)v22);
    else
      guard_dispatch_icall_no_overrides(v22);
  }
  return 3221225485LL;
}
