/*
 * XREFs of RtlQueryProcessHeapInformation @ 0x18009A090
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x1800989B0 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 *     RtlpEnumProcessHeaps @ 0x18009A690 (RtlpEnumProcessHeaps.c)
 *     RtlpGetHeapTag @ 0x18009A7D8 (RtlpGetHeapTag.c)
 *     RtlQueryHeapInformation @ 0x18009A820 (RtlQueryHeapInformation.c)
 *     RtlStringCbPrintfW @ 0x18011EF2C (RtlStringCbPrintfW.c)
 *     ZwAllocateVirtualMemory @ 0x180163520 (ZwAllocateVirtualMemory.c)
 *     memmove @ 0x180168980 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlQueryProcessHeapInformation(__int64 a1)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rcx
  unsigned int *v4; // r12
  NTSTATUS v5; // r15d
  __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r14
  unsigned int i; // edx
  unsigned int *v12; // rdi
  __int64 v13; // rax
  ULONG_PTR v14; // rcx
  unsigned int v15; // eax
  unsigned int v16; // esi
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  _QWORD *v20; // r13
  ULONG_PTR v21; // r14
  __int64 v22; // rsi
  unsigned int j; // edi
  wchar_t *v24; // r10
  __int64 v25; // rdx
  const wchar_t *v26; // r8
  __int64 v27; // rcx
  __int64 v28; // r9
  unsigned int k; // ecx
  int v30; // edi
  int v31; // eax
  unsigned int v33; // [rsp+38h] [rbp-110h]
  PVOID BaseAddress; // [rsp+48h] [rbp-100h] BYREF
  PVOID v35; // [rsp+50h] [rbp-F8h] BYREF
  wchar_t *v36; // [rsp+58h] [rbp-F0h]
  __int64 v37; // [rsp+60h] [rbp-E8h]
  const wchar_t *v38; // [rsp+68h] [rbp-E0h]
  __int64 v39; // [rsp+70h] [rbp-D8h]
  __int64 v40; // [rsp+78h] [rbp-D0h]
  __int64 v41; // [rsp+80h] [rbp-C8h]
  _QWORD v42[5]; // [rsp+88h] [rbp-C0h] BYREF
  _QWORD HeapInformation[2]; // [rsp+B0h] [rbp-98h] BYREF
  int v44; // [rsp+C0h] [rbp-88h]
  __int64 (__fastcall *v45)(); // [rsp+C8h] [rbp-80h]
  _QWORD *v46; // [rsp+D0h] [rbp-78h]
  ULONG_PTR v47; // [rsp+150h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+158h] [rbp+10h] BYREF
  ULONG_PTR v49; // [rsp+160h] [rbp+18h] BYREF
  PVOID v50; // [rsp+168h] [rbp+20h] BYREF

  *(_QWORD *)(a1 + 152) = NtCurrentPeb()->ProcessHeap;
  v50 = 0LL;
  v47 = 0LL;
  v2 = *(_QWORD *)(a1 + 72) + 8LL;
  v3 = *(_QWORD *)(a1 + 80);
  if ( v2 > v3 )
  {
    if ( v2 > *(_QWORD *)(a1 + 88) )
      return 3221225495LL;
    v50 = (PVOID)(v3 + a1);
    v47 = v2 - v3;
    if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v50, 0LL, &v47, 0x1000u, 4u) < 0 )
      return 3221225495LL;
    *(_QWORD *)(a1 + 80) += v47;
  }
  v4 = (unsigned int *)(a1 + *(_QWORD *)(a1 + 72));
  *(_QWORD *)(a1 + 72) = v2;
  if ( v4 )
  {
    *v4 = 0;
    *(_QWORD *)(a1 + 112) = v4;
    RtlEnterCriticalSection(&RtlpProcessHeapsLock);
    v5 = RtlpEnumProcessHeaps(RtlpQueryProcessEnumHeapsRoutine, a1, 2LL);
    if ( v5 < 0 )
    {
      *(_QWORD *)(a1 + 112) = 0LL;
    }
    else if ( (*(_BYTE *)(a1 + 64) & 8) != 0 )
    {
      v6 = RtlpGlobalTagHeap;
      if ( !RtlpGlobalTagHeap || !*(_QWORD *)(RtlpGlobalTagHeap + 232) )
      {
LABEL_10:
        for ( i = 0; ; ++i )
        {
          v33 = i;
          if ( i >= *v4 )
            break;
          v12 = &v4[24 * i];
          v13 = *(_QWORD *)(a1 + 128);
          if ( !v13 || v13 == *((_QWORD *)v12 + 1) )
          {
            v14 = *((_QWORD *)v12 + 1);
            RegionSize = v14;
            v15 = *(unsigned __int16 *)(v14 + 224);
            v12[10] = v15;
            v16 = 72 * v15;
            if ( *(_QWORD *)(v14 + 328) )
            {
              v12[10] = v15 + 129;
              v16 += 9288;
            }
            v35 = 0LL;
            v49 = 0LL;
            v17 = *(_QWORD *)(a1 + 72) + ((v16 + 7) & 0xFFFFFFF8);
            v18 = *(_QWORD *)(a1 + 80);
            if ( v17 > v18 )
            {
              if ( v17 > *(_QWORD *)(a1 + 88) )
                goto LABEL_51;
              v35 = (PVOID)(v18 + a1);
              v49 = v17 - v18;
              if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v35, 0LL, &v49, 0x1000u, 4u) < 0 )
                goto LABEL_51;
              *(_QWORD *)(a1 + 80) += v49;
            }
            v19 = *(_QWORD *)(a1 + 72);
            v20 = (_QWORD *)(a1 + v19);
            *(_QWORD *)(a1 + 72) = v17;
            if ( !(a1 + v19) )
            {
              v5 = -1073741801;
              goto LABEL_54;
            }
            memset_thunk_772440563353939046((void *)(a1 + v19), 0, v16);
            *((_QWORD *)v12 + 10) = v20;
            v21 = RegionSize;
            v22 = *(_QWORD *)(RegionSize + 328);
            v41 = v22;
            if ( v22 )
            {
              v12[12] = 129;
              v12[13] = 16;
              for ( j = 0; j <= 0x80; ++j )
              {
                *(_DWORD *)v20 = *(_DWORD *)v22;
                *((_DWORD *)v20 + 1) = *(_DWORD *)(v22 + 4);
                v20[1] = 16LL * *(_QWORD *)(v22 + 8);
                *((_WORD *)v20 + 8) = j | 0x8000;
                v24 = (wchar_t *)v20 + 10;
                if ( j )
                {
                  if ( j >= 0x80 )
                  {
                    v25 = 2147483646LL;
                    v40 = 2147483646LL;
                    v26 = L"VirtualAlloc";
                    v38 = L"VirtualAlloc";
                    v27 = 24LL;
                    v39 = 24LL;
                    v36 = (wchar_t *)v20 + 10;
                    v28 = 0LL;
                    v37 = 0LL;
                    while ( v27 )
                    {
                      if ( !v25 || !*v26 )
                        goto LABEL_31;
                      *v24++ = *v26;
                      v36 = v24;
                      v38 = ++v26;
                      v39 = --v27;
                      v40 = --v25;
                      v37 = ++v28;
                    }
                    v36 = --v24;
                    v37 = v28 - 1;
LABEL_31:
                    *v24 = 0;
                  }
                  else
                  {
                    RtlStringCbPrintfW((char *)v20 + 20, 48LL, L"Objects=%4u", 16 * j);
                  }
                }
                else
                {
                  RtlStringCbPrintfW((char *)v20 + 20, 48LL, L"Objects>%4u", 2048LL);
                }
                v20 += 9;
                v22 += 16LL;
                v41 = v22;
              }
            }
            memmove(v20, *(const void **)(v21 + 232), 72LL * *(unsigned __int16 *)(v21 + 224));
            for ( k = 0; k < *(unsigned __int16 *)(v21 + 224); ++k )
            {
              v20[1] *= 16LL;
              v20 += 9;
            }
            i = v33;
          }
        }
        goto LABEL_39;
      }
      BaseAddress = 0LL;
      RegionSize = 0LL;
      v7 = *(_QWORD *)(a1 + 72) + 96LL;
      v8 = *(_QWORD *)(a1 + 80);
      if ( v7 > v8 )
      {
        if ( v7 > *(_QWORD *)(a1 + 88) )
          goto LABEL_51;
        BaseAddress = (PVOID)(v8 + a1);
        RegionSize = v7 - v8;
        if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) < 0 )
          goto LABEL_51;
        *(_QWORD *)(a1 + 80) += RegionSize;
      }
      v9 = *(_QWORD *)(a1 + 72);
      v10 = a1 + v9;
      *(_QWORD *)(a1 + 72) = v7;
      if ( a1 + v9 )
      {
        memset_thunk_772440563353939046((void *)(a1 + v9), 0, 0x60uLL);
        *(_QWORD *)v10 = v6;
        *(_DWORD *)(v10 + 8) = *(_DWORD *)(v6 + 112);
        *(_WORD *)(v10 + 12) = 16;
        *(_QWORD *)(v10 + 88) = RtlpGetHeapTag(v6);
        ++*v4;
        goto LABEL_10;
      }
LABEL_51:
      v5 = -1073741801;
LABEL_54:
      RtlLeaveCriticalSection(&RtlpProcessHeapsLock);
      return (unsigned int)v5;
    }
LABEL_39:
    if ( v5 >= 0 )
    {
      v30 = *(_DWORD *)(a1 + 64);
      if ( (v30 & 0x210) != 0 )
      {
        memset_thunk_772440563353939046(HeapInformation, 0, 0x58uLL);
        HeapInformation[0] = -1LL;
        HeapInformation[1] = *(_QWORD *)(a1 + 128);
        v45 = RtlpWalkCallbackRoutine;
        v46 = v42;
        v31 = 3;
        if ( (v30 & 0x10) != 0 )
          v31 = 5;
        v44 = v31;
        v42[0] = a1;
        v42[1] = v4;
        v42[2] = 0LL;
        v42[3] = v4 + 2;
        v5 = RtlQueryHeapInformation(0LL, (HEAP_INFORMATION_CLASS)2, HeapInformation, 0x58uLL, 0LL);
      }
    }
    goto LABEL_54;
  }
  return 3221225495LL;
}
