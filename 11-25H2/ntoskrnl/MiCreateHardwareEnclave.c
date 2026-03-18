/*
 * XREFs of MiCreateHardwareEnclave @ 0x1407E730C
 * Callers:
 *     MiCreateEnclave @ 0x1407E71F0 (MiCreateEnclave.c)
 * Callees:
 *     MiMakeValidPte @ 0x14020EF10 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x1402480C0 (MiPteInShadowRange.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     MiUnlinkPageChainHead @ 0x14033BAF0 (MiUnlinkPageChainHead.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiAllocateEnclavePages @ 0x1403B9BC4 (MiAllocateEnclavePages.c)
 *     MiReserveEnclavePages @ 0x1403BA138 (MiReserveEnclavePages.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     MiInitializeEnclavePfn @ 0x1403FD254 (MiInitializeEnclavePfn.c)
 *     MiSanitizeShadowPxe @ 0x1403FDBDC (MiSanitizeShadowPxe.c)
 *     MiWritePteShadow @ 0x1403FDC5C (MiWritePteShadow.c)
 *     MiGetPteAddress @ 0x140419EE0 (MiGetPteAddress.c)
 *     MiGetVmPartition @ 0x14041A480 (MiGetVmPartition.c)
 *     MiPageChainCount @ 0x140464C78 (MiPageChainCount.c)
 *     KeGetIdealNodeNumberThread @ 0x14048722C (KeGetIdealNodeNumberThread.c)
 *     MiPrepareEnclaveMetadataPage @ 0x1406750C8 (MiPrepareEnclaveMetadataPage.c)
 *     KeCreateEnclave @ 0x14072FD04 (KeCreateEnclave.c)
 *     MiDeleteEnclavePages @ 0x140B5F0CC (MiDeleteEnclavePages.c)
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
  __int64 *v15; // rax
  __int64 *v16; // rsi
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
  int v27; // eax
  int v28; // ecx
  __int16 v29; // ax
  int v30; // [rsp+20h] [rbp-78h]
  __int128 v31; // [rsp+40h] [rbp-58h] BYREF
  __int64 v32; // [rsp+50h] [rbp-48h]
  int v33; // [rsp+A0h] [rbp+8h] BYREF
  int v34; // [rsp+A4h] [rbp+Ch]
  unsigned __int64 ValidPte; // [rsp+A8h] [rbp+10h]
  __int64 v36; // [rsp+B8h] [rbp+20h]

  v36 = a4;
  v34 = HIDWORD(a1);
  CurrentThread = KeGetCurrentThread();
  v33 = 0;
  v7 = *(unsigned __int8 *)(a2 + 32);
  v8 = *(unsigned __int8 *)(a2 + 33);
  Process = CurrentThread->ApcState.Process;
  v32 = 0LL;
  v11 = (*(unsigned int *)(a2 + 24) | (unsigned __int64)(v7 << 32)) << 12;
  v12 = ((*(unsigned int *)(a2 + 28) | (unsigned __int64)(v8 << 32)) << 12) | 0xFFF;
  v31 = 0LL;
  VmPartition = MiGetVmPartition((__int64)&Process[2].ReadyListHead.Blink);
  if ( !ExAcquireRundownProtection_0(&stru_140E372B8) )
    return 3221225738LL;
  *(_QWORD *)(a2 + 120) = Process;
  --CurrentThread->SpecialApcDisable;
  v15 = KeAbPreAcquire((__int64)&qword_140E372B0, 0LL);
  v16 = v15;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140E372B0, 0LL) )
    ExfAcquirePushLockExclusiveEx(&qword_140E372B0, v15, (__int64)&qword_140E372B0);
  if ( v16 )
    *((_BYTE *)v16 + 10) = 1;
  v17 = (_QWORD *)qword_140E372A8;
  v18 = (_QWORD *)(a2 + 128);
  if ( *(__int64 **)qword_140E372A8 != &qword_140E372A0 )
    __fastfail(3u);
  *v18 = &qword_140E372A0;
  *(_QWORD *)(a2 + 136) = v17;
  *v17 = v18;
  qword_140E372A8 = a2 + 128;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E372B0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E372B0);
  KeAbPostRelease((ULONG_PTR)&qword_140E372B0);
  v19 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v19 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  v20 = MiPrepareEnclaveMetadataPage();
  if ( v20 >= 0 )
  {
    if ( !a3 || (v20 = MiReserveEnclavePages(a2, VmPartition, (a3 >> 12) + ((a3 & 0xFFF) != 0)), v20 >= 0) )
    {
      IdealNodeNumberThread = KeGetIdealNodeNumberThread((__int64)KeGetCurrentThread());
      MiAllocateEnclavePages(VmPartition, IdealNodeNumberThread, 0, 1LL, (__int64 *)&v31);
      if ( MiPageChainCount((__int64)&v31) )
      {
        v22 = MiUnlinkPageChainHead((__int64)&v31);
        v23 = *(_QWORD *)(a2 + 80);
        v24 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v22 + 0x44000000000LL) >> 4);
        MiInitializeEnclavePfn(v24, v23, 4, 0);
        ValidPte = MiMakeValidPte(v23, v24, -1610612732);
        v25 = ValidPte;
        v26 = 0;
        if ( MiPteInShadowRange(v23) )
        {
          v27 = MiSanitizeShadowPxe();
          v25 = ValidPte;
          v26 = v27;
        }
        if ( _bittest64(&MiFlags, 0x24u) && (v25 & 0x20) == 0 && v23 >= MiGetPteAddress(0xFFFF800000000000uLL) )
          MiCheckLinearProtectedPteAccessedBit(v23, v25, 128);
        *(_QWORD *)v23 = v25;
        if ( v26 )
          MiWritePteShadow();
        v28 = (*(_DWORD *)(a2 + 72) & 1) << 8;
        if ( !Process[1].ReadyTime || (v29 = WORD2(Process[3].PerProcessorCycleTimes), v29 != 332) && v29 != 452 )
          LOWORD(v28) = v28 | 1;
        v20 = KeCreateEnclave((__int64)(v23 << 25) >> 16, v11, v12 - v11 + 1, v36, v30, v28, &v33, a5);
        if ( v20 >= 0 )
        {
          if ( (v33 & 2) != 0 )
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
  ExReleaseRundownProtection_0(&stru_140E372B8);
  return (unsigned int)v20;
}
