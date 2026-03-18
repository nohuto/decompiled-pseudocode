/*
 * XREFs of FsRtlpOplockBreakToII @ 0x1404E44FC
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x1403EEA60 (FsRtlCheckOplockEx2.c)
 *     FsRtlCheckUpperOplock @ 0x1406FF010 (FsRtlCheckUpperOplock.c)
 * Callees:
 *     IofCompleteRequest @ 0x140251700 (IofCompleteRequest.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x14028B980 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140301270 (KeAcquireQueuedSpinLock.c)
 *     FsRtlpOplockKeysEqual @ 0x1403EE550 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x140425440 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpWaitOnIrp @ 0x140427034 (FsRtlpWaitOnIrp.c)
 *     FsRtlpClearOwner @ 0x140465220 (FsRtlpClearOwner.c)
 *     FsRtlpModifyThreadPriorities @ 0x14047F2B8 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x1404953E4 (FsRtlpOplockSendModernAppTermination.c)
 *     Feature_5466_1379__private_IsEnabledDeviceUsageNoInline @ 0x14057C46C (Feature_5466_1379__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_5645_7108__private_IsEnabledDeviceUsageNoInline @ 0x14057D1B8 (Feature_5645_7108__private_IsEnabledDeviceUsageNoInline.c)
 *     FsRtlpOplockTryStartBreakAckTimeout @ 0x140700750 (FsRtlpOplockTryStartBreakAckTimeout.c)
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
  _QWORD *v22; // rcx
  int v23; // eax
  int v24; // eax
  __int128 v26; // [rsp+60h] [rbp-38h] BYREF
  __int64 v27; // [rsp+70h] [rbp-28h]

  v26 = 0LL;
  v27 = 0LL;
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
      FsRtlpModifyThreadPriorities(a1, 0LL, 0);
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
        v22 = *(_QWORD **)(a1 + 88);
        if ( v22 == (_QWORD *)(a1 + 88) )
          break;
        FsRtlpRemoveAndCompleteWaitingIrp(v22);
      }
      return v17;
    }
    v23 = *v18;
    if ( (*v18 & 6) != 0 )
    {
      v24 = v23 | 0x100;
    }
    else
    {
      v24 = v23 | 0x200;
      v20 = 8LL;
    }
    *v18 = v24;
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
    if ( (unsigned int)Feature_5466_1379__private_IsEnabledDeviceUsageNoInline(a1, a2, a3) )
      FsRtlpOplockTryStartBreakAckTimeout(a1 + 160, *(_QWORD *)(a1 + 176));
    FsRtlpModifyThreadPriorities(a1, 0LL, 1);
    FsRtlpOplockSendModernAppTermination(a1, 0LL);
    *a12 = 0;
    return (unsigned int)FsRtlpWaitOnIrp(a1, a3, a6, a7, a8, &v26, 0, a9, a10, a11, a13);
  }
}
