/*
 * XREFs of MmLinkJobProcess @ 0x1408E4628
 * Callers:
 *     PspEstablishJobHierarchy @ 0x1408E62CC (PspEstablishJobHierarchy.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     MiInsertSharedCommitNode @ 0x1408E2BF0 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x1408E5960 (MiRemoveSharedCommitNode.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

$81B80DCEA5A02D890AB7B2872B48AC01 *__fastcall MmLinkJobProcess(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 *v2; // r14
  __int64 v4; // r12
  int inserted; // r15d
  struct _KTHREAD *CurrentThread; // r13
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  _QWORD *v9; // rbx
  _QWORD *i; // rsi
  __int64 v11; // r12
  __int64 Pool; // rax
  __int64 ***v13; // rax
  _QWORD *v14; // rcx
  _QWORD *j; // rax
  _QWORD *v16; // rdx
  _QWORD *v17; // rax
  __int64 *v18; // rax
  __int64 *v19; // rcx
  __int64 *v20; // rsi
  __int64 v21; // r12
  bool v22; // zf
  $81B80DCEA5A02D890AB7B2872B48AC01 *result; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 *v26; // rcx
  __int64 *v27; // rax
  unsigned __int64 k; // rsi
  __int64 *v29; // [rsp+20h] [rbp-10h] BYREF
  __int64 **v30; // [rsp+28h] [rbp-8h]

  v2 = (unsigned __int64 *)(a2 + 1712);
  v4 = a1;
  v30 = &v29;
  inserted = 0;
  v29 = (__int64 *)&v29;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v7 = KeAbPreAcquire(a2 + 1712, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(v2, (__int64)v7, (__int64)v2);
  if ( v8 )
    *((_BYTE *)v8 + 10) = 1;
  if ( (*(_DWORD *)(a2 + 1532) & 0x10) == 0 )
  {
    v9 = (_QWORD *)(a2 + 1720);
    for ( i = *(_QWORD **)(a2 + 1720); i != v9; i = (_QWORD *)*i )
    {
      v11 = i[2];
      Pool = MiAllocatePool(0x100uLL, 0x40uLL, 1850960205);
      if ( !Pool )
      {
        inserted = -1073741670;
        break;
      }
      *(_QWORD *)(Pool + 56) = v11;
      *(_QWORD *)(Pool + 32) = *(i - 1);
      v13 = (__int64 ***)(Pool + 40);
      v14 = v30;
      if ( *v30 != (__int64 *)&v29 )
        goto LABEL_10;
      v13[1] = v30;
      *v13 = &v29;
      *v14 = v13;
      v30 = (__int64 **)v13;
    }
    for ( j = (_QWORD *)*v9; (_QWORD *)*v9 != v9; j = (_QWORD *)*v9 )
      MiRemoveSharedCommitNode(j[2], a2, 1LL);
    if ( inserted < 0 )
    {
      while ( 1 )
      {
        v26 = v29;
        if ( v29 == (__int64 *)&v29 )
          break;
        if ( (__int64 **)v29[1] != &v29 )
          goto LABEL_10;
        v27 = (__int64 *)*v29;
        if ( *(__int64 **)(*v29 + 8) != v29 )
          goto LABEL_10;
        v29 = (__int64 *)*v29;
        v27[1] = (__int64)&v29;
        ExFreePoolWithTag(v26 - 5, 0);
      }
      v4 = a1;
    }
    else
    {
      v4 = a1;
      if ( (*(_DWORD *)(a2 + 1532) & 8) == 0 )
        _InterlockedOr((volatile signed __int32 *)(a2 + 1532), 8u);
    }
  }
  v16 = *(_QWORD **)(v4 + 48);
  v17 = (_QWORD *)(a2 + 856);
  if ( *v16 != v4 + 40 )
LABEL_10:
    __fastfail(3u);
  *v17 = v4 + 40;
  *(_QWORD *)(a2 + 864) = v16;
  *v16 = v17;
  *(_QWORD *)(v4 + 48) = v17;
  *(_QWORD *)(a2 + 672) = v4;
  while ( 1 )
  {
    v18 = v29;
    if ( v29 == (__int64 *)&v29 )
      break;
    if ( (__int64 **)v29[1] != &v29 )
      goto LABEL_10;
    v19 = (__int64 *)*v29;
    if ( *(__int64 **)(*v29 + 8) != v29 )
      goto LABEL_10;
    v29 = (__int64 *)*v29;
    v19[1] = (__int64)&v29;
    v20 = v18 - 5;
    if ( inserted >= 0 )
    {
      v21 = v20[7];
      if ( v20[4] )
      {
        do
        {
          inserted = MiInsertSharedCommitNode(v21, a2, 1);
          if ( inserted < 0 )
            break;
          v22 = v20[4]-- == 1;
        }
        while ( !v22 );
        v2 = (unsigned __int64 *)(a2 + 1712);
      }
    }
    ExFreePoolWithTag(v20, 0);
  }
  if ( inserted < 0 )
  {
    for ( k = a2 + 1720; *(_QWORD *)k != k; MiRemoveSharedCommitNode(*(_QWORD *)(*(_QWORD *)k + 16LL), a2, 1LL) )
      ;
    _InterlockedAnd((volatile signed __int32 *)(a2 + 1532), 0xFFFFFFF7);
    _InterlockedOr((volatile signed __int32 *)(a2 + 1532), 0x10u);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v2);
  result = ($81B80DCEA5A02D890AB7B2872B48AC01 *)KeAbPostRelease((ULONG_PTR)v2);
  v22 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v22 )
  {
    result = &CurrentThread->152;
    if ( ($81B80DCEA5A02D890AB7B2872B48AC01 *)result->ApcState.ApcListHead[0].Flink != result )
      return ($81B80DCEA5A02D890AB7B2872B48AC01 *)KiCheckForKernelApcDelivery(v25, v24);
  }
  return result;
}
