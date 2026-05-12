/*
 * XREFs of StorPushRequestToDeviceQueue @ 0x1401277F0
 * Callers:
 *     WaitForNVMeCommandCompleteWithCustomTimeout @ 0x1400BFF70 (WaitForNVMeCommandCompleteWithCustomTimeout.c)
 *     NvmeControllerProcessExtendedCommandForResetRecovery @ 0x1400F2EB8 (NvmeControllerProcessExtendedCommandForResetRecovery.c)
 *     NvmeNamespaceProcessIoForDeviceIdle @ 0x14011CB50 (NvmeNamespaceProcessIoForDeviceIdle.c)
 *     NvmeNamespaceQueueIo @ 0x14011D6B0 (NvmeNamespaceQueueIo.c)
 *     NvmeProcessIoIrp @ 0x14011DC30 (NvmeProcessIoIrp.c)
 *     StorAttemptInsertDeviceQueue @ 0x140127370 (StorAttemptInsertDeviceQueue.c)
 *     NvmeControllerProcessCommand @ 0x140129520 (NvmeControllerProcessCommand.c)
 *     NvmeControllerSubmitCommandToSQ @ 0x140129E50 (NvmeControllerSubmitCommandToSQ.c)
 * Callees:
 *     <none>
 */

void __fastcall StorPushRequestToDeviceQueue(__int64 a1, unsigned int a2, signed __int64 a3)
{
  __int64 v4; // rbx
  KIRQL v6; // al
  _DWORD *v7; // rdx
  __int64 v8; // rbx
  KIRQL v9; // bp
  signed __int32 v10; // edx
  __int64 v11; // r9
  __int64 v12; // r8
  ULONG_PTR v13; // rbx
  unsigned __int32 v14; // esi
  signed __int32 v15; // ecx
  struct _SLIST_ENTRY *v16; // rdx
  signed __int32 v17[8]; // [rsp+0h] [rbp-38h] BYREF

  v4 = a2;
  v6 = KfRaiseIrql(2u);
  v7 = *(_DWORD **)(a1 + 8 * v4 + 64);
  v8 = a1 + 8 * v4;
  v9 = v6;
  if ( *v7 > 1u )
  {
LABEL_9:
    v13 = *(_QWORD *)(v8 + 64);
    _InterlockedIncrement((volatile signed __int32 *)(v13 + 64));
    _InterlockedOr(v17, 0);
    v14 = *(_DWORD *)(v13 + 4);
    if ( ExQueryDepthSList((PSLIST_HEADER)(*(_QWORD *)(v13 + 32) + 16LL * v14)) >= 0xF800u )
    {
      v15 = 0;
      if ( v14 + 1 < *(_DWORD *)(v13 + 12) )
        v15 = v14 + 1;
      if ( v15 == *(_DWORD *)(v13 + 8) )
        KeBugCheckEx(0x176u, 1uLL, v13, *(_QWORD *)(v13 + 24), 0LL);
      v14 = _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 4), v15, v14);
    }
    if ( **(_DWORD **)(v13 + 24) == 1314278989 )
      v16 = (struct _SLIST_ENTRY *)((a3 + 135) & 0xFFFFFFFFFFFFFFF0uLL);
    else
      v16 = (struct _SLIST_ENTRY *)(a3 + 32);
    ExpInterlockedPushEntrySList((PSLIST_HEADER)(*(_QWORD *)(v13 + 32) + 16LL * v14), v16);
    _InterlockedDecrement((volatile signed __int32 *)(v13 + 64));
  }
  else
  {
    do
    {
      v10 = 0;
      v11 = *(unsigned int *)(*(_QWORD *)(v8 + 64) + 48LL);
      if ( (unsigned int)(v11 + 1) < *(_DWORD *)(a1 + 4) )
        v10 = v11 + 1;
      v12 = *(_QWORD *)(v8 + 64);
      if ( v10 == *(_DWORD *)(v12 + 52) )
      {
        _InterlockedCompareExchange((volatile signed __int32 *)v12, 2, 1);
        goto LABEL_9;
      }
    }
    while ( (_DWORD)v11 != _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 48), v10, v11) );
    while ( _InterlockedCompareExchange64(
              (volatile signed __int64 *)(8 * v11 + *(_QWORD *)(*(_QWORD *)(v8 + 64) + 56LL)),
              a3,
              0LL) )
      ;
  }
  KeLowerIrql(v9);
}
