/*
 * XREFs of VidSchiSubmitCommandPacketToQueueDirectSubmitAware @ 0x140048BCC
 * Callers:
 *     VidSchiSubmitCommandPacketToQueue @ 0x140004B80 (VidSchiSubmitCommandPacketToQueue.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1400211F0 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdatePriorityTables @ 0x140025D70 (VidSchiUpdatePriorityTables.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x14002D720 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x140033860 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     VidSchiAdjustWorkerThreadPriority @ 0x140034510 (VidSchiAdjustWorkerThreadPriority.c)
 *     VidSchiSubmitQueueCommandDirect @ 0x1400504CC (VidSchiSubmitQueueCommandDirect.c)
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1400B3910 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     VidSchiEnsureVSyncEnabled @ 0x1400D94C0 (VidSchiEnsureVSyncEnabled.c)
 */

void __fastcall VidSchiSubmitCommandPacketToQueueDirectSubmitAware(__int64 a1)
{
  _QWORD *v1; // r14
  __int64 v3; // r13
  _QWORD *v4; // rbp
  __int64 v5; // rdi
  struct _ERESOURCE *v6; // r12
  bool v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rbx
  int v10; // ebx
  __int64 v11; // rax
  VIDMM_DEVICE *v12; // rcx
  _BYTE v13[48]; // [rsp+40h] [rbp-58h] BYREF
  int v14; // [rsp+A0h] [rbp+8h] BYREF

  v1 = *(_QWORD **)(a1 + 88);
  v3 = v1[12];
  v4 = (_QWORD *)v1[13];
  v5 = *(_QWORD *)(v3 + 24);
  v6 = (struct _ERESOURCE *)(v5 + 1240);
  v7 = KeGetCurrentThread() != *(struct _KTHREAD **)(v5 + 168);
  ExAcquireResourceExclusiveLite((PERESOURCE)(v5 + 1240), 1u);
  VidSchiEnsureVSyncEnabled(a1, v4);
  v8 = v1[18];
  v1[18] = v8 + 1;
  *(_QWORD *)(a1 + 112) = v8;
  v9 = MEMORY[0xFFFFF78000000320];
  v4[24] = v9 * KeQueryTimeIncrement();
  if ( !*(_DWORD *)(a1 + 48) )
  {
    v1[22] = *(_QWORD *)(a1 + 112);
    ++v4[231];
  }
  VidSchiProfilePerformanceTick(4, v5, v3, 0LL, 0LL, a1, 0LL, 0LL);
  v14 = 1;
  if ( !v7 || (*(_DWORD *)(v5 + 2792) & 2) == 0 && *(_DWORD *)(a1 + 48) != 2 )
    goto LABEL_9;
  if ( !ExAcquireResourceExclusiveLite((PERESOURCE)(v5 + 1136), 0)
    || (v10 = VidSchiSubmitQueueCommandDirect(a1, &v14), ExReleaseResourceLite((PERESOURCE)(v5 + 1136)), !v10) )
  {
    v6 = (struct _ERESOURCE *)(v5 + 1240);
LABEL_9:
    AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v13, (unsigned __int64 *)(v5 + 1984), 1, 0);
    VidSchiUpdatePriorityTables(v5, a1, &v14);
    AcquireSpinLock::Release((AcquireSpinLock *)v13);
    if ( v7 )
      VidSchiAdjustWorkerThreadPriority((__int64)v1);
    else
      ExReleaseResourceLite(v6);
  }
  if ( v14 && v7 )
  {
    *(_QWORD *)(v5 + 1480) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v5 + 1448), 0, 0);
  }
  v11 = v4[1];
  if ( v11 )
  {
    v12 = *(VIDMM_DEVICE **)(v11 + 792);
    if ( v12 )
      VIDMM_DEVICE::EnsureSchedulable(v12, 1);
  }
}
