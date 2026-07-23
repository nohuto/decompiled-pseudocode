/*
 * XREFs of MiCreatePagingFile @ 0x1407EE934
 * Callers:
 *     NtCreatePagingFile @ 0x1407F01E0 (NtCreatePagingFile.c)
 *     NtManagePartition @ 0x1408F6B10 (NtManagePartition.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x14025C530 (IoGetRelatedDeviceObject.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140421410 (PsIsCurrentThreadInServerSilo.c)
 *     RtlLengthSid @ 0x14044B2D0 (RtlLengthSid.c)
 *     MiIssuePageExtendRequest @ 0x140464038 (MiIssuePageExtendRequest.c)
 *     MiAttemptChangePagingFileMaximum @ 0x14067AF10 (MiAttemptChangePagingFileMaximum.c)
 *     MiCheckAndUpdatePagingFileMinimum @ 0x14067B368 (MiCheckAndUpdatePagingFileMinimum.c)
 *     MiCheckPageFileMapping @ 0x14067B3C0 (MiCheckPageFileMapping.c)
 *     MiIncreaseCommitLimits @ 0x14068733C (MiIncreaseCommitLimits.c)
 *     MiReduceCommitLimits @ 0x140687600 (MiReduceCommitLimits.c)
 *     ZwSetInformationFile @ 0x1406A7890 (ZwSetInformationFile.c)
 *     ZwSetSecurityObject @ 0x1406AAAD0 (ZwSetSecurityObject.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14070AAE8 (FsRtlIssueFileNotificationFsctl.c)
 *     IoInitializeCrashDump @ 0x14070E5F8 (IoInitializeCrashDump.c)
 *     PiPagePathSetState @ 0x1407204F0 (PiPagePathSetState.c)
 *     MiCreatePagefile @ 0x1407EE570 (MiCreatePagefile.c)
 *     MiDeletePagefile @ 0x1407EF4C8 (MiDeletePagefile.c)
 *     MiInsertPageFileInList @ 0x1407EF8C0 (MiInsertPageFileInList.c)
 *     MiZeroPageFileFirstPage @ 0x1407EFFB8 (MiZeroPageFileFirstPage.c)
 *     MiCreateSpecialPurposeMemoryPageFile @ 0x1407FE884 (MiCreateSpecialPurposeMemoryPageFile.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     RtlCreateAcl @ 0x140858810 (RtlCreateAcl.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     RtlpAddKnownAce @ 0x140911480 (RtlpAddKnownAce.c)
 *     IopQueryXxxInformation @ 0x140952FC0 (IopQueryXxxInformation.c)
 *     IopCreateFile @ 0x1409557C0 (IopCreateFile.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1409DFF30 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1409E16D0 (RtlCreateSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreatePagingFile(
        _OWORD *a1,
        __int64 *a2,
        unsigned __int64 *a3,
        KPROCESSOR_MODE a4,
        __int64 a5,
        __int64 a6)
{
  int v10; // r13d
  __int64 v11; // rax
  unsigned __int64 v13; // rbx
  void *Pool; // rax
  PVOID v15; // r12
  unsigned __int16 v16; // cx
  int Acl; // r15d
  ULONG v18; // edi
  ULONG v19; // edi
  ACL *v20; // rax
  ACL *v21; // rdi
  ULONG v22; // edx
  unsigned int v23; // esi
  struct _FILE_OBJECT *v24; // rdi
  unsigned __int64 DeviceType; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  ULONG *v28; // rsi
  _BYTE *Pagefile; // rax
  _BYTE *v30; // rbx
  int inserted; // edi
  unsigned int v32; // r13d
  __int64 v33; // r12
  unsigned __int64 *v34; // rbx
  char *v35; // rax
  char *v36; // rdi
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int16 v39; // r8
  __int64 v40; // rdi
  volatile signed __int64 *v41; // rbx
  struct _KTHREAD *v42; // rcx
  bool v43; // zf
  unsigned __int64 v44; // rdi
  unsigned __int64 v45; // rbx
  unsigned int v46; // ecx
  int v47; // eax
  HANDLE Handle; // [rsp+80h] [rbp-F8h] BYREF
  __int64 v49; // [rsp+88h] [rbp-F0h] BYREF
  ACL *v50; // [rsp+90h] [rbp-E8h]
  void *Src[2]; // [rsp+98h] [rbp-E0h] BYREF
  PFILE_OBJECT FileObject; // [rsp+A8h] [rbp-D0h] BYREF
  unsigned __int64 v53; // [rsp+B0h] [rbp-C8h]
  PVOID P; // [rsp+B8h] [rbp-C0h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+C0h] [rbp-B8h] BYREF
  unsigned __int64 FileInformation; // [rsp+D0h] [rbp-A8h] BYREF
  __int64 v57; // [rsp+D8h] [rbp-A0h] BYREF
  unsigned __int64 v58; // [rsp+E0h] [rbp-98h]
  int v59[4]; // [rsp+E8h] [rbp-90h] BYREF
  __int128 v60; // [rsp+F8h] [rbp-80h]
  _BYTE *v61; // [rsp+108h] [rbp-70h]
  __int64 v62; // [rsp+110h] [rbp-68h]
  struct _KTHREAD *CurrentThread; // [rsp+118h] [rbp-60h]
  _BYTE SecurityDescriptor[32]; // [rsp+120h] [rbp-58h] BYREF
  __int64 v65; // [rsp+140h] [rbp-38h]
  __int128 v66; // [rsp+150h] [rbp-28h]

  *(_OWORD *)v59 = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  LODWORD(v62) = 0;
  IoStatusBlock = 0LL;
  *(_OWORD *)Src = 0LL;
  v49 = 0LL;
  FileInformation = 0LL;
  v57 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v65 = 0LL;
  v50 = 0LL;
  v10 = a5;
  if ( (a5 & 0x7FFFFF) != 0 || (int)a5 < 0 && (a5 & 0x42000000) != 0 || (a5 & 0xFF7FFFFF) != 0 && (a5 & 0x800000) != 0 )
    return 3221225714LL;
  if ( a4 )
  {
    if ( !SeSinglePrivilegeCheck(SeCreatePagefilePrivilege, a4) || PsIsCurrentThreadInServerSilo() )
      return 3221225569LL;
    if ( ((unsigned __int8)a1 & 3) != 0 || ((unsigned __int8)a3 & 3) != 0 || ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v11 = *a2;
    v49 = *a2;
  }
  else
  {
    v11 = *a2;
    v49 = *a2;
  }
  if ( (unsigned __int64)v11 > 0xFFFFFFFE000LL || v11 < 0x100000 )
    return 3221225712LL;
  v53 = *a3;
  v13 = v53;
  if ( v53 > 0xFFFFFFFE000LL || v11 > (__int64)v53 )
    return 3221225713LL;
  *(_OWORD *)Src = *a1;
  WORD1(Src[0]) = Src[0];
  if ( (unsigned __int16)(LOWORD(Src[0]) - 1) > 0xFFu )
    return 3221225523LL;
  Pool = (void *)MiAllocatePool(0x100uLL, LOWORD(Src[0]), 538996045);
  v15 = Pool;
  P = Pool;
  if ( !Pool )
    return 3221225626LL;
  if ( a4 )
  {
    v16 = (unsigned __int16)Src[0];
    if ( LOWORD(Src[0])
      && ((char *)Src[1] + LOWORD(Src[0]) > (void *)0x7FFFFFFF0000LL || (char *)Src[1] + LOWORD(Src[0]) < Src[1]) )
    {
      v16 = (unsigned __int16)Src[0];
      v13 = v53;
    }
    memmove(Pool, Src[1], v16);
  }
  else
  {
    memmove(Pool, Src[1], LOWORD(Src[0]));
  }
  Src[1] = v15;
  if ( (v10 & 0x800000) != 0 )
    return MiCreateSpecialPurposeMemoryPageFile(a6, (unsigned __int64)v49 >> 12, (unsigned int)(v13 >> 12), Src);
  v58 = 0LL;
  FileObject = 0LL;
  Handle = 0LL;
  Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( Acl < 0 )
    goto LABEL_92;
  v18 = RtlLengthSid(SeAliasAdminsSid);
  v19 = RtlLengthSid(SeLocalSystemSid) + 32 + v18;
  v20 = (ACL *)MiAllocatePool(0x100uLL, v19, 1818452292);
  v50 = v20;
  if ( !v20 )
  {
    Acl = -1073741670;
    v21 = 0LL;
    goto LABEL_93;
  }
  v22 = v19;
  v21 = v20;
  Acl = RtlCreateAcl(v20, v22, 2u);
  if ( Acl < 0
    || (Acl = RtlpAddKnownAce((int)v21, 2, 0, 2032127, SeAliasAdminsSid, 0), Acl < 0)
    || (Acl = RtlpAddKnownAce((int)v21, 2, 0, 2032127, SeLocalSystemSid, 0), Acl < 0)
    || (Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v21, 0), Acl < 0) )
  {
LABEL_93:
    if ( Handle )
      ObCloseHandle(Handle, 0);
    goto LABEL_95;
  }
  if ( v10 >= 0 )
  {
    v23 = 0;
    if ( (v10 & 0x2000000) != 0 )
      v23 = 2;
  }
  else
  {
    v23 = 3;
  }
  v59[0] = 48;
  *(_QWORD *)&v59[2] = 0LL;
  DWORD2(v60) = 576;
  *(_QWORD *)&v60 = Src;
  v61 = SecurityDescriptor;
  v62 = 0LL;
  FileInformation = (v49 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( (int)IopCreateFile(
              (int)&Handle,
              1310723,
              (int)v59,
              (int)&IoStatusBlock,
              (__int64)&v49,
              6,
              2,
              0,
              36872,
              0LL,
              0,
              0,
              0LL,
              274,
              0,
              0LL) < 0 )
  {
    Acl = IopCreateFile(
            (int)&Handle,
            1048578,
            (int)v59,
            (int)&IoStatusBlock,
            (__int64)&v49,
            6,
            3,
            1,
            32776,
            0LL,
            0,
            0,
            0LL,
            274,
            0,
            0LL);
    v32 = 0;
    if ( Acl < 0 )
    {
      Handle = 0LL;
LABEL_95:
      if ( v21 )
        ExFreePoolWithTag(v21, 0);
      ExFreePoolWithTag(v15, 0);
      return (unsigned int)Acl;
    }
    Acl = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x66506D4Du, (__int64)&FileObject, 0LL, 0LL);
    if ( Acl >= 0 )
    {
      v33 = 0LL;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      v34 = (unsigned __int64 *)(a6 + 1088);
      v35 = (char *)KeAbPreAcquire(a6 + 1088, 0LL);
      v36 = v35;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v34, 0LL) )
        ExfAcquirePushLockExclusiveEx(v34, v35, (__int64)v34);
      if ( v36 )
        v36[10] = 1;
      v37 = a6;
      while ( v32 < *(_DWORD *)(a6 + 18520) )
      {
        v38 = *(_QWORD *)(v37 + 8LL * v32 + 18528);
        v39 = *(_WORD *)(v38 + 172);
        if ( (v39 & 0x840) == 0 )
        {
          if ( *(PSECTION_OBJECT_POINTERS *)(*(_QWORD *)(v38 + 24) + 40LL) == FileObject->SectionObjectPointer )
          {
            if ( ((~v39 & 0x10) != 0) != ((v23 & 1) == 0) )
            {
              Acl = -1073741811;
              goto LABEL_82;
            }
            v33 = *(_QWORD *)(v37 + 8LL * v32 + 18528);
            break;
          }
          v37 = a6;
        }
        ++v32;
      }
      if ( v33 )
      {
        v44 = v53 >> 12;
        v45 = (unsigned __int64)v49 >> 12;
        if ( *(_DWORD *)(v33 + 8) <= (unsigned int)((unsigned __int64)v49 >> 12) )
        {
          v46 = *(_DWORD *)(v33 + 4);
          if ( v46 <= (unsigned int)v44 )
          {
            if ( v46 >= (unsigned int)v44 )
              goto LABEL_109;
            if ( (*(_BYTE *)(v33 + 172) & 0x10) == 0 )
            {
              v58 = (unsigned int)v44 - v46;
              MiIncreaseCommitLimits(a6, 0LL, v58, 0LL, 0, 0LL);
            }
            Acl = MiAttemptChangePagingFileMaximum(v33, v44);
            if ( Acl >= 0 )
            {
LABEL_109:
              if ( (unsigned int)v45 > *(_DWORD *)(v33 + 8) )
              {
                while ( (unsigned int)v45 <= *(_DWORD *)v33 )
                {
                  if ( MiCheckAndUpdatePagingFileMinimum((unsigned int *)v33, v45) )
                    goto LABEL_116;
                }
                MiIssuePageExtendRequest(a6, (unsigned int)(v45 - *(_DWORD *)v33), 1, v32);
                v47 = Acl;
                if ( *(_DWORD *)(v33 + 8) < (unsigned int)v45 )
                  v47 = -1073741670;
                Acl = v47;
              }
LABEL_116:
              if ( v23 >= 2 )
                *(_WORD *)(v33 + 172) |= 0x80u;
            }
          }
          else
          {
            Acl = -1073741583;
          }
        }
        else
        {
          Acl = -1073741584;
        }
      }
      else
      {
        Acl = -1073741275;
      }
LABEL_82:
      v40 = a6;
      v41 = (volatile signed __int64 *)(a6 + 1088);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a6 + 1088), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v41);
      KeAbPostRelease((ULONG_PTR)v41);
      v42 = CurrentThread;
      v43 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v43 && ($727077A9B6E167EAE1398C74674DC5A5 *)v42->ApcState.ApcListHead[0].Flink != &v42->152 )
        KiCheckForKernelApcDelivery();
      if ( v58 )
        MiReduceCommitLimits(v40, 0LL, v58);
      v15 = P;
      v24 = FileObject;
      goto LABEL_90;
    }
    goto LABEL_93;
  }
  if ( IoStatusBlock.Status >= 0 )
  {
    Acl = ZwSetSecurityObject(Handle, 4u, SecurityDescriptor);
    if ( Acl < 0 )
      goto LABEL_93;
  }
  ExFreePoolWithTag(v21, 0);
  v21 = 0LL;
  v50 = 0LL;
  Acl = IoStatusBlock.Status;
  if ( IoStatusBlock.Status < 0 )
    goto LABEL_93;
  Acl = ZwSetInformationFile(Handle, &IoStatusBlock, &FileInformation, 8u, FileEndOfFileInformation);
  if ( Acl < 0 )
    goto LABEL_93;
  Acl = IoStatusBlock.Status;
  if ( IoStatusBlock.Status < 0 )
    goto LABEL_93;
  Acl = ObpReferenceObjectByHandleWithTag((ULONG_PTR)Handle, 0x66506D4Du, (__int64)&FileObject, 0LL, 0LL);
  if ( Acl < 0 )
    goto LABEL_93;
  v24 = FileObject;
  DeviceType = IoGetRelatedDeviceObject(FileObject)->DeviceType;
  if ( (unsigned int)DeviceType > 0x36 || (v26 = 0x60000000100100LL, !_bittest64(&v26, DeviceType)) )
  {
    Acl = -1073741489;
    goto LABEL_90;
  }
  Acl = MiCheckPageFileMapping((__int64)v24);
  if ( Acl < 0 )
    goto LABEL_90;
  Acl = IopQueryXxxInformation((ULONG_PTR)v24, (__int64)&v57, (__int64)&a5, 0);
  if ( Acl < 0 )
    goto LABEL_90;
  if ( (v57 & 0x400000000LL) != 0 )
  {
    Acl = -1073741468;
    goto LABEL_90;
  }
  Acl = PiPagePathSetState(v24, 1);
  if ( Acl < 0 )
  {
LABEL_90:
    if ( v24 )
      ObfDereferenceObjectWithTag(v24, 0x66506D4Du);
LABEL_92:
    v21 = v50;
    goto LABEL_93;
  }
  FsRtlIssueFileNotificationFsctl(v24, v27, (__int128 *)&FILE_TYPE_NOTIFICATION_GUID_PAGE_FILE);
  v28 = (ULONG *)a6;
  if ( (ULONG *)a6 == &MiSystemPartition )
  {
    Acl = MiZeroPageFileFirstPage(v24);
    if ( Acl < 0 )
    {
      PiPagePathSetState(v24, 0);
      goto LABEL_90;
    }
  }
  Pagefile = MiCreatePagefile(
               (__int64)v28,
               (__int64)v24,
               (__int64)Handle,
               v49 / 4096,
               (__int64)v13 / 4096,
               (UNICODE_STRING *)Src,
               v10,
               1);
  v30 = Pagefile;
  if ( !Pagefile )
    return 3221225626LL;
  inserted = MiInsertPageFileInList(Pagefile);
  if ( inserted >= 0 )
  {
    if ( v28 == &MiSystemPartition && !byte_140E30180 && (v30[172] & 0x10) == 0 )
    {
      v66 = *((_OWORD *)v30 + 4);
      byte_140E30180 = IoInitializeCrashDump(Handle);
    }
    return 0LL;
  }
  else
  {
    MiDeletePagefile(v30);
    return (unsigned int)inserted;
  }
}
