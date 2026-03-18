/*
 * XREFs of NtManagePartition @ 0x140933FF0
 * Callers:
 *     <none>
 * Callees:
 *     PsDereferencePartition @ 0x140275E60 (PsDereferencePartition.c)
 *     MmManagePartitionSetMemoryThresholds @ 0x14068BBCC (MmManagePartitionSetMemoryThresholds.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     MmIssueMemoryListCommand @ 0x1407EDC20 (MmIssueMemoryListCommand.c)
 *     MiCreatePagingFile @ 0x1407EE364 (MiCreatePagingFile.c)
 *     MmManagePartitionCharges @ 0x1407FCA7C (MmManagePartitionCharges.c)
 *     MmManagePartitionCombineMemory @ 0x1407FCC64 (MmManagePartitionCombineMemory.c)
 *     MmManagePartitionCreateLargePages @ 0x1407FCCD0 (MmManagePartitionCreateLargePages.c)
 *     MmManagePartitionInitialAddMemory @ 0x1407FCE14 (MmManagePartitionInitialAddMemory.c)
 *     MmManagePartitionMoveMemory @ 0x1407FCEC4 (MmManagePartitionMoveMemory.c)
 *     MmManagePartitionNodeInformation @ 0x1407FD160 (MmManagePartitionNodeInformation.c)
 *     MmManagePartitionUpdateAttributes @ 0x1407FD274 (MmManagePartitionUpdateAttributes.c)
 *     MiOpenSpecialPurposeMemory @ 0x1407FE6F8 (MiOpenSpecialPurposeMemory.c)
 *     MiQuerySpecialPurposeMemoryInformation @ 0x1407FE898 (MiQuerySpecialPurposeMemoryInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     ProbeForWrite @ 0x1408C0590 (ProbeForWrite.c)
 *     MmCheckPartitionManagementSupported @ 0x1409324F4 (MmCheckPartitionManagementSupported.c)
 *     MmManagePartitionGetMemoryEvents @ 0x140932528 (MmManagePartitionGetMemoryEvents.c)
 *     PsReferencePartitionByHandle @ 0x140934434 (PsReferencePartitionByHandle.c)
 *     MmManagePartitionMemoryInformation @ 0x1409344F4 (MmManagePartitionMemoryInformation.c)
 */

__int64 __fastcall NtManagePartition(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int Size)
{
  __int64 v6; // rbx
  __int64 v8; // r8
  KPROCESSOR_MODE PreviousMode; // r14
  __int64 *v10; // rsi
  __int64 v11; // r13
  char v12; // cl
  unsigned int v13; // esi
  int v14; // edi
  __int64 v15; // r8
  int LargePages; // eax
  int v18; // ebx
  int v19; // ebx
  int v20; // ebx
  ULONG **v21; // rcx
  int v22; // ebx
  KPROCESSOR_MODE v23; // r8
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
  __int64 v35; // [rsp+48h] [rbp-140h]
  __int64 Src; // [rsp+58h] [rbp-130h] BYREF
  int v37; // [rsp+64h] [rbp-124h]
  int v38; // [rsp+78h] [rbp-110h]

  v6 = a3;
  v35 = a2;
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
  if ( (v12 & 0x10) == 0 && Size != WORD2(PspPartitionInfoDetails[v6]) )
  {
    v14 = -1073741820;
    goto LABEL_25;
  }
  if ( (v12 & 1) != 0 )
  {
    if ( PreviousMode && Size && ((BYTE6(PspPartitionInfoDetails[v6]) - 1LL) & a4) != 0 )
      ExRaiseDatatypeMisalignment();
    memmove(&Src, (const void *)a4, Size);
  }
  v13 = PspPartitionInfoDetails[v6];
  if ( (_DWORD)v6 == 11 && (_DWORD)Src == 2 )
    v13 = 2;
  LOBYTE(v8) = PreviousMode;
  v14 = PsReferencePartitionByHandle(a1, v13, v8, 1884123984LL, &v33);
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
  v14 = MmCheckPartitionManagementSupported((__int64)v10, v6);
  if ( v14 >= 0 )
  {
    if ( !v34 || (v14 = MmCheckPartitionManagementSupported((__int64)v34, v6), v14 >= 0) )
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
          LargePages = MiQuerySpecialPurposeMemoryInformation(*v10, (volatile void *)a4, Size, PreviousMode);
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
          LargePages = MmManagePartitionCharges(v10, (int *)&Src, a4, PreviousMode);
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
              ProbeForWrite((volatile void *)a4, Size, BYTE6(PspPartitionInfoDetails[v11]));
            memmove((void *)a4, &Src, Size);
          }
          goto LABEL_25;
        }
        v29 = 0;
        v23 = PreviousMode;
        v21 = (ULONG **)v10;
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
        v18 = v6 - 1;
        if ( !v18 )
        {
          LargePages = MmManagePartitionMoveMemory((ULONG **)v10, v34, (__int64)&Src, PreviousMode);
          goto LABEL_20;
        }
        v19 = v18 - 1;
        if ( !v19 )
        {
          LODWORD(v30) = v38;
          LargePages = MiCreatePagingFile(
                         (_OWORD *)a4,
                         (__int64 *)(a4 + 16),
                         (unsigned __int64 *)(a4 + 24),
                         PreviousMode,
                         v30,
                         *v10);
          goto LABEL_20;
        }
        v20 = v19 - 1;
        v21 = (ULONG **)v10;
        if ( !v20 )
        {
          LargePages = MmManagePartitionCombineMemory((ULONG **)v10, (__int64)&Src, a4, PreviousMode);
          goto LABEL_20;
        }
        v22 = v20 - 1;
        if ( !v22 )
        {
          LargePages = MmManagePartitionInitialAddMemory((ULONG **)v10, (int *)&Src, a4, PreviousMode);
          goto LABEL_20;
        }
        v23 = PreviousMode;
        if ( v22 == 1 )
        {
          LargePages = MmManagePartitionGetMemoryEvents((PVOID **)v10, (__int64)&Src, PreviousMode);
          goto LABEL_20;
        }
        v29 = 1;
      }
      LargePages = MmManagePartitionUpdateAttributes(v21, &Src, v23, v29);
      goto LABEL_20;
    }
  }
LABEL_25:
  if ( v31 )
    PsDereferencePartition((__int64)v10);
  if ( v32 )
    PsDereferencePartition((__int64)v34);
  return (unsigned int)v14;
}
