/*
 * XREFs of MmCommitSessionMappedView @ 0x140974B70
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     MiLocatePagefileSubsection @ 0x1403D2A80 (MiLocatePagefileSubsection.c)
 *     MiGetPteAddress @ 0x140429FD0 (MiGetPteAddress.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     MiChargeSegmentCommit @ 0x140974EF8 (MiChargeSegmentCommit.c)
 */

__int64 __fastcall MmCommitSessionMappedView(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 v5; // rdi
  __int64 PteAddress; // r14
  __int64 v7; // rax
  __int64 v8; // r14
  char *v9; // rax
  signed __int8 v10; // cf
  char *v11; // rsi
  _QWORD *v12; // rdx
  unsigned __int64 v13; // r8
  __int64 v14; // rax
  unsigned int *v15; // rcx
  unsigned int *v16; // rax
  unsigned int *v17; // r9
  bool v18; // zf
  unsigned __int64 v20; // r10
  unsigned __int64 v21; // rax
  unsigned int *v22; // rcx
  __int64 v23; // r8
  unsigned __int64 v24; // rdx
  int v25; // edi
  unsigned __int64 v26; // [rsp+60h] [rbp+8h] BYREF

  v3 = a2 + a1;
  if ( v3 <= a1 )
    return 3221225712LL;
  CurrentThread = KeGetCurrentThread();
  v5 = a1 & 0xFFFFFFFFFFFFF000uLL;
  PteAddress = MiGetPteAddress((v3 - 1) | 0xFFF);
  v7 = MiGetPteAddress(v5);
  --CurrentThread->SpecialApcDisable;
  v8 = ((PteAddress - v7) >> 3) + 1;
  v9 = (char *)KeAbPreAcquire((__int64)&qword_140E36080, 0LL);
  v10 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E36080, 0LL);
  v11 = v9;
  if ( v10 )
    ExfAcquirePushLockExclusiveEx(&qword_140E36080, v9, (__int64)&qword_140E36080);
  if ( v11 )
    v11[10] = 1;
  v12 = P;
  while ( v12 )
  {
    v13 = v12[11] & 0xFFFFFFFFFFFFF000uLL;
    if ( v5 >= v13 + v12[4] )
    {
      v12 = (_QWORD *)v12[1];
    }
    else
    {
      if ( v5 >= v13 )
        break;
      v12 = (_QWORD *)*v12;
    }
  }
  if ( !v12 )
    KeBugCheckEx(0xD7u, v5, 2uLL, 0LL, 0LL);
  v14 = v12[6];
  if ( *(_QWORD *)(*(_QWORD *)v14 + 64LL) )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E36080, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E36080);
    KeAbPostRelease((ULONG_PTR)&qword_140E36080);
    v18 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v18 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    return 3221225505LL;
  }
  v15 = (unsigned int *)(*(_QWORD *)v14 + 128LL);
  v26 = v12[3] + ((v5 - (v12[11] & 0xFFFFFFFFFFFFF000uLL)) >> 12);
  v16 = MiLocatePagefileSubsection(v15, &v26);
  v17 = v16;
  if ( !v16 )
  {
LABEL_17:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E36080, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E36080);
    KeAbPostRelease((ULONG_PTR)&qword_140E36080);
    v18 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v18 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    return 3221225712LL;
  }
  v20 = *((_QWORD *)v16 + 1) + 8 * v26;
  v21 = v8 + v26;
  v22 = v17;
  v23 = v8 + v26;
  while ( 1 )
  {
    v24 = v22[11];
    if ( v21 <= v24 )
      break;
    v22 = (unsigned int *)*((_QWORD *)v22 + 2);
    v21 = v23 - v24;
    v23 -= v24;
    if ( !v22 )
      goto LABEL_17;
  }
  v25 = MiChargeSegmentCommit(v17, v20);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E36080, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E36080);
  KeAbPostRelease((ULONG_PTR)&qword_140E36080);
  v18 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v18 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v25 == 0 ? 0xC000012D : 0;
}
