/*
 * XREFs of IopLiveDumpGetCapturePagesNoLock @ 0x140598204
 * Callers:
 *     IopLiveDumpGetCapturePages @ 0x140598114 (IopLiveDumpGetCapturePages.c)
 *     IopLiveDumpGetNtMergePages @ 0x1405986DC (IopLiveDumpGetNtMergePages.c)
 * Callees:
 *     IopLiveDumpTraceEventGeneric @ 0x1405A0124 (IopLiveDumpTraceEventGeneric.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall IopLiveDumpGetCapturePagesNoLock(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5,
        _QWORD *a6,
        char a7)
{
  unsigned int v7; // r11d
  __int64 v10; // r9
  unsigned __int64 v11; // rsi
  unsigned int i; // eax
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rdx
  _QWORD *v17; // rdx
  __int64 j; // r11
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r8
  __int64 v21; // rcx
  unsigned __int64 *v23; // [rsp+28h] [rbp-80h]
  _QWORD v24[3]; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v25[3]; // [rsp+48h] [rbp-60h] BYREF

  v7 = a4;
  v10 = -1LL;
  v23 = a1;
  *a5 = 0;
  v11 = *(_QWORD *)(a2 + 48);
  if ( v11 != -1LL )
  {
    for ( i = 0; i < v7; i = *a5 )
    {
      v13 = a1[1];
      v14 = v11 & -(__int64)(v11 < *a1);
      v15 = *a1 - 1;
      while ( 1 )
      {
        if ( v15 - v14 == -1LL )
          goto LABEL_6;
        v17 = (_QWORD *)(v13 + 8 * (v14 >> 6));
        for ( j = ~*v17 | ((1LL << (v14 & 0x3F)) - 1); j == -1; j = ~*v17 )
        {
          if ( (unsigned __int64)++v17 > v13 + 8 * (v15 >> 6) )
            goto LABEL_6;
        }
        _BitScanForward64(&v19, ~j);
        v16 = v19 + ((__int64)((__int64)v17 - v13) >> 3 << 6);
        if ( v16 > v15 )
        {
LABEL_6:
          v16 = -1LL;
        }
        else if ( v16 != -1LL )
        {
          break;
        }
        if ( !v14 )
          break;
        v20 = v11 + 1;
        if ( v11 + 1 > *a1 )
          v20 = *a1;
        v15 = v20 - 1;
        v14 = 0LL;
      }
      if ( v16 < v11 || v16 == -1LL )
        goto LABEL_21;
      v11 = v16 + 1;
      a1 = v23;
      v7 = a4;
      *(_QWORD *)(a3 + 8LL * (*a5)++) = v16;
    }
    v10 = *(_QWORD *)(a3 + 8LL * (i - 1)) + 1LL;
  }
LABEL_21:
  *(_QWORD *)(a2 + 48) = v10;
  if ( *a5 )
  {
    *a6 = *(_QWORD *)(a2 + 56);
    v21 = *(_QWORD *)(a2 + 56) + 1LL;
    *(_QWORD *)(a2 + 56) = v21;
    *(_DWORD *)(a2 + 40) = *a5;
    if ( a7 )
    {
      v24[2] = v21;
      v25[0] = L"ChunkIndex";
      v25[1] = L"PageCount";
      v25[2] = L"NACI";
      v24[0] = *a6;
      v24[1] = *a5;
      IopLiveDumpTraceEventGeneric(L"IopLiveDumpGetCapturePagesResult", 3LL, v25, v24);
    }
  }
}
