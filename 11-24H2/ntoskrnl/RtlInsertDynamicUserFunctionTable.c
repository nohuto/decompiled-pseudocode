/*
 * XREFs of RtlInsertDynamicUserFunctionTable @ 0x14044B1D0
 * Callers:
 *     NtSetInformationProcess @ 0x140947500 (NtSetInformationProcess.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlInsertDynamicUserFunctionTable(__int64 a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rax
  unsigned int v5; // esi
  _QWORD *v6; // rax
  _QWORD *v7; // r14
  __int64 Blink; // rdi
  unsigned int v9; // r14d
  unsigned int v10; // ecx
  __int64 v11; // r15
  struct _LIST_ENTRY *v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  bool v15; // zf
  __int64 Pool2; // rax
  _OWORD *v17; // rcx
  unsigned int v18; // r9d
  unsigned __int64 *v19; // rcx
  __int64 v20; // r15
  int v21; // [rsp+20h] [rbp-58h]
  unsigned __int64 v22; // [rsp+28h] [rbp-50h]
  unsigned __int64 v23; // [rsp+30h] [rbp-48h]
  struct _LIST_ENTRY *P; // [rsp+88h] [rbp+10h]
  _KPROCESS *Process; // [rsp+90h] [rbp+18h]
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp+20h]

  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v22 = *(_QWORD *)(a1 + 48);
  v2 = *(_QWORD *)(a1 + 40);
  v23 = v2;
  if ( v2 < v22 )
    return 3221225621LL;
  v3 = v2 - v22;
  if ( v3 > 0xFFFFFFFF )
    return 3221225621LL;
  v21 = v3;
  P = 0LL;
  v5 = 0;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->Process;
  --CurrentThread->SpecialApcDisable;
  v6 = KeAbPreAcquire((__int64)&Process[3].SwapListEntry, 0LL);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&Process[3].SwapListEntry, 0LL) )
    ExfAcquirePushLockExclusiveEx(
      (unsigned __int64 *)&Process[3].SwapListEntry,
      (__int64)v6,
      (__int64)&Process[3].SwapListEntry);
  if ( v7 )
    *((_BYTE *)v7 + 10) = 1;
  Blink = (__int64)Process[3].ReadyListHead.Blink;
  if ( Blink )
  {
    v9 = *(_DWORD *)Blink;
    v10 = *(_DWORD *)(Blink + 4);
  }
  else
  {
    v9 = 0;
    v10 = 0;
  }
  if ( v9 + 1 <= v10 )
  {
LABEL_30:
    v18 = 1;
    if ( v9 > 1 )
    {
      v19 = (unsigned __int64 *)(Blink + 48);
      do
      {
        if ( v22 < *v19 )
          break;
        ++v18;
        v19 += 3;
      }
      while ( v18 < v9 );
    }
    if ( *(_QWORD *)(Blink + 24LL * (v18 - 1) + 24) + (unsigned __int64)*(unsigned int *)(Blink + 24LL * (v18 - 1) + 32) > v22
      || v18 < v9 && *(_QWORD *)(Blink + 24LL * v18 + 24) < v23 )
    {
      v5 = -1073741800;
    }
    else
    {
      v20 = 24LL * v18;
      if ( v18 != v9 )
        memmove(
          (void *)(Blink + 8 * (v18 + 1 + 2LL + 2LL * (v18 + 1))),
          (const void *)(v20 + Blink + 16),
          24LL * (v9 - v18));
      *(_QWORD *)(v20 + Blink + 16) = a1;
      *(_QWORD *)(v20 + Blink + 24) = v22;
      *(_DWORD *)(v20 + Blink + 32) = v21;
      *(_DWORD *)(v20 + Blink + 36) = 0;
      *(_DWORD *)Blink = v9 + 1;
    }
    goto LABEL_16;
  }
  v11 = v10 + 10;
  if ( (unsigned int)v11 >= v10 && (unsigned __int64)(24 * v11 + 16) < 0xFFFFFFFF )
  {
    P = Process[3].ReadyListHead.Blink;
    Pool2 = ExAllocatePool2(0x101uLL);
    Blink = Pool2;
    if ( !Pool2 )
    {
      v5 = -1073741670;
      v12 = 0LL;
      goto LABEL_17;
    }
    v17 = (_OWORD *)(Pool2 + 16);
    if ( v9 )
    {
      memmove(v17, &P[1], 24LL * v9);
    }
    else
    {
      *v17 = 0LL;
      *(_QWORD *)(Pool2 + 32) = 0LL;
      v9 = 1;
    }
    *(_DWORD *)Blink = v9;
    *(_DWORD *)(Blink + 4) = v11;
    *(_BYTE *)(Blink + 12) = 0;
    Process[3].ReadyListHead.Blink = (struct _LIST_ENTRY *)Blink;
    goto LABEL_30;
  }
  v5 = -1073741675;
LABEL_16:
  v12 = P;
LABEL_17:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Process[3].SwapListEntry, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&Process[3].SwapListEntry);
  KeAbPostRelease((ULONG_PTR)&Process[3].SwapListEntry);
  v15 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v15 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v14, v13);
  if ( v12 )
    ExFreePoolWithTag(v12, 0x46447452u);
  return v5;
}
