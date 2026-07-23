/*
 * XREFs of MiCreateSectionCommon @ 0x140954024
 * Callers:
 *     NtCreateSectionEx @ 0x1407EC8C0 (NtCreateSectionEx.c)
 *     MmCreateSectionForHotpatch @ 0x1407F6770 (MmCreateSectionForHotpatch.c)
 *     PfpFileBuildReadSupport @ 0x140937944 (PfpFileBuildReadSupport.c)
 *     PfSnGetSectionObject @ 0x140953A3C (PfSnGetSectionObject.c)
 *     NtCreateSection @ 0x1409548F0 (NtCreateSection.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsGetSessionIdEx @ 0x14030CBE0 (PsGetSessionIdEx.c)
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14031F4D0 (PsReferencePrimaryTokenWithTag.c)
 *     MiSectionControlArea @ 0x140355A80 (MiSectionControlArea.c)
 *     MiReferenceControlAreaFile @ 0x14041CAA0 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x14041F2B0 (MiDereferenceControlAreaFile.c)
 *     CcZeroEndOfLastPage @ 0x140443674 (CcZeroEndOfLastPage.c)
 *     ObInsertObjectEx @ 0x140853900 (ObInsertObjectEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     MiCaptureSectionCreateExtendedParameters @ 0x14098AE58 (MiCaptureSectionCreateExtendedParameters.c)
 *     MiCreateSection @ 0x14098B3C0 (MiCreateSection.c)
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
  int v14; // r8d
  unsigned int v15; // eax
  __int64 result; // rax
  __int64 v17; // rcx
  int v18; // r12d
  struct _KTHREAD *CurrentThread; // rax
  __int64 Process; // r15
  char v21; // r14
  int v22; // eax
  int SessionId; // r12d
  int Section; // esi
  unsigned __int64 v25; // rax
  __int64 v26; // rdi
  struct _FILE_OBJECT *v27; // rbx
  __int64 v28; // [rsp+70h] [rbp-68h]
  PVOID Object; // [rsp+78h] [rbp-60h] BYREF
  __int64 v30; // [rsp+80h] [rbp-58h] BYREF
  __int128 v31; // [rsp+88h] [rbp-50h] BYREF
  int v32; // [rsp+98h] [rbp-40h]
  char v33; // [rsp+9Ch] [rbp-3Ch]
  int v37; // [rsp+108h] [rbp+30h]

  v12 = 0LL;
  Object = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0;
  v33 = 0;
  LODWORD(v28) = 0;
  if ( (a6 & 0x3000000) == 0x3000000 )
    return 3221225716LL;
  if ( (a6 & 0x2100000) == 0 || (v14 = 1, (a6 & 0x1100000) == 0x1100000) )
    v14 = 0;
  if ( (a6 & 0x2080FFFF) != 0 || (a6 & 0xF100000) == 0 )
    return 3221225716LL;
  if ( (a6 & 0x3100000) != 0 )
  {
    v15 = (2 * (a6 & 0x100000 | 0xE6238000)) & 0xFFBFFFFF;
    if ( (a6 & 0x2100000) == 0 )
      v15 = 2 * (a6 & 0x100000 | 0xE6238000);
    if ( (v15 & a6) != 0 )
      return 3221225716LL;
  }
  if ( (a6 & 0xC000000) == 0xC000000 )
    return 3221225716LL;
  if ( a6 >= 0 )
  {
    if ( (a6 & 0xA0000) == 0xA0000 )
      return 3221225716LL;
  }
  else if ( (a6 & 0x80000) != 0 || (a6 & 0x20000) != 0 )
  {
    return 3221225716LL;
  }
  if ( (a6 & 0x30000) == 0x10000 )
    return 3221225716LL;
  if ( (a5 & 0x701) != 0 )
    return 3221225541LL;
  if ( !a11 )
  {
    if ( a4 )
      v28 = *a4;
    goto LABEL_30;
  }
  if ( v14 )
    return 3221225716LL;
  v17 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
    v17 = (__int64)a1;
  *(_QWORD *)v17 = *(_QWORD *)v17;
  if ( a4 )
  {
    if ( ((unsigned __int8)a4 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v28 = *a4;
  }
LABEL_30:
  result = MiCaptureSectionCreateExtendedParameters(Address, (unsigned int)ullMultiplicand, (__int64)&v31);
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
    v22 = v18 | 0x40;
    if ( (a10 & 4) == 0 )
      v22 = v18;
    v37 = v22;
    SessionId = PsGetSessionIdEx(Process);
    while ( 1 )
    {
      Section = MiCreateSection(
                  (unsigned int)&Object,
                  a3,
                  v28,
                  a5,
                  a6,
                  v37,
                  (__int64)v12,
                  v21,
                  a7,
                  0LL,
                  a11,
                  SessionId,
                  (__int64)&v31);
      if ( Section != -1073741740 )
        break;
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiHalfSecond);
    }
    if ( v12 )
      ObfDereferenceObject(v12);
    if ( Section >= 0 )
    {
      v25 = MiSectionControlArea((__int64)Object);
      v26 = v25;
      if ( v25 && *(_QWORD *)(v25 + 64) )
      {
        v27 = (struct _FILE_OBJECT *)MiReferenceControlAreaFile(v25);
        CcZeroEndOfLastPage(v27);
        MiDereferenceControlAreaFile(v26, (signed __int64)v27);
      }
      result = ObInsertObjectEx((struct _FILE_OBJECT *)Object, 0LL, a2, 0, 0, 0LL, (__int64)&v30);
      if ( (int)result >= 0 )
        *a1 = v30;
    }
    else
    {
      return (unsigned int)Section;
    }
  }
  return result;
}
