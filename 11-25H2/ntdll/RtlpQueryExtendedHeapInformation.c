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
  int v12; // edi
  __int64 v13; // rcx
  int v14; // eax
  __int64 (__fastcall *v15)(); // r13
  unsigned __int64 v16; // r14
  unsigned int j; // eax
  unsigned __int64 v18; // r14
  __int64 v19; // rbx
  unsigned __int64 v20; // rcx
  __int64 v21; // rcx
  int IsProtectedHeap; // esi
  unsigned __int64 v23; // rdx
  __int64 v24; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 i; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v26; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v28[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 (__fastcall *v29)(); // [rsp+78h] [rbp-88h]
  _QWORD *v30; // [rsp+80h] [rbp-80h]
  _QWORD *v31; // [rsp+88h] [rbp-78h]
  _QWORD v32[9]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v33; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v34; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v35; // [rsp+E8h] [rbp-18h]
  _QWORD v36[3]; // [rsp+F0h] [rbp-10h] BYREF
  int v37; // [rsp+108h] [rbp+8h]
  __int64 v38; // [rsp+110h] [rbp+10h]
  unsigned int v39; // [rsp+118h] [rbp+18h]
  unsigned int v40; // [rsp+190h] [rbp+90h]
  HANDLE Handle; // [rsp+1A8h] [rbp+A8h] BYREF

  memset_thunk_772440563353939046(v32, 0, 0x60uLL);
  v27 = 0LL;
  v26 = 0LL;
  v28[1] = 0;
  memset_thunk_772440563353939046(v36, 0, 0x60uLL);
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
    RtlEnterCriticalSection((__int64)&RtlpProcessHeapsLock);
    v7 = *(_QWORD *)(a1 + 8);
    if ( v7 )
    {
      IsProtectedHeap = RtlpIsProtectedHeap(v7);
      if ( !IsProtectedHeap )
        RtlLockHeap(v21);
      ExtendedInformationHeap = RtlpQueryExtendedInformationHeap(*(_QWORD *)(a1 + 8), v28);
      if ( !IsProtectedHeap )
        RtlUnlockHeap(*(_QWORD *)(a1 + 8));
    }
    else
    {
      ExtendedInformationHeap = RtlpQueryExtendedInformationAllHeaps(v28);
    }
    RtlLeaveCriticalSection((__int64)&RtlpProcessHeapsLock);
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
    Handle = 0LL;
    v24 = 0LL;
    for ( i = 0x10000LL; ; i = (v38 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL )
    {
      v12 = NtCreateSection(&Handle, 983071LL, 0LL);
      if ( v12 < 0 )
        break;
      memset_thunk_772440563353939046(v36, 0, 0x60uLL);
      v13 = *(_QWORD *)a1;
      v36[2] = *(_QWORD *)(a1 + 8);
      v37 = *(_DWORD *)(a1 + 16);
      v36[1] = i;
      v36[0] = Handle;
      v14 = RtlpHeapPerformCrossProcessQuery(v13, (__int64)v36);
      v12 = v14;
      if ( v14 != -1073741789 )
      {
        if ( v14 >= 0 )
        {
          v26 = 0x10000LL;
          v12 = ZwMapViewOfSection(Handle, -1LL, &v24, 0LL, 0x10000LL, &v27, &v26, 2, 0, 4);
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
            for ( j = 0; ; j = v40 + 1 )
            {
              v40 = j;
              if ( j >= v39 )
                break;
              v18 = (v16 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
              if ( v18 >= i || v18 >= 2 * v26 || (__int64)(v26 + v27) > (__int64)i )
              {
                v12 = -1073741762;
                break;
              }
              v19 = v18 + v24;
              if ( v18 + 16 >= v26 || !*(_DWORD *)v19 )
              {
                NtUnmapViewOfSection(-1LL);
                v24 = 0LL;
                v27 += v26;
                v12 = ZwMapViewOfSection(Handle, -1LL, &v24, 0LL, v26, &v27, &v26, 2, 0, 4);
                if ( v12 < 0 )
                  break;
                v19 = v24;
                v18 = 0LL;
              }
              v12 = ((__int64 (__fastcall *)(__int64, _QWORD *))v15)(v19, v31);
              if ( v12 < 0 )
                break;
              v16 = *(_QWORD *)(v19 + 8) + v18;
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
      NtClose(Handle);
      Handle = 0LL;
    }
    if ( v24 )
      NtUnmapViewOfSection(-1LL);
    if ( Handle )
      NtClose(Handle);
    return (unsigned int)v12;
  }
}
