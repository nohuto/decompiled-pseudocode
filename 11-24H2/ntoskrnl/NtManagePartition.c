/*
 * XREFs of NtManagePartition @ 0x1408F6B10
 * Callers:
 *     <none>
 * Callees:
 *     PsDereferencePartition @ 0x14022B3F0 (PsDereferencePartition.c)
 *     MmManagePartitionSetMemoryThresholds @ 0x14068CCFC (MmManagePartitionSetMemoryThresholds.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MmIssueMemoryListCommand @ 0x1407EE1F0 (MmIssueMemoryListCommand.c)
 *     MiCreatePagingFile @ 0x1407EE934 (MiCreatePagingFile.c)
 *     MmManagePartitionCharges @ 0x1407FD1EC (MmManagePartitionCharges.c)
 *     MmManagePartitionCombineMemory @ 0x1407FD3D4 (MmManagePartitionCombineMemory.c)
 *     MmManagePartitionCreateLargePages @ 0x1407FD440 (MmManagePartitionCreateLargePages.c)
 *     MmManagePartitionInitialAddMemory @ 0x1407FD584 (MmManagePartitionInitialAddMemory.c)
 *     MmManagePartitionMoveMemory @ 0x1407FD634 (MmManagePartitionMoveMemory.c)
 *     MmManagePartitionNodeInformation @ 0x1407FD8D0 (MmManagePartitionNodeInformation.c)
 *     MmManagePartitionUpdateAttributes @ 0x1407FD9E4 (MmManagePartitionUpdateAttributes.c)
 *     MiOpenSpecialPurposeMemory @ 0x1407FEE68 (MiOpenSpecialPurposeMemory.c)
 *     MiQuerySpecialPurposeMemoryInformation @ 0x1407FF008 (MiQuerySpecialPurposeMemoryInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 *     PsReferencePartitionByHandle @ 0x1408F6F54 (PsReferencePartitionByHandle.c)
 *     MmManagePartitionMemoryInformation @ 0x1408F7014 (MmManagePartitionMemoryInformation.c)
 *     MmManagePartitionGetMemoryEvents @ 0x1408F7AE0 (MmManagePartitionGetMemoryEvents.c)
 *     MmCheckPartitionManagementSupported @ 0x1408F7C48 (MmCheckPartitionManagementSupported.c)
 */

