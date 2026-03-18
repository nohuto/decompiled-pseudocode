/*
 * XREFs of FsRtlpOplockBreakToII @ 0x1404E3964
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x1403DA5B0 (FsRtlCheckOplockEx2.c)
 *     FsRtlCheckUpperOplock @ 0x14070AEF0 (FsRtlCheckUpperOplock.c)
 * Callees:
 *     FsRtlpClearOwner @ 0x1402601A4 (FsRtlpClearOwner.c)
 *     KeAcquireQueuedSpinLock @ 0x1402D6AF0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140322C90 (KeReleaseQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x14033091C (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpOplockKeysEqual @ 0x1403DA0A0 (FsRtlpOplockKeysEqual.c)
 *     IofCompleteRequest @ 0x1403DBAD0 (IofCompleteRequest.c)
 *     FsRtlpModifyThreadPriorities @ 0x14047FCA8 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x1404946C8 (FsRtlpOplockSendModernAppTermination.c)
 *     FsRtlpWaitOnIrp @ 0x14049F8AC (FsRtlpWaitOnIrp.c)
 *     Feature_5645_7108__private_IsEnabledDeviceUsageNoInline @ 0x1404F48B4 (Feature_5645_7108__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_5466_1379__private_IsEnabledDeviceUsageNoInline @ 0x14057F78C (Feature_5466_1379__private_IsEnabledDeviceUsageNoInline.c)
 *     FsRtlpOplockTryStartBreakAckTimeout @ 0x14070C630 (FsRtlpOplockTryStartBreakAckTimeout.c)
 */

__int64 __fastcall FsRtlpOplockBreakToII(
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
  _DWORD *v16; // r14
  unsigned int v17; // ebx
  int *v18; // rsi
  __int64 v19; // r14
  __int64 v20; // r15
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *v25; // rcx
  int v26; // eax
  int v27; // eax
  __int64 v28; // r8
  __int128 v30; // [rsp+60h] [rbp-38h] BYREF
  __int64 v31; // [rsp+70h] [rbp-28h]

  v30 = 0LL;
  v31 = 0LL;
  v16 = (_DWORD *)(a1 + 144);
  if ( (*(_DWORD *)(a1 + 144) & 0x7040) != 0x40 )
    return 0;
  if ( (a4 & 8) != 0 )
  {
    v18 = (int *)(a1 + 144);
    v17 = 0;
  }
  else
  {
    v17 = 0;
    if ( FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *(_QWORD *)(a1 + 8), 0) )
      return v17;
    v18 = (int *)(a1 + 144);
  }
  if ( (a4 & 0x10010000) != 0 )
    return (unsigned int)-1073739511;
  if ( (*v16 & 0x1F00F80) != 0 )
  {
    if ( (*v16 & 0x80u) != 0 )
    {
      Feature_5645_7108__private_IsEnabledDeviceUsageNoInline(a1);
      *(_DWORD *)(a1 + 144) = *v18 & 0x20 | 1;
      *(_QWORD *)(a1 + 8) = 0LL;
      return v17;
    }
  }
  else
  {
    v19 = *(_QWORD *)a1;
    v20 = 7LL;
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
      Feature_5645_7108__private_IsEnabledDeviceUsageNoInline(v21);
      *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 1;
      while ( 1 )
      {
        v25 = *(_QWORD **)(a1 + 88);
        if ( v25 == (_QWORD *)(a1 + 88) )
          break;
        FsRtlpRemoveAndCompleteWaitingIrp(v25, v22, v23, v24);
      }
      return v17;
    }
    v26 = *v18;
    if ( (*v18 & 6) != 0 )
    {
      v27 = v26 | 0x100;
    }
    else
    {
      v27 = v26 | 0x200;
      v20 = 8LL;
    }
    *v18 = v27;
    *(_QWORD *)(*(_QWORD *)a1 + 56LL) = v20;
    *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
    IofCompleteRequest(*(PIRP *)a1, 1);
    *(_QWORD *)a1 = 0LL;
  }
  if ( (a4 & 1) != 0 )
  {
    return 264;
  }
  else
  {
    if ( (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline(a1) )
      FsRtlpOplockTryStartBreakAckTimeout(a1 + 160, *(_QWORD *)(a1 + 176));
    LOBYTE(v28) = 1;
    FsRtlpModifyThreadPriorities(a1, 0LL, v28);
    FsRtlpOplockSendModernAppTermination(a1, 0LL);
    *a12 = 0;
    return (unsigned int)FsRtlpWaitOnIrp(a1, a3, a6, a7, a8, &v30, 0, a9, a10, a11, a13);
  }
}
