/*
 * XREFs of NtQuerySection @ 0x1408B64C0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     MmGetSectionInformation @ 0x1408B6660 (MmGetSectionInformation.c)
 *     ExRaiseAccessViolation @ 0x140936B90 (ExRaiseAccessViolation.c)
 */

NTSTATUS __cdecl NtQuerySection(
        HANDLE SectionHandle,
        SECTION_INFORMATION_CLASS SectionInformationClass,
        PVOID SectionInformation,
        SIZE_T SectionInformationLength,
        PSIZE_T ReturnLength)
{
  PVOID v5; // r14
  char PreviousMode; // r10
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  PVOID v11; // rcx
  SIZE_T v12; // rbx
  NTSTATUS v13; // edi
  __int64 v14; // rdx
  PVOID v15; // rsi
  PVOID Object[3]; // [rsp+40h] [rbp-18h] BYREF

  v5 = SectionInformation;
  Object[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( SectionInformationLength )
    {
      if ( ((unsigned __int8)SectionInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v9 = (unsigned __int64)SectionInformation + SectionInformationLength - 1;
      if ( (unsigned __int64)SectionInformation > v9 || (v10 = 0x7FFFFFFF0000LL, v9 >= 0x7FFFFFFF0000LL) )
        ExRaiseAccessViolation();
      v11 = (PVOID)((v9 & 0xFFFFFFFFFFFFF000uLL) + 4096);
      do
      {
        *(_BYTE *)SectionInformation = *(_BYTE *)SectionInformation;
        SectionInformation = (PVOID)(((unsigned __int64)SectionInformation & 0xFFFFFFFFFFFFF000uLL) + 4096);
      }
      while ( SectionInformation != v11 );
    }
    else
    {
      v10 = 0x7FFFFFFF0000LL;
    }
    if ( ReturnLength )
    {
      if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
        v10 = (__int64)ReturnLength;
      *(_QWORD *)v10 = *(_QWORD *)v10;
    }
  }
  if ( SectionInformationClass )
  {
    if ( SectionInformationClass == SectionImageInformation )
    {
      v12 = 64LL;
    }
    else
    {
      if ( SectionInformationClass != SectionRelocationInformation
        && SectionInformationClass != SectionOriginalBaseInformation )
      {
        return -1073741821;
      }
      v12 = 8LL;
    }
  }
  else
  {
    v12 = 24LL;
  }
  if ( SectionInformationLength < v12 )
    return -1073741820;
  v13 = ObpReferenceObjectByHandleWithTag(
          (ULONG_PTR)SectionHandle,
          1,
          (__int64)MmSectionObjectType,
          PreviousMode,
          0x6D566D4Du,
          Object,
          0LL,
          0LL);
  if ( v13 >= 0 )
  {
    v14 = (unsigned int)SectionInformationClass;
    v15 = Object[0];
    v13 = MmGetSectionInformation(Object[0], v14, v5);
    if ( v13 >= 0 )
    {
      if ( ReturnLength )
        *ReturnLength = v12;
    }
    ObfDereferenceObjectWithTag(v15, 0x6D566D4Du);
  }
  return v13;
}
