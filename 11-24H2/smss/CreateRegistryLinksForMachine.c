/*
 * XREFs of CreateRegistryLinksForMachine @ 0x14000CCA8
 * Callers:
 *     InitializeWow64OnBoot @ 0x14000CB90 (InitializeWow64OnBoot.c)
 * Callees:
 *     CreateMergeLink @ 0x140009B10 (CreateMergeLink.c)
 *     PathReplaceGreedy @ 0x14001ABB4 (PathReplaceGreedy.c)
 *     Wow64SelectWowNodePathInternal @ 0x14001AE60 (Wow64SelectWowNodePathInternal.c)
 */

__int64 __fastcall CreateRegistryLinksForMachine(__int16 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 *v4; // r13
  char v5; // r12
  NTSTATUS MergeLink; // ebx
  unsigned int i; // esi
  __int64 v8; // rax
  struct _UNICODE_STRING *v9; // r15
  struct _UNICODE_STRING *p_DestinationString; // r14
  int v11; // eax
  __int16 v12; // di
  __int16 v13; // bx
  USHORT v14; // di
  USHORT v15; // bx
  WCHAR *Heap; // rax
  WCHAR *v17; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-20h] BYREF
  struct _UNICODE_STRING v20; // [rsp+30h] [rbp-10h] BYREF

  v4 = 0LL;
  if ( a1 == 332 )
  {
    v5 = 0;
  }
  else
  {
    v5 = 1;
    v4 = (unsigned __int16 *)Wow64SelectWowNodePathInternal();
  }
  MergeLink = 0;
  for ( i = 0; i < 0x4E; ++i )
  {
    v8 = 16LL * i;
    DestinationString = 0LL;
    v20 = 0LL;
    v9 = (struct _UNICODE_STRING *)&RegistrySymbolicLinks[v8 + 8];
    p_DestinationString = (struct _UNICODE_STRING *)&RegistrySymbolicLinks[v8];
    if ( v5 )
    {
      v11 = *v4;
      v12 = v11 - 24;
      if ( v11 - 24 < 0 )
        v12 = 24 - v11;
      v13 = 2 * v12;
      v14 = v9->MaximumLength + 2 * v12;
      v15 = p_DestinationString->MaximumLength + v13;
      Heap = (WCHAR *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v15);
      *(_QWORD *)&DestinationString.Length = 0LL;
      DestinationString.MaximumLength = v15;
      DestinationString.Buffer = Heap;
      v17 = (WCHAR *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v14);
      *(_QWORD *)&v20.Length = 0LL;
      v20.MaximumLength = v14;
      v20.Buffer = v17;
      if ( !DestinationString.Buffer )
        return 3221225495LL;
      if ( !v17 )
      {
        RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, DestinationString.Buffer);
        return 3221225495LL;
      }
      RtlCopyUnicodeString(&DestinationString, p_DestinationString);
      RtlCopyUnicodeString(&v20, v9);
      PathReplaceGreedy(&Wowx86NodeString, v4, &DestinationString);
      PathReplaceGreedy(&Wowx86NodeString, v4, &v20);
      p_DestinationString = &DestinationString;
      v9 = &v20;
    }
    MergeLink = CreateMergeLink((__int128 *)p_DestinationString, (PVOID *)v9, a3, a4);
    if ( v5 )
    {
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, p_DestinationString->Buffer);
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v9->Buffer);
    }
    if ( MergeLink < 0 )
      return (unsigned int)MergeLink;
  }
  return (unsigned int)MergeLink;
}
