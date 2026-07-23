/*
 * XREFs of Amd64AddProfileSource @ 0x140567830
 * Callers:
 *     <none>
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14027C378 (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x1402EA1C8 (HalpMmAllocCtxFree.c)
 *     KeOrAffinityEx2 @ 0x14032DDD0 (KeOrAffinityEx2.c)
 *     HalpReleaseHighLevelLock @ 0x140372268 (HalpReleaseHighLevelLock.c)
 *     HalpAcquireHighLevelLock @ 0x1403729A0 (HalpAcquireHighLevelLock.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x14039FF30 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     wcsnlen @ 0x1404FD950 (wcsnlen.c)
 *     wcsncpy_s @ 0x140502240 (wcsncpy_s.c)
 *     HalpInsertProfileSource @ 0x1405435F8 (HalpInsertProfileSource.c)
 *     Amd64GetEventSelectDef @ 0x140568770 (Amd64GetEventSelectDef.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall Amd64AddProfileSource(__int64 a1, _DWORD *a2)
{
  unsigned __int8 v3; // dl
  unsigned int v5; // r14d
  const wchar_t *v7; // r15
  unsigned int v8; // ebx
  __int64 v9; // rcx
  wchar_t *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rcx
  void *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rbx
  int v16; // ecx
  unsigned int v17; // eax
  unsigned __int8 v18; // bp
  __int64 v19; // rdx
  __int64 *v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 *v23; // [rsp+50h] [rbp+8h] BYREF

  v23 = 0LL;
  v3 = *(_BYTE *)(a1 + 7);
  v5 = -1073741823;
  if ( v3 == 1 && (Amd64PerfFeatures & 2) == 0 || v3 == 2 && (Amd64PerfFeatures & 4) == 0 || v3 >= 3u )
    return 3221225659LL;
  v7 = (const wchar_t *)(a1 + 280);
  v8 = wcsnlen((const wchar_t *)(a1 + 280), 0xFEuLL) + 1;
  v10 = (wchar_t *)HalpMmAllocCtxAlloc(v9, 2 * v8);
  v11 = (__int64)v10;
  if ( !v10 )
    return 3221225495LL;
  wcsncpy_s(v10, v8, v7, v8);
  v13 = (void *)HalpMmAllocCtxAlloc(v12, 320LL);
  v15 = (__int64)v13;
  if ( !v13 )
  {
    HalpMmAllocCtxFree(v14, v11);
    return 3221225495LL;
  }
  memset_0(v13, 0, 0x140uLL);
  v16 = 0x7FFFFFFF;
  *(_BYTE *)(v15 + 28) = 1;
  v17 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(v15 + 24) = v17;
  if ( v17 > 0x7FFFFFFF || (v16 = 4096, v17 < 0x1000) )
    *(_DWORD *)(v15 + 24) = v16;
  *(_BYTE *)(v15 + 29) = 0;
  *(_QWORD *)(v15 + 304) = Amd64GetEventSelectDef(a1);
  *(_DWORD *)(v15 + 316) = 1;
  *(_DWORD *)(v15 + 312) = *(unsigned __int8 *)(a1 + 7);
  *(_DWORD *)(v15 + 36) = 0;
  *(_DWORD *)(v15 + 32) = 2097153;
  memset_0((void *)(v15 + 40), 0, 0x100uLL);
  KiCopyAffinityEx((struct _KAFFINITY_EX *)(v15 + 32), *(_WORD *)(v15 + 34), (struct _KAFFINITY_EX *)(a1 + 16));
  *(_QWORD *)(v15 + 296) = v11;
  v18 = HalpAcquireHighLevelLock(&HalpProfileSourceDescriptorListLock);
  if ( HalpInsertProfileSource(v15, v19, 34, &v23) )
  {
    ++HalpProfileSourceDescriptorCount;
    if ( a2 )
      *a2 = *(_DWORD *)v15;
    HalpReleaseHighLevelLock((volatile signed __int64 *)&HalpProfileSourceDescriptorListLock, v18);
    return 0LL;
  }
  else
  {
    v20 = v23;
    if ( v23 && v23[38] == *(_QWORD *)(v15 + 304) )
    {
      KeOrAffinityEx2(
        (struct _KAFFINITY_EX *)(v23 + 4),
        (struct _KAFFINITY_EX *)(v15 + 32),
        (struct _KAFFINITY_EX *)(v23 + 4));
      if ( a2 )
        *a2 = *(_DWORD *)v20;
      v5 = 0;
    }
    HalpReleaseHighLevelLock((volatile signed __int64 *)&HalpProfileSourceDescriptorListLock, v18);
    HalpMmAllocCtxFree(v21, *(_QWORD *)(v15 + 296));
    HalpMmAllocCtxFree(v22, v15);
    return v5;
  }
}
