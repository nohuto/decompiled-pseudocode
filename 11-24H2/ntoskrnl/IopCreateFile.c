/*
 * XREFs of IopCreateFile @ 0x14096CD60
 * Callers:
 *     PopCreateHiberFile @ 0x140751D30 (PopCreateHiberFile.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x1407837C0 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpSysVolTakeOwnership @ 0x140783F78 (RtlpSysVolTakeOwnership.c)
 *     SmKmStoreFileCreateForIoType @ 0x14079ABFC (SmKmStoreFileCreateForIoType.c)
 *     MiCreatePagingFile @ 0x1407EE364 (MiCreatePagingFile.c)
 *     PfpVolumeOpenAndVerify @ 0x140950C88 (PfpVolumeOpenAndVerify.c)
 *     PfSnIsVolumeMounted @ 0x14096C58C (PfSnIsVolumeMounted.c)
 *     IopOpenLinkOrRenameTarget @ 0x14096C6C4 (IopOpenLinkOrRenameTarget.c)
 *     IoCreateFile @ 0x14096CA20 (IoCreateFile.c)
 *     IoCreateFileEx @ 0x14096CAC0 (IoCreateFileEx.c)
 *     NtOpenFile @ 0x14096CC60 (NtOpenFile.c)
 *     NtCreateFile @ 0x14096CCD0 (NtCreateFile.c)
 *     PfSnGetPrefetchInstructions @ 0x140970C24 (PfSnGetPrefetchInstructions.c)
 *     NtCreateNamedPipeFile @ 0x140A2FFB0 (NtCreateNamedPipeFile.c)
 *     NtCreateMailslotFile @ 0x140A7B9B0 (NtCreateMailslotFile.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140280B30 (RtlRaiseStatus.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ExAllocateFromPagedLookasideList @ 0x1403FA0E0 (ExAllocateFromPagedLookasideList.c)
 *     PsGetCurrentSilo @ 0x140402420 (PsGetCurrentSilo.c)
 *     Feature_FsRtlpCleanupEcpsOplockKeysFix__private_IsEnabledDeviceUsageNoInline @ 0x1405967D4 (Feature_FsRtlpCleanupEcpsOplockKeysFix__private_IsEnabledDeviceUsageNoInline.c)
 *     RtlpInterlockedPopEntrySList @ 0x1406B3890 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     IopCloseFile @ 0x140842070 (IopCloseFile.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     ObOpenObjectByNameEx @ 0x14089BB40 (ObOpenObjectByNameEx.c)
 *     IopCleanupExtraCreateParameters @ 0x1408A2540 (IopCleanupExtraCreateParameters.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x1408A26C0 (FsRtlFreeExtraCreateParameterList.c)
 *     FsRtlFreeExtraCreateParameter @ 0x1408A2A00 (FsRtlFreeExtraCreateParameter.c)
 *     ObCloseHandle @ 0x1408A2B10 (ObCloseHandle.c)
 *     FsRtlpPrepareExtraCreateParametersForCreate @ 0x14096E0B0 (FsRtlpPrepareExtraCreateParametersForCreate.c)
 *     IoCheckEaBufferValidity @ 0x140A20A20 (IoCheckEaBufferValidity.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopCreateFile(
        HANDLE *a1,
        unsigned int a2,
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
  unsigned int v17; // ecx
  unsigned int PreviousMode; // eax
  struct _KPRCB *CurrentPrcb; // rsi
  _GENERAL_LOOKASIDE *P; // rdi
  __int64 v21; // rbx
  __int64 v22; // r8
  _GENERAL_LOOKASIDE *L; // rdi
  __int64 v24; // r9
  struct _KPRCB *v25; // rdx
  _GENERAL_LOOKASIDE *v26; // rcx
  _DWORD *v28; // r13
  struct _KPRCB *v29; // rdx
  _GENERAL_LOOKASIDE *v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  struct _KPRCB *v33; // rdx
  _GENERAL_LOOKASIDE *v34; // rcx
  _KPROCESS *Process; // rcx
  __int16 v36; // ax
  struct _KPRCB *v37; // rdx
  _GENERAL_LOOKASIDE *v38; // rcx
  unsigned __int64 v39; // rsi
  ULONG v40; // r14d
  unsigned __int64 v41; // rdi
  struct _KPRCB *v42; // rdx
  _GENERAL_LOOKASIDE *v43; // rcx
  size_t v44; // r15
  unsigned __int64 v45; // rax
  void *v46; // rax
  NTSTATUS v47; // eax
  int v48; // ecx
  const void *v49; // r14
  ULONG v50; // esi
  void *Pool2; // rax
  __int64 v52; // r8
  __int64 v53; // r9
  struct _KPRCB *v54; // rdx
  _GENERAL_LOOKASIDE *v55; // rcx
  NTSTATUS v56; // esi
  __int64 v57; // r8
  __int64 v58; // r9
  struct _KPRCB *v59; // rdx
  _GENERAL_LOOKASIDE *v60; // rcx
  _QWORD *v61; // r15
  __int64 v62; // r14
  char v63; // r12
  size_t v64; // r8
  _DWORD *v65; // r15
  struct _ECP_LIST *v66; // r13
  __int64 v67; // rsi
  __int64 v68; // rax
  __int64 v69; // r14
  int v70; // edi
  __int64 **v71; // r12
  bool v72; // al
  bool v73; // al
  char *v74; // rax
  _DWORD *v75; // rcx
  _QWORD *v76; // rax
  __int64 *v77; // rdx
  __int64 *v78; // rcx
  int v79; // edi
  __int64 **v80; // rax
  void *v81; // rcx
  __int64 v82; // rax
  __int64 v83; // r14
  struct _LIST_ENTRY *v84; // r15
  bool v85; // al
  bool v86; // al
  struct _ECP_LIST *v87; // rax
  struct _ECP_LIST *v88; // rcx
  _LIST_ENTRY *p_EcpList; // rax
  int v90; // r8d
  _LIST_ENTRY *v91; // rdx
  struct _LIST_ENTRY *Flink; // rcx
  int v93; // edi
  struct _LIST_ENTRY *Blink; // rax
  PVOID *v95; // rsi
  struct _KTHREAD *CurrentThread; // rax
  int v97; // edi
  void *v98; // rcx
  int v99; // r14d
  int v100; // ecx
  PVOID v101; // rcx
  __int64 v102; // rax
  unsigned int v103; // [rsp+40h] [rbp-88h]
  unsigned int v104; // [rsp+48h] [rbp-80h]
  unsigned __int64 v105; // [rsp+50h] [rbp-78h]
  int v106; // [rsp+58h] [rbp-70h]
  __int64 v107; // [rsp+68h] [rbp-60h]
  unsigned int v108; // [rsp+70h] [rbp-58h]
  HANDLE Handle; // [rsp+78h] [rbp-50h] BYREF
  _QWORD *v110; // [rsp+80h] [rbp-48h]
  struct _ECP_LIST *v111; // [rsp+88h] [rbp-40h]
  int v116; // [rsp+138h] [rbp+70h]

  LODWORD(v110) = a14;
  v16 = a9;
  v17 = 0;
  v105 = 0LL;
  v111 = 0LL;
  v106 = 0;
  Handle = 0LL;
  PreviousMode = (unsigned __int8)KeGetCurrentThread()->PreviousMode;
  if ( (a14 & 0x100) == 0 )
    v17 = PreviousMode;
  v108 = v17;
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
      v21 = guard_dispatch_icall_no_overrides((unsigned int)L->Type, L->Size, L->Tag, v24);
    }
  }
  if ( !v21 )
    return 3221225626LL;
  *(_DWORD *)v21 = CurrentPrcb->Number;
  if ( !(_BYTE)v108 && (a14 & 0x200) == 0 )
    goto LABEL_50;
  if ( (a6 & 0xFFA50048) != 0 )
    goto LABEL_41;
  if ( (a7 & 0xFFFFFFF8) != 0 )
    goto LABEL_41;
  if ( a8 > 5 )
    goto LABEL_41;
  if ( (a9 & 0xEF000000) != 0 )
    goto LABEL_41;
  v22 = a2;
  if ( (a9 & 0x30) != 0 && (a2 & 0x100000) == 0 )
    goto LABEL_41;
  if ( (a9 & 0x1000) != 0 && (a2 & 0x10000) == 0
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
    v25 = KeGetCurrentPrcb();
    v26 = v25->PPLookasideList[8].P;
    ++v26->TotalFrees;
    if ( LOWORD(v26->ListHead.Alignment) < v26->Depth
      || (++v26->FreeMisses,
          v26 = v25->PPLookasideList[8].L,
          ++v26->TotalFrees,
          LOWORD(v26->ListHead.Alignment) < v26->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v26->ListHead, (PSLIST_ENTRY)v21);
      return 3221225506LL;
    }
    else
    {
      ++v26->FreeMisses;
      guard_dispatch_icall_no_overrides(v21, v25, a2, v108);
      return 3221225506LL;
    }
  }
  if ( !a12 )
  {
LABEL_50:
    v28 = a13;
    goto LABEL_51;
  }
  v28 = a13;
  if ( a12 != 1 )
  {
    if ( a12 != 2 )
      goto LABEL_51;
    if ( a13 && (a7 & 4) == 0 && (a7 & 0xFFFFFFFD) != 0 && a8 == 2 )
      goto LABEL_40;
LABEL_41:
    v29 = KeGetCurrentPrcb();
    v30 = v29->PPLookasideList[8].P;
    ++v30->TotalFrees;
    if ( LOWORD(v30->ListHead.Alignment) < v30->Depth
      || (++v30->FreeMisses,
          v30 = v29->PPLookasideList[8].L,
          ++v30->TotalFrees,
          LOWORD(v30->ListHead.Alignment) < v30->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v30->ListHead, (PSLIST_ENTRY)v21);
      return 3221225485LL;
    }
    else
    {
      ++v30->FreeMisses;
      guard_dispatch_icall_no_overrides(v21, v29, v22, v108);
      return 3221225485LL;
    }
  }
  if ( !a13 || (*a13 & 0xFFFFFFFC) != 0 || a13[1] > 1u || a13[2] > 1u || (a7 & 4) != 0 || a8 - 1 > 2 )
    goto LABEL_41;
LABEL_40:
  if ( (a9 & 0xFFFFFFCD) != 0 )
    goto LABEL_41;
LABEL_51:
  if ( !(_BYTE)v108 )
  {
    v16 = a9 & 0x7FFFFFFF;
    if ( a9 >= 0 )
      v16 = a9;
    v48 = (unsigned int)v110 | 0x400;
    if ( a9 >= 0 )
      v48 = (int)v110;
    v116 = v48;
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
      v49 = *(const void **)(a10 + 8);
      v50 = *(_DWORD *)(a10 + 16);
      if ( a11 >= 0x20 )
      {
        v41 = *(_QWORD *)(a10 + 24);
        goto LABEL_122;
      }
    }
    else
    {
      *(_QWORD *)(v21 + 216) = 0LL;
      v49 = (const void *)a10;
      v50 = a11;
    }
    v41 = 0LL;
LABEL_122:
    if ( !v49 || !v50 )
    {
      *(_QWORD *)(v21 + 72) = 0LL;
      goto LABEL_138;
    }
    Pool2 = (void *)ExAllocatePool2(0x42uLL);
    *(_QWORD *)(v21 + 72) = Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)(v21 + 80) = v50;
      memmove(Pool2, v49, v50);
      v56 = IoCheckEaBufferValidity(*(PFILE_FULL_EA_INFORMATION *)(v21 + 72), v50, (PULONG)a4 + 2);
      v103 = v56;
      if ( v56 < 0 )
      {
        ExFreePoolWithTag(*(PVOID *)(v21 + 72), 0);
        *a4 = v56;
LABEL_132:
        v59 = KeGetCurrentPrcb();
        v60 = v59->PPLookasideList[8].P;
        ++v60->TotalFrees;
        if ( LOWORD(v60->ListHead.Alignment) < v60->Depth
          || (++v60->FreeMisses,
              v60 = v59->PPLookasideList[8].L,
              ++v60->TotalFrees,
              LOWORD(v60->ListHead.Alignment) < v60->Depth) )
        {
          RtlpInterlockedPushEntrySList(&v60->ListHead, (PSLIST_ENTRY)v21);
          return v103;
        }
        else
        {
          ++v60->FreeMisses;
          guard_dispatch_icall_no_overrides(v21, v59, v57, v58);
          return v103;
        }
      }
      v48 = v116;
LABEL_139:
      *(_DWORD *)v21 = 14680072;
      *(_DWORD *)(v21 + 32) = 0;
      v61 = (_QWORD *)(v21 + 24);
      v110 = (_QWORD *)(v21 + 24);
      *(_QWORD *)(v21 + 24) = 0LL;
      *(_QWORD *)(v21 + 56) = Handle;
      *(_DWORD *)(v21 + 64) = v16 & 0xFFFFFF;
      *(_WORD *)(v21 + 68) = a6;
      *(_WORD *)(v21 + 70) = a7;
      *(_DWORD *)(v21 + 88) = a8;
      *(_WORD *)(v21 + 136) = 0;
      *(_BYTE *)(v21 + 138) = 0;
      *(_DWORD *)(v21 + 84) = v48;
      *(_QWORD *)(v21 + 40) = 0LL;
      v62 = a3;
      *(_QWORD *)(v21 + 48) = a3;
      *(_DWORD *)(v21 + 120) = a12;
      *(_QWORD *)(v21 + 128) = v28;
      *(_DWORD *)(v21 + 152) = a15;
      v63 = v108;
      *(_BYTE *)(v21 + 156) = v108;
      *(_OWORD *)(v21 + 160) = 0LL;
      *(_OWORD *)(v21 + 176) = 0LL;
      *(_WORD *)(v21 + 160) = 40;
      *(_QWORD *)(v21 + 192) = 1LL;
      if ( Src )
      {
        v64 = *Src;
        if ( v64 > 0x28 )
          v64 = 40LL;
        memmove((void *)(v21 + 160), Src, v64);
      }
      if ( v41 )
      {
        if ( !(unsigned int)Feature_FsRtlpCleanupEcpsOplockKeysFix__private_IsEnabledDeviceUsageNoInline() )
        {
          v65 = *(_DWORD **)(v21 + 168);
          v66 = 0LL;
          v67 = 0LL;
          v68 = ExAllocatePool2(0x100uLL);
          v69 = v68;
          if ( !v68 )
          {
            v70 = -1073741670;
            v103 = -1073741670;
            goto LABEL_187;
          }
          *(_QWORD *)v68 = 1215324997LL;
          *(_QWORD *)(v68 + 16) = 0LL;
          v71 = (__int64 **)(v68 + 8);
          *(_QWORD *)(v68 + 8) = 0LL;
          *(GUID *)(v68 + 24) = GUID_ECP_DUAL_OPLOCK_KEY;
          *(_QWORD *)(v68 + 40) = 0LL;
          *(_DWORD *)(v68 + 48) = 2;
          *(_DWORD *)(v68 + 52) = 108;
          *(_QWORD *)(v68 + 56) = 0LL;
          *(_QWORD *)(v68 + 64) = 0LL;
          v67 = v68 + 72;
          *(_OWORD *)(v68 + 72) = *(_OWORD *)v41;
          *(_OWORD *)(v68 + 88) = *(_OWORD *)(v41 + 16);
          v72 = *(_DWORD *)(v68 + 72)
             || *(_WORD *)(v68 + 76)
             || *(_WORD *)(v68 + 78)
             || *(_BYTE *)(v68 + 80)
             || *(_BYTE *)(v68 + 81)
             || *(_BYTE *)(v68 + 82)
             || *(_BYTE *)(v68 + 83)
             || *(_BYTE *)(v68 + 84)
             || *(_BYTE *)(v68 + 85)
             || *(_BYTE *)(v68 + 86)
             || *(_BYTE *)(v68 + 87);
          *(_BYTE *)(v67 + 32) = v72;
          v73 = *(_DWORD *)(v67 + 16)
             || *(_WORD *)(v67 + 20)
             || *(_WORD *)(v67 + 22)
             || *(_BYTE *)(v67 + 24)
             || *(_BYTE *)(v67 + 25)
             || *(_BYTE *)(v67 + 26)
             || *(_BYTE *)(v67 + 27)
             || *(_BYTE *)(v67 + 28)
             || *(_BYTE *)(v67 + 29)
             || *(_BYTE *)(v67 + 30)
             || *(_BYTE *)(v67 + 31);
          *(_BYTE *)(v67 + 33) = v73;
          if ( !v65 )
          {
            v65 = 0LL;
            v74 = (char *)ExAllocateFromPagedLookasideList(&FsRtlEcpListLookaside);
            v75 = v74;
            if ( !v74 )
            {
              v70 = -1073741670;
              v103 = -1073741670;
              goto LABEL_187;
            }
            v76 = v74 + 8;
            v76[1] = v76;
            *v76 = v76;
            v75[1] = 6;
            *v75 = 1282433861;
            v65 = v75;
            *(_QWORD *)(v21 + 168) = v75;
          }
          v77 = (__int64 *)(v65 + 2);
          v78 = (__int64 *)*((_QWORD *)v65 + 1);
          v79 = -1073741275;
          if ( v78 != (__int64 *)(v65 + 2) )
          {
            while ( v78[2] != *(_QWORD *)(v69 + 24) || v78[3] != *(_QWORD *)(v69 + 32) )
            {
              v78 = (__int64 *)*v78;
              if ( v78 == v77 )
                goto LABEL_183;
            }
            *((_DWORD *)v78 + 10) |= 4u;
            v79 = 0;
          }
LABEL_183:
          if ( !v79 )
          {
            v70 = -1073741811;
            v103 = -1073741811;
LABEL_187:
            if ( !v65 )
            {
LABEL_189:
              if ( v67 )
                FsRtlFreeExtraCreateParameter((PVOID)v67);
              v81 = *(void **)(v21 + 72);
              if ( v81 )
                ExFreePoolWithTag(v81, 0);
              *a4 = v70;
              goto LABEL_132;
            }
LABEL_188:
            IopCleanupExtraCreateParameters(v21);
            goto LABEL_189;
          }
          v80 = (__int64 **)*((_QWORD *)v65 + 2);
          if ( *v80 == v77 )
          {
            *v71 = v77;
            v71[1] = (__int64 *)v80;
            *v80 = (__int64 *)v71;
            *((_QWORD *)v65 + 2) = v71;
            v61 = v110;
            v63 = v108;
            v62 = a3;
            goto LABEL_244;
          }
LABEL_241:
          __fastfail(3u);
        }
        v66 = *(struct _ECP_LIST **)(v21 + 168);
        v67 = 0LL;
        v82 = ExAllocatePool2(0x100uLL);
        v83 = v82;
        if ( !v82 )
        {
          v70 = -1073741670;
          v103 = -1073741670;
          goto LABEL_239;
        }
        *(_QWORD *)v82 = 1215324997LL;
        *(_QWORD *)(v82 + 16) = 0LL;
        v84 = (struct _LIST_ENTRY *)(v82 + 8);
        *(_QWORD *)(v82 + 8) = 0LL;
        *(GUID *)(v82 + 24) = GUID_ECP_DUAL_OPLOCK_KEY;
        *(_QWORD *)(v82 + 40) = 0LL;
        *(_DWORD *)(v82 + 48) = 2;
        *(_DWORD *)(v82 + 52) = 108;
        *(_QWORD *)(v82 + 56) = 0LL;
        *(_QWORD *)(v82 + 64) = 0LL;
        v67 = v82 + 72;
        *(_OWORD *)(v82 + 72) = *(_OWORD *)v41;
        *(_OWORD *)(v82 + 88) = *(_OWORD *)(v41 + 16);
        v85 = *(_DWORD *)(v82 + 72)
           || *(_WORD *)(v82 + 76)
           || *(_WORD *)(v82 + 78)
           || *(_BYTE *)(v82 + 80)
           || *(_BYTE *)(v82 + 81)
           || *(_BYTE *)(v82 + 82)
           || *(_BYTE *)(v82 + 83)
           || *(_BYTE *)(v82 + 84)
           || *(_BYTE *)(v82 + 85)
           || *(_BYTE *)(v82 + 86)
           || *(_BYTE *)(v82 + 87);
        *(_BYTE *)(v67 + 32) = v85;
        v86 = *(_DWORD *)(v67 + 16)
           || *(_WORD *)(v67 + 20)
           || *(_WORD *)(v67 + 22)
           || *(_BYTE *)(v67 + 24)
           || *(_BYTE *)(v67 + 25)
           || *(_BYTE *)(v67 + 26)
           || *(_BYTE *)(v67 + 27)
           || *(_BYTE *)(v67 + 28)
           || *(_BYTE *)(v67 + 29)
           || *(_BYTE *)(v67 + 30)
           || *(_BYTE *)(v67 + 31);
        *(_BYTE *)(v67 + 33) = v86;
        if ( v66 )
        {
          v90 = 0;
        }
        else
        {
          v66 = 0LL;
          v87 = (struct _ECP_LIST *)ExAllocateFromPagedLookasideList(&FsRtlEcpListLookaside);
          v88 = v87;
          if ( !v87 )
          {
            v70 = -1073741670;
            v103 = -1073741670;
            goto LABEL_239;
          }
          p_EcpList = &v87->EcpList;
          p_EcpList->Blink = p_EcpList;
          p_EcpList->Flink = p_EcpList;
          v88->Flags = 6;
          v88->Signature = 1282433861;
          v66 = v88;
          v90 = 1;
          v106 = 1;
          *(_QWORD *)(v21 + 168) = v88;
        }
        v91 = &v66->EcpList;
        Flink = v66->EcpList.Flink;
        v93 = -1073741275;
        if ( Flink != &v66->EcpList )
        {
          while ( Flink[1].Flink != *(struct _LIST_ENTRY **)(v83 + 24)
               || Flink[1].Blink != *(struct _LIST_ENTRY **)(v83 + 32) )
          {
            Flink = Flink->Flink;
            if ( Flink == v91 )
              goto LABEL_233;
          }
          LODWORD(Flink[2].Blink) |= 4u;
          v93 = 0;
        }
LABEL_233:
        if ( !v93 )
        {
          v70 = -1073741811;
          v103 = -1073741811;
          goto LABEL_239;
        }
        Blink = v66->EcpList.Blink;
        if ( Blink->Flink != v91 )
          goto LABEL_241;
        v84->Flink = v91;
        v84->Blink = Blink;
        Blink->Flink = v84;
        v66->EcpList.Blink = v84;
        v70 = 0;
        v103 = 0;
        v67 = 0LL;
        if ( v90 )
        {
          v70 = FsRtlpPrepareExtraCreateParametersForCreate((ULONG_PTR)v66);
          v103 = v70;
        }
        if ( v70 < 0 )
        {
LABEL_239:
          if ( v106 )
          {
            FsRtlFreeExtraCreateParameterList(v66);
            *(_QWORD *)(v21 + 168) = 0LL;
            goto LABEL_189;
          }
          goto LABEL_188;
        }
        v61 = v110;
        v62 = a3;
      }
      else
      {
        v66 = v111;
      }
LABEL_244:
      if ( *(_QWORD *)(v21 + 192) == 1LL )
        *(_QWORD *)(v21 + 192) = PsGetCurrentSilo();
      *(_DWORD *)(v21 + 16) = 0;
      v95 = (PVOID *)(v21 + 8);
      v111 = (struct _ECP_LIST *)(v21 + 8);
      *(_QWORD *)(v21 + 8) = 0LL;
      CurrentThread = KeGetCurrentThread();
      ++CurrentThread->OtherOperationCount;
      __incgsdword(0x2EE4u);
      v97 = ObOpenObjectByNameEx(v62, (__int64)IoFileObjectType, v63, 0LL, a2, v21, *(_QWORD *)(v21 + 192), &Handle);
      v103 = v97;
      v98 = *(void **)(v21 + 72);
      if ( v98 )
        ExFreePoolWithTag(v98, 0);
      if ( (unsigned int)Feature_FsRtlpCleanupEcpsOplockKeysFix__private_IsEnabledDeviceUsageNoInline() && v106 )
      {
        FsRtlFreeExtraCreateParameterList(v66);
        *(_QWORD *)(v21 + 168) = 0LL;
      }
      else
      {
        IopCleanupExtraCreateParameters(v21);
      }
      v99 = *(_DWORD *)(v21 + 32);
      if ( v97 >= 0 )
      {
        if ( v99 == -1096154543 )
        {
          *((_DWORD *)*v95 + 20) |= 0x40000u;
          *((_DWORD *)*v95 + 20) &= ~0x2000000u;
          *a1 = Handle;
          *((_QWORD *)a4 + 1) = *v61;
          *a4 = *(_DWORD *)(v21 + 16);
          v103 = *(_DWORD *)(v21 + 16);
LABEL_272:
          if ( v99 == -1096154543 && *v95 )
            ObfDereferenceObject(*v95);
          goto LABEL_132;
        }
        ObCloseHandle(Handle, v63);
        v97 = -1073741788;
        v103 = -1073741788;
      }
      v100 = *(_DWORD *)(v21 + 16);
      if ( v100 >= 0 )
      {
        v101 = *v95;
        if ( *v95 )
        {
          if ( v99 == -1096154543 )
          {
            if ( (*((_DWORD *)v101 + 20) & 0x40000) == 0 )
              IopCloseFile(0LL, (struct _FILE_OBJECT *)*v95, 1LL, 1LL);
          }
          else
          {
            if ( *((_WORD *)v101 + 44) )
              ExFreePoolWithTag(*((PVOID *)v101 + 12), 0);
            *((_QWORD *)*v95 + 1) = 0LL;
            ObfDereferenceObject(*v95);
          }
        }
      }
      else
      {
        v97 = *(_DWORD *)(v21 + 16);
        v103 = v97;
        if ( (v100 & 0xC0000000) == 0x80000000 || v100 == -1073741191 )
        {
          *a4 = v100;
          *((_QWORD *)a4 + 1) = *v61;
        }
      }
      if ( v97 == -1073741772 )
      {
        v102 = *v110;
        if ( *v110 == 2684354563LL || v102 == 2684354572LL || v102 == 2684354585LL )
          v103 = -1073741184;
      }
      goto LABEL_272;
    }
    v54 = KeGetCurrentPrcb();
    v55 = v54->PPLookasideList[8].P;
    ++v55->TotalFrees;
    if ( LOWORD(v55->ListHead.Alignment) < v55->Depth
      || (++v55->FreeMisses,
          v55 = v54->PPLookasideList[8].L,
          ++v55->TotalFrees,
          LOWORD(v55->ListHead.Alignment) < v55->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v55->ListHead, (PSLIST_ENTRY)v21);
    }
    else
    {
      ++v55->FreeMisses;
      guard_dispatch_icall_no_overrides(v21, v54, v52, v53);
    }
    return 3221225626LL;
  }
  v31 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
    v31 = (__int64)a1;
  *(_QWORD *)v31 = *(_QWORD *)v31;
  v32 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
    v32 = (__int64)a4;
  *(_DWORD *)v32 = *(_DWORD *)v32;
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
    v39 = a10;
    v107 = a10;
    v40 = a11;
    v104 = a11;
    v41 = 0LL;
    goto LABEL_100;
  }
  if ( !a10 )
  {
    v33 = KeGetCurrentPrcb();
    v34 = v33->PPLookasideList[8].P;
    ++v34->TotalFrees;
    if ( LOWORD(v34->ListHead.Alignment) < v34->Depth
      || (++v34->FreeMisses,
          v34 = v33->PPLookasideList[8].L,
          ++v34->TotalFrees,
          LOWORD(v34->ListHead.Alignment) < v34->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v34->ListHead, (PSLIST_ENTRY)v21);
    }
    else
    {
      ++v34->FreeMisses;
      guard_dispatch_icall_no_overrides(v21, v33, 0x7FFFFFFF0000LL, 0LL);
    }
    return 3221225485LL;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( Process[1].ReadyTime )
  {
    v36 = WORD2(Process[3].PerProcessorCycleTimes);
    if ( v36 == 332 || v36 == 452 )
    {
      if ( a11 && (a10 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a11 < 0x10 )
      {
        v37 = KeGetCurrentPrcb();
        v38 = v37->PPLookasideList[8].P;
        ++v38->TotalFrees;
        if ( LOWORD(v38->ListHead.Alignment) < v38->Depth
          || (++v38->FreeMisses,
              v38 = v37->PPLookasideList[8].L,
              ++v38->TotalFrees,
              LOWORD(v38->ListHead.Alignment) < v38->Depth) )
        {
          RtlpInterlockedPushEntrySList(&v38->ListHead, (PSLIST_ENTRY)v21);
        }
        else
        {
          ++v38->FreeMisses;
          guard_dispatch_icall_no_overrides(v21, v37, 0x7FFFFFFF0000LL, 0LL);
        }
        return 3221225485LL;
      }
      *(_QWORD *)(v21 + 216) = *(_QWORD *)a10;
      v39 = *(unsigned int *)(a10 + 8);
      v107 = v39;
      v40 = *(_DWORD *)(a10 + 12);
      v104 = v40;
      if ( a11 >= 0x18 )
      {
        v41 = *(unsigned int *)(a10 + 16);
        v105 = v41;
        if ( !*(_DWORD *)(a10 + 16) )
          goto LABEL_100;
        if ( (v41 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
LABEL_94:
        if ( v41 + 32 <= 0x7FFFFFFF0000LL && v41 + 32 >= v41 )
          goto LABEL_100;
        v40 = v104;
        v39 = v107;
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
    v39 = *(_QWORD *)(a10 + 8);
    v107 = v39;
    v40 = *(_DWORD *)(a10 + 16);
    v104 = v40;
    if ( a11 >= 0x20 )
    {
      v41 = *(_QWORD *)(a10 + 24);
      v105 = v41;
      if ( !v41 )
        goto LABEL_100;
      if ( (v41 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      goto LABEL_94;
    }
LABEL_97:
    v41 = v105;
LABEL_100:
    *(_QWORD *)(v21 + 72) = 0LL;
    if ( v39 && v40 )
    {
      if ( (v39 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v44 = v40;
      v45 = v40 + v39;
      if ( v45 > 0x7FFFFFFF0000LL || v45 < v39 )
      {
        v39 = v107;
        v41 = v105;
        v40 = v104;
      }
      v46 = (void *)ExAllocatePool2(0x63uLL);
      *(_QWORD *)(v21 + 72) = v46;
      *(_DWORD *)(v21 + 80) = v40;
      memmove(v46, (const void *)v39, v44);
      v47 = IoCheckEaBufferValidity(*(PFILE_FULL_EA_INFORMATION *)(v21 + 72), v40, (PULONG)a4 + 2);
      if ( v47 < 0 )
      {
        *a4 = v47;
        RtlRaiseStatus(v47);
      }
      v48 = a14;
      goto LABEL_139;
    }
    v48 = a14;
LABEL_138:
    *(_DWORD *)(v21 + 80) = 0;
    goto LABEL_139;
  }
  v42 = KeGetCurrentPrcb();
  v43 = v42->PPLookasideList[8].P;
  ++v43->TotalFrees;
  if ( LOWORD(v43->ListHead.Alignment) < v43->Depth
    || (++v43->FreeMisses,
        v43 = v42->PPLookasideList[8].L,
        ++v43->TotalFrees,
        LOWORD(v43->ListHead.Alignment) < v43->Depth) )
  {
    RtlpInterlockedPushEntrySList(&v43->ListHead, (PSLIST_ENTRY)v21);
  }
  else
  {
    ++v43->FreeMisses;
    guard_dispatch_icall_no_overrides(v21, v42, 0x7FFFFFFF0000LL, 0LL);
  }
  return 3221225485LL;
}
