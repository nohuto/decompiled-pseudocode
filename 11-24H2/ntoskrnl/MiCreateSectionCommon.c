/*
 * XREFs of MiCreateSectionCommon @ 0x14096B594
 * Callers:
 *     NtCreateSectionEx @ 0x1407EC2F0 (NtCreateSectionEx.c)
 *     PfpFileBuildReadSupport @ 0x140953F94 (PfpFileBuildReadSupport.c)
 *     PfSnGetSectionObject @ 0x14096AFAC (PfSnGetSectionObject.c)
 *     NtCreateSection @ 0x14096BE90 (NtCreateSection.c)
 *     MiCreatePatchSectionRequest @ 0x140AAB9A8 (MiCreatePatchSectionRequest.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x1402464D0 (MiReferenceControlAreaFile.c)
 *     MiSectionControlArea @ 0x1402D4800 (MiSectionControlArea.c)
 *     PsGetSessionIdEx @ 0x1403025D0 (PsGetSessionIdEx.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     KeDelayExecutionThread @ 0x14033BC60 (KeDelayExecutionThread.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14033FFF0 (PsReferencePrimaryTokenWithTag.c)
 *     MiDereferenceControlAreaFile @ 0x14042C500 (MiDereferenceControlAreaFile.c)
 *     CcZeroEndOfLastPage @ 0x14044C774 (CcZeroEndOfLastPage.c)
 *     ObInsertObjectEx @ 0x140857620 (ObInsertObjectEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     MiCaptureSectionCreateExtendedParameters @ 0x140940BF8 (MiCaptureSectionCreateExtendedParameters.c)
 *     MiCreateSection @ 0x140941160 (MiCreateSection.c)
 */

__int64 __fastcall MiCreateSectionCommon(
        __int64 *a1,
        int a2,
        int a3,
        __int64 *a4,
        int a5,
        int a6,
        __int64 a7,
        _BYTE *Address,
        ULONGLONG ullMultiplicand,
        char a10,
        char a11)
{
  void *v12; // rdi
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // rcx
  char v16; // r9
  __int64 result; // rax
  int v18; // r12d
  struct _KTHREAD *CurrentThread; // rax
  __int64 Process; // rsi
  char v21; // r14
  int SessionId; // r13d
  int v23; // esi
  unsigned __int64 v24; // rax
  __int64 v25; // rdi
  struct _FILE_OBJECT *v26; // rbx
  unsigned int v27; // eax
  __int64 v28; // [rsp+70h] [rbp-68h]
  PVOID Object; // [rsp+78h] [rbp-60h] BYREF
  __int64 v30; // [rsp+80h] [rbp-58h] BYREF
  __int128 v31; // [rsp+88h] [rbp-50h] BYREF
  int v32; // [rsp+98h] [rbp-40h]
  char v33; // [rsp+9Ch] [rbp-3Ch]

  v12 = 0LL;
  Object = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0;
  v33 = 0;
  LODWORD(v28) = 0;
  if ( (a6 & 0x3000000) == 0x3000000 )
    return 3221225716LL;
  if ( (a6 & 0x2100000) == 0 || (v13 = 1LL, (a6 & 0x1100000) == 0x1100000) )
    v13 = 0LL;
  if ( (a6 & 0x2080FFFF) != 0 || (a6 & 0xF100000) == 0 )
    return 3221225716LL;
  if ( (a6 & 0x3100000) != 0 )
  {
    v27 = (2 * (a6 & 0x100000 | 0xE6238000)) & 0xFFBFFFFF;
    if ( (a6 & 0x2100000) == 0 )
      v27 = 2 * (a6 & 0x100000 | 0xE6238000);
    if ( (v27 & a6) != 0 )
      return 3221225716LL;
  }
  if ( (a6 & 0xC000000) == 0xC000000 )
    return 3221225716LL;
  if ( a6 < 0 )
  {
    if ( (a6 & 0x80000) != 0 || (a6 & 0x20000) != 0 )
      return 3221225716LL;
    v14 = 0;
  }
  else
  {
    if ( (a6 & 0xA0000) == 0xA0000 )
      return 3221225716LL;
    v14 = a6 & 0x20000;
  }
  if ( (a6 & 0x10000) != 0 && !v14 )
    return 3221225716LL;
  if ( (a5 & 0x701) != 0 )
    return 3221225541LL;
  if ( !a11 )
  {
    if ( a4 )
      v28 = *a4;
    goto LABEL_21;
  }
  if ( (_DWORD)v13 )
    return 3221225716LL;
  v15 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
    v15 = (__int64)a1;
  *(_QWORD *)v15 = *(_QWORD *)v15;
  if ( a4 )
  {
    if ( ((unsigned __int8)a4 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v28 = *a4;
  }
LABEL_21:
  v16 = 0;
  if ( (a10 & 1) == 0 )
    v16 = a11;
  result = MiCaptureSectionCreateExtendedParameters(Address, (unsigned int)ullMultiplicand, v13, v16, (__int64)&v31);
  if ( (int)result >= 0 )
  {
    v18 = 0;
    CurrentThread = KeGetCurrentThread();
    Process = (__int64)CurrentThread->ApcState.Process;
    if ( a11 == 1 || (a10 & 2) != 0 )
    {
      v21 = *(_BYTE *)(Process + 1529);
      v12 = (void *)PsReferencePrimaryTokenWithTag((__int64)CurrentThread->ApcState.Process, 0x746C6644u);
    }
    else if ( (v32 & 8) != 0 )
    {
      v21 = BYTE12(v31);
      v18 = 16;
    }
    else
    {
      v21 = 0;
    }
    SessionId = PsGetSessionIdEx(Process);
    while ( 1 )
    {
      v23 = MiCreateSection(&Object, a3, v28, a5, a6, v18, (__int64)v12, v21, a7, 0LL, a11, SessionId, (__int64)&v31);
      if ( v23 != -1073741740 )
        break;
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiHalfSecond);
    }
    if ( v12 )
      ObfDereferenceObject(v12);
    if ( v23 < 0 )
    {
      return (unsigned int)v23;
    }
    else
    {
      v24 = MiSectionControlArea((__int64)Object);
      v25 = v24;
      if ( v24 && *(_QWORD *)(v24 + 64) )
      {
        v26 = (struct _FILE_OBJECT *)MiReferenceControlAreaFile(v24);
        CcZeroEndOfLastPage(v26);
        MiDereferenceControlAreaFile(v25, (signed __int64)v26);
      }
      result = ObInsertObjectEx((struct _FILE_OBJECT *)Object, 0LL, a2, 0, 0, 0LL, (__int64)&v30);
      if ( (int)result >= 0 )
        *a1 = v30;
    }
  }
  return result;
}
