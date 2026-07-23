/*
 * XREFs of NtSetCachedSigningLevel2 @ 0x140865810
 * Callers:
 *     NtSetCachedSigningLevel @ 0x1408657E0 (NtSetCachedSigningLevel.c)
 * Callees:
 *     RtlUnicodeStringValidateEx @ 0x14044BDB4 (RtlUnicodeStringValidateEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     SepReleaseUnicodeStringArray @ 0x140867664 (SepReleaseUnicodeStringArray.c)
 *     SepCaptureUnicodeStringArray @ 0x140867B30 (SepCaptureUnicodeStringArray.c)
 *     SeCompareSigningLevels @ 0x14091E260 (SeCompareSigningLevels.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  size_t v11; // r12
  SE_SET_FILE_CACHE_INFORMATION *v12; // rbx
  __int64 v13; // r8
  int v14; // ebx
  int v15; // eax
  __int64 v16; // rdx
  UNICODE_STRING CatalogDirectoryPath; // xmm0
  void *v19; // rbx
  _KPROCESS *Process; // rcx
  char v21; // dl
  wchar_t *P; // [rsp+60h] [rbp-78h]
  PCUNICODE_STRING SourceString[2]; // [rsp+68h] [rbp-70h] BYREF
  void *Src[2]; // [rsp+78h] [rbp-60h]
  void *v25; // [rsp+98h] [rbp-40h]

  v6 = SourceFileCount;
  v8 = Flags;
  Pool2 = 0LL;
  SourceString[0] = 0LL;
  P = 0LL;
  *(_OWORD *)Src = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (Flags & 0x2000) != 0 )
  {
    if ( qword_140F04588 )
    {
      *(_QWORD *)&InputSigningLevel = CacheInformation;
      if ( !CacheInformation || !TargetFile )
      {
        v14 = -1073741811;
        goto LABEL_34;
      }
      if ( PreviousMode == 1 )
      {
        if ( (BYTE2(KeGetCurrentThread()->ApcState.Process[3].ActiveGroupsMask.Masks[1]) & 7) != 1 )
          goto LABEL_68;
        if ( ((unsigned __int8)CacheInformation & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        CatalogDirectoryPath = CacheInformation->CatalogDirectoryPath;
        *(UNICODE_STRING *)Src = CatalogDirectoryPath;
        v19 = *(void **)&CatalogDirectoryPath.Length;
        if ( *(_QWORD *)&CatalogDirectoryPath.Length )
        {
          if ( ((__int64)Src[1] & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          *(_QWORD *)&InputSigningLevel = (char *)Src[1] + *(_QWORD *)&CatalogDirectoryPath.Length;
          if ( (char *)Src[1] + *(_QWORD *)&CatalogDirectoryPath.Length > (void *)0x7FFFFFFF0000LL
            || (void *)InputSigningLevel < Src[1] )
          {
            v19 = Src[0];
          }
        }
        v25 = v19;
        if ( !Src[1] || !v19 )
        {
          v14 = -1073741811;
          goto LABEL_34;
        }
        if ( (unsigned __int64)v19 > 0xFFFF )
        {
          v14 = -1073741811;
          goto LABEL_34;
        }
        P = (wchar_t *)ExAllocatePool2(0x103uLL);
        if ( !P )
        {
          v14 = -1073741670;
          goto LABEL_34;
        }
        memmove(P, Src[1], (size_t)v19);
      }
      else
      {
        P = CacheInformation->CatalogDirectoryPath.Buffer;
      }
      LOBYTE(Flags) = PreviousMode;
      v15 = guard_dispatch_icall_no_overrides(*(_QWORD *)&Flags);
      goto LABEL_31;
    }
LABEL_33:
    v14 = -1073741822;
    goto LABEL_34;
  }
  if ( !qword_140F044A8 )
    goto LABEL_33;
  if ( (InputSigningLevel & 0x30) != 0 )
    goto LABEL_41;
  if ( SourceFileCount - 1 > 0xFFF )
    goto LABEL_39;
  if ( (Flags & 6) == 0 && InputSigningLevel )
  {
LABEL_41:
    v14 = -1073741584;
    goto LABEL_34;
  }
  if ( (Flags & 3) == 3 )
    goto LABEL_38;
  if ( PreviousMode == 1 )
  {
    if ( (Flags & 2) == 0 )
    {
      v8 = Flags | 1;
      if ( (Flags & 4) != 0 )
        goto LABEL_10;
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( (BYTE2(Process[3].ActiveGroupsMask.Masks[1]) & 7) == 1 )
      {
        v21 = Process[3].ActiveGroupsMask.Masks[1] & 0xF;
        LOBYTE(Process) = BYTE1(Process[3].ActiveGroupsMask.Masks[1]) & 0xF;
        SeCompareSigningLevels(Process, v21);
        goto LABEL_10;
      }
LABEL_68:
      v14 = -1073741790;
      goto LABEL_34;
    }
LABEL_38:
    v14 = -1073741585;
    goto LABEL_34;
  }
  if ( (Flags & 1) == 0 && (Flags & 2) == 0 )
    goto LABEL_38;
LABEL_10:
  v11 = 8 * v6;
  Pool2 = (UNICODE_STRING *)ExAllocatePool2(0x100uLL);
  SourceString[1] = Pool2;
  if ( !Pool2 )
  {
    v14 = -1073741670;
    goto LABEL_34;
  }
  if ( PreviousMode == 1 )
  {
    if ( v11 && ((unsigned __int8)SourceFiles & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = CacheInformation;
    if ( CacheInformation && ((unsigned __int8)CacheInformation & 3) != 0 )
      ExRaiseDatatypeMisalignment();
  }
  else
  {
    v12 = CacheInformation;
  }
  memmove(Pool2, SourceFiles, v11);
  if ( !v12 )
    goto LABEL_27;
  if ( v12->Size < 0x18 )
  {
    v14 = -1073741580;
    goto LABEL_34;
  }
  if ( !v12->CatalogDirectoryPath.Length
    || (LOBYTE(v13) = PreviousMode,
        v14 = SepCaptureUnicodeStringArray(&v12->CatalogDirectoryPath, 1LL, v13, SourceString),
        v14 >= 0)
    && (v14 = RtlUnicodeStringValidateEx(SourceString[0], InputSigningLevel), v14 >= 0) )
  {
LABEL_27:
    *(_QWORD *)&InputSigningLevel = SourceFileCount;
    if ( (v8 & 6) == 0 )
    {
LABEL_30:
      v15 = guard_dispatch_icall_no_overrides(v8 & 0x807);
LABEL_31:
      v14 = v15;
      goto LABEL_34;
    }
    if ( SourceFileCount == 1 )
    {
      if ( TargetFile == *(HANDLE *)&Pool2->Length )
        goto LABEL_30;
      v14 = -1073741581;
      goto LABEL_34;
    }
LABEL_39:
    v14 = -1073741582;
  }
LABEL_34:
  LOBYTE(v16) = PreviousMode;
  SepReleaseUnicodeStringArray(SourceString[0], v16);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x63734943u);
  if ( P && PreviousMode == 1 )
    ExFreePoolWithTag(P, 0x63734943u);
  return v14;
}
