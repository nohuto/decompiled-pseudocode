/*
 * XREFs of FsRtlpOplockBreakToNone @ 0x1405813CC
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x1403DA5B0 (FsRtlCheckOplockEx2.c)
 *     FsRtlOplockBreakToNoneEx @ 0x140580610 (FsRtlOplockBreakToNoneEx.c)
 *     FsRtlCheckUpperOplock @ 0x14070AEF0 (FsRtlCheckUpperOplock.c)
 * Callees:
 *     FsRtlpClearOwner @ 0x1402601A4 (FsRtlpClearOwner.c)
 *     KeAcquireQueuedSpinLock @ 0x1402D6AF0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140322C90 (KeReleaseQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x14033091C (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpOplockKeysEqual @ 0x1403DA0A0 (FsRtlpOplockKeysEqual.c)
 *     IofCompleteRequest @ 0x1403DBAD0 (IofCompleteRequest.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1403DC8D4 (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpModifyThreadPriorities @ 0x14047FCA8 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x1404946C8 (FsRtlpOplockSendModernAppTermination.c)
 *     FsRtlpWaitOnIrp @ 0x14049F8AC (FsRtlpWaitOnIrp.c)
 *     Feature_5645_7108__private_IsEnabledDeviceUsageNoInline @ 0x1404F48B4 (Feature_5645_7108__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_5466_1379__private_IsEnabledDeviceUsageNoInline @ 0x14057F78C (Feature_5466_1379__private_IsEnabledDeviceUsageNoInline.c)
 *     FsRtlpOplockTryStartBreakAckTimeout @ 0x14070C630 (FsRtlpOplockTryStartBreakAckTimeout.c)
 */

__int64 __fastcall FsRtlpOplockBreakToNone(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        _BYTE *a12,
        char *a13)
{
  unsigned int v17; // edi
  int v18; // eax
  __int64 v19; // r14
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *v23; // rcx
  unsigned int v24; // eax
  __int64 v25; // r8
  __int64 *i; // rsi
  int v27; // eax
  __int128 v29; // [rsp+60h] [rbp-38h] BYREF
  __int64 v30; // [rsp+70h] [rbp-28h]

  v29 = 0LL;
  v30 = 0LL;
  v17 = 0;
  if ( !a1 )
    return v17;
  v18 = *(_DWORD *)(a1 + 144);
  if ( v18 == 1 || (v18 & 0x6000) != 0 )
    return v17;
  if ( (v18 & 0x1F00F90) == 0 )
  {
    v19 = *(_QWORD *)a1;
    if ( (v18 & 0x1000) != 0 )
      return v17;
    if ( (a4 & 0x10010000) != 0 )
      return (unsigned int)-1073739511;
    *(_BYTE *)(v19 + 69) = KeAcquireQueuedSpinLock(7uLL);
    _InterlockedExchange64((volatile __int64 *)(v19 + 104), 0LL);
    KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v19 + 69));
    if ( *(_BYTE *)(v19 + 68) )
    {
      *(_QWORD *)(v19 + 56) = 8LL;
      FsRtlpModifyThreadPriorities(a1, 0LL, 0LL);
      FsRtlpClearOwner(a1, 0LL);
      *(_BYTE *)(a1 + 32) = 0;
      if ( *(_QWORD *)(*(_QWORD *)a1 + 56LL) == a1 )
        *(_QWORD *)(*(_QWORD *)a1 + 56LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)a1 + 48LL) = -1073741536;
      IofCompleteRequest(*(PIRP *)a1, 1);
      *(_QWORD *)a1 = 0LL;
      ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 8), 0x746C6644u);
      *(_QWORD *)(a1 + 8) = 0LL;
      Feature_5645_7108__private_IsEnabledDeviceUsageNoInline();
      *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 1;
      while ( 1 )
      {
        v23 = *(_QWORD **)(a1 + 88);
        if ( v23 == (_QWORD *)(a1 + 88) )
          break;
        FsRtlpRemoveAndCompleteWaitingIrp(v23, v20, v21, v22);
      }
      return v17;
    }
    *(_QWORD *)(*(_QWORD *)a1 + 56LL) = 8LL;
    *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
    IofCompleteRequest(*(PIRP *)a1, 1);
    *(_QWORD *)a1 = 0LL;
    *(_DWORD *)(a1 + 144) |= 0x200u;
    goto LABEL_14;
  }
  if ( (v18 & 0x1F0FFDF) == 0x10 || (v18 & 0x1F0FFDF) == 0x1010 )
  {
    if ( (a4 & 0x10010000) != 0 )
      return (unsigned int)-1073739511;
    for ( i = *(__int64 **)(a1 + 40); i != (__int64 *)(a1 + 40); i = (__int64 *)*i )
    {
      if ( *(_DWORD *)(i[2] + 24) != 590400 )
      {
        i = (__int64 *)i[1];
        FsRtlpRemoveAndCompleteReadOnlyIrp((_QWORD *)*i, 0, 0, a1);
      }
    }
    if ( (*(_DWORD *)(a1 + 144) & 0x1F0FFDF) == 0x1010 )
    {
      Feature_5645_7108__private_IsEnabledDeviceUsageNoInline();
      v27 = *(_DWORD *)(a1 + 144) & 0x20 | 0x1000;
    }
    else
    {
      Feature_5645_7108__private_IsEnabledDeviceUsageNoInline();
      v27 = *(_DWORD *)(a1 + 144) & 0x20 | 1;
    }
    *(_DWORD *)(a1 + 144) = v27;
  }
  else
  {
    if ( (v18 & 0x100) != 0 )
    {
      if ( (a4 & 0x10010000) != 0 )
        return (unsigned int)-1073739511;
      v24 = v18 & 0xFFFFFEFF;
      *(_DWORD *)(a1 + 144) = v24;
      *(_DWORD *)(a1 + 144) = v24 | 0x400;
      goto LABEL_14;
    }
    if ( (v18 & 0x80u) == 0 )
    {
LABEL_14:
      if ( (a4 & 8) == 0 && FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *(_QWORD *)(a1 + 8), 0) )
        return v17;
      if ( (a4 & 1) != 0 )
        return 264;
      if ( (a4 & 0x10010000) == 0 )
      {
        if ( (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline() )
          FsRtlpOplockTryStartBreakAckTimeout(a1 + 160, *(_QWORD *)(a1 + 176));
        LOBYTE(v25) = 1;
        FsRtlpModifyThreadPriorities(a1, 0LL, v25);
        FsRtlpOplockSendModernAppTermination(a1, 0LL);
        *a12 = 0;
        return (unsigned int)FsRtlpWaitOnIrp(a1, a3, a6, a7, a8, &v29, 0, a9, a10, a11, a13);
      }
      return (unsigned int)-1073739511;
    }
    if ( (a4 & 0x10010000) != 0 )
      return (unsigned int)-1073739511;
    Feature_5645_7108__private_IsEnabledDeviceUsageNoInline();
    *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 1;
    *(_QWORD *)(a1 + 8) = 0LL;
    if ( *(_QWORD *)(a1 + 24) )
    {
      FsRtlpClearOwner(a1, 0LL);
      *(_BYTE *)(a1 + 32) = 0;
    }
  }
  return v17;
}
