/*
 * XREFs of KeUpdateProcessorRestrictionsEx @ 0x1405B273C
 * Callers:
 *     PpmParkEvaluateRestriction @ 0x1404E5C48 (PpmParkEvaluateRestriction.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140287740 (KeAddProcessorAffinityEx.c)
 *     ?KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x1402AA18C (-KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     ?KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x1402B2A28 (-KiSubtractAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     KeAndAffinityEx2 @ 0x14032C8C0 (KeAndAffinityEx2.c)
 *     KeEnumerateNextSchedulerSubNodeInNode @ 0x14032FEC0 (KeEnumerateNextSchedulerSubNodeInNode.c)
 *     KeCountSetBitsAffinityEx @ 0x14039E490 (KeCountSetBitsAffinityEx.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x14039FF30 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KeIsEqualAffinityEx @ 0x1403A3520 (KeIsEqualAffinityEx.c)
 *     KeCheckProcessorAffinityEx @ 0x1403A4AD0 (KeCheckProcessorAffinityEx.c)
 *     KeInitializeSchedulerSubNodeEnumerationContext @ 0x140412310 (KeInitializeSchedulerSubNodeEnumerationContext.c)
 *     KiInstallSubNodeHeteroSets @ 0x1404A7D80 (KiInstallSubNodeHeteroSets.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

char __fastcall KeUpdateProcessorRestrictionsEx(
        unsigned int a1,
        struct _KAFFINITY_EX *a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned __int16 *a5)
{
  __int64 v5; // rdi
  char v6; // bl
  __int64 v7; // r14
  __int64 v8; // rsi
  struct _KAFFINITY_EX *v9; // rdi
  unsigned __int16 *v10; // r14
  int *v11; // r13
  __int64 v12; // r12
  struct _KAFFINITY_EX *v13; // r15
  __int64 v14; // rsi
  struct _KAFFINITY_EX *v15; // r8
  unsigned int v16; // eax
  int v17; // r12d
  unsigned int v18; // r14d
  unsigned int *v19; // rsi
  int v20; // edi
  char v21; // cl
  bool v22; // zf
  __int64 v23; // rsi
  char v25; // [rsp+20h] [rbp-E0h]
  int v26; // [rsp+24h] [rbp-DCh]
  unsigned int v27; // [rsp+24h] [rbp-DCh]
  __int64 v29; // [rsp+30h] [rbp-D0h]
  __int64 v31; // [rsp+40h] [rbp-C0h]
  __int64 v32; // [rsp+48h] [rbp-B8h]
  __int64 v33; // [rsp+50h] [rbp-B0h] BYREF
  int *v34; // [rsp+58h] [rbp-A8h]
  struct _KAFFINITY_EX *v35; // [rsp+60h] [rbp-A0h]
  __int64 v36; // [rsp+68h] [rbp-98h]
  __int64 v37; // [rsp+70h] [rbp-90h]
  __int64 v38; // [rsp+78h] [rbp-88h]
  __int64 v39; // [rsp+80h] [rbp-80h]
  unsigned int *v40; // [rsp+88h] [rbp-78h]
  __int64 v41; // [rsp+90h] [rbp-70h]
  __int64 v42; // [rsp+98h] [rbp-68h]
  __int128 v43; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v44; // [rsp+B0h] [rbp-50h]
  struct _KAFFINITY_EX v45; // [rsp+C0h] [rbp-40h] BYREF
  struct _KAFFINITY_EX v46; // [rsp+1D0h] [rbp+D0h] BYREF
  struct _KAFFINITY_EX v47; // [rsp+2E0h] [rbp+1E0h] BYREF

  v5 = a1;
  v40 = a4;
  memset_0(&v45.8, 0, sizeof(v45.8));
  v6 = 0;
  v33 = 0LL;
  memset_0(&v47.8, 0, sizeof(v47.8));
  memset_0(&v46.8, 0, sizeof(v46.8));
  v7 = KiHeteroConfig;
  v8 = (unsigned int)KiHgsPlusConfiguration;
  v43 = 0LL;
  v44 = 0LL;
  v42 = KiHeteroConfig;
  if ( (unsigned int)KiHgsPlusConfiguration > *(_DWORD *)(KiHeteroConfig + 28) )
    return v6;
  *(_QWORD *)&v45.Count = 2097153LL;
  memset_0(&v45.8, 0, sizeof(v45.8));
  *(_QWORD *)&v47.Count = 2097153LL;
  memset_0(&v47.8, 0, sizeof(v47.8));
  *(_QWORD *)&v46.Count = 2097153LL;
  memset_0(&v46.8, 0, sizeof(v46.8));
  v25 = 0;
  v41 = KeNodeBlock[v5];
  if ( !(_DWORD)v8 )
    return v6;
  v9 = (struct _KAFFINITY_EX *)(v7 + 560);
  v39 = v8;
  v38 = v7 + 560;
  do
  {
    v10 = a5;
    v11 = KiDynamicHeteroCpuPolicy;
    v12 = 6LL;
    v32 = (__int64)a5;
    v31 = 6LL;
    v13 = v9 + 46;
    v37 = 7LL;
    do
    {
      v14 = 0LL;
      v29 = 0LL;
      v35 = v13;
      v34 = v11;
      v36 = 2LL;
      do
      {
        memset_0(&v46.8, 0, 8LL * v46.Count);
        v46.Count = 1;
        memset_0(&v45.8, 0, 8LL * v45.Count);
        v45.Count = 1;
        if ( KeHeteroSystem )
        {
          if ( PpmHeteroMultiCoreClassesEnabled )
          {
            v15 = &v9[v12 - 2 + v14];
          }
          else
          {
            switch ( *v11 )
            {
              case 1:
                v15 = v9 - 2;
                break;
              case 2:
                v15 = v9 + 3;
                break;
              case 3:
                v15 = v9;
                break;
              case 4:
                v15 = v9 + 2;
                break;
              default:
                goto LABEL_19;
            }
          }
        }
        else
        {
          v15 = a2;
        }
        KiCopyAffinityEx(&v45, v45.Size, v15);
LABEL_19:
        KeAndAffinityEx2(&v45, a2, (__int64)&v45);
        v16 = *v10;
        if ( (_WORD)v16 )
        {
          v26 = *v10;
          if ( v16 < (unsigned int)KeCountSetBitsAffinityEx(&v45.Count) )
          {
            v17 = 0;
            v18 = 0;
            if ( a3 )
            {
              v19 = v40;
              v20 = v26;
              do
              {
                v27 = *v19;
                if ( (unsigned int)KeCheckProcessorAffinityEx(&v45.Count, *v19) )
                {
                  KeAddProcessorAffinityEx(&v46.Count, v27);
                  if ( ++v17 == v20 )
                    break;
                }
                ++v18;
                ++v19;
              }
              while ( v18 < a3 );
              v9 = (struct _KAFFINITY_EX *)v38;
              v13 = v35;
              v11 = v34;
            }
            v12 = v31;
            v10 = (unsigned __int16 *)v32;
          }
          else
          {
            KiCopyAffinityEx(&v46, v46.Size, &v45);
          }
          v14 = v29;
        }
        KiSubtractAffinityEx(v13, a2, &v47, v47.Size);
        KiOrAffinityEx(&v47, &v46, &v47, v47.Size);
        if ( (unsigned int)KeIsEqualAffinityEx(&v13->Count, &v47.Count) )
        {
          v21 = v25;
        }
        else
        {
          KiCopyAffinityEx(v13, v13->Size, &v47);
          v21 = 1;
          v25 = 1;
        }
        ++v14;
        ++v11;
        ++v13;
        v29 = v14;
        v22 = v36-- == 1;
        v34 = v11;
        v35 = v13;
      }
      while ( !v22 );
      v12 += 2LL;
      ++v10;
      v22 = v37-- == 1;
      v31 = v12;
      v32 = (__int64)v10;
    }
    while ( !v22 );
    v9 += 62;
    v22 = v39-- == 1;
    v38 = (__int64)v9;
  }
  while ( !v22 );
  if ( v21 )
  {
    KeInitializeSchedulerSubNodeEnumerationContext(&v43, v41);
    if ( !(unsigned int)KeEnumerateNextSchedulerSubNodeInNode(&v43, &v33) )
    {
      v23 = v42;
      do
        KiInstallSubNodeHeteroSets(v33, KeHeteroSystem, v23 + 32, *(_DWORD *)(v23 + 28));
      while ( !(unsigned int)KeEnumerateNextSchedulerSubNodeInNode(&v43, &v33) );
    }
    return 1;
  }
  return v6;
}
