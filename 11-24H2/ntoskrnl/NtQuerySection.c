/*
 * XREFs of NtQuerySection @ 0x14093C3B0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084B7E0 (ObpReferenceObjectByHandleWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     ExRaiseAccessViolation @ 0x1408C10E0 (ExRaiseAccessViolation.c)
 *     MmGetSectionInformation @ 0x14093C550 (MmGetSectionInformation.c)
 */

__int64 __fastcall NtQuerySection(
        ULONG_PTR BugCheckParameter1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 *a5)
{
  unsigned __int64 v5; // r14
  char PreviousMode; // r10
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rbx
  int SectionInformation; // edi
  __int64 v14; // rdx
  PVOID v15; // rsi
  PVOID Object[3]; // [rsp+40h] [rbp-18h] BYREF

  v5 = a3;
  Object[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( a4 )
    {
      if ( (a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v9 = a3 + a4 - 1;
      if ( a3 > v9 || (v10 = 0x7FFFFFFF0000LL, v9 >= 0x7FFFFFFF0000LL) )
        ExRaiseAccessViolation();
      v11 = (v9 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)a3 = *(_BYTE *)a3;
        a3 = (a3 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( a3 != v11 );
    }
    else
    {
      v10 = 0x7FFFFFFF0000LL;
    }
    if ( a5 )
    {
      if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
        v10 = (__int64)a5;
      *(_QWORD *)v10 = *(_QWORD *)v10;
    }
  }
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v12 = 64LL;
    }
    else
    {
      if ( a2 != 2 && a2 != 3 )
        return 3221225475LL;
      v12 = 8LL;
    }
  }
  else
  {
    v12 = 24LL;
  }
  if ( a4 < v12 )
    return 3221225476LL;
  SectionInformation = ObpReferenceObjectByHandleWithTag(
                         BugCheckParameter1,
                         1,
                         (__int64)MmSectionObjectType,
                         PreviousMode,
                         0x6D566D4Du,
                         Object,
                         0LL,
                         0LL);
  if ( SectionInformation >= 0 )
  {
    v14 = a2;
    v15 = Object[0];
    SectionInformation = MmGetSectionInformation(Object[0], v14, v5);
    if ( SectionInformation >= 0 )
    {
      if ( a5 )
        *a5 = v12;
    }
    ObfDereferenceObjectWithTag(v15, 0x6D566D4Du);
  }
  return (unsigned int)SectionInformation;
}
