/*
 * XREFs of MiCreateHardwareEnclave @ 0x1407F7910
 * Callers:
 *     MiCreateEnclave @ 0x1407F77F4 (MiCreateEnclave.c)
 * Callees:
 *     MiPteInShadowRange @ 0x140202630 (MiPteInShadowRange.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiSanitizeShadowPxe @ 0x140203820 (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1402038A0 (MiWritePteShadow.c)
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     MiUnlinkPageChainHead @ 0x140349AD0 (MiUnlinkPageChainHead.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     MiReserveEnclavePages @ 0x1403F6D34 (MiReserveEnclavePages.c)
 *     MiAllocateEnclavePages @ 0x1403F85DC (MiAllocateEnclavePages.c)
 *     MiGetVmPartition @ 0x140407A50 (MiGetVmPartition.c)
 *     MiGetPteAddress @ 0x140429FD0 (MiGetPteAddress.c)
 *     MiPageChainCount @ 0x14045AA00 (MiPageChainCount.c)
 *     MiInitializeEnclavePfn @ 0x14046DD14 (MiInitializeEnclavePfn.c)
 *     KeGetIdealNodeNumberThread @ 0x140481B1C (KeGetIdealNodeNumberThread.c)
 *     MiPrepareEnclaveMetadataPage @ 0x140681AE8 (MiPrepareEnclaveMetadataPage.c)
 *     KeCreateEnclave @ 0x140739EC4 (KeCreateEnclave.c)
 *     MiDeleteEnclavePages @ 0x140B6FC18 (MiDeleteEnclavePages.c)
 */

__int64 __fastcall MiCreateHardwareEnclave(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, _DWORD *a5)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v7; // r13
  __int64 v8; // r15
  _KPROCESS *Process; // r14
  __int64 v11; // r13
  __int64 v12; // r15
  __int64 VmPartition; // r12
  char *v15; // rax
  char *v16; // rsi
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  bool v19; // zf
  int v20; // ebx
  unsigned __int16 IdealNodeNumberThread; // ax
  __int64 *v22; // rax
  unsigned __int64 v23; // rsi
  __int64 v24; // rbx
  ULONG_PTR v25; // rbx
  int v26; // ebp
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // eax
  int v31; // ecx
  __int16 v32; // ax
  int v33; // [rsp+20h] [rbp-78h]
  __int128 v34; // [rsp+40h] [rbp-58h] BYREF
  __int64 v35; // [rsp+50h] [rbp-48h]
  int v36; // [rsp+A0h] [rbp+8h] BYREF
  int v37; // [rsp+A4h] [rbp+Ch]
  unsigned __int64 ValidPte; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v39; // [rsp+B8h] [rbp+20h]

  v39 = a4;
  v37 = HIDWORD(a1);
  CurrentThread = KeGetCurrentThread();
  v36 = 0;
  v7 = *(unsigned __int8 *)(a2 + 32);
  v8 = *(unsigned __int8 *)(a2 + 33);
  Process = CurrentThread->ApcState.Process;
  v35 = 0LL;
  v11 = (*(unsigned int *)(a2 + 24) | (unsigned __int64)(v7 << 32)) << 12;
  v12 = ((*(unsigned int *)(a2 + 28) | (unsigned __int64)(v8 << 32)) << 12) | 0xFFF;
  v34 = 0LL;
  VmPartition = MiGetVmPartition((__int64)&Process[2].ReadyListHead.Blink);
  if ( !ExAcquireRundownProtection_0(&stru_140E37638) )
    return 3221225738LL;
  *(_QWORD *)(a2 + 120) = Process;
  --CurrentThread->SpecialApcDisable;
  v15 = (char *)KeAbPreAcquire((__int64)&qword_140E37630, 0LL);
  v16 = v15;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140E37630, 0LL) )
    ExfAcquirePushLockExclusiveEx(&qword_140E37630, v15, (__int64)&qword_140E37630);
  if ( v16 )
    v16[10] = 1;
  v17 = (_QWORD *)qword_140E37628;
  v18 = (_QWORD *)(a2 + 128);
  if ( *(__int64 **)qword_140E37628 != &qword_140E37620 )
    __fastfail(3u);
  *v18 = &qword_140E37620;
  *(_QWORD *)(a2 + 136) = v17;
  *v17 = v18;
  qword_140E37628 = a2 + 128;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E37630, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E37630);
  KeAbPostRelease((ULONG_PTR)&qword_140E37630);
  v19 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v19 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  v20 = MiPrepareEnclaveMetadataPage();
  if ( v20 >= 0 )
  {
    if ( !a3 || (v20 = MiReserveEnclavePages(a2, VmPartition, (unsigned int)(a3 >> 12) + ((a3 & 0xFFF) != 0)), v20 >= 0) )
    {
      IdealNodeNumberThread = KeGetIdealNodeNumberThread((__int64)KeGetCurrentThread());
      MiAllocateEnclavePages(VmPartition, IdealNodeNumberThread, 0, 1LL, (__int64 *)&v34);
      if ( MiPageChainCount((__int64)&v34) )
      {
        v22 = MiUnlinkPageChainHead((__int64)&v34);
        v23 = *(_QWORD *)(a2 + 80);
        v24 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v22 + 0x44000000000LL) >> 4);
        MiInitializeEnclavePfn(v24, v23, 4LL, 0LL);
        ValidPte = MiMakeValidPte(v23, v24, -1610612732);
        v25 = ValidPte;
        v26 = 0;
        if ( MiPteInShadowRange(v23) )
        {
          v30 = MiSanitizeShadowPxe(v27, (__int64)&ValidPte, v28);
          v25 = ValidPte;
          v26 = v30;
        }
        if ( _bittest64(&MiFlags, 0x24u) && (v25 & 0x20) == 0 && v23 >= MiGetPteAddress(0xFFFF800000000000uLL) )
          MiCheckLinearProtectedPteAccessedBit(v23, v25, 128LL);
        *(_QWORD *)v23 = v25;
        if ( v26 )
          MiWritePteShadow(v23, v25, v28, v29);
        v31 = (*(_DWORD *)(a2 + 72) & 1) << 8;
        if ( !Process[1].ReadyTime || (v32 = WORD2(Process[3].PerProcessorCycleTimes), v32 != 332) && v32 != 452 )
          LOWORD(v31) = v31 | 1;
        v20 = KeCreateEnclave((__int64)(v23 << 25) >> 16, v11, v12 - v11 + 1, v39, v33, v31, &v36, a5);
        if ( v20 >= 0 )
        {
          if ( (v36 & 2) != 0 )
            *(_DWORD *)(a2 + 64) |= 4u;
          v20 = 0;
          goto LABEL_20;
        }
      }
      else
      {
        v20 = -1073741801;
      }
    }
  }
  *(_DWORD *)(a2 + 64) |= 8u;
  MiDeleteEnclavePages(Process, a2);
LABEL_20:
  ExReleaseRundownProtection_0(&stru_140E37638);
  return (unsigned int)v20;
}
