/*
 * XREFs of NtExtendSection @ 0x140989CF0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     MmExtendSection @ 0x14098A134 (MmExtendSection.c)
 */

NTSTATUS __cdecl NtExtendSection(HANDLE SectionHandle, PLARGE_INTEGER NewSectionSize)
{
  char PreviousMode; // r9
  NTSTATUS result; // eax
  __int64 v6; // rcx
  PVOID Object[3]; // [rsp+40h] [rbp-18h] BYREF
  NTSTATUS v8; // [rsp+70h] [rbp+18h]
  LONGLONG QuadPart; // [rsp+78h] [rbp+20h] BYREF

  Object[0] = 0LL;
  QuadPart = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((unsigned __int8)NewSectionSize & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)NewSectionSize < 0x7FFFFFFF0000LL )
      v6 = (__int64)NewSectionSize;
    *(_BYTE *)v6 = *(_BYTE *)v6;
    *(_BYTE *)(v6 + 7) = *(_BYTE *)(v6 + 7);
    QuadPart = NewSectionSize->QuadPart;
  }
  else
  {
    QuadPart = NewSectionSize->QuadPart;
  }
  result = ObpReferenceObjectByHandleWithTag(
             (ULONG_PTR)SectionHandle,
             16,
             (__int64)MmSectionObjectType,
             PreviousMode,
             0x63536D4Du,
             Object,
             0LL,
             0LL);
  if ( result >= 0 )
  {
    v8 = MmExtendSection(Object[0], &QuadPart, 0LL);
    ObfDereferenceObjectWithTag(Object[0], 0x63536D4Du);
    NewSectionSize->QuadPart = QuadPart;
    return v8;
  }
  return result;
}
