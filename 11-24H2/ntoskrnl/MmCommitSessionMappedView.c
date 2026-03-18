/*
 * XREFs of MmCommitSessionMappedView @ 0x1408F78F0
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     MiLocatePagefileSubsection @ 0x1403E4EE0 (MiLocatePagefileSubsection.c)
 *     MiGetPteAddress @ 0x140437550 (MiGetPteAddress.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     MiChargeSegmentCommit @ 0x1408F7C78 (MiChargeSegmentCommit.c)
 */

__int64 __fastcall MmCommitSessionMappedView(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 v5; // rdi
  __int64 PteAddress; // r14
  __int64 v7; // rax
  __int64 v8; // r14
  _QWORD *v9; // rax
  signed __int8 v10; // cf
  _QWORD *v11; // rsi
  _QWORD *v12; // rdx
  unsigned __int64 v13; // r8
  __int64 v14; // rax
  unsigned int *v15; // rcx
  unsigned int *v16; // rax
  unsigned int *v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  bool v20; // zf
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // rax
  unsigned int *v24; // rcx
  __int64 v25; // r8
  unsigned __int64 v26; // rdx
  int v27; // edi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  unsigned __int64 v32; // [rsp+60h] [rbp+8h] BYREF

  v3 = a2 + a1;
  if ( v3 <= a1 )
    return 3221225712LL;
  CurrentThread = KeGetCurrentThread();
  v5 = a1 & 0xFFFFFFFFFFFFF000uLL;
  PteAddress = MiGetPteAddress((v3 - 1) | 0xFFF);
  v7 = MiGetPteAddress(v5);
  --CurrentThread->SpecialApcDisable;
  v8 = ((PteAddress - v7) >> 3) + 1;
  v9 = KeAbPreAcquire((__int64)&qword_140E35F40, 0LL);
  v10 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E35F40, 0LL);
  v11 = v9;
  if ( v10 )
    ExfAcquirePushLockExclusiveEx(&qword_140E35F40, (__int64)v9, (__int64)&qword_140E35F40);
  if ( v11 )
    *((_BYTE *)v11 + 10) = 1;
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
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E35F40, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E35F40);
    KeAbPostRelease((ULONG_PTR)&qword_140E35F40);
    v20 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v20 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v31, v30);
    return 3221225505LL;
  }
  v15 = (unsigned int *)(*(_QWORD *)v14 + 128LL);
  v32 = v12[3] + ((v5 - (v12[11] & 0xFFFFFFFFFFFFF000uLL)) >> 12);
  v16 = MiLocatePagefileSubsection(v15, &v32);
  v17 = v16;
  if ( !v16 )
  {
LABEL_17:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E35F40, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E35F40);
    KeAbPostRelease((ULONG_PTR)&qword_140E35F40);
    v20 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v20 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v19, v18);
    return 3221225712LL;
  }
  v22 = *((_QWORD *)v16 + 1) + 8 * v32;
  v23 = v8 + v32;
  v24 = v17;
  v25 = v8 + v32;
  while ( 1 )
  {
    v26 = v24[11];
    if ( v23 <= v26 )
      break;
    v24 = (unsigned int *)*((_QWORD *)v24 + 2);
    v23 = v25 - v26;
    v25 -= v26;
    if ( !v24 )
      goto LABEL_17;
  }
  v27 = MiChargeSegmentCommit(v17, v22);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E35F40, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E35F40);
  KeAbPostRelease((ULONG_PTR)&qword_140E35F40);
  v20 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v20 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v29, v28);
  return v27 == 0 ? 0xC000012D : 0;
}
