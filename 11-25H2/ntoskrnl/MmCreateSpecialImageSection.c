/*
 * XREFs of MmCreateSpecialImageSection @ 0x14093AC3C
 * Callers:
 *     PspLocateSystemDll @ 0x1407624B0 (PspLocateSystemDll.c)
 *     NtCreateUserProcess @ 0x1409BC1D0 (NtCreateUserProcess.c)
 * Callees:
 *     CcZeroEndOfLastPage @ 0x140203918 (CcZeroEndOfLastPage.c)
 *     PsGetSessionIdEx @ 0x140246440 (PsGetSessionIdEx.c)
 *     KeDelayExecutionThread @ 0x14027A990 (KeDelayExecutionThread.c)
 *     MiSectionControlArea @ 0x1403B4FE0 (MiSectionControlArea.c)
 *     MiReferenceControlAreaFile @ 0x14042F960 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x140432C40 (MiDereferenceControlAreaFile.c)
 *     ObInsertObjectEx @ 0x1408A05E0 (ObInsertObjectEx.c)
 *     MiCreateSection @ 0x14093C8A0 (MiCreateSection.c)
 */

__int64 __fastcall MmCreateSpecialImageSection(__int64 *a1, int a2, __int64 a3, char a4, __int64 a5, char a6)
{
  _KPROCESS *Process; // rcx
  int v11; // edi
  int SessionId; // r12d
  __int64 result; // rax
  unsigned __int64 v14; // rdi
  struct _FILE_OBJECT *v15; // rbx
  PVOID Object; // [rsp+70h] [rbp-38h] BYREF
  __int64 v17; // [rsp+78h] [rbp-30h] BYREF

  v17 = 0LL;
  Object = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v11 = a6 & 1 | 8;
  if ( (a6 & 4) == 0 )
    v11 = a6 & 1;
  SessionId = PsGetSessionIdEx((__int64)Process);
  while ( 1 )
  {
    result = MiCreateSection(
               (unsigned int)&Object,
               a2,
               0,
               16,
               (a6 & 1) != 0 ? 0x1000000 : 37748736,
               v11,
               a3,
               a4,
               a5,
               0LL,
               0,
               SessionId,
               0LL);
    if ( (int)result >= 0 )
      break;
    if ( (_DWORD)result != -1073741740 )
      return result;
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiHalfSecond);
  }
  v14 = MiSectionControlArea((__int64)Object);
  v15 = (struct _FILE_OBJECT *)MiReferenceControlAreaFile(v14);
  CcZeroEndOfLastPage(v15);
  MiDereferenceControlAreaFile(v14, (signed __int64)v15);
  result = ObInsertObjectEx((char *)Object, 0LL, 983071, 0, 0, 0LL, (__int64)&v17);
  if ( (int)result >= 0 )
    *a1 = v17;
  return result;
}
