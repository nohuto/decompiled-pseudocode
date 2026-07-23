/*
 * XREFs of EtwpEnableMetaProviderGuid @ 0x1404233C0
 * Callers:
 *     EtwpEnableGuid @ 0x140A3EA20 (EtwpEnableGuid.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     KeReleaseMutant @ 0x1402DEA20 (KeReleaseMutant.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     EtwpGetMetaProviderContext @ 0x140423450 (EtwpGetMetaProviderContext.c)
 *     EtwpUpdateSelectedGroupMasks @ 0x14048A210 (EtwpUpdateSelectedGroupMasks.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     EtwpUpdateTagFilter @ 0x1407A9564 (EtwpUpdateTagFilter.c)
 */

__int64 __fastcall EtwpEnableMetaProviderGuid(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6)
{
  __int64 MetaProviderContext; // rdi
  unsigned int i; // ecx
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  unsigned int v16; // eax
  __int64 *v17; // r10
  unsigned __int64 v18; // rcx
  int v19; // r8d
  unsigned __int64 v20; // rcx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int updated; // ebx
  _OWORD v23[2]; // [rsp+30h] [rbp-78h] BYREF
  _OWORD v24[2]; // [rsp+50h] [rbp-58h] BYREF

  memset(v23, 0, sizeof(v23));
  MetaProviderContext = EtwpGetMetaProviderContext(a2);
  if ( !MetaProviderContext )
    return 3221226133LL;
  if ( !a1 || a3 > 1 || (*(_DWORD *)(a1 + 12) & 0x2000000) == 0 )
    return 3221225485LL;
  if ( (__int64 (**)[32])MetaProviderContext == &MemoryMetaProviderContext
    && a5
    && *(_QWORD *)(a1 + 1360) == EtwpHostSiloState )
  {
    for ( i = 0; i < a6; ++i )
    {
      if ( *(_DWORD *)(a5 + 16LL * i + 12) == 0x80000000 && *(_DWORD *)(a5 + 16LL * i + 8) > 0x18u )
      {
        _mm_lfence();
        v12 = *(_QWORD *)(a5 + 16LL * i);
        v13 = *(unsigned int *)(v12 + 16);
        if ( *(unsigned int *)(a5 + 16LL * i + 8) < (unsigned __int64)(v13 + 24) )
          return 2147483653LL;
        if ( *(_WORD *)v12 == 1 )
        {
          v14 = (unsigned int)v13 >> 2;
          if ( (unsigned int)v14 > 4 )
            return 3221225485LL;
          EtwpUpdateTagFilter(v12 + 24, v14, &EtwpPoolTagFilter[10 * *(unsigned __int8 *)(a1 + 818)]);
        }
        break;
      }
    }
  }
  v15 = -1LL;
  v24[0] = 0LL;
  if ( a4 )
    v15 = a4;
  v16 = 0;
  for ( v24[1] = 0LL; v16 < *(_DWORD *)(MetaProviderContext + 8); ++v16 )
  {
    v17 = *(__int64 **)MetaProviderContext;
    v18 = *(unsigned int *)(*(_QWORD *)MetaProviderContext + 16LL * v16 + 8);
    v19 = v18 & 0x1FFFFFFF;
    v20 = v18 >> 29;
    *((_DWORD *)v24 + v20) |= v19;
    if ( a3 == 1 && (v15 & v17[2 * v16]) != 0 )
      *((_DWORD *)v23 + v20) |= v19;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject((PVOID)(a1 + 632), Executive, 0, 0, 0LL);
  updated = EtwpUpdateSelectedGroupMasks(a1, v24, v23);
  KeReleaseMutant((PRKMUTANT)(a1 + 632), 1, 0, 0);
  KeLeaveCriticalRegion();
  return updated;
}
