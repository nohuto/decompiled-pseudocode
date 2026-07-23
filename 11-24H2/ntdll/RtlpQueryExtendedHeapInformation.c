/*
 * XREFs of RtlpQueryExtendedHeapInformation @ 0x1801144DC
 * Callers:
 *     RtlQueryHeapInformation @ 0x18002AB10 (RtlQueryHeapInformation.c)
 *     RtlpQueryMemoryUsageInformation @ 0x180140C8C (RtlpQueryMemoryUsageInformation.c)
 * Callees:
 *     RtlUnlockHeap @ 0x180020820 (RtlUnlockHeap.c)
 *     RtlLockHeap @ 0x180020A10 (RtlLockHeap.c)
 *     RtlpReleaseHeapListLock @ 0x18002AA6C (RtlpReleaseHeapListLock.c)
 *     RtlpIsProtectedHeap @ 0x18002B7C4 (RtlpIsProtectedHeap.c)
 *     RtlpQueryExtendedInformationAllHeaps @ 0x18002BA78 (RtlpQueryExtendedInformationAllHeaps.c)
 *     RtlEnterCriticalSection @ 0x1800412F0 (RtlEnterCriticalSection.c)
 *     RtlpGetNextProcessHeapDescriptor @ 0x1800E5F90 (RtlpGetNextProcessHeapDescriptor.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1801109D0 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlpQueryExtendedInformationHeap @ 0x180114970 (RtlpQueryExtendedInformationHeap.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     ZwMapViewOfSection @ 0x180160550 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x180160590 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x180160990 (NtCreateSection.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpQueryExtendedHeapInformation(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v6; // rax
  int ExtendedInformationHeap; // edi
  __int64 **i; // rcx
  __int64 *NextProcessHeapDescriptor; // rax
  __int64 v10; // r8
  int v11; // ecx
  unsigned int v12; // r14d
  unsigned __int64 v13; // rdx
  void *v14; // rcx
  int IsProtectedHeap; // esi
  NTSTATUS v17; // edi
  void *v18; // rcx
  int v19; // eax
  unsigned __int64 v20; // rsi
  __int64 (__fastcall *v21)(); // r13
  _QWORD *v22; // rax
  unsigned __int64 v23; // rsi
  char *v24; // rbx
  LARGE_INTEGER MaximumSize; // [rsp+50h] [rbp-B0h] BYREF
  PVOID BaseAddress; // [rsp+58h] [rbp-A8h] BYREF
  ULONG_PTR ViewSize; // [rsp+60h] [rbp-A0h] BYREF
  LARGE_INTEGER SectionOffset; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v29[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 (__fastcall *v30)(); // [rsp+78h] [rbp-88h]
  _QWORD *v31; // [rsp+80h] [rbp-80h]
  _QWORD *v32; // [rsp+88h] [rbp-78h]
  _QWORD v33[9]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v34; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v35; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v36; // [rsp+E8h] [rbp-18h]
  HANDLE Buffer[3]; // [rsp+F0h] [rbp-10h] BYREF
  int v38; // [rsp+108h] [rbp+8h]
  __int64 v39; // [rsp+110h] [rbp+10h]
  unsigned int v40; // [rsp+118h] [rbp+18h]
  int v41; // [rsp+190h] [rbp+90h]
  HANDLE SectionHandle; // [rsp+1A8h] [rbp+A8h] BYREF

  memset_thunk_772440563353939046(v33, 0, 0x60uLL);
  v29[1] = 0;
  SectionOffset.QuadPart = 0LL;
  ViewSize = 0LL;
  memset_thunk_772440563353939046(Buffer, 0, 0x60uLL);
  if ( *(_QWORD *)a1 == -1LL )
  {
    v29[0] = *(_DWORD *)(a1 + 16);
    if ( *(_QWORD *)(a1 + 24) )
    {
      v30 = *(__int64 (__fastcall **)())(a1 + 24);
      v6 = *(_QWORD **)(a1 + 32);
    }
    else
    {
      v33[0] = a1;
      v35 = a1 + 40;
      v36 = a1 + a2;
      v6 = v33;
      v34 = a1;
      v30 = RtlpExtendedHeapInformationGenerator;
    }
    v31 = v6;
    RtlEnterCriticalSection(&RtlpProcessHeapsLock);
    if ( *(_QWORD *)(a1 + 8) )
    {
      for ( i = 0LL; ; i = (__int64 **)NextProcessHeapDescriptor )
      {
        NextProcessHeapDescriptor = RtlpGetNextProcessHeapDescriptor(i);
        if ( !NextProcessHeapDescriptor )
        {
          ExtendedInformationHeap = -1073741811;
          goto LABEL_12;
        }
        if ( NextProcessHeapDescriptor[2] == v10 )
          break;
      }
      IsProtectedHeap = RtlpIsProtectedHeap(v10);
      if ( !IsProtectedHeap )
        RtlLockHeap(v14);
      ExtendedInformationHeap = RtlpQueryExtendedInformationHeap(*(_QWORD *)(a1 + 8), v29);
      if ( !IsProtectedHeap )
        RtlUnlockHeap(*(PVOID *)(a1 + 8));
    }
    else
    {
      ExtendedInformationHeap = RtlpQueryExtendedInformationAllHeaps((__int64)v29);
    }
LABEL_12:
    RtlpReleaseHeapListLock(0);
    v11 = 0;
    if ( ExtendedInformationHeap != -2147483622 )
      v11 = ExtendedInformationHeap;
    v12 = v11;
    if ( v30 == RtlpExtendedHeapInformationGenerator )
    {
      if ( v11 >= 0 )
      {
        v13 = v35;
        if ( a3 )
          *a3 = v35 - v34;
        if ( v13 > v36 )
          return (unsigned int)-1073741789;
      }
    }
    else if ( a3 )
    {
      *a3 = 88LL;
    }
    return v12;
  }
  else
  {
    MaximumSize.QuadPart = 0x10000LL;
    SectionHandle = 0LL;
    BaseAddress = 0LL;
    v17 = NtCreateSection(&SectionHandle, 0xF001Fu, 0LL, &MaximumSize, 4u, 0x8000000u, 0LL);
    if ( v17 >= 0 )
    {
      while ( 1 )
      {
        memset_thunk_772440563353939046(Buffer, 0, 0x60uLL);
        v18 = *(void **)a1;
        Buffer[2] = *(HANDLE *)(a1 + 8);
        v38 = *(_DWORD *)(a1 + 16);
        Buffer[1] = (HANDLE)MaximumSize.QuadPart;
        Buffer[0] = SectionHandle;
        v19 = RtlpHeapPerformCrossProcessQuery(v18, Buffer);
        v17 = v19;
        if ( v19 != -1073741789 )
          break;
        NtClose(SectionHandle);
        MaximumSize.QuadPart = (v39 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
        SectionHandle = 0LL;
        v17 = NtCreateSection(&SectionHandle, 0xF001Fu, 0LL, &MaximumSize, 4u, 0x8000000u, 0LL);
        if ( v17 < 0 )
          goto LABEL_56;
      }
      if ( v19 >= 0 )
      {
        ViewSize = 0x10000LL;
        v17 = ZwMapViewOfSection(
                SectionHandle,
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                &BaseAddress,
                0LL,
                0x10000uLL,
                &SectionOffset,
                &ViewSize,
                ViewUnmap,
                0,
                4u);
        if ( v17 >= 0 )
        {
          v20 = 0LL;
          v21 = *(__int64 (__fastcall **)())(a1 + 24);
          if ( v21 )
          {
            v22 = *(_QWORD **)(a1 + 32);
          }
          else
          {
            v33[0] = a1;
            v35 = a1 + 40;
            v21 = RtlpExtendedHeapInformationGenerator;
            v34 = a1;
            v36 = a1 + a2;
            v22 = v33;
          }
          v41 = 0;
          v32 = v22;
          if ( v40 )
          {
            while ( 1 )
            {
              v23 = (v20 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
              if ( v23 >= MaximumSize.QuadPart
                || v23 >= 2 * ViewSize
                || (__int64)(ViewSize + SectionOffset.QuadPart) > MaximumSize.QuadPart )
              {
                break;
              }
              v24 = (char *)BaseAddress + v23;
              if ( v23 + 16 >= ViewSize || !*(_DWORD *)v24 )
              {
                NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
                BaseAddress = 0LL;
                SectionOffset.QuadPart += ViewSize;
                v17 = ZwMapViewOfSection(
                        SectionHandle,
                        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                        &BaseAddress,
                        0LL,
                        ViewSize,
                        &SectionOffset,
                        &ViewSize,
                        ViewUnmap,
                        0,
                        4u);
                if ( v17 < 0 )
                  goto LABEL_48;
                v24 = (char *)BaseAddress;
                v23 = 0LL;
              }
              v17 = ((__int64 (__fastcall *)(char *, _QWORD *))v21)(v24, v32);
              if ( v17 >= 0 )
              {
                v20 = *((_QWORD *)v24 + 1) + v23;
                if ( ++v41 < v40 )
                  continue;
              }
              goto LABEL_48;
            }
            v17 = -1073741762;
          }
LABEL_48:
          if ( v21 == RtlpExtendedHeapInformationGenerator )
          {
            if ( v17 >= 0 )
            {
              if ( a3 )
                *a3 = v35 - v34;
              if ( v35 > v36 )
                v17 = -1073741789;
            }
          }
          else if ( a3 )
          {
            *a3 = 88LL;
          }
        }
      }
    }
LABEL_56:
    if ( BaseAddress )
      NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
    if ( SectionHandle )
      NtClose(SectionHandle);
    return (unsigned int)v17;
  }
}
