/*
 * XREFs of RtlpExtendedHeapInformationWorkerThread @ 0x180143B40
 * Callers:
 *     <none>
 * Callees:
 *     RtlSetHeapInformation @ 0x1800024D0 (RtlSetHeapInformation.c)
 *     RtlExitUserThread @ 0x180008DE0 (RtlExitUserThread.c)
 *     RtlQueryHeapInformation @ 0x18009A820 (RtlQueryHeapInformation.c)
 *     RtlpHpStackLoggingEnabled @ 0x1800D83B0 (RtlpHpStackLoggingEnabled.c)
 *     RtlpHpTagQueryTags @ 0x1800E0980 (RtlpHpTagQueryTags.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     ZwMapViewOfSection @ 0x180163720 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x180163760 (NtUnmapViewOfSection.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

void __fastcall __noreturn RtlpExtendedHeapInformationWorkerThread(char *a1)
{
  bool v2; // zf
  NTSTATUS Tags; // eax
  NTSTATUS v4; // esi
  SIZE_T CommitSize; // rcx
  _QWORD **v6; // r14
  int v7; // r9d
  __int64 v8; // rax
  void *v9; // rdx
  __int128 HeapInformation; // [rsp+58h] [rbp-59h] BYREF
  __int128 v11; // [rsp+68h] [rbp-49h] BYREF
  __int128 v12; // [rsp+78h] [rbp-39h]
  __int64 v13; // [rsp+88h] [rbp-29h]
  _QWORD v14[2]; // [rsp+98h] [rbp-19h] BYREF
  int v15; // [rsp+A8h] [rbp-9h]
  NTSTATUS (__fastcall *v16)(size_t *, __int64); // [rsp+B0h] [rbp-1h]
  char *v17; // [rsp+B8h] [rbp+7h]

  memset_thunk_772440563353939046(v14, 0, 0x58uLL);
  LODWORD(v13) = 0;
  v2 = *((_DWORD *)a1 + 6) == 0x10000000;
  v11 = 0LL;
  v12 = 0LL;
  HeapInformation = 0LL;
  if ( v2 )
  {
    DWORD1(HeapInformation) = 0;
    *((_QWORD *)&HeapInformation + 1) = -1LL;
    LOWORD(HeapInformation) = 1;
    WORD1(HeapInformation) = *((_WORD *)a1 + 40);
    Tags = RtlSetHeapInformation(0LL, (HEAP_INFORMATION_CLASS)5, &HeapInformation, 0x10uLL);
    v4 = Tags;
LABEL_3:
    *((_DWORD *)a1 + 7) = Tags;
    goto LABEL_22;
  }
  if ( *((_DWORD *)a1 + 6) == 0x40000000 )
  {
    CommitSize = *((_QWORD *)a1 + 1);
  }
  else
  {
    if ( *((_DWORD *)a1 + 6) == 0x8000000 )
    {
      if ( RtlpHpStackLoggingEnabled((__int64)NtCurrentPeb()->ProcessHeap) )
        *((_DWORD *)a1 + 22) |= 1u;
      v4 = 0;
      goto LABEL_22;
    }
    CommitSize = 0x10000LL;
  }
  v6 = (_QWORD **)(a1 + 48);
  *((_QWORD *)a1 + 7) = CommitSize;
  *((_QWORD *)a1 + 8) = 0LL;
  v4 = ZwMapViewOfSection(
         *(HANDLE *)a1,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         (PVOID *)a1 + 6,
         0LL,
         CommitSize,
         (PLARGE_INTEGER)a1 + 8,
         (PSIZE_T)a1 + 7,
         ViewUnmap,
         0,
         4u);
  if ( v4 >= 0 )
  {
    *((_QWORD *)a1 + 9) = 0LL;
    *((_QWORD *)a1 + 4) = 0LL;
    *((_DWORD *)a1 + 10) = 0;
    *((_DWORD *)a1 + 7) = 0;
    v7 = *((_DWORD *)a1 + 6);
    if ( v7 == 0x40000000 )
    {
      (*v6)[1] = -1LL;
      Tags = RtlpHpTagQueryTags(*v6, *((_QWORD *)a1 + 7), (_QWORD *)a1 + 4);
      goto LABEL_3;
    }
    if ( v7 == 0x20000000 )
    {
      DWORD1(v11) = 0;
      v13 = 0LL;
      *((_DWORD *)a1 + 7) = 0;
      *(_QWORD *)&v12 = RtlpHpRemoteStackSerializeWriter;
      LODWORD(v11) = 2;
      *((_QWORD *)&v11 + 1) = -1LL;
      *((_QWORD *)&v12 + 1) = a1;
      v4 = RtlQueryHeapInformation(0LL, (HEAP_INFORMATION_CLASS)5, &v11, 0x28uLL, 0LL);
      if ( v4 >= 0 )
        v4 = *((_DWORD *)a1 + 7);
      if ( (v13 & 0x100) != 0 )
        *((_DWORD *)a1 + 22) |= 1u;
    }
    else
    {
      v8 = *((_QWORD *)a1 + 2);
      v15 = *((_DWORD *)a1 + 6);
      v14[1] = v8;
      v14[0] = -1LL;
      v16 = RtlpExtendedHeapInformationWorkerCallback;
      v17 = a1;
      v4 = RtlQueryHeapInformation(0LL, (HEAP_INFORMATION_CLASS)2, v14, 0x58uLL, 0LL);
      if ( v4 >= 0 && *((int *)a1 + 7) < 0 )
        v4 = *((_DWORD *)a1 + 7);
    }
  }
LABEL_22:
  v9 = (void *)*((_QWORD *)a1 + 6);
  if ( v9 )
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v9);
  if ( *(_QWORD *)a1 )
    NtClose(*(HANDLE *)a1);
  *((_DWORD *)a1 + 7) = v4;
  RtlExitUserThread(0);
}
