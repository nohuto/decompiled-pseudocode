/*
 * XREFs of SmpSaveRegistryValue_U @ 0x140008890
 * Callers:
 *     SmpProcessModuleImports @ 0x1400086D0 (SmpProcessModuleImports.c)
 *     SmpSaveRegistryValue @ 0x140019758 (SmpSaveRegistryValue.c)
 * Callees:
 *     SmpFreeSavedRegistryEntry @ 0x14000D6BC (SmpFreeSavedRegistryEntry.c)
 *     memcpy_0 @ 0x14001EF87 (memcpy_0.c)
 */

__int64 __fastcall SmpSaveRegistryValue_U(
        struct _UNICODE_STRING **a1,
        const UNICODE_STRING *a2,
        const UNICODE_STRING *a3,
        char a4,
        struct _UNICODE_STRING **a5)
{
  int v5; // r15d
  struct _UNICODE_STRING *i; // rbx
  PWSTR Buffer; // r8
  void *v13; // r8
  struct _UNICODE_STRING *Heap; // rax
  WCHAR *v15; // rax
  CHAR *v16; // rax
  USHORT v17; // ax
  struct _UNICODE_STRING *v18; // rax
  struct _STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF

  v5 = 1;
  DestinationString = 0LL;
  if ( (a4 & 1) != 0 )
  {
    for ( i = *a1; ; i = *(struct _UNICODE_STRING **)&i->Length )
    {
      if ( i == (struct _UNICODE_STRING *)a1 )
        goto LABEL_15;
      if ( !RtlCompareUnicodeString(i + 1, a2, 1u) )
        break;
    }
    if ( i[2].Buffer )
    {
      if ( !a3 )
      {
LABEL_12:
        Buffer = i[2].Buffer;
        v5 = 0;
        if ( Buffer )
        {
          RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Buffer);
          v13 = *(void **)&i[3].Length;
          if ( v13 )
            RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v13);
        }
        goto LABEL_17;
      }
    }
    else if ( !a3 )
    {
      return 0x40000000LL;
    }
    if ( !RtlCompareUnicodeString(i + 2, a3, 1u) )
      return 0x40000000LL;
    goto LABEL_12;
  }
LABEL_15:
  Heap = (struct _UNICODE_STRING *)RtlAllocateHeap(
                                     *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                                     SmBaseTag,
                                     a2->MaximumLength + 56LL);
  i = Heap;
  if ( !Heap )
    return 3221225495LL;
  Heap->Buffer = &Heap->Length;
  *(_QWORD *)&Heap->Length = Heap;
  Heap[1].Buffer = (PWSTR)&Heap[3].Buffer;
  Heap[1].Length = a2->Length;
  Heap[1].MaximumLength = a2->MaximumLength;
  *(_QWORD *)&Heap[3].Length = 0LL;
  memcpy_0(&Heap[3].Buffer, a2->Buffer, a2->MaximumLength);
  i[2].Buffer = 0LL;
LABEL_17:
  if ( !a3 )
  {
    RtlInitUnicodeString(i + 2, 0LL);
    goto LABEL_25;
  }
  v15 = (WCHAR *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, a3->MaximumLength);
  i[2].Buffer = v15;
  if ( !v15 )
  {
LABEL_22:
    SmpFreeSavedRegistryEntry(i);
    return 3221225495LL;
  }
  i[2].Length = a3->Length;
  i[2].MaximumLength = a3->MaximumLength;
  memcpy_0(v15, a3->Buffer, a3->MaximumLength);
  if ( (a4 & 2) != 0 )
  {
    v16 = (CHAR *)RtlAllocateHeap(
                    *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                    SmBaseTag,
                    ((unsigned __int64)a3->Length >> 1) + 1);
    *(_QWORD *)&i[3].Length = v16;
    if ( v16 )
    {
      DestinationString.Buffer = v16;
      v17 = (a3->Length >> 1) + 1;
      DestinationString.Length = 0;
      DestinationString.MaximumLength = v17;
      RtlUnicodeStringToAnsiString(&DestinationString, a3, 0);
      goto LABEL_25;
    }
    goto LABEL_22;
  }
LABEL_25:
  if ( v5 )
  {
    v18 = a1[1];
    if ( *(struct _UNICODE_STRING ***)&v18->Length != a1 )
      __fastfail(3u);
    *(_QWORD *)&i->Length = a1;
    i->Buffer = &v18->Length;
    *(_QWORD *)&v18->Length = i;
    a1[1] = i;
  }
  if ( a5 )
    *a5 = i;
  return 0LL;
}
