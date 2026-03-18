/*
 * XREFs of MiInitializeApiSets @ 0x140C49CDC
 * Callers:
 *     MiInitSystem @ 0x140C3C930 (MiInitSystem.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     MmMapViewInSessionSpace @ 0x1408BA360 (MmMapViewInSessionSpace.c)
 *     MmCreateSection @ 0x14093C290 (MmCreateSection.c)
 */

__int64 __fastcall MiInitializeApiSets(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax
  PVOID v4; // rdi
  NTSTATUS v5; // ebx
  PVOID v6; // rbx
  PVOID Section; // [rsp+60h] [rbp+8h] BYREF
  PVOID MappedBase; // [rsp+68h] [rbp+10h] BYREF
  ULONG_PTR ViewSize; // [rsp+70h] [rbp+18h] BYREF

  v1 = *(_QWORD *)(a1 + 240);
  MappedBase = 0LL;
  Section = 0LL;
  ViewSize = *(unsigned int *)(v1 + 2728);
  result = MmCreateSection((int)&Section, 983071LL, 0, &ViewSize, 4, 0x8000000, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    v4 = Section;
    ViewSize = 0LL;
    v5 = MmMapViewInSessionSpace(Section, &MappedBase, &ViewSize);
    if ( v5 >= 0 )
    {
      v6 = MappedBase;
      memmove(
        MappedBase,
        *(const void **)(*(_QWORD *)(a1 + 240) + 2720LL),
        *(unsigned int *)(*(_QWORD *)(a1 + 240) + 2728LL));
      qword_140E2D498 = (__int64)v4;
      qword_140E2D4A0 = (__int64)v6;
      result = 0LL;
      qword_140E2D4A8 = *(unsigned int *)(*(_QWORD *)(a1 + 240) + 2728LL);
    }
    else
    {
      ObfDereferenceObjectWithTag(v4, 0x63536D4Du);
      return (unsigned int)v5;
    }
  }
  return result;
}
