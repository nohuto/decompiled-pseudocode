/*
 * XREFs of NtSetCachedSigningLevel2 @ 0x14088D710
 * Callers:
 *     NtSetCachedSigningLevel @ 0x14088D6E0 (NtSetCachedSigningLevel.c)
 * Callees:
 *     RtlUnicodeStringValidateEx @ 0x1404420C4 (RtlUnicodeStringValidateEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     SepCaptureUnicodeStringArray @ 0x14088CF60 (SepCaptureUnicodeStringArray.c)
 *     SepReleaseUnicodeStringArray @ 0x14088D350 (SepReleaseUnicodeStringArray.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     SeCompareSigningLevels @ 0x1409FA8D0 (SeCompareSigningLevels.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl NtSetCachedSigningLevel2(
        ULONG Flags,
        SE_SIGNING_LEVEL InputSigningLevel,
        PHANDLE SourceFiles,
        ULONG SourceFileCount,
        HANDLE TargetFile,
        SE_SET_FILE_CACHE_INFORMATION *CacheInformation)
{
  __int64 v6; // r12
  __int16 v8; // r14
  UNICODE_STRING *Pool2; // rdi
  char PreviousMode; // r15
  ULONG_PTR v11; // r12
  NTSTATUS v12; // ebx
  SE_SET_FILE_CACHE_INFORMATION *v14; // rbx
  __int64 v15; // r8
  ULONG v16; // edx
  __int64 v17; // rdx
  NTSTATUS v18; // eax
  UNICODE_STRING CatalogDirectoryPath; // xmm0
  void *v20; // rbx
  _KPROCESS *Process; // rcx
  char v22; // dl
  wchar_t *P; // [rsp+60h] [rbp-78h]
  PCUNICODE_STRING SourceString[2]; // [rsp+68h] [rbp-70h] BYREF
  void *Src[2]; // [rsp+78h] [rbp-60h]
  void *v26; // [rsp+98h] [rbp-40h]

  v6 = SourceFileCount;
  v8 = Flags;
  Pool2 = 0LL;
  SourceString[0] = 0LL;
  P = 0LL;
  *(_OWORD *)Src = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (Flags & 0x2000) != 0 )
  {
    if ( qword_140F04C08 )
    {
      if ( !CacheInformation || !TargetFile )
      {
        v12 = -1073741811;
        goto LABEL_11;
      }
      if ( PreviousMode == 1 )
      {
        if ( (BYTE2(KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1]) & 7) != 1 )
          goto LABEL_68;
        if ( ((unsigned __int8)CacheInformation & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        CatalogDirectoryPath = CacheInformation->CatalogDirectoryPath;
        *(UNICODE_STRING *)Src = CatalogDirectoryPath;
        v20 = *(void **)&CatalogDirectoryPath.Length;
        if ( *(_QWORD *)&CatalogDirectoryPath.Length )
        {
          if ( ((__int64)Src[1] & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (char *)Src[1] + *(_QWORD *)&CatalogDirectoryPath.Length > (void *)0x7FFFFFFF0000LL
            || (char *)Src[1] + *(_QWORD *)&CatalogDirectoryPath.Length < Src[1] )
          {
            v20 = Src[0];
          }
        }
        v26 = v20;
        if ( !Src[1] || !v20 )
        {
          v12 = -1073741811;
          goto LABEL_11;
        }
        if ( (unsigned __int64)v20 > 0xFFFF )
        {
          v12 = -1073741811;
          goto LABEL_11;
        }
        P = (wchar_t *)ExAllocatePool2(0x103uLL, (ULONG_PTR)v20, 0x63734943u);
        if ( !P )
        {
          v12 = -1073741670;
          goto LABEL_11;
        }
        memmove(P, Src[1], (size_t)v20);
      }
      else
      {
        P = CacheInformation->CatalogDirectoryPath.Buffer;
      }
      LOBYTE(Flags) = PreviousMode;
      v18 = guard_dispatch_icall_no_overrides(*(_QWORD *)&Flags, TargetFile);
      goto LABEL_36;
    }
LABEL_38:
    v12 = -1073741822;
    goto LABEL_11;
  }
  if ( !qword_140F04B28 )
    goto LABEL_38;
  if ( (InputSigningLevel & 0x30) != 0 )
    goto LABEL_42;
  if ( SourceFileCount - 1 > 0xFFF )
    goto LABEL_41;
  if ( (Flags & 6) == 0 && InputSigningLevel )
  {
LABEL_42:
    v12 = -1073741584;
    goto LABEL_11;
  }
  if ( (Flags & 3) == 3 )
    goto LABEL_15;
  if ( PreviousMode != 1 )
  {
    if ( (Flags & 1) != 0 || (Flags & 2) != 0 )
      goto LABEL_9;
LABEL_15:
    v12 = -1073741585;
    goto LABEL_11;
  }
  if ( (Flags & 2) != 0 )
    goto LABEL_15;
  v8 = Flags | 1;
  if ( (Flags & 4) == 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( (BYTE2(Process[3].ActiveGroupsMask.Masks[1]) & 7) == 1 )
    {
      v22 = Process[3].ActiveGroupsMask.Masks[1] & 0xF;
      LOBYTE(Process) = BYTE1(Process[3].ActiveGroupsMask.Masks[1]) & 0xF;
      SeCompareSigningLevels(Process, v22);
      goto LABEL_9;
    }
LABEL_68:
    v12 = -1073741790;
    goto LABEL_11;
  }
LABEL_9:
  v11 = 8 * v6;
  Pool2 = (UNICODE_STRING *)ExAllocatePool2(0x100uLL, v11, 0x63734943u);
  SourceString[1] = Pool2;
  if ( !Pool2 )
  {
    v12 = -1073741670;
    goto LABEL_11;
  }
  if ( PreviousMode == 1 )
  {
    if ( v11 && ((unsigned __int8)SourceFiles & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v14 = CacheInformation;
    if ( CacheInformation && ((unsigned __int8)CacheInformation & 3) != 0 )
      ExRaiseDatatypeMisalignment();
  }
  else
  {
    v14 = CacheInformation;
  }
  memmove(Pool2, SourceFiles, v11);
  if ( v14 )
  {
    if ( v14->Size < 0x18 )
    {
      v12 = -1073741580;
      goto LABEL_11;
    }
    if ( v14->CatalogDirectoryPath.Length )
    {
      LOBYTE(v15) = PreviousMode;
      v12 = SepCaptureUnicodeStringArray((__int64)&v14->CatalogDirectoryPath, 1u, v15, SourceString);
      if ( v12 < 0 )
        goto LABEL_11;
      v12 = RtlUnicodeStringValidateEx(SourceString[0], v16);
      if ( v12 < 0 )
        goto LABEL_11;
    }
  }
  v17 = SourceFileCount;
  if ( (v8 & 6) == 0 )
  {
LABEL_35:
    LOBYTE(v17) = PreviousMode;
    v18 = guard_dispatch_icall_no_overrides(v8 & 0x807, v17);
LABEL_36:
    v12 = v18;
    goto LABEL_11;
  }
  if ( SourceFileCount != 1 )
  {
LABEL_41:
    v12 = -1073741582;
    goto LABEL_11;
  }
  if ( TargetFile == *(HANDLE *)&Pool2->Length )
    goto LABEL_35;
  v12 = -1073741581;
LABEL_11:
  SepReleaseUnicodeStringArray((void *)SourceString[0], PreviousMode);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x63734943u);
  if ( P && PreviousMode == 1 )
    ExFreePoolWithTag(P, 0x63734943u);
  return v12;
}
