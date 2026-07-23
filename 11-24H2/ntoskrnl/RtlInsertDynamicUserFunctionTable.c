/*
 * XREFs of RtlInsertDynamicUserFunctionTable @ 0x140442310
 * Callers:
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlInsertDynamicUserFunctionTable(__int64 a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rax
  unsigned int v5; // esi
  char *v6; // rax
  char *v7; // r14
  __int64 Blink; // rdi
  unsigned int v9; // r14d
  unsigned int v10; // ecx
  __int64 v11; // r15
  struct _LIST_ENTRY *v12; // r14
  bool v13; // zf
  unsigned __int64 v14; // rcx
  __int64 Pool2; // rax
  _OWORD *v16; // rcx
  unsigned int v17; // r9d
  unsigned __int64 *v18; // rcx
  __int64 v19; // r15
  int v20; // [rsp+20h] [rbp-58h]
  unsigned __int64 v21; // [rsp+28h] [rbp-50h]
  unsigned __int64 v22; // [rsp+30h] [rbp-48h]
  struct _LIST_ENTRY *P; // [rsp+88h] [rbp+10h]
  _KPROCESS *Process; // [rsp+90h] [rbp+18h]
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp+20h]

  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v21 = *(_QWORD *)(a1 + 48);
  v2 = *(_QWORD *)(a1 + 40);
  v22 = v2;
  if ( v2 < v21 )
    return 3221225621LL;
  v3 = v2 - v21;
  if ( v3 > 0xFFFFFFFF )
    return 3221225621LL;
  v20 = v3;
  P = 0LL;
  v5 = 0;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->Process;
  --CurrentThread->SpecialApcDisable;
  v6 = (char *)KeAbPreAcquire((__int64)&Process[3].SwapListEntry, 0LL);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&Process[3].SwapListEntry, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&Process[3].SwapListEntry, v6, (__int64)&Process[3].SwapListEntry);
  if ( v7 )
    v7[10] = 1;
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
    v17 = 1;
    if ( v9 > 1 )
    {
      v18 = (unsigned __int64 *)(Blink + 48);
      do
      {
        if ( v21 < *v18 )
          break;
        ++v17;
        v18 += 3;
      }
      while ( v17 < v9 );
    }
    if ( *(_QWORD *)(Blink + 24LL * (v17 - 1) + 24) + (unsigned __int64)*(unsigned int *)(Blink + 24LL * (v17 - 1) + 32) > v21
      || v17 < v9 && *(_QWORD *)(Blink + 24LL * v17 + 24) < v22 )
    {
      v5 = -1073741800;
    }
    else
    {
      v19 = 24LL * v17;
      if ( v17 != v9 )
        memmove(
          (void *)(Blink + 8 * (v17 + 1 + 2LL + 2LL * (v17 + 1))),
          (const void *)(v19 + Blink + 16),
          24LL * (v9 - v17));
      *(_QWORD *)(v19 + Blink + 16) = a1;
      *(_QWORD *)(v19 + Blink + 24) = v21;
      *(_DWORD *)(v19 + Blink + 32) = v20;
      *(_DWORD *)(v19 + Blink + 36) = 0;
      *(_DWORD *)Blink = v9 + 1;
    }
    goto LABEL_16;
  }
  v11 = v10 + 10;
  if ( (unsigned int)v11 >= v10 )
  {
    v14 = 24 * v11 + 16;
    if ( v14 < 0xFFFFFFFF )
    {
      P = Process[3].ReadyListHead.Blink;
      Pool2 = ExAllocatePool2(0x101uLL, (unsigned int)v14, 0x46447452u);
      Blink = Pool2;
      if ( !Pool2 )
      {
        v5 = -1073741670;
        v12 = 0LL;
        goto LABEL_17;
      }
      v16 = (_OWORD *)(Pool2 + 16);
      if ( v9 )
      {
        memmove(v16, &P[1], 24LL * v9);
      }
      else
      {
        *v16 = 0LL;
        *(_QWORD *)(Pool2 + 32) = 0LL;
        v9 = 1;
      }
      *(_DWORD *)Blink = v9;
      *(_DWORD *)(Blink + 4) = v11;
      *(_BYTE *)(Blink + 12) = 0;
      Process[3].ReadyListHead.Blink = (struct _LIST_ENTRY *)Blink;
      goto LABEL_30;
    }
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
