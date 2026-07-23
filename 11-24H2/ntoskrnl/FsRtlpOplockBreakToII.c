/*
 * XREFs of FsRtlpOplockBreakToII @ 0x1403CE520
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x1403CE7F0 (FsRtlCheckOplockEx2.c)
 *     FsRtlCheckUpperOplock @ 0x140708AB0 (FsRtlCheckUpperOplock.c)
 * Callees:
 *     FsRtlpClearOwner @ 0x1402907B4 (FsRtlpClearOwner.c)
 *     FsRtlpWaitOnIrp @ 0x1402B72F8 (FsRtlpWaitOnIrp.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1402B9194 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     KeReleaseQueuedSpinLock @ 0x1402CB820 (KeReleaseQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x140357D70 (KeAcquireQueuedSpinLock.c)
 *     IofCompleteRequest @ 0x1403CCDA0 (IofCompleteRequest.c)
 *     FsRtlpOplockKeysEqual @ 0x1403CE290 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpModifyThreadPriorities @ 0x14047A8E8 (FsRtlpModifyThreadPriorities.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x14048F158 (FsRtlpOplockSendModernAppTermination.c)
 *     FsRtlpOplockTryStartBreakAckTimeout @ 0x14070A1C4 (FsRtlpOplockTryStartBreakAckTimeout.c)
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
  int *v16; // r14
  unsigned int v17; // ebx
  int *v18; // rsi
  __int64 v19; // r14
  __int64 v20; // r15
  _QWORD *v21; // rcx
  int v22; // eax
  int v23; // eax
  __int64 v24; // r8
  __int128 v26; // [rsp+60h] [rbp-38h] BYREF
  __int64 v27; // [rsp+70h] [rbp-28h]

  v26 = 0LL;
  v27 = 0LL;
  v16 = (int *)(a1 + 144);
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
      *v16 = *v18 & 0x20 | 1;
      *(_QWORD *)(a1 + 8) = 0LL;
      return v17;
    }
    goto LABEL_18;
  }
  v19 = *(_QWORD *)a1;
  v20 = 7LL;
  *(_BYTE *)(v19 + 69) = KeAcquireQueuedSpinLock(7uLL);
  _InterlockedExchange64((volatile __int64 *)(v19 + 104), 0LL);
  KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v19 + 69));
  if ( !*(_BYTE *)(v19 + 68) )
  {
    v22 = *v18;
    if ( (*v18 & 6) != 0 )
    {
      v23 = v22 | 0x100;
    }
    else
    {
      v23 = v22 | 0x200;
      v20 = 8LL;
    }
    *v18 = v23;
    *(_QWORD *)(*(_QWORD *)a1 + 56LL) = v20;
    *(_DWORD *)(*(_QWORD *)a1 + 48LL) = 0;
    IofCompleteRequest(*(PIRP *)a1, 1);
    *(_QWORD *)a1 = 0LL;
LABEL_18:
    if ( (a4 & 1) != 0 )
    {
      return 264;
    }
    else
    {
      FsRtlpOplockTryStartBreakAckTimeout(a1 + 160, *(_QWORD *)(a1 + 176));
      LOBYTE(v24) = 1;
      FsRtlpModifyThreadPriorities(a1, 0LL, v24);
      FsRtlpOplockSendModernAppTermination(a1, 0LL);
      *a12 = 0;
      return (unsigned int)FsRtlpWaitOnIrp(a1, a3, a6, a7, a8, &v26, 0, a9, a10, a11, a13);
    }
  }
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
  *(_DWORD *)(a1 + 144) = *(_DWORD *)(a1 + 144) & 0x20 | 1;
  while ( 1 )
  {
    v21 = *(_QWORD **)(a1 + 88);
    if ( v21 == (_QWORD *)(a1 + 88) )
      break;
    FsRtlpRemoveAndCompleteWaitingIrp(v21);
  }
  return v17;
}
