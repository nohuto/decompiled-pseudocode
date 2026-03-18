/*
 * XREFs of MiCreateSectionCommon @ 0x1408C2964
 * Callers:
 *     NtCreateSectionEx @ 0x1407DC450 (NtCreateSectionEx.c)
 *     PfSnGetSectionObject @ 0x1408C237C (PfSnGetSectionObject.c)
 *     PfpFileBuildReadSupport @ 0x1409C7864 (PfpFileBuildReadSupport.c)
 *     NtCreateSection @ 0x140A30C80 (NtCreateSection.c)
 *     MiCreatePatchSectionRequest @ 0x140AA63E8 (MiCreatePatchSectionRequest.c)
 * Callees:
 *     CcZeroEndOfLastPage @ 0x140203918 (CcZeroEndOfLastPage.c)
 *     PsGetSessionIdEx @ 0x140246440 (PsGetSessionIdEx.c)
 *     KeDelayExecutionThread @ 0x14027A990 (KeDelayExecutionThread.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14029AE50 (PsReferencePrimaryTokenWithTag.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     MiSectionControlArea @ 0x1403B4FE0 (MiSectionControlArea.c)
 *     MiReferenceControlAreaFile @ 0x14042F960 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x140432C40 (MiDereferenceControlAreaFile.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     ObInsertObjectEx @ 0x1408A05E0 (ObInsertObjectEx.c)
 *     MiCaptureSectionCreateExtendedParameters @ 0x14093C338 (MiCaptureSectionCreateExtendedParameters.c)
 *     MiCreateSection @ 0x14093C8A0 (MiCreateSection.c)
 */

__int64 __fastcall MiCreateSectionCommon(
        __int64 *a1,
        int a2,
        int a3,
        __int64 *a4,
        int a5,
        int a6,
        __int64 a7,
        volatile void *Address,
        ULONGLONG ullMultiplicand,
        char a10,
        char a11)
{
  void *v12; // rdi
  int v13; // r8d
  int v14; // eax
  __int64 v15; // rcx
  __int64 result; // rax
  int v17; // r12d
  struct _KTHREAD *CurrentThread; // rax
  __int64 Process; // rsi
  char v20; // r14
  int SessionId; // r13d
  int Section; // esi
  unsigned __int64 v23; // rax
  __int64 v24; // rdi
  struct _FILE_OBJECT *v25; // rbx
  unsigned int v26; // eax
  __int64 v27; // [rsp+70h] [rbp-68h]
  PVOID Object; // [rsp+78h] [rbp-60h] BYREF
  __int64 v29; // [rsp+80h] [rbp-58h] BYREF
  __int128 v30; // [rsp+88h] [rbp-50h] BYREF
  int v31; // [rsp+98h] [rbp-40h]
  char v32; // [rsp+9Ch] [rbp-3Ch]

  v12 = 0LL;
  Object = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0;
  v32 = 0;
  LODWORD(v27) = 0;
  if ( (a6 & 0x3000000) == 0x3000000 )
    return 3221225716LL;
  if ( (a6 & 0x2100000) == 0 || (v13 = 1, (a6 & 0x1100000) == 0x1100000) )
    v13 = 0;
  if ( (a6 & 0x2080FFFF) != 0 || (a6 & 0xF100000) == 0 )
    return 3221225716LL;
  if ( (a6 & 0x3100000) != 0 )
  {
    v26 = (2 * (a6 & 0x100000 | 0xE6238000)) & 0xFFBFFFFF;
    if ( (a6 & 0x2100000) == 0 )
      v26 = 2 * (a6 & 0x100000 | 0xE6238000);
    if ( (v26 & a6) != 0 )
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
      v27 = *a4;
    goto LABEL_21;
  }
  if ( v13 )
    return 3221225716LL;
  v15 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
    v15 = (__int64)a1;
  *(_QWORD *)v15 = *(_QWORD *)v15;
  if ( a4 )
  {
    if ( ((unsigned __int8)a4 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v27 = *a4;
  }
LABEL_21:
  result = MiCaptureSectionCreateExtendedParameters(Address, (unsigned int)ullMultiplicand, (__int64)&v30);
  if ( (int)result >= 0 )
  {
    v17 = 0;
    CurrentThread = KeGetCurrentThread();
    Process = (__int64)CurrentThread->ApcState.Process;
    if ( a11 == 1 || (a10 & 2) != 0 )
    {
      v20 = *(_BYTE *)(Process + 1529);
      v12 = (void *)PsReferencePrimaryTokenWithTag((__int64)CurrentThread->ApcState.Process, 0x746C6644u);
    }
    else if ( (v31 & 8) != 0 )
    {
      v20 = BYTE12(v30);
      v17 = 16;
    }
    else
    {
      v20 = 0;
    }
    SessionId = PsGetSessionIdEx(Process);
    while ( 1 )
    {
      Section = MiCreateSection(
                  (unsigned int)&Object,
                  a3,
                  v27,
                  a5,
                  a6,
                  v17,
                  (__int64)v12,
                  v20,
                  a7,
                  0LL,
                  a11,
                  SessionId,
                  (__int64)&v30);
      if ( Section != -1073741740 )
        break;
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiHalfSecond);
    }
    if ( v12 )
      ObfDereferenceObject(v12);
    if ( Section < 0 )
    {
      return (unsigned int)Section;
    }
    else
    {
      v23 = MiSectionControlArea((__int64)Object);
      v24 = v23;
      if ( v23 && *(_QWORD *)(v23 + 64) )
      {
        v25 = (struct _FILE_OBJECT *)MiReferenceControlAreaFile(v23);
        CcZeroEndOfLastPage(v25);
        MiDereferenceControlAreaFile(v24, (signed __int64)v25);
      }
      result = ObInsertObjectEx((char *)Object, 0LL, a2, 0, 0, 0LL, (__int64)&v29);
      if ( (int)result >= 0 )
        *a1 = v29;
    }
  }
  return result;
}
