/*
 * XREFs of RtlpQueryExtendedHeapInformation @ 0x1800446C4
 * Callers:
 *     RtlQueryHeapInformation @ 0x180046B40 (RtlQueryHeapInformation.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     RtlUnlockHeap @ 0x18003FEF0 (RtlUnlockHeap.c)
 *     RtlLockHeap @ 0x1800400E0 (RtlLockHeap.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800444B0 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlpQueryExtendedInformationAllHeaps @ 0x180044B7C (RtlpQueryExtendedInformationAllHeaps.c)
 *     RtlpQueryExtendedInformationHeap @ 0x1800480F0 (RtlpQueryExtendedInformationHeap.c)
 *     RtlpIsProtectedHeap @ 0x180097164 (RtlpIsProtectedHeap.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     ZwMapViewOfSection @ 0x180162190 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1801621D0 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1801625D0 (NtCreateSection.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpQueryExtendedHeapInformation(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v6; // rax
  int ExtendedInformationHeap; // edi
  int v8; // ecx
  unsigned int v9; // esi
  int v11; // edi
  __int64 v12; // rcx
  int v13; // eax
  __int64 (__fastcall *v14)(); // r13
  unsigned __int64 v15; // r14
  unsigned int j; // eax
  unsigned __int64 v17; // r14
  __int64 v18; // rbx
  unsigned __int64 v19; // rcx
  __int64 v20; // rcx
  int IsProtectedHeap; // esi
  unsigned __int64 v22; // rdx
  __int64 v23; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 i; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v25; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v26; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v27[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 (__fastcall *v28)(); // [rsp+78h] [rbp-88h]
  _QWORD *v29; // [rsp+80h] [rbp-80h]
  _QWORD *v30; // [rsp+88h] [rbp-78h]
  _QWORD v31[9]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v32; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v33; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v34; // [rsp+E8h] [rbp-18h]
  _QWORD v35[3]; // [rsp+F0h] [rbp-10h] BYREF
  int v36; // [rsp+108h] [rbp+8h]
  __int64 v37; // [rsp+110h] [rbp+10h]
  unsigned int v38; // [rsp+118h] [rbp+18h]
  unsigned int v39; // [rsp+190h] [rbp+90h]
  HANDLE Handle; // [rsp+1A8h] [rbp+A8h] BYREF

  memset_thunk_772440563353939046(v31, 0, 0x60uLL);
  v26 = 0LL;
  v25 = 0LL;
  v27[1] = 0;
  memset_thunk_772440563353939046(v35, 0, 0x60uLL);
  if ( *(_QWORD *)a1 == -1LL )
  {
    v27[0] = *(_DWORD *)(a1 + 16);
    if ( *(_QWORD *)(a1 + 24) )
    {
      v28 = *(__int64 (__fastcall **)())(a1 + 24);
      v6 = *(_QWORD **)(a1 + 32);
    }
    else
    {
      v31[0] = a1;
      v33 = a1 + 40;
      v34 = a1 + a2;
      v6 = v31;
      v32 = a1;
      v28 = RtlpExtendedHeapInformationGenerator;
    }
    v29 = v6;
    RtlEnterCriticalSection((__int64)&RtlpProcessHeapsLock);
    if ( *(_QWORD *)(a1 + 8) )
    {
      IsProtectedHeap = RtlpIsProtectedHeap();
      if ( !IsProtectedHeap )
        RtlLockHeap(v20);
      ExtendedInformationHeap = RtlpQueryExtendedInformationHeap(*(_QWORD *)(a1 + 8), v27);
      if ( !IsProtectedHeap )
        RtlUnlockHeap(*(_QWORD *)(a1 + 8));
    }
    else
    {
      ExtendedInformationHeap = RtlpQueryExtendedInformationAllHeaps(v27);
    }
    RtlLeaveCriticalSection((__int64)&RtlpProcessHeapsLock);
    v8 = 0;
    if ( ExtendedInformationHeap != -2147483622 )
      v8 = ExtendedInformationHeap;
    v9 = v8;
    if ( v28 == RtlpExtendedHeapInformationGenerator )
    {
      if ( v8 >= 0 )
      {
        v22 = v33;
        if ( a3 )
          *a3 = v33 - v32;
        if ( v22 > v34 )
          return (unsigned int)-1073741789;
      }
    }
    else if ( a3 )
    {
      *a3 = 88LL;
    }
    return v9;
  }
  else
  {
    Handle = 0LL;
    v23 = 0LL;
    for ( i = 0x10000LL; ; i = (v37 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL )
    {
      v11 = NtCreateSection(&Handle, 983071LL, 0LL, &i);
      if ( v11 < 0 )
        break;
      memset_thunk_772440563353939046(v35, 0, 0x60uLL);
      v12 = *(_QWORD *)a1;
      v35[2] = *(_QWORD *)(a1 + 8);
      v36 = *(_DWORD *)(a1 + 16);
      v35[1] = i;
      v35[0] = Handle;
      v13 = RtlpHeapPerformCrossProcessQuery(v12, (__int64)v35);
      v11 = v13;
      if ( v13 != -1073741789 )
      {
        if ( v13 >= 0 )
        {
          v25 = 0x10000LL;
          v11 = ((__int64 (__fastcall *)(HANDLE, __int64, __int64 *, _QWORD, __int64, __int64 *, unsigned __int64 *, int, _DWORD, int))ZwMapViewOfSection)(
                  Handle,
                  -1LL,
                  &v23,
                  0LL,
                  0x10000LL,
                  &v26,
                  &v25,
                  2,
                  0,
                  4);
          if ( v11 >= 0 )
          {
            v14 = *(__int64 (__fastcall **)())(a1 + 24);
            v15 = 0LL;
            if ( v14 )
            {
              v30 = *(_QWORD **)(a1 + 32);
            }
            else
            {
              v31[0] = a1;
              v33 = a1 + 40;
              v14 = RtlpExtendedHeapInformationGenerator;
              v32 = a1;
              v34 = a1 + a2;
              v30 = v31;
            }
            for ( j = 0; ; j = v39 + 1 )
            {
              v39 = j;
              if ( j >= v38 )
                break;
              v17 = (v15 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
              if ( v17 >= i || v17 >= 2 * v25 || (__int64)(v25 + v26) > (__int64)i )
              {
                v11 = -1073741762;
                break;
              }
              v18 = v17 + v23;
              if ( v17 + 16 >= v25 || !*(_DWORD *)v18 )
              {
                NtUnmapViewOfSection(-1LL);
                v23 = 0LL;
                v26 += v25;
                v11 = ((__int64 (__fastcall *)(HANDLE, __int64, __int64 *, _QWORD, unsigned __int64, __int64 *, unsigned __int64 *, int, _DWORD, int))ZwMapViewOfSection)(
                        Handle,
                        -1LL,
                        &v23,
                        0LL,
                        v25,
                        &v26,
                        &v25,
                        2,
                        0,
                        4);
                if ( v11 < 0 )
                  break;
                v18 = v23;
                v17 = 0LL;
              }
              v11 = ((__int64 (__fastcall *)(__int64, _QWORD *))v14)(v18, v30);
              if ( v11 < 0 )
                break;
              v15 = *(_QWORD *)(v18 + 8) + v17;
            }
            if ( v14 == RtlpExtendedHeapInformationGenerator )
            {
              if ( v11 >= 0 )
              {
                v19 = v33;
                if ( a3 )
                  *a3 = v33 - v32;
                if ( v19 > v34 )
                  v11 = -1073741789;
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
      NtClose(Handle);
      Handle = 0LL;
    }
    if ( v23 )
      NtUnmapViewOfSection(-1LL);
    if ( Handle )
      NtClose(Handle);
    return (unsigned int)v11;
  }
}
