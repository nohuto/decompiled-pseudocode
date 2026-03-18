/*
 * XREFs of MmCanFileBeTruncated @ 0x140314BE0
 * Callers:
 *     CcPurgeCacheSection @ 0x14023EF70 (CcPurgeCacheSection.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     MiCanFileBeTruncatedInternal @ 0x140314C44 (MiCanFileBeTruncatedInternal.c)
 */

BOOLEAN __stdcall MmCanFileBeTruncated(PSECTION_OBJECT_POINTERS SectionPointer, PLARGE_INTEGER NewFileSize)
{
  LONGLONG QuadPart; // rax
  __int64 CanFileBeTruncatedInternal; // rax
  unsigned __int8 v5; // [rsp+40h] [rbp+8h] BYREF
  LONGLONG v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0LL;
  v5 = 0;
  if ( NewFileSize )
  {
    QuadPart = NewFileSize->QuadPart;
    NewFileSize = (PLARGE_INTEGER)&v6;
    v6 = QuadPart;
  }
  CanFileBeTruncatedInternal = MiCanFileBeTruncatedInternal(
                                 (_DWORD)SectionPointer,
                                 (_DWORD)NewFileSize,
                                 0,
                                 0,
                                 (__int64)&v5);
  if ( v5 == 17 )
    return 0;
  if ( CanFileBeTruncatedInternal )
    MiReleaseSpinLockExclusive((_DWORD *)(CanFileBeTruncatedInternal + 72), v5);
  return 1;
}
