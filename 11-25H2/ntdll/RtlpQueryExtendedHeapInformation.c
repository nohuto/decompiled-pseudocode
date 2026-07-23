/*
 * XREFs of RtlpQueryExtendedHeapInformation @ 0x1800983A4
 * Callers:
 *     RtlQueryHeapInformation @ 0x18009A820 (RtlQueryHeapInformation.c)
 * Callees:
 *     RtlpIsProtectedHeap @ 0x1800027C4 (RtlpIsProtectedHeap.c)
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     RtlUnlockHeap @ 0x1800938E0 (RtlUnlockHeap.c)
 *     RtlLockHeap @ 0x180093AD0 (RtlLockHeap.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x180098190 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlpQueryExtendedInformationAllHeaps @ 0x18009885C (RtlpQueryExtendedInformationAllHeaps.c)
 *     RtlpQueryExtendedInformationHeap @ 0x18009BDD0 (RtlpQueryExtendedInformationHeap.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     ZwMapViewOfSection @ 0x180163720 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x180163760 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x180163B60 (NtCreateSection.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpQueryExtendedHeapInformation(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v6; // rax
  __int64 v7; // rcx
  int ExtendedInformationHeap; // edi
  int v9; // ecx
  unsigned int v10; // esi
  NTSTATUS v12; // edi
  void *v13; // rcx
  int v14; // eax
  __int64 (__fastcall *v15)(); // r13
  unsigned __int64 v16; // r14
  unsigned int i; // eax
  unsigned __int64 v18; // r14
  char *v19; // rbx
  unsigned __int64 v20; // rcx
  void *v21; // rcx
  int IsProtectedHeap; // esi
  unsigned __int64 v23; // rdx
  PVOID BaseAddress; // [rsp+50h] [rbp-B0h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+58h] [rbp-A8h] BYREF
  ULONG_PTR CommitSize; // [rsp+60h] [rbp-A0h] BYREF
  LARGE_INTEGER SectionOffset; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v28[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 (__fastcall *v29)(); // [rsp+78h] [rbp-88h]
  _QWORD *v30; // [rsp+80h] [rbp-80h]
  _QWORD *v31; // [rsp+88h] [rbp-78h]
  _QWORD v32[9]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v33; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v34; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v35; // [rsp+E8h] [rbp-18h]
  HANDLE Buffer[3]; // [rsp+F0h] [rbp-10h] BYREF
  int v37; // [rsp+108h] [rbp+8h]
  __int64 v38; // [rsp+110h] [rbp+10h]
  unsigned int v39; // [rsp+118h] [rbp+18h]
  unsigned int v40; // [rsp+190h] [rbp+90h]
  HANDLE SectionHandle; // [rsp+1A8h] [rbp+A8h] BYREF

  memset_thunk_772440563353939046(v32, 0, 0x60uLL);
  SectionOffset.QuadPart = 0LL;
  CommitSize = 0LL;
  v28[1] = 0;
  memset_thunk_772440563353939046(Buffer, 0, 0x60uLL);
  if ( *(_QWORD *)a1 == -1LL )
  {
    v28[0] = *(_DWORD *)(a1 + 16);
    if ( *(_QWORD *)(a1 + 24) )
    {
      v29 = *(__int64 (__fastcall **)())(a1 + 24);
      v6 = *(_QWORD **)(a1 + 32);
    }
    else
    {
      v32[0] = a1;
      v34 = a1 + 40;
      v35 = a1 + a2;
      v6 = v32;
      v33 = a1;
      v29 = RtlpExtendedHeapInformationGenerator;
    }
    v30 = v6;
    RtlEnterCriticalSection(&RtlpProcessHeapsLock);
    v7 = *(_QWORD *)(a1 + 8);
    if ( v7 )
    {
      IsProtectedHeap = RtlpIsProtectedHeap(v7);
      if ( !IsProtectedHeap )
        RtlLockHeap(v21);
      ExtendedInformationHeap = RtlpQueryExtendedInformationHeap(*(_QWORD *)(a1 + 8));
      if ( !IsProtectedHeap )
        RtlUnlockHeap(*(PVOID *)(a1 + 8));
    }
    else
    {
      ExtendedInformationHeap = RtlpQueryExtendedInformationAllHeaps(v28);
    }
    RtlLeaveCriticalSection(&RtlpProcessHeapsLock);
    v9 = 0;
    if ( ExtendedInformationHeap != -2147483622 )
      v9 = ExtendedInformationHeap;
    v10 = v9;
    if ( v29 == RtlpExtendedHeapInformationGenerator )
    {
      if ( v9 >= 0 )
      {
        v23 = v34;
        if ( a3 )
          *a3 = v34 - v33;
        if ( v23 > v35 )
          return (unsigned int)-1073741789;
      }
    }
    else if ( a3 )
    {
      *a3 = 88LL;
    }
    return v10;
  }
  else
  {
    SectionHandle = 0LL;
    BaseAddress = 0LL;
    for ( MaximumSize.QuadPart = 0x10000LL; ; MaximumSize.QuadPart = (v38 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL )
    {
      v12 = NtCreateSection(&SectionHandle, 0xF001Fu, 0LL, &MaximumSize, 4u, 0x8000000u, 0LL);
      if ( v12 < 0 )
        break;
      memset_thunk_772440563353939046(Buffer, 0, 0x60uLL);
      v13 = *(void **)a1;
      Buffer[2] = *(HANDLE *)(a1 + 8);
      v37 = *(_DWORD *)(a1 + 16);
      Buffer[1] = (HANDLE)MaximumSize.QuadPart;
      Buffer[0] = SectionHandle;
      v14 = RtlpHeapPerformCrossProcessQuery(v13, Buffer);
      v12 = v14;
      if ( v14 != -1073741789 )
      {
        if ( v14 >= 0 )
        {
          CommitSize = 0x10000LL;
          v12 = ZwMapViewOfSection(
                  SectionHandle,
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  &BaseAddress,
                  0LL,
                  0x10000uLL,
                  &SectionOffset,
                  &CommitSize,
                  ViewUnmap,
                  0,
                  4u);
          if ( v12 >= 0 )
          {
            v15 = *(__int64 (__fastcall **)())(a1 + 24);
            v16 = 0LL;
            if ( v15 )
            {
              v31 = *(_QWORD **)(a1 + 32);
            }
            else
            {
              v32[0] = a1;
              v34 = a1 + 40;
              v15 = RtlpExtendedHeapInformationGenerator;
              v33 = a1;
              v35 = a1 + a2;
              v31 = v32;
            }
            for ( i = 0; ; i = v40 + 1 )
            {
              v40 = i;
              if ( i >= v39 )
                break;
              v18 = (v16 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
              if ( v18 >= MaximumSize.QuadPart
                || v18 >= 2 * CommitSize
                || (__int64)(CommitSize + SectionOffset.QuadPart) > MaximumSize.QuadPart )
              {
                v12 = -1073741762;
                break;
              }
              v19 = (char *)BaseAddress + v18;
              if ( v18 + 16 >= CommitSize || !*(_DWORD *)v19 )
              {
                NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
                BaseAddress = 0LL;
                SectionOffset.QuadPart += CommitSize;
                v12 = ZwMapViewOfSection(
                        SectionHandle,
                        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                        &BaseAddress,
                        0LL,
                        CommitSize,
                        &SectionOffset,
                        &CommitSize,
                        ViewUnmap,
                        0,
                        4u);
                if ( v12 < 0 )
                  break;
                v19 = (char *)BaseAddress;
                v18 = 0LL;
              }
              v12 = ((__int64 (__fastcall *)(char *, _QWORD *))v15)(v19, v31);
              if ( v12 < 0 )
                break;
              v16 = *((_QWORD *)v19 + 1) + v18;
            }
            if ( v15 == RtlpExtendedHeapInformationGenerator )
            {
              if ( v12 >= 0 )
              {
                v20 = v34;
                if ( a3 )
                  *a3 = v34 - v33;
                if ( v20 > v35 )
                  v12 = -1073741789;
              }
            }
            else if ( a3 )
            {
              *a3 = 88LL;
            }
          }
        }
        break;
      }
      NtClose(SectionHandle);
      SectionHandle = 0LL;
    }
    if ( BaseAddress )
      NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
    if ( SectionHandle )
      NtClose(SectionHandle);
    return (unsigned int)v12;
  }
}
