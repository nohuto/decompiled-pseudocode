/*
 * XREFs of IopCreateFile @ 0x1409557C0
 * Callers:
 *     PopCreateHiberFile @ 0x140750050 (PopCreateHiberFile.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x1407836F0 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpSysVolTakeOwnership @ 0x140783EA8 (RtlpSysVolTakeOwnership.c)
 *     SmKmStoreFileCreateForIoType @ 0x14079AD0C (SmKmStoreFileCreateForIoType.c)
 *     MiCreatePagingFile @ 0x1407EE934 (MiCreatePagingFile.c)
 *     PfpVolumeOpenAndVerify @ 0x140934634 (PfpVolumeOpenAndVerify.c)
 *     PfSnIsVolumeMounted @ 0x140954FEC (PfSnIsVolumeMounted.c)
 *     IopOpenLinkOrRenameTarget @ 0x140955124 (IopOpenLinkOrRenameTarget.c)
 *     IoCreateFile @ 0x140955480 (IoCreateFile.c)
 *     IoCreateFileEx @ 0x140955520 (IoCreateFileEx.c)
 *     NtOpenFile @ 0x1409556C0 (NtOpenFile.c)
 *     NtCreateFile @ 0x140955730 (NtCreateFile.c)
 *     PfSnGetPrefetchInstructions @ 0x140959434 (PfSnGetPrefetchInstructions.c)
 *     NtCreateNamedPipeFile @ 0x140A24AA0 (NtCreateNamedPipeFile.c)
 *     NtCreateMailslotFile @ 0x140A75CB0 (NtCreateMailslotFile.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ExAllocateFromPagedLookasideList @ 0x1403EFFF0 (ExAllocateFromPagedLookasideList.c)
 *     PsGetCurrentSilo @ 0x1403FCA20 (PsGetCurrentSilo.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B4830 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     IopCloseFile @ 0x14083E330 (IopCloseFile.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ObOpenObjectByNameEx @ 0x1408A41E0 (ObOpenObjectByNameEx.c)
 *     IopCleanupExtraCreateParameters @ 0x1408AABE0 (IopCleanupExtraCreateParameters.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x1408AAD60 (FsRtlFreeExtraCreateParameterList.c)
 *     FsRtlFreeExtraCreateParameter @ 0x1408AB0A0 (FsRtlFreeExtraCreateParameter.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     FsRtlpPrepareExtraCreateParametersForCreate @ 0x1409568C0 (FsRtlpPrepareExtraCreateParametersForCreate.c)
 *     IoCheckEaBufferValidity @ 0x140A15CA0 (IoCheckEaBufferValidity.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
        __int64 a10,
        unsigned int a11,
        int a12,
        _DWORD *a13,
        int a14,
        int a15,
        __int16 *Src)
{
  int v16; // r12d
  char v17; // cl
  char PreviousMode; // al
  struct _KPRCB *CurrentPrcb; // rsi
  _GENERAL_LOOKASIDE *P; // rdi
  __int64 v21; // rbx
  _GENERAL_LOOKASIDE *L; // rdi
  struct _KPRCB *v23; // rdx
  _GENERAL_LOOKASIDE *v24; // rcx
  _DWORD *v26; // r13
  struct _KPRCB *v27; // rdx
  _GENERAL_LOOKASIDE *v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  struct _KPRCB *v31; // rdx
  _GENERAL_LOOKASIDE *v32; // rcx
  _KPROCESS *Process; // rcx
  __int16 v34; // ax
  struct _KPRCB *v35; // rdx
  _GENERAL_LOOKASIDE *v36; // rcx
  unsigned __int64 v37; // rsi
  ULONG v38; // r14d
  unsigned __int64 v39; // rdi
  struct _KPRCB *v40; // rdx
  _GENERAL_LOOKASIDE *v41; // rcx
  ULONG_PTR v42; // r15
  unsigned __int64 v43; // rax
  void *v44; // rax
  int v45; // eax
  int v46; // ecx
  const void *v47; // r14
  ULONG v48; // esi
  void *Pool2; // rax
  struct _KPRCB *v50; // rdx
  _GENERAL_LOOKASIDE *v51; // rcx
  NTSTATUS v52; // esi
  struct _KPRCB *v53; // rdx
  _GENERAL_LOOKASIDE *v54; // rcx
  char v55; // r14
  size_t v56; // r8
  PECP_LIST v57; // r13
  __int64 v58; // rsi
  __int64 v59; // rax
  __int64 v60; // r14
  int v61; // edi
  struct _LIST_ENTRY *v62; // r15
  bool v63; // al
  bool v64; // al
  struct _ECP_LIST *v65; // rax
  struct _ECP_LIST *v66; // rcx
  _LIST_ENTRY *p_EcpList; // rax
  int v68; // r8d
  _LIST_ENTRY *v69; // rdx
  struct _LIST_ENTRY *Flink; // rcx
  int v71; // edi
  struct _LIST_ENTRY *Blink; // rax
  void *v73; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int v75; // edi
  void *v76; // rcx
  int v77; // esi
  int v78; // ecx
  __int64 v79; // rcx
  __int64 v80; // rax
  void *v81; // rcx
  unsigned int v82; // [rsp+40h] [rbp-88h]
  unsigned int v83; // [rsp+48h] [rbp-80h]
  unsigned __int64 v84; // [rsp+50h] [rbp-78h]
  int v85; // [rsp+58h] [rbp-70h]
  __int64 v86; // [rsp+68h] [rbp-60h]
  char v87; // [rsp+70h] [rbp-58h]
  HANDLE Handle; // [rsp+78h] [rbp-50h] BYREF
  int v89; // [rsp+80h] [rbp-48h]
  PECP_LIST EcpList; // [rsp+88h] [rbp-40h]
  int v95; // [rsp+138h] [rbp+70h]

  v89 = a14;
  v16 = a9;
  v17 = 0;
  v84 = 0LL;
  EcpList = 0LL;
  v85 = 0;
  Handle = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (a14 & 0x100) == 0 )
    v17 = PreviousMode;
  v87 = v17;
  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[8].P;
  ++P->TotalAllocates;
  v21 = (__int64)RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( !v21 )
  {
    ++P->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[8].L;
    ++L->TotalAllocates;
    v21 = (__int64)RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( !v21 )
    {
      ++L->AllocateMisses;
      v21 = guard_dispatch_icall_no_overrides((unsigned int)L->Type, L->Size);
    }
  }
  if ( !v21 )
    return 3221225626LL;
  *(_DWORD *)v21 = CurrentPrcb->Number;
  if ( !v87 && (a14 & 0x200) == 0 )
    goto LABEL_50;
  if ( (a6 & 0xFFA50048) != 0
    || (a7 & 0xFFFFFFF8) != 0
    || a8 > 5
    || (a9 & 0xEF000000) != 0
    || (a9 & 0x30) != 0 && (a2 & 0x100000) == 0
    || (a9 & 0x1000) != 0 && (a2 & 0x10000) == 0
    || (a9 & 0x30) == 0x30
    || (a9 & 0x41) == 1 && ((a9 & 0xEF5C0ACC) != 0 || a8 - 1 > 2)
    || (a9 & 0x100100) == 0x100100
    || (a9 & 0x10100) == 0x10100
    || (a9 & 0x110000) == 0x110000
    || (a9 & 8) != 0 && (a2 & 4) != 0 )
  {
    goto LABEL_41;
  }
  if ( IopFailZeroAccessCreate && !a2 )
  {
    v23 = KeGetCurrentPrcb();
    v24 = v23->PPLookasideList[8].P;
    ++v24->TotalFrees;
    if ( LOWORD(v24->ListHead.Alignment) < v24->Depth
      || (++v24->FreeMisses,
          v24 = v23->PPLookasideList[8].L,
          ++v24->TotalFrees,
          LOWORD(v24->ListHead.Alignment) < v24->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v24->ListHead, (PSLIST_ENTRY)v21);
      return 3221225506LL;
    }
    else
    {
      ++v24->FreeMisses;
      guard_dispatch_icall_no_overrides(v21, v23);
      return 3221225506LL;
    }
  }
  if ( !a12 )
  {
LABEL_50:
    v26 = a13;
    goto LABEL_51;
  }
  v26 = a13;
  if ( a12 != 1 )
  {
    if ( a12 != 2 )
      goto LABEL_51;
    if ( a13 && (a7 & 4) == 0 && (a7 & 0xFFFFFFFD) != 0 && a8 == 2 )
      goto LABEL_40;
LABEL_41:
    v27 = KeGetCurrentPrcb();
    v28 = v27->PPLookasideList[8].P;
    ++v28->TotalFrees;
    if ( LOWORD(v28->ListHead.Alignment) < v28->Depth
      || (++v28->FreeMisses,
          v28 = v27->PPLookasideList[8].L,
          ++v28->TotalFrees,
          LOWORD(v28->ListHead.Alignment) < v28->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v28->ListHead, (PSLIST_ENTRY)v21);
      return 3221225485LL;
    }
    else
    {
      ++v28->FreeMisses;
      guard_dispatch_icall_no_overrides(v21, v27);
      return 3221225485LL;
    }
  }
  if ( !a13 || (*a13 & 0xFFFFFFFC) != 0 || a13[1] > 1u || a13[2] > 1u || (a7 & 4) != 0 || a8 - 1 > 2 )
    goto LABEL_41;
LABEL_40:
  if ( (a9 & 0xFFFFFFCD) != 0 )
    goto LABEL_41;
LABEL_51:
  if ( !v87 )
  {
    v16 = a9 & 0x7FFFFFFF;
    if ( a9 >= 0 )
      v16 = a9;
    v46 = v89 | 0x400;
    if ( a9 >= 0 )
      v46 = v89;
    v95 = v46;
    if ( a5 )
    {
      if ( (__int64)*a5 < 0 )
        goto LABEL_41;
      Handle = *a5;
    }
    if ( (v16 & 0x10000000) != 0 )
    {
      if ( a11 < 0x18 )
        goto LABEL_41;
      *(_QWORD *)(v21 + 216) = *(_QWORD *)a10;
      v47 = *(const void **)(a10 + 8);
      v48 = *(_DWORD *)(a10 + 16);
      if ( a11 >= 0x20 )
      {
        v39 = *(_QWORD *)(a10 + 24);
        goto LABEL_122;
      }
    }
    else
    {
      *(_QWORD *)(v21 + 216) = 0LL;
      v47 = (const void *)a10;
      v48 = a11;
    }
    v39 = 0LL;
LABEL_122:
    if ( !v47 || !v48 )
    {
      *(_QWORD *)(v21 + 72) = 0LL;
      goto LABEL_138;
    }
    Pool2 = (void *)ExAllocatePool2(0x42uLL, v48, 0x61456F49u);
    *(_QWORD *)(v21 + 72) = Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)(v21 + 80) = v48;
      memmove(Pool2, v47, v48);
      v52 = IoCheckEaBufferValidity(*(PFILE_FULL_EA_INFORMATION *)(v21 + 72), v48, (PULONG)a4 + 2);
      v82 = v52;
      if ( v52 < 0 )
      {
        ExFreePoolWithTag(*(PVOID *)(v21 + 72), 0);
        *a4 = v52;
LABEL_132:
        v53 = KeGetCurrentPrcb();
        v54 = v53->PPLookasideList[8].P;
        ++v54->TotalFrees;
        if ( LOWORD(v54->ListHead.Alignment) < v54->Depth
          || (++v54->FreeMisses,
              v54 = v53->PPLookasideList[8].L,
              ++v54->TotalFrees,
              LOWORD(v54->ListHead.Alignment) < v54->Depth) )
        {
          RtlpInterlockedPushEntrySList(&v54->ListHead, (PSLIST_ENTRY)v21);
          return v82;
        }
        else
        {
          ++v54->FreeMisses;
          guard_dispatch_icall_no_overrides(v21, v53);
          return v82;
        }
      }
      v46 = v95;
LABEL_139:
      *(_DWORD *)v21 = 14680072;
      *(_DWORD *)(v21 + 32) = 0;
      *(_QWORD *)(v21 + 24) = 0LL;
      *(_QWORD *)(v21 + 56) = Handle;
      *(_DWORD *)(v21 + 64) = v16 & 0xFFFFFF;
      *(_WORD *)(v21 + 68) = a6;
      *(_WORD *)(v21 + 70) = a7;
      *(_DWORD *)(v21 + 88) = a8;
      *(_WORD *)(v21 + 136) = 0;
      *(_BYTE *)(v21 + 138) = 0;
      *(_DWORD *)(v21 + 84) = v46;
      *(_QWORD *)(v21 + 40) = 0LL;
      *(_QWORD *)(v21 + 48) = a3;
      *(_DWORD *)(v21 + 120) = a12;
      *(_QWORD *)(v21 + 128) = v26;
      *(_DWORD *)(v21 + 152) = a15;
      v55 = v87;
      *(_BYTE *)(v21 + 156) = v87;
      *(_OWORD *)(v21 + 160) = 0LL;
      *(_OWORD *)(v21 + 176) = 0LL;
      *(_WORD *)(v21 + 160) = 40;
      *(_QWORD *)(v21 + 192) = 1LL;
      if ( Src )
      {
        v56 = *Src;
        if ( v56 > 0x28 )
          v56 = 40LL;
        memmove((void *)(v21 + 160), Src, v56);
      }
      if ( v39 )
      {
        v57 = *(PECP_LIST *)(v21 + 168);
        v58 = 0LL;
        v59 = ExAllocatePool2(0x100uLL, 0x6CuLL, 0x6A536F49u);
        v60 = v59;
        if ( !v59 )
        {
          v61 = -1073741670;
          v82 = -1073741670;
LABEL_190:
          if ( v85 )
          {
            FsRtlFreeExtraCreateParameterList(v57);
            *(_QWORD *)(v21 + 168) = 0LL;
          }
          else
          {
            IopCleanupExtraCreateParameters(v21);
          }
          if ( v58 )
            FsRtlFreeExtraCreateParameter((PVOID)v58);
          v73 = *(void **)(v21 + 72);
          if ( v73 )
            ExFreePoolWithTag(v73, 0);
          *a4 = v61;
          goto LABEL_132;
        }
        *(_QWORD *)v59 = 1215324997LL;
        *(_QWORD *)(v59 + 16) = 0LL;
        v62 = (struct _LIST_ENTRY *)(v59 + 8);
        *(_QWORD *)(v59 + 8) = 0LL;
        *(GUID *)(v59 + 24) = GUID_ECP_DUAL_OPLOCK_KEY;
        *(_QWORD *)(v59 + 40) = 0LL;
        *(_DWORD *)(v59 + 48) = 2;
        *(_DWORD *)(v59 + 52) = 108;
        *(_QWORD *)(v59 + 56) = 0LL;
        *(_QWORD *)(v59 + 64) = 0LL;
        v58 = v59 + 72;
        *(_OWORD *)(v59 + 72) = *(_OWORD *)v39;
        *(_OWORD *)(v59 + 88) = *(_OWORD *)(v39 + 16);
        v63 = *(_DWORD *)(v59 + 72)
           || *(_WORD *)(v59 + 76)
           || *(_WORD *)(v59 + 78)
           || *(_BYTE *)(v59 + 80)
           || *(_BYTE *)(v59 + 81)
           || *(_BYTE *)(v59 + 82)
           || *(_BYTE *)(v59 + 83)
           || *(_BYTE *)(v59 + 84)
           || *(_BYTE *)(v59 + 85)
           || *(_BYTE *)(v59 + 86)
           || *(_BYTE *)(v59 + 87);
        *(_BYTE *)(v58 + 32) = v63;
        v64 = *(_DWORD *)(v58 + 16)
           || *(_WORD *)(v58 + 20)
           || *(_WORD *)(v58 + 22)
           || *(_BYTE *)(v58 + 24)
           || *(_BYTE *)(v58 + 25)
           || *(_BYTE *)(v58 + 26)
           || *(_BYTE *)(v58 + 27)
           || *(_BYTE *)(v58 + 28)
           || *(_BYTE *)(v58 + 29)
           || *(_BYTE *)(v58 + 30)
           || *(_BYTE *)(v58 + 31);
        *(_BYTE *)(v58 + 33) = v64;
        if ( v57 )
        {
          v68 = 0;
        }
        else
        {
          v57 = 0LL;
          v65 = (struct _ECP_LIST *)ExAllocateFromPagedLookasideList(&FsRtlEcpListLookaside);
          v66 = v65;
          if ( !v65 )
          {
            v61 = -1073741670;
            v82 = -1073741670;
            goto LABEL_190;
          }
          p_EcpList = &v65->EcpList;
          p_EcpList->Blink = p_EcpList;
          p_EcpList->Flink = p_EcpList;
          v66->Flags = 6;
          v66->Signature = 1282433861;
          v57 = v66;
          v68 = 1;
          v85 = 1;
          *(_QWORD *)(v21 + 168) = v66;
        }
        v69 = &v57->EcpList;
        Flink = v57->EcpList.Flink;
        v71 = -1073741275;
        if ( Flink != &v57->EcpList )
        {
          while ( Flink[1].Flink != *(struct _LIST_ENTRY **)(v60 + 24)
               || Flink[1].Blink != *(struct _LIST_ENTRY **)(v60 + 32) )
          {
            Flink = Flink->Flink;
            if ( Flink == v69 )
              goto LABEL_183;
          }
          LODWORD(Flink[2].Blink) |= 4u;
          v71 = 0;
        }
LABEL_183:
        if ( !v71 )
        {
          v61 = -1073741811;
          v82 = -1073741811;
          goto LABEL_190;
        }
        Blink = v57->EcpList.Blink;
        if ( Blink->Flink != v69 )
          __fastfail(3u);
        v62->Flink = v69;
        v62->Blink = Blink;
        Blink->Flink = v62;
        v57->EcpList.Blink = v62;
        v61 = 0;
        v82 = 0;
        v58 = 0LL;
        if ( v68 )
        {
          v61 = FsRtlpPrepareExtraCreateParametersForCreate((ULONG_PTR)v57);
          v82 = v61;
        }
        if ( v61 < 0 )
          goto LABEL_190;
        v55 = v87;
      }
      else
      {
        v57 = EcpList;
      }
      if ( *(_QWORD *)(v21 + 192) == 1LL )
        *(_QWORD *)(v21 + 192) = PsGetCurrentSilo();
      *(_DWORD *)(v21 + 16) = 0;
      *(_QWORD *)(v21 + 8) = 0LL;
      CurrentThread = KeGetCurrentThread();
      ++CurrentThread->OtherOperationCount;
      __incgsdword(0x2EE4u);
      v75 = ObOpenObjectByNameEx(a3, (__int64)IoFileObjectType, v55, 0LL, a2, v21, *(_QWORD *)(v21 + 192), &Handle);
      v82 = v75;
      v76 = *(void **)(v21 + 72);
      if ( v76 )
        ExFreePoolWithTag(v76, 0);
      if ( v85 )
      {
        FsRtlFreeExtraCreateParameterList(v57);
        *(_QWORD *)(v21 + 168) = 0LL;
      }
      else
      {
        IopCleanupExtraCreateParameters(v21);
      }
      v77 = *(_DWORD *)(v21 + 32);
      if ( v75 >= 0 )
      {
        if ( v77 == -1096154543 )
        {
          *(_DWORD *)(*(_QWORD *)(v21 + 8) + 80LL) |= 0x40000u;
          *(_DWORD *)(*(_QWORD *)(v21 + 8) + 80LL) &= ~0x2000000u;
          *a1 = Handle;
          *((_QWORD *)a4 + 1) = *(_QWORD *)(v21 + 24);
          *a4 = *(_DWORD *)(v21 + 16);
          v82 = *(_DWORD *)(v21 + 16);
LABEL_227:
          if ( v77 == -1096154543 )
          {
            v81 = *(void **)(v21 + 8);
            if ( v81 )
              ObfDereferenceObject(v81);
          }
          goto LABEL_132;
        }
        ObCloseHandle(Handle, v55);
        v75 = -1073741788;
        v82 = -1073741788;
      }
      v78 = *(_DWORD *)(v21 + 16);
      if ( v78 >= 0 )
      {
        v79 = *(_QWORD *)(v21 + 8);
        if ( v79 )
        {
          if ( v77 == -1096154543 )
          {
            if ( (*(_DWORD *)(v79 + 80) & 0x40000) == 0 )
              IopCloseFile(0LL, *(struct _FILE_OBJECT **)(v21 + 8), 1LL, 1LL);
          }
          else
          {
            if ( *(_WORD *)(v79 + 88) )
              ExFreePoolWithTag(*(PVOID *)(v79 + 96), 0);
            *(_QWORD *)(*(_QWORD *)(v21 + 8) + 8LL) = 0LL;
            ObfDereferenceObject(*(PVOID *)(v21 + 8));
          }
        }
      }
      else
      {
        v75 = *(_DWORD *)(v21 + 16);
        v82 = v75;
        if ( (v78 & 0xC0000000) == 0x80000000 || v78 == -1073741191 )
        {
          *a4 = v78;
          *((_QWORD *)a4 + 1) = *(_QWORD *)(v21 + 24);
        }
      }
      if ( v75 == -1073741772 )
      {
        v80 = *(_QWORD *)(v21 + 24);
        if ( v80 == 2684354563LL || v80 == 2684354572LL || v80 == 2684354585LL )
          v82 = -1073741184;
      }
      goto LABEL_227;
    }
    v50 = KeGetCurrentPrcb();
    v51 = v50->PPLookasideList[8].P;
    ++v51->TotalFrees;
    if ( LOWORD(v51->ListHead.Alignment) < v51->Depth
      || (++v51->FreeMisses,
          v51 = v50->PPLookasideList[8].L,
          ++v51->TotalFrees,
          LOWORD(v51->ListHead.Alignment) < v51->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v51->ListHead, (PSLIST_ENTRY)v21);
    }
    else
    {
      ++v51->FreeMisses;
      guard_dispatch_icall_no_overrides(v21, v50);
    }
    return 3221225626LL;
  }
  v29 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
    v29 = (__int64)a1;
  *(_QWORD *)v29 = *(_QWORD *)v29;
  v30 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
    v30 = (__int64)a4;
  *(_DWORD *)v30 = *(_DWORD *)v30;
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
    *(_QWORD *)(v21 + 216) = 0LL;
    v37 = a10;
    v86 = a10;
    v38 = a11;
    v83 = a11;
    v39 = 0LL;
    goto LABEL_100;
  }
  if ( !a10 )
  {
    v31 = KeGetCurrentPrcb();
    v32 = v31->PPLookasideList[8].P;
    ++v32->TotalFrees;
    if ( LOWORD(v32->ListHead.Alignment) < v32->Depth
      || (++v32->FreeMisses,
          v32 = v31->PPLookasideList[8].L,
          ++v32->TotalFrees,
          LOWORD(v32->ListHead.Alignment) < v32->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v32->ListHead, (PSLIST_ENTRY)v21);
    }
    else
    {
      ++v32->FreeMisses;
      guard_dispatch_icall_no_overrides(v21, v31);
    }
    return 3221225485LL;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( Process[1].ReadyTime )
  {
    v34 = WORD2(Process[3].PerProcessorCycleTimes);
    if ( v34 == 332 || v34 == 452 )
    {
      if ( a11 && (a10 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a11 < 0x10 )
      {
        v35 = KeGetCurrentPrcb();
        v36 = v35->PPLookasideList[8].P;
        ++v36->TotalFrees;
        if ( LOWORD(v36->ListHead.Alignment) < v36->Depth
          || (++v36->FreeMisses,
              v36 = v35->PPLookasideList[8].L,
              ++v36->TotalFrees,
              LOWORD(v36->ListHead.Alignment) < v36->Depth) )
        {
          RtlpInterlockedPushEntrySList(&v36->ListHead, (PSLIST_ENTRY)v21);
        }
        else
        {
          ++v36->FreeMisses;
          guard_dispatch_icall_no_overrides(v21, v35);
        }
        return 3221225485LL;
      }
      *(_QWORD *)(v21 + 216) = *(_QWORD *)a10;
      v37 = *(unsigned int *)(a10 + 8);
      v86 = v37;
      v38 = *(_DWORD *)(a10 + 12);
      v83 = v38;
      if ( a11 >= 0x18 )
      {
        v39 = *(unsigned int *)(a10 + 16);
        v84 = v39;
        if ( !*(_DWORD *)(a10 + 16) )
          goto LABEL_100;
        if ( (v39 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
LABEL_94:
        if ( v39 + 32 <= 0x7FFFFFFF0000LL && v39 + 32 >= v39 )
          goto LABEL_100;
        v38 = v83;
        v37 = v86;
        goto LABEL_97;
      }
      goto LABEL_97;
    }
  }
  if ( a11 && (a10 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( a11 >= 0x18 )
  {
    *(_QWORD *)(v21 + 216) = *(_QWORD *)a10;
    v37 = *(_QWORD *)(a10 + 8);
    v86 = v37;
    v38 = *(_DWORD *)(a10 + 16);
    v83 = v38;
    if ( a11 >= 0x20 )
    {
      v39 = *(_QWORD *)(a10 + 24);
      v84 = v39;
      if ( !v39 )
        goto LABEL_100;
      if ( (v39 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      goto LABEL_94;
    }
LABEL_97:
    v39 = v84;
LABEL_100:
    *(_QWORD *)(v21 + 72) = 0LL;
    if ( v37 && v38 )
    {
      if ( (v37 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v42 = v38;
      v43 = v38 + v37;
      if ( v43 > 0x7FFFFFFF0000LL || v43 < v37 )
      {
        v37 = v86;
        v39 = v84;
        v38 = v83;
      }
      v44 = (void *)ExAllocatePool2(0x63uLL, v42, 0x61456F49u);
      *(_QWORD *)(v21 + 72) = v44;
      *(_DWORD *)(v21 + 80) = v38;
      memmove(v44, (const void *)v37, v42);
      v45 = IoCheckEaBufferValidity(*(PFILE_FULL_EA_INFORMATION *)(v21 + 72), v38, (PULONG)a4 + 2);
      if ( v45 < 0 )
      {
        *a4 = v45;
        RtlRaiseStatus(v45);
      }
      v46 = a14;
      goto LABEL_139;
    }
    v46 = a14;
LABEL_138:
    *(_DWORD *)(v21 + 80) = 0;
    goto LABEL_139;
  }
  v40 = KeGetCurrentPrcb();
  v41 = v40->PPLookasideList[8].P;
  ++v41->TotalFrees;
  if ( LOWORD(v41->ListHead.Alignment) < v41->Depth
    || (++v41->FreeMisses,
        v41 = v40->PPLookasideList[8].L,
        ++v41->TotalFrees,
        LOWORD(v41->ListHead.Alignment) < v41->Depth) )
  {
    RtlpInterlockedPushEntrySList(&v41->ListHead, (PSLIST_ENTRY)v21);
  }
  else
  {
    ++v41->FreeMisses;
    guard_dispatch_icall_no_overrides(v21, v40);
  }
  return 3221225485LL;
}
