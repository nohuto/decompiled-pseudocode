/*
 * XREFs of SmpAllocateControlBlock @ 0x140004B60
 * Callers:
 *     SmpStartCsr @ 0x140004120 (SmpStartCsr.c)
 * Callees:
 *     SmpInternalLogFailure @ 0x1400036FC (SmpInternalLogFailure.c)
 *     SmpLogFailure @ 0x14000D7F0 (SmpLogFailure.c)
 *     memset_0 @ 0x14001EF9F (memset_0.c)
 *     __security_check_cookie @ 0x14001EFC0 (__security_check_cookie.c)
 */

PVOID SmpAllocateControlBlock()
{
  PVOID Heap; // rbx
  __int64 v1; // r8
  _BYTE *v2; // rdx
  char v3; // al
  _BYTE *v4; // rax
  _OWORD *v5; // rdx
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  NTSTATUS v19; // eax
  void *v20; // rsi
  NTSTATUS v21; // eax
  NTSTATUS v22; // r14d
  NTSTATUS v23; // eax
  PVOID result; // rax
  void *SectionHandle; // [rsp+50h] [rbp-B0h] BYREF
  PVOID BaseAddress; // [rsp+58h] [rbp-A8h] BYREF
  void *EventHandle; // [rsp+60h] [rbp-A0h] BYREF
  union _LARGE_INTEGER MaximumSize; // [rsp+68h] [rbp-98h] BYREF
  void *v29; // [rsp+70h] [rbp-90h] BYREF
  ULONG_PTR ViewSize; // [rsp+78h] [rbp-88h] BYREF
  struct _OBJECT_ATTRIBUTES v31; // [rsp+80h] [rbp-80h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-50h] BYREF
  _OWORD v33[12]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v34; // [rsp+1A0h] [rbp+A0h]
  __int128 v35; // [rsp+1B0h] [rbp+B0h]
  _BYTE v36[224]; // [rsp+1C0h] [rbp+C0h] BYREF

  memset(&ObjectAttributes, 0, 44);
  MaximumSize.QuadPart = 0LL;
  SectionHandle = 0LL;
  Heap = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag + 0x80000, 0x80uLL);
  if ( !Heap )
  {
    memset_0(v33, 0, 0xE0uLL);
    LODWORD(v34) = -1073741670;
    DWORD2(v35) = 185;
    v1 = 64LL;
    v2 = v33;
    do
    {
      if ( v1 == -2147483582 )
        break;
      v3 = v2["SmpAllocateControlBlock" - (char *)v33];
      if ( !v3 )
        break;
      *v2++ = v3;
      --v1;
    }
    while ( v1 );
    v4 = v2 - 1;
    if ( v1 )
      v4 = v2;
    *v4 = 0;
    v5 = (_OWORD *)((char *)&SmpBlackboxBuffer + 224 * (_InterlockedIncrement(&dword_140030ED4) % 16));
    v6 = v33[1];
    *(_OWORD *)((char *)v5 + 8) = v33[0];
    v7 = v33[2];
    *(_OWORD *)((char *)v5 + 24) = v6;
    v8 = v33[3];
    *(_OWORD *)((char *)v5 + 40) = v7;
    v9 = v33[4];
    *(_OWORD *)((char *)v5 + 56) = v8;
    v10 = v33[5];
    *(_OWORD *)((char *)v5 + 72) = v9;
    v11 = v33[6];
    *(_OWORD *)((char *)v5 + 88) = v10;
    v12 = v33[7];
    *(_OWORD *)((char *)v5 + 104) = v11;
    v5 = (_OWORD *)((char *)v5 + 136);
    v13 = v33[8];
    *(v5 - 1) = v12;
    v14 = v33[9];
    *v5 = v13;
    v15 = v33[10];
    v5[1] = v14;
    v16 = v33[11];
    v5[2] = v15;
    v17 = v34;
    v5[3] = v16;
    v18 = v35;
    v5[4] = v17;
    v5[5] = v18;
    goto LABEL_17;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 2;
  ObjectAttributes.ObjectName = 0LL;
  MaximumSize.QuadPart = 24LL;
  v19 = NtCreateSection(&SectionHandle, 6u, &ObjectAttributes, &MaximumSize, 4u, 0x8400000u, 0LL);
  if ( v19 >= 0 )
  {
    v20 = SectionHandle;
    memset(&v31, 0, 44);
    v29 = 0LL;
    EventHandle = 0LL;
    BaseAddress = 0LL;
    ViewSize = 0LL;
    v21 = NtMapViewOfSection(
            SectionHandle,
            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
            &BaseAddress,
            0LL,
            0LL,
            0LL,
            &ViewSize,
            ViewUnmap,
            0,
            4u);
    if ( v21 < 0 )
    {
      SmpLogFailure("SmpInitializeControlBlock", 292LL, (unsigned int)v21);
      BaseAddress = 0LL;
    }
    else
    {
      v31.Length = 48;
      v31.RootDirectory = 0LL;
      v31.Attributes = 2;
      v31.ObjectName = 0LL;
      *(_OWORD *)&v31.SecurityDescriptor = 0LL;
      v22 = NtCreateEvent(&EventHandle, 0x1F0003u, &v31, SynchronizationEvent, 0);
      if ( v22 < 0 )
      {
        memset_0(v36, 0, sizeof(v36));
        SmpInternalLogFailure((__int64)"SmpInitializeControlBlock", 311, v22, (__int64)v36);
        EventHandle = 0LL;
LABEL_15:
        if ( BaseAddress )
          NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
LABEL_17:
        if ( SectionHandle )
          NtClose(SectionHandle);
        if ( !Heap )
          return 0LL;
        goto LABEL_25;
      }
      v23 = NtCreateEvent(&v29, 0x1F0003u, &v31, SynchronizationEvent, 0);
      if ( v23 >= 0 )
      {
        memset_0(Heap, 0, 0x80uLL);
        *((_QWORD *)Heap + 2) = BaseAddress;
        *((_QWORD *)Heap + 4) = EventHandle;
        *((_QWORD *)Heap + 5) = v29;
        result = Heap;
        *((_QWORD *)Heap + 3) = v20;
        *((_DWORD *)Heap + 1) = 1;
        return result;
      }
      SmpLogFailure("SmpInitializeControlBlock", 325LL, (unsigned int)v23);
    }
    if ( EventHandle )
      NtClose(EventHandle);
    goto LABEL_15;
  }
  SmpLogFailure("SmpAllocateControlBlock", 206LL, (unsigned int)v19);
  SectionHandle = 0LL;
LABEL_25:
  RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Heap);
  return 0LL;
}
