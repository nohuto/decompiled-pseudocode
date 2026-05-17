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

void __fastcall __noreturn RtlpExtendedHeapInformationWorkerThread(__int64 a1)
{
  bool v2; // zf
  int Tags; // eax
  int HeapInformation; // esi
  __int64 v5; // rcx
  _QWORD **v6; // r14
  int v7; // r9d
  __int64 v8; // rax
  __int128 v9; // [rsp+58h] [rbp-59h] BYREF
  __int128 v10; // [rsp+68h] [rbp-49h] BYREF
  __int128 v11; // [rsp+78h] [rbp-39h]
  __int64 v12; // [rsp+88h] [rbp-29h]
  _QWORD v13[2]; // [rsp+98h] [rbp-19h] BYREF
  int v14; // [rsp+A8h] [rbp-9h]
  __int64 (__fastcall *v15)(size_t *, __int64); // [rsp+B0h] [rbp-1h]
  __int64 v16; // [rsp+B8h] [rbp+7h]

  memset_thunk_772440563353939046(v13, 0, 0x58uLL);
  LODWORD(v12) = 0;
  v2 = *(_DWORD *)(a1 + 24) == 0x10000000;
  v10 = 0LL;
  v11 = 0LL;
  v9 = 0LL;
  if ( v2 )
  {
    DWORD1(v9) = 0;
    *((_QWORD *)&v9 + 1) = -1LL;
    LOWORD(v9) = 1;
    WORD1(v9) = *(_WORD *)(a1 + 80);
    Tags = RtlSetHeapInformation(0LL, 5, (__int64)&v9, 0x10uLL);
    HeapInformation = Tags;
LABEL_3:
    *(_DWORD *)(a1 + 28) = Tags;
    goto LABEL_22;
  }
  if ( *(_DWORD *)(a1 + 24) == 0x40000000 )
  {
    v5 = *(_QWORD *)(a1 + 8);
  }
  else
  {
    if ( *(_DWORD *)(a1 + 24) == 0x8000000 )
    {
      if ( RtlpHpStackLoggingEnabled((__int64)NtCurrentPeb()->ProcessHeap) )
        *(_DWORD *)(a1 + 88) |= 1u;
      HeapInformation = 0;
      goto LABEL_22;
    }
    v5 = 0x10000LL;
  }
  v6 = (_QWORD **)(a1 + 48);
  *(_QWORD *)(a1 + 56) = v5;
  *(_QWORD *)(a1 + 64) = 0LL;
  HeapInformation = ZwMapViewOfSection(*(_QWORD *)a1, -1LL, a1 + 48, 0LL, v5, a1 + 64, a1 + 56, 2, 0, 4);
  if ( HeapInformation >= 0 )
  {
    *(_QWORD *)(a1 + 72) = 0LL;
    *(_QWORD *)(a1 + 32) = 0LL;
    *(_DWORD *)(a1 + 40) = 0;
    *(_DWORD *)(a1 + 28) = 0;
    v7 = *(_DWORD *)(a1 + 24);
    if ( v7 == 0x40000000 )
    {
      (*v6)[1] = -1LL;
      Tags = RtlpHpTagQueryTags(*v6, *(_QWORD *)(a1 + 56), (_QWORD *)(a1 + 32));
      goto LABEL_3;
    }
    if ( v7 == 0x20000000 )
    {
      DWORD1(v10) = 0;
      v12 = 0LL;
      *(_DWORD *)(a1 + 28) = 0;
      *(_QWORD *)&v11 = RtlpHpRemoteStackSerializeWriter;
      LODWORD(v10) = 2;
      *((_QWORD *)&v10 + 1) = -1LL;
      *((_QWORD *)&v11 + 1) = a1;
      HeapInformation = RtlQueryHeapInformation(0LL, 5, &v10, 0x28uLL, 0LL);
      if ( HeapInformation >= 0 )
        HeapInformation = *(_DWORD *)(a1 + 28);
      if ( (v12 & 0x100) != 0 )
        *(_DWORD *)(a1 + 88) |= 1u;
    }
    else
    {
      v8 = *(_QWORD *)(a1 + 16);
      v14 = *(_DWORD *)(a1 + 24);
      v13[1] = v8;
      v13[0] = -1LL;
      v15 = RtlpExtendedHeapInformationWorkerCallback;
      v16 = a1;
      HeapInformation = RtlQueryHeapInformation(0LL, 2, v13, 0x58uLL, 0LL);
      if ( HeapInformation >= 0 && *(int *)(a1 + 28) < 0 )
        HeapInformation = *(_DWORD *)(a1 + 28);
    }
  }
LABEL_22:
  if ( *(_QWORD *)(a1 + 48) )
    NtUnmapViewOfSection(-1LL);
  if ( *(_QWORD *)a1 )
    NtClose(*(HANDLE *)a1);
  *(_DWORD *)(a1 + 28) = HeapInformation;
  RtlExitUserThread(0);
}