NTSTATUS __cdecl NtManagePartition(
        HANDLE TargetHandle,
        HANDLE SourceHandle,
        PARTITION_INFORMATION_CLASS PartitionInformationClass,
        PVOID PartitionInformation,
        ULONG PartitionInformationLength)
{
  __int64 v6; // rbx
  __int64 v8; // r8
  KPROCESSOR_MODE PreviousMode; // r14
  __int64 *v10; // rsi
  __int64 v11; // r13
  char v12; // cl
  unsigned int v13; // esi
  NTSTATUS v14; // edi
  __int64 v15; // r8
  __int64 v16; // r8
  int LargePages; // eax
  int v19; // ebx
  int v20; // ebx
  int v21; // ebx
  ULONG **v22; // rcx
  int v23; // ebx
  int v24; // ebx
  int v25; // ebx
  int v26; // ebx
  int v27; // ebx
  int v28; // ebx
  unsigned int v29; // r9d
  __int64 v30; // [rsp+20h] [rbp-168h]
  char v31; // [rsp+30h] [rbp-158h]
  char v32; // [rsp+31h] [rbp-157h]
  ULONG **v33; // [rsp+38h] [rbp-150h] BYREF
  ULONG **v34; // [rsp+40h] [rbp-148h] BYREF
  HANDLE v35; // [rsp+48h] [rbp-140h]
  __int64 Src; // [rsp+58h] [rbp-130h] BYREF
  int v37; // [rsp+64h] [rbp-124h]
  int v38; // [rsp+78h] [rbp-110h]

  v6 = (unsigned int)PartitionInformationClass;
  v35 = SourceHandle;
  memset_0(&Src, 0, 0xF0uLL);
  v32 = 0;
  v31 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v34 = 0LL;
  v10 = 0LL;
  v33 = 0LL;
  if ( (unsigned int)v6 >= 0xF )
  {
    v14 = -1073741821;
    goto LABEL_25;
  }
  v11 = (unsigned int)v6;
  v12 = HIBYTE(PspPartitionInfoDetails[v6]);
  if ( (v12 & 0x10) == 0 && PartitionInformationLength != WORD2(PspPartitionInfoDetails[v6]) )
  {
    v14 = -1073741820;
    goto LABEL_25;
  }
  if ( (v12 & 1) != 0 )
  {
    if ( PreviousMode
      && PartitionInformationLength
      && ((BYTE6(PspPartitionInfoDetails[v6]) - 1LL) & (unsigned __int64)PartitionInformation) != 0 )
    {
      ExRaiseDatatypeMisalignment();
    }
    memmove(&Src, PartitionInformation, PartitionInformationLength);
  }
  v13 = PspPartitionInfoDetails[v6];
  if ( (_DWORD)v6 == 11 && (_DWORD)Src == 2 )
    v13 = 2;
  LOBYTE(v8) = PreviousMode;
  v14 = PsReferencePartitionByHandle(TargetHandle, v13, v8, 1884123984LL, &v33);
  if ( v14 < 0 )
  {
    v10 = (__int64 *)v33;
    goto LABEL_25;
  }
  v31 = 1;
  if ( (PspPartitionInfoDetails[v6] & 0x400000000000000LL) != 0 )
  {
    LOBYTE(v15) = PreviousMode;
    v14 = PsReferencePartitionByHandle(v35, v13, v15, 1884123984LL, &v34);
    v10 = (__int64 *)v33;
    if ( v14 < 0 )
      goto LABEL_25;
    v32 = 1;
    if ( v34 == v33 && ((_DWORD)v6 != 1 || (v37 & 0x400) == 0) )
    {
      v14 = -1073741811;
      goto LABEL_25;
    }
  }
  else
  {
    v10 = (__int64 *)v33;
    if ( v35 )
    {
      v14 = -1073741584;
      goto LABEL_25;
    }
  }
  v14 = MmCheckPartitionManagementSupported(v10, (unsigned int)v6);
  if ( v14 >= 0 )
  {
    if ( !v34 || (v14 = MmCheckPartitionManagementSupported(v34, (unsigned int)v6), v14 >= 0) )
    {
      if ( (int)v6 > 7 )
      {
        v24 = v6 - 8;
        if ( !v24 )
        {
          LargePages = MmManagePartitionCreateLargePages(v10, (__int64)&Src, PreviousMode);
          goto LABEL_20;
        }
        v25 = v24 - 1;
        if ( !v25 )
        {
          LargePages = MiQuerySpecialPurposeMemoryInformation(
                         *v10,
                         PartitionInformation,
                         PartitionInformationLength,
                         PreviousMode);
          goto LABEL_20;
        }
        v26 = v25 - 1;
        if ( !v26 )
        {
          LargePages = MiOpenSpecialPurposeMemory(*v10, (__int64)&Src, PreviousMode);
          goto LABEL_20;
        }
        v27 = v26 - 1;
        if ( !v27 )
        {
          LargePages = MmManagePartitionCharges(v10, (int *)&Src, (__int64)PartitionInformation, PreviousMode);
          goto LABEL_20;
        }
        v28 = v27 - 1;
        if ( v28 )
        {
          if ( v28 == 1 )
            LargePages = MmManagePartitionSetMemoryThresholds(v10, (__int64)&Src);
          else
            LargePages = MmIssueMemoryListCommand(Src, PreviousMode, (__int64)v10);
LABEL_20:
          v14 = LargePages;
          if ( LargePages >= 0 && (PspPartitionInfoDetails[v11] & 0x200000000000000LL) != 0 )
          {
            if ( PreviousMode )
              ProbeForWrite(PartitionInformation, PartitionInformationLength, BYTE6(PspPartitionInfoDetails[v11]));
            memmove(PartitionInformation, &Src, PartitionInformationLength);
          }
          goto LABEL_25;
        }
        v29 = 0;
        LOBYTE(v16) = PreviousMode;
        v22 = (ULONG **)v10;
      }
      else
      {
        if ( (_DWORD)v6 == 7 )
        {
          LargePages = MmManagePartitionNodeInformation(v10, (unsigned int *)&Src, PreviousMode);
          goto LABEL_20;
        }
        if ( !(_DWORD)v6 )
        {
          LargePages = MmManagePartitionMemoryInformation(v10, &Src);
          goto LABEL_20;
        }
        v19 = v6 - 1;
        if ( !v19 )
        {
          LargePages = MmManagePartitionMoveMemory((ULONG **)v10, v34, (__int64)&Src, PreviousMode);
          goto LABEL_20;
        }
        v20 = v19 - 1;
        if ( !v20 )
        {
          LODWORD(v30) = v38;
          LargePages = MiCreatePagingFile(
                         PartitionInformation,
                         (__int64 *)PartitionInformation + 2,
                         (unsigned __int64 *)PartitionInformation + 3,
                         PreviousMode,
                         v30,
                         *v10);
          goto LABEL_20;
        }
        v21 = v20 - 1;
        v22 = (ULONG **)v10;
        if ( !v21 )
        {
          LargePages = MmManagePartitionCombineMemory(
                         (ULONG **)v10,
                         (__int64)&Src,
                         (__int64)PartitionInformation,
                         PreviousMode);
          goto LABEL_20;
        }
        v23 = v21 - 1;
        if ( !v23 )
        {
          LargePages = MmManagePartitionInitialAddMemory(
                         (ULONG **)v10,
                         (int *)&Src,
                         (__int64)PartitionInformation,
                         PreviousMode);
          goto LABEL_20;
        }
        LOBYTE(v16) = PreviousMode;
        if ( v23 == 1 )
        {
          LargePages = MmManagePartitionGetMemoryEvents(v10, &Src, v16);
          goto LABEL_20;
        }
        v29 = 1;
      }
      LargePages = MmManagePartitionUpdateAttributes(v22, &Src, v16, v29);
      goto LABEL_20;
    }
  }
LABEL_25:
  if ( v31 )
    PsDereferencePartition((__int64)v10);
  if ( v32 )
    PsDereferencePartition((__int64)v34);
  return v14;
}
