/*
 * XREFs of RtlQueryProcessHeapInformation @ 0x1800463B0
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180044CD0 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     RtlpEnumProcessHeaps @ 0x1800469B0 (RtlpEnumProcessHeaps.c)
 *     RtlpGetHeapTag @ 0x180046AF8 (RtlpGetHeapTag.c)
 *     RtlQueryHeapInformation @ 0x180046B40 (RtlQueryHeapInformation.c)
 *     RtlStringCbPrintfW @ 0x18011D65C (RtlStringCbPrintfW.c)
 *     ZwAllocateVirtualMemory @ 0x180161F90 (ZwAllocateVirtualMemory.c)
 *     memmove @ 0x180167400 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlQueryProcessHeapInformation(__int64 a1)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rcx
  unsigned int *v4; // r12
  int HeapInformation; // r15d
  __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r14
  unsigned int i; // edx
  unsigned int *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // eax
  unsigned int v16; // esi
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rcx
  __int64 v19; // rax
  _QWORD *v20; // r13
  __int64 v21; // r14
  __int64 v22; // rsi
  unsigned int j; // edi
  wchar_t *v24; // r10
  __int64 v25; // r9
  const wchar_t *v26; // r8
  __int64 v27; // rdx
  const wchar_t *v28; // r8
  __int64 v29; // rcx
  __int64 v30; // r9
  unsigned int k; // ecx
  int v32; // edi
  int v33; // eax
  unsigned int v35; // [rsp+38h] [rbp-110h]
  __int64 v36; // [rsp+48h] [rbp-100h] BYREF
  __int64 v37; // [rsp+50h] [rbp-F8h] BYREF
  wchar_t *v38; // [rsp+58h] [rbp-F0h]
  __int64 v39; // [rsp+60h] [rbp-E8h]
  const wchar_t *v40; // [rsp+68h] [rbp-E0h]
  __int64 v41; // [rsp+70h] [rbp-D8h]
  __int64 v42; // [rsp+78h] [rbp-D0h]
  __int64 v43; // [rsp+80h] [rbp-C8h]
  _QWORD v44[5]; // [rsp+88h] [rbp-C0h] BYREF
  _QWORD v45[2]; // [rsp+B0h] [rbp-98h] BYREF
  int v46; // [rsp+C0h] [rbp-88h]
  __int64 (__fastcall *v47)(); // [rsp+C8h] [rbp-80h]
  _QWORD *v48; // [rsp+D0h] [rbp-78h]
  __int64 v49; // [rsp+150h] [rbp+8h] BYREF
  __int64 v50; // [rsp+158h] [rbp+10h] BYREF
  unsigned __int64 v51; // [rsp+160h] [rbp+18h] BYREF
  __int64 v52; // [rsp+168h] [rbp+20h] BYREF

  *(_QWORD *)(a1 + 152) = NtCurrentPeb()->ProcessHeap;
  v52 = 0LL;
  v49 = 0LL;
  v2 = *(_QWORD *)(a1 + 72) + 8LL;
  v3 = *(_QWORD *)(a1 + 80);
  if ( v2 > v3 )
  {
    if ( v2 > *(_QWORD *)(a1 + 88) )
      return 3221225495LL;
    v52 = v3 + a1;
    v49 = v2 - v3;
    if ( (int)ZwAllocateVirtualMemory(-1LL, &v52, 0LL, &v49, 4096, 4) < 0 )
      return 3221225495LL;
    *(_QWORD *)(a1 + 80) += v49;
  }
  v4 = (unsigned int *)(a1 + *(_QWORD *)(a1 + 72));
  *(_QWORD *)(a1 + 72) = v2;
  if ( !v4 )
    return 3221225495LL;
  *v4 = 0;
  *(_QWORD *)(a1 + 112) = v4;
  RtlEnterCriticalSection((__int64)&RtlpProcessHeapsLock);
  HeapInformation = RtlpEnumProcessHeaps(RtlpQueryProcessEnumHeapsRoutine, a1, 2LL);
  if ( HeapInformation < 0 )
  {
    *(_QWORD *)(a1 + 112) = 0LL;
  }
  else if ( (*(_BYTE *)(a1 + 64) & 8) != 0 )
  {
    v6 = RtlpGlobalTagHeap;
    if ( !RtlpGlobalTagHeap || !*(_QWORD *)(RtlpGlobalTagHeap + 232) )
      goto LABEL_10;
    v36 = 0LL;
    v50 = 0LL;
    v7 = *(_QWORD *)(a1 + 72) + 96LL;
    v8 = *(_QWORD *)(a1 + 80);
    if ( v7 > v8 )
    {
      if ( v7 > *(_QWORD *)(a1 + 88) )
        goto LABEL_52;
      v36 = v8 + a1;
      v50 = v7 - v8;
      if ( (int)ZwAllocateVirtualMemory(-1LL, &v36, 0LL, &v50, 4096, 4) < 0 )
        goto LABEL_52;
      *(_QWORD *)(a1 + 80) += v50;
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
LABEL_10:
      for ( i = 0; ; ++i )
      {
        v35 = i;
        if ( i >= *v4 )
          goto LABEL_40;
        v12 = &v4[24 * i];
        v13 = *(_QWORD *)(a1 + 128);
        if ( !v13 || v13 == *((_QWORD *)v12 + 1) )
        {
          v14 = *((_QWORD *)v12 + 1);
          v50 = v14;
          v15 = *(unsigned __int16 *)(v14 + 224);
          v12[10] = v15;
          v16 = 72 * v15;
          if ( *(_QWORD *)(v14 + 328) )
          {
            v12[10] = v15 + 129;
            v16 += 9288;
          }
          v37 = 0LL;
          v51 = 0LL;
          v17 = *(_QWORD *)(a1 + 72) + ((v16 + 7) & 0xFFFFFFF8);
          v18 = *(_QWORD *)(a1 + 80);
          if ( v17 > v18 )
          {
            if ( v17 > *(_QWORD *)(a1 + 88) )
              break;
            v37 = v18 + a1;
            v51 = v17 - v18;
            if ( (int)ZwAllocateVirtualMemory(-1LL, &v37, 0LL, &v51, 4096, 4) < 0 )
              break;
            *(_QWORD *)(a1 + 80) += v51;
          }
          v19 = *(_QWORD *)(a1 + 72);
          v20 = (_QWORD *)(a1 + v19);
          *(_QWORD *)(a1 + 72) = v17;
          if ( !(a1 + v19) )
          {
            HeapInformation = -1073741801;
            goto LABEL_55;
          }
          memset_thunk_772440563353939046((void *)(a1 + v19), 0, v16);
          *((_QWORD *)v12 + 10) = v20;
          v21 = v50;
          v22 = *(_QWORD *)(v50 + 328);
          v43 = v22;
          if ( v22 )
          {
            v12[12] = 129;
            v12[13] = 16;
            for ( j = 0; ; ++j )
            {
              if ( j > 0x80 )
                goto LABEL_35;
              *(_DWORD *)v20 = *(_DWORD *)v22;
              *((_DWORD *)v20 + 1) = *(_DWORD *)(v22 + 4);
              v20[1] = 16LL * *(_QWORD *)(v22 + 8);
              *((_WORD *)v20 + 8) = j | 0x8000;
              v24 = (wchar_t *)v20 + 10;
              if ( !j )
                break;
              if ( j < 0x80 )
              {
                v25 = 16 * j;
                v26 = L"Objects=%4u";
LABEL_33:
                RtlStringCbPrintfW((char *)v20 + 20, 48LL, v26, v25);
                goto LABEL_34;
              }
              v27 = 2147483646LL;
              v42 = 2147483646LL;
              v28 = L"VirtualAlloc";
              v40 = L"VirtualAlloc";
              v29 = 24LL;
              v41 = 24LL;
              v38 = (wchar_t *)v20 + 10;
              v30 = 0LL;
              v39 = 0LL;
              while ( v29 )
              {
                if ( !v27 || !*v28 )
                  goto LABEL_31;
                *v24++ = *v28;
                v38 = v24;
                v40 = ++v28;
                v41 = --v29;
                v42 = --v27;
                v39 = ++v30;
              }
              v38 = --v24;
              v39 = v30 - 1;
LABEL_31:
              *v24 = 0;
LABEL_34:
              v20 += 9;
              v22 += 16LL;
              v43 = v22;
            }
            v25 = 2048LL;
            v26 = L"Objects>%4u";
            goto LABEL_33;
          }
LABEL_35:
          memmove(v20, *(const void **)(v21 + 232), 72LL * *(unsigned __int16 *)(v21 + 224));
          for ( k = 0; k < *(unsigned __int16 *)(v21 + 224); ++k )
          {
            v20[1] *= 16LL;
            v20 += 9;
          }
          i = v35;
        }
      }
    }
LABEL_52:
    HeapInformation = -1073741801;
    goto LABEL_55;
  }
LABEL_40:
  if ( HeapInformation >= 0 )
  {
    v32 = *(_DWORD *)(a1 + 64);
    if ( (v32 & 0x210) != 0 )
    {
      memset_thunk_772440563353939046(v45, 0, 0x58uLL);
      v45[0] = -1LL;
      v45[1] = *(_QWORD *)(a1 + 128);
      v47 = RtlpWalkCallbackRoutine;
      v48 = v44;
      v33 = 3;
      if ( (v32 & 0x10) != 0 )
        v33 = 5;
      v46 = v33;
      v44[0] = a1;
      v44[1] = v4;
      v44[2] = 0LL;
      v44[3] = v4 + 2;
      HeapInformation = RtlQueryHeapInformation(0LL, 2LL, v45, 88LL, 0LL);
    }
  }
LABEL_55:
  RtlLeaveCriticalSection((__int64)&RtlpProcessHeapsLock);
  return (unsigned int)HeapInformation;
}
