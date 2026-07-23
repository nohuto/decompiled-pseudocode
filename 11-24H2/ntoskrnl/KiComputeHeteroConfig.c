/*
 * XREFs of KiComputeHeteroConfig @ 0x14042B64C
 * Callers:
 *     KeConfigureHeteroProcessors @ 0x14042B440 (KeConfigureHeteroProcessors.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140287740 (KeAddProcessorAffinityEx.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x14039FF30 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     KiConfigureHeteroMultiCoreProcessors @ 0x140A8C988 (KiConfigureHeteroMultiCoreProcessors.c)
 */

__int64 __fastcall KiComputeHeteroConfig(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v4; // rsi
  unsigned __int16 *v5; // rdi
  unsigned __int16 *v6; // rbx
  __int64 v7; // r14
  __int64 v8; // r15
  unsigned __int8 v9; // r13
  unsigned __int8 v10; // r12
  unsigned int v11; // r9d
  char *v12; // r11
  int v13; // r10d
  unsigned int v14; // r15d
  unsigned __int8 v15; // r8
  unsigned __int8 v16; // cl
  char v17; // al
  __int64 v18; // rcx
  unsigned int i; // ebx
  __int64 v20; // r15
  unsigned __int16 *v21; // rbx
  __int64 v22; // r14
  __int64 v23; // r15
  unsigned __int16 *v24; // rbx
  unsigned __int8 v25; // al
  unsigned __int16 *v26; // rcx
  __int64 v27; // r15
  __int64 v28; // r12
  struct _KAFFINITY_EX *v29; // rbx
  unsigned int v30; // [rsp+20h] [rbp-68h]
  __int64 v31; // [rsp+28h] [rbp-60h]
  __int64 v32; // [rsp+30h] [rbp-58h]
  int v33; // [rsp+90h] [rbp+8h]
  __int64 v35; // [rsp+A0h] [rbp+18h]
  unsigned int v36; // [rsp+A8h] [rbp+20h]

  result = *(unsigned int *)(a1 + 4);
  v4 = KiHeteroConfig;
  v33 = 0;
  v32 = KiHeteroConfig;
  v36 = result;
  *(_DWORD *)(KiHeteroConfig + 12) = 0;
  *(_DWORD *)(v4 + 16) = 0;
  *(_DWORD *)(v4 + 20) = 0;
  *(_DWORD *)(v4 + 24) = result;
  *(_QWORD *)v4 = a1;
  *(_DWORD *)(v4 + 8) = a2;
  if ( !(_DWORD)result )
    return result;
  v31 = 0LL;
  v5 = (unsigned __int16 *)(v4 + 568);
  do
  {
    v30 = KeNumberProcessors_0;
    if ( PpmHeteroMultiCoreClassesEnabled )
    {
      v21 = v5 + 2376;
      v22 = 7LL;
      do
      {
        v27 = 2LL;
        do
        {
          memset_0(v21 - 1848, 0, 8LL * *(v21 - 1852));
          *(v21 - 1852) = 1;
          memset_0(v21, 0, 8LL * *(v21 - 4));
          *(v21 - 4) = 1;
          memset_0(v21 + 1848, 0, 8LL * v21[1844]);
          v21[1844] = 1;
          v21 += 132;
          --v27;
        }
        while ( v27 );
        --v22;
      }
      while ( v22 );
    }
    else
    {
      memset_0(v5 - 264, 0, 8LL * *(v5 - 268));
      *(v5 - 268) = 1;
      memset_0(v5 - 132, 0, 8LL * *(v5 - 136));
      *(v5 - 136) = 1;
      memset_0(v5, 0, 8LL * *(v5 - 4));
      *(v5 - 4) = 1;
      memset_0(v5 + 132, 0, 8LL * v5[128]);
      v5[128] = 1;
      memset_0(v5 + 264, 0, 8LL * v5[260]);
      v5[260] = 1;
      memset_0(v5 + 396, 0, 8LL * v5[392]);
      v5[392] = 1;
    }
    v6 = v5 + 6068;
    v7 = 7LL;
    do
    {
      v8 = 2LL;
      do
      {
        memset_0(v6 + 4, 0, 8LL * *v6);
        *v6 = 1;
        v6 += 132;
        --v8;
      }
      while ( v8 );
      --v7;
    }
    while ( v7 );
    v9 = 0;
    v10 = 0;
    v11 = 0;
    if ( !v30 )
      goto LABEL_38;
    v12 = *(char **)(a1 + 8);
    v13 = v33;
    v14 = v36;
    do
    {
      v15 = v9;
      v16 = *(_BYTE *)(a1 + 4LL * (v33 + v36 * v11) + 25);
      v9 = *(_BYTE *)(a1 + 4LL * (v33 + v36 * v11) + 24);
      if ( v16 <= v10 )
        v16 = v10;
      v17 = v7;
      v10 = v16;
      if ( v9 <= v15 )
        v9 = v15;
      if ( (unsigned __int8)*v12 > (unsigned __int8)v7 )
        v17 = *v12;
      ++v11;
      ++v12;
      LOBYTE(v7) = v17;
    }
    while ( v11 < v30 );
    if ( !v16 && !v9 )
    {
LABEL_38:
      if ( PpmHeteroMultiCoreClassesEnabled )
      {
        v23 = 7LL;
        v24 = v5 + 4221;
        do
        {
          v28 = 2LL;
          do
          {
            KiCopyAffinityEx((struct _KAFFINITY_EX *)(v24 - 3697), *(v24 - 3696), &KeActiveProcessors);
            KiCopyAffinityEx((struct _KAFFINITY_EX *)(v24 - 1), *v24, &KeActiveProcessors);
            KiCopyAffinityEx((struct _KAFFINITY_EX *)(v24 - 1849), *(v24 - 1848), &KeActiveProcessors);
            v24 += 132;
            --v28;
          }
          while ( v28 );
          --v23;
        }
        while ( v23 );
      }
      else
      {
        v29 = (struct _KAFFINITY_EX *)(v5 - 268);
        KiCopyAffinityEx((struct _KAFFINITY_EX *)(v5 - 268), *(v5 - 267), &KeActiveProcessors);
        KiCopyAffinityEx(v29 + 1, v29[1].Size, &KeActiveProcessors);
        KiCopyAffinityEx(v29 + 2, v29[2].Size, &KeActiveProcessors);
        KiCopyAffinityEx(v29 + 3, v29[3].Size, &KeActiveProcessors);
        KiCopyAffinityEx(v29 + 4, v29[4].Size, &KeActiveProcessors);
        KiCopyAffinityEx(v29 + 5, v29[5].Size, &KeActiveProcessors);
      }
      *(_DWORD *)(v4 + 12) = a2;
      *(_DWORD *)(v4 + 16) = (_BYTE)v7 != 0;
      goto LABEL_32;
    }
    *(_DWORD *)(v4 + 16) = 1;
    if ( PpmHeteroMultiCoreClassesEnabled )
    {
      KiConfigureHeteroMultiCoreProcessors((_DWORD)v5 - 536, a1, v33, v17 != 0);
      goto LABEL_30;
    }
    v18 = v31;
    for ( i = 0; i < v30; ++i )
    {
      v35 = *(_QWORD *)(a1 + 16);
      v20 = v13 + i * v14;
      if ( *(_BYTE *)(a1 + 4 * v20 + 25) >= *(_BYTE *)(v18 + v35 + 1) )
      {
        KeAddProcessorAffinityEx(v5 - 268, i);
        if ( *(_BYTE *)(a1 + 4 * v20 + 25) == v10 )
          KeAddProcessorAffinityEx(v5 - 136, i);
      }
      if ( !*(_BYTE *)(a1 + 4 * v20 + 27) )
        KeAddProcessorAffinityEx(v5 + 392, i);
      if ( !*(_BYTE *)(a1 + 4 * v20 + 26) )
        KeAddProcessorAffinityEx(v5 + 260, i);
      v18 = v31;
      if ( (_BYTE)v7 )
      {
        if ( *(_BYTE *)(a1 + 4 * v20 + 24) < *(_BYTE *)(v31 + v35) )
          goto LABEL_28;
        KeAddProcessorAffinityEx(v5 - 4, i);
        if ( *(_BYTE *)(a1 + 4 * v20 + 24) == v9 )
        {
          v26 = v5 + 128;
          goto LABEL_51;
        }
        goto LABEL_52;
      }
      v25 = *(_BYTE *)(v31 + v35 + 1);
      if ( !v25 || *(_BYTE *)(a1 + 4 * v20 + 25) < v25 )
      {
        KeAddProcessorAffinityEx(v5 - 4, i);
        KeAddProcessorAffinityEx(v5 + 128, i);
        KeAddProcessorAffinityEx(v5 + 260, i);
        v26 = v5 + 392;
LABEL_51:
        KeAddProcessorAffinityEx(v26, i);
LABEL_52:
        v18 = v31;
      }
LABEL_28:
      v13 = v33;
      v14 = v36;
    }
    v4 = v32;
LABEL_30:
    if ( (_BYTE)v7 )
      *(_DWORD *)(v4 + 20) = 1;
LABEL_32:
    v5 += 8184;
    v31 += 2LL;
    result = (unsigned int)(v33 + 1);
    v33 = result;
  }
  while ( (unsigned int)result < v36 );
  return result;
}
