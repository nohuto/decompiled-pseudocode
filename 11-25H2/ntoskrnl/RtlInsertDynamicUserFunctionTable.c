/*
 * XREFs of RtlInsertDynamicUserFunctionTable @ 0x1403D788C
 * Callers:
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlInsertDynamicUserFunctionTable(__int64 a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rax
  unsigned int v5; // esi
  __int64 *v6; // rax
  __int64 *v7; // r14
  __int64 Blink; // rdi
  unsigned int v9; // r14d
  unsigned int v10; // ecx
  __int64 v11; // r15
  struct _LIST_ENTRY *v12; // r14
  bool v13; // zf
  __int64 Pool2; // rax
  _OWORD *v15; // rcx
  unsigned int v16; // r9d
  unsigned __int64 *v17; // rcx
  __int64 v18; // r15
  int v19; // [rsp+20h] [rbp-58h]
  unsigned __int64 v20; // [rsp+28h] [rbp-50h]
  unsigned __int64 v21; // [rsp+30h] [rbp-48h]
  struct _LIST_ENTRY *P; // [rsp+88h] [rbp+10h]
  _KPROCESS *Process; // [rsp+90h] [rbp+18h]
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp+20h]

  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v20 = *(_QWORD *)(a1 + 48);
  v2 = *(_QWORD *)(a1 + 40);
  v21 = v2;
  if ( v2 < v20 )
    return 3221225621LL;
  v3 = v2 - v20;
  if ( v3 > 0xFFFFFFFF )
    return 3221225621LL;
  v19 = v3;
  P = 0LL;
  v5 = 0;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->Process;
  --CurrentThread->SpecialApcDisable;
  v6 = KeAbPreAcquire((__int64)&Process[3].SwapListEntry, 0LL);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&Process[3].SwapListEntry, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Process[3].SwapListEntry, v6, (__int64)&Process[3].SwapListEntry);
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
    v16 = 1;
    if ( v9 > 1 )
    {
      v17 = (unsigned __int64 *)(Blink + 48);
      do
      {
        if ( v20 < *v17 )
          break;
        ++v16;
        v17 += 3;
      }
      while ( v16 < v9 );
    }
    if ( *(_QWORD *)(Blink + 24LL * (v16 - 1) + 24) + (unsigned __int64)*(unsigned int *)(Blink + 24LL * (v16 - 1) + 32) > v20
      || v16 < v9 && *(_QWORD *)(Blink + 24LL * v16 + 24) < v21 )
    {
      v5 = -1073741800;
    }
    else
    {
      v18 = 24LL * v16;
      if ( v16 != v9 )
        memmove(
          (void *)(Blink + 8 * (v16 + 1 + 2LL + 2LL * (v16 + 1))),
          (const void *)(v18 + Blink + 16),
          24LL * (v9 - v16));
      *(_QWORD *)(v18 + Blink + 16) = a1;
      *(_QWORD *)(v18 + Blink + 24) = v20;
      *(_DWORD *)(v18 + Blink + 32) = v19;
      *(_DWORD *)(v18 + Blink + 36) = 0;
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
    v15 = (_OWORD *)(Pool2 + 16);
    if ( v9 )
    {
      memmove(v15, &P[1], 24LL * v9);
    }
    else
    {
      *v15 = 0LL;
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
  v13 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v13 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( v12 )
    ExFreePoolWithTag(v12, 0x46447452u);
  return v5;
}
