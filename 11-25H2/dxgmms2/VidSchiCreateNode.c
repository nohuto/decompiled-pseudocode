/*
 * XREFs of VidSchiCreateNode @ 0x1400A5E90
 * Callers:
 *     VidSchInitializeAdapter @ 0x140115D50 (VidSchInitializeAdapter.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     VidSchiInterlockedInsertTailList @ 0x140032D40 (VidSchiInterlockedInsertTailList.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchiCreateNode(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // r15
  __int64 v6; // r13
  __int64 v7; // r14
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 Pool2; // rax
  __int64 v12; // rbx
  __int64 v13; // r12
  _QWORD *v14; // rax
  __int64 v15; // r14
  __int64 v16; // r15
  __int64 v17; // rcx
  int *v18; // rcx
  int v19; // eax
  BOOL v20; // eax
  __int64 v21; // r8
  int v22; // ecx
  __int64 v23; // rdx
  unsigned int v24; // r10d
  __int64 v25; // r8
  BOOL v26; // eax
  unsigned int v27; // edx
  int v28; // eax
  __int64 v29; // rcx
  unsigned int v30; // edx
  int v31; // r9d
  int v32; // eax
  __int64 v33; // rax
  int v34; // edx
  __int64 v35; // [rsp+80h] [rbp+8h]

  v5 = a2;
  v6 = a4;
  v7 = a3;
  v8 = 208 * *(_DWORD *)(a1 + 2868) + 16544;
  if ( v8 < 0x4170 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3099;
    DxgkLogInternalTriageEvent(v9, 0x40000LL);
    return 0LL;
  }
  Pool2 = ExAllocatePool2(64LL, v8, 828467542LL);
  v12 = Pool2;
  if ( !Pool2 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 3109;
    return 0LL;
  }
  *(_QWORD *)(Pool2 + 1752) = 0LL;
  *(_QWORD *)(Pool2 + 1760) = 0LL;
  *(_DWORD *)Pool2 = 828467542;
  *(_QWORD *)(Pool2 + 24) = a1;
  *(_WORD *)(Pool2 + 4) = v6;
  *(_WORD *)(Pool2 + 6) = v5;
  *(_WORD *)(Pool2 + 8) = v7;
  v13 = 32LL;
  if ( (_WORD)v7 == 0x7FFF )
  {
    *(_DWORD *)(Pool2 + 12) |= 0x40u;
  }
  else
  {
    v20 = *(_DWORD *)(a1 + 80) == 1
       || *(_WORD *)(344LL * (unsigned __int16)v5 + *(_QWORD *)(*(_QWORD *)(a1 + 16) + 2992LL) + 2) == (_WORD)v7;
    v35 = *(_QWORD *)(a1 + 16);
    v21 = *(_QWORD *)(v35 + 2992);
    v22 = 0;
    v23 = 344LL * (unsigned __int16)v5;
    if ( (*(_DWORD *)(v23 + v21 + 16) & 0x20) != 0 )
      LOBYTE(v22) = *(_DWORD *)(v23 + v21 + 24) == (unsigned __int16)v7;
    v24 = (4 * v22) | v20 & 0xFFFFFFFB | *(_DWORD *)(v12 + 12) & 0xFFFFFFFA;
    v25 = *(_QWORD *)(v21 + 344 * v5 + 32);
    v26 = v25 && (*(_BYTE *)(74 * v7 + v25 + 68) & 1) != 0;
    v27 = v24 & 0xFFFFFFFD | (2 * v26);
    if ( v26 )
    {
      if ( v25 && (*(_BYTE *)(74 * v7 + v25 + 68) & 2) != 0 )
        v28 = 32;
      else
        v28 = 0;
      v29 = 74 * v7;
      v30 = v28 | v27 & 0xFFFFFFDF;
      if ( !v25 || (v31 = 8, (*(_BYTE *)(v29 + v25 + 68) & 8) == 0) )
        v31 = 0;
      v27 = v31 | v30 & 0xFFFFFFF7;
      if ( v25 )
        v32 = *(unsigned __int16 *)(v25 + v29 + 70);
      else
        v32 = 0;
      *(_DWORD *)(v12 + 1740) = v32;
      if ( !v32 )
        *(_DWORD *)(v12 + 1740) = 0xFFFF;
      *(_DWORD *)(a1 + 2792) &= ~2u;
      *(_WORD *)(a1 + 56) = 257;
    }
    else
    {
      v29 = 74 * v7;
    }
    v33 = *(_QWORD *)(344 * v5 + *(_QWORD *)(v35 + 2992) + 32);
    if ( v33 )
      LODWORD(v33) = *(_BYTE *)(v29 + v33 + 72) != 0 ? 0x10 : 0;
    v34 = v33 | v27 & 0xFFFFFFEF;
    *(_DWORD *)(v12 + 12) = v34;
    if ( (v34 & 1) != 0 )
    {
      if ( (_DWORD)v5 )
      {
        if ( ((v34 & 2) != 0) != *(_BYTE *)(a1 + 55) || ((v34 & 0x20) != 0) != *(_BYTE *)(a1 + 58) )
        {
          g_DxgMmsBugcheckExportIndex = 1;
          WdLogSingleEntry5(0LL, 281LL, 20480LL, v5, 0LL, 0LL);
          WdLogGlobalForLineNumber = 906;
          JUMPOUT(0x1400A630BLL);
        }
      }
      else
      {
        *(_BYTE *)(a1 + 55) = (v34 & 2) != 0;
        *(_BYTE *)(a1 + 58) = (v34 & 0x20) != 0;
      }
    }
  }
  KeInitializeEvent((PRKEVENT)(v12 + 16496), SynchronizationEvent, 0);
  v14 = (_QWORD *)(v12 + 2184);
  do
  {
    v14[1] = v14;
    *v14 = v14;
    v14 += 2;
    --v13;
  }
  while ( v13 );
  *(_QWORD *)(v12 + 2704) = v12 + 2696;
  v15 = v12 + 240;
  *(_QWORD *)(v12 + 2696) = v12 + 2696;
  v16 = 3LL;
  *(_QWORD *)(v12 + 2720) = v12 + 2712;
  *(_QWORD *)(v12 + 2712) = v12 + 2712;
  *(_QWORD *)(v12 + 2736) = v12 + 2728;
  *(_QWORD *)(v12 + 2728) = v12 + 2728;
  *(_QWORD *)(v12 + 2752) = v12 + 2744;
  *(_QWORD *)(v12 + 2744) = v12 + 2744;
  *(_QWORD *)(v12 + 2768) = v12 + 2760;
  *(_QWORD *)(v12 + 2760) = v12 + 2760;
  do
  {
    *(_OWORD *)v15 = 0LL;
    *(_OWORD *)(v15 + 16) = 0LL;
    *(_OWORD *)(v15 + 32) = 0LL;
    *(_QWORD *)(v15 + 48) = 0LL;
    KeInitializeEvent((PRKEVENT)v15, SynchronizationEvent, 0);
    v15 += 56LL;
    --v16;
  }
  while ( v16 );
  *(_QWORD *)(v12 + 416) = v12 + 408;
  *(_QWORD *)(v12 + 408) = v12 + 408;
  *(_QWORD *)(v12 + 432) = v12 + 424;
  *(_QWORD *)(v12 + 424) = v12 + 424;
  *(_QWORD *)(v12 + 1720) = v12 + 1712;
  *(_QWORD *)(v12 + 1712) = v12 + 1712;
  *(_QWORD *)(v12 + 16536) = v12 + 16528;
  *(_QWORD *)(v12 + 16528) = v12 + 16528;
  if ( *(_DWORD *)(a1 + 2868) )
  {
    do
    {
      v17 = 208LL * (unsigned int)v16;
      *(_DWORD *)(v17 + v12 + 16544) = 912353622;
      VidSchiInterlockedInsertTailList((KSPIN_LOCK *)(a1 + 1992), v12 + 16528, (_QWORD *)(v17 + v12 + 16560), 0LL);
      LODWORD(v16) = v16 + 1;
    }
    while ( (unsigned int)v16 < *(_DWORD *)(a1 + 2868) );
  }
  v18 = *(int **)(a1 + 2816);
  if ( (unsigned int)v6 < *(_DWORD *)(a1 + 2856) )
    v18 += v6;
  v19 = *v18;
  *(_DWORD *)(v12 + 16520) = -1;
  *(_DWORD *)(v12 + 3000) = v19;
  *(_BYTE *)(v12 + 16524) = 1;
  *(_QWORD *)(v12 + 3040) = 0LL;
  *(_QWORD *)(v12 + 3056) = VidSchiNodePerfTracingThread;
  result = v12;
  *(_QWORD *)(v12 + 3064) = v12;
  return result;
}
