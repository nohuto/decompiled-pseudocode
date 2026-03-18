/*
 * XREFs of IopLiveDumpGenerateIptSecondaryData @ 0x14059AFB4
 * Callers:
 *     IopLiveDumpCollectPages @ 0x14059A264 (IopLiveDumpCollectPages.c)
 * Callees:
 *     IopLiveDumpGetMillisecondCounter @ 0x14049B5E4 (IopLiveDumpGetMillisecondCounter.c)
 *     IopLiveDumpTraceCaptureGenerateIptSecondaryDataDuration @ 0x14059D44C (IopLiveDumpTraceCaptureGenerateIptSecondaryDataDuration.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 */

__int64 IopLiveDumpGenerateIptSecondaryData()
{
  __int64 v0; // rdi
  __int64 MillisecondCounter; // rsi
  int v2; // eax
  void **v3; // rbx
  __int64 v4; // rcx
  unsigned int v5; // eax
  void *v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // eax
  unsigned int *v9; // rbx
  unsigned int v10; // eax
  __int64 result; // rax
  __int64 v12; // rax
  __int128 v13; // [rsp+30h] [rbp-40h] BYREF
  __int128 v14; // [rsp+40h] [rbp-30h]
  __int128 v15; // [rsp+50h] [rbp-20h]
  __int64 v16; // [rsp+60h] [rbp-10h]

  v0 = IopLiveDumpContext;
  v16 = 0LL;
  MillisecondCounter = 0LL;
  v13 = 0LL;
  v2 = *(_DWORD *)(IopLiveDumpContext + 80);
  v14 = 0LL;
  v15 = 0LL;
  if ( (v2 & 0x80u) != 0 )
    MillisecondCounter = IopLiveDumpGetMillisecondCounter(0);
  v3 = (void **)(v0 + 1048);
  v4 = *(_QWORD *)(v0 + 1048);
  if ( v4 )
  {
    *(_DWORD *)(v0 + 1088) = 0;
    *(_QWORD *)(v0 + 1080) = v4;
    guard_dispatch_icall_no_overrides(2LL, 0LL, v0 + 1048, 48LL);
    v5 = *(_DWORD *)(v0 + 1088);
    if ( v5 && *(_DWORD *)(v0 + 1056) >= v5 )
    {
      v6 = *(void **)(v0 + 1080);
      if ( *v3 != v6 )
      {
        memmove(*v3, v6, v5);
        *(_QWORD *)(v0 + 1080) = *v3;
        v5 = *(_DWORD *)(v0 + 1088);
      }
      if ( v5 )
      {
        if ( *(_QWORD *)(v0 + 1000) )
        {
          LODWORD(v14) = *(_DWORD *)v0;
          *((_QWORD *)&v14 + 1) = *(_QWORD *)(v0 + 8);
          v15 = *(_OWORD *)(v0 + 16);
          v16 = *(_QWORD *)(v0 + 32);
          HIDWORD(v13) = 0x2000000;
          guard_dispatch_icall_no_overrides(7LL, 0LL, &v13, 56LL);
          v7 = v13;
          if ( (_QWORD)v13 )
          {
            v8 = 16 * *(_DWORD *)(v13 + 16) + 12;
            if ( v8 <= *(_DWORD *)(v0 + 1008) )
            {
              v9 = *(unsigned int **)(v0 + 1000);
              *(_DWORD *)(v0 + 1040) = v8;
              *(_QWORD *)(v0 + 1032) = v9;
              *(GUID *)(v0 + 1016) = GUID_TRIAGEDUMP_DATA;
              v10 = *(_DWORD *)(v7 + 16);
              *v9 = v10;
              v9[1] = 4;
              memmove(v9 + 2, (const void *)(v13 + 48), 16LL * v10);
              v9[4 * *v9 + 2] = 5525577;
            }
          }
        }
      }
    }
    else
    {
      *(_QWORD *)(v0 + 1080) = 0LL;
      *(_DWORD *)(v0 + 1088) = 0;
    }
  }
  result = *(unsigned int *)(v0 + 80);
  if ( (result & 0x80u) != 0LL )
  {
    v12 = IopLiveDumpGetMillisecondCounter(0);
    return IopLiveDumpTraceCaptureGenerateIptSecondaryDataDuration(v0, v12 - MillisecondCounter);
  }
  return result;
}
