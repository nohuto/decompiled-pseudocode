/*
 * XREFs of MiInsertHotPatchRecord @ 0x1407F3340
 * Callers:
 *     MiLoadHotPatchForUserSid @ 0x140A9F6C0 (MiLoadHotPatchForUserSid.c)
 *     MiLoadHotPatch @ 0x140A9F9D4 (MiLoadHotPatch.c)
 *     MmRegisterHotPatches @ 0x140C56C7C (MmRegisterHotPatches.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     RtlAvlInsertNodeEx @ 0x14025FDD0 (RtlAvlInsertNodeEx.c)
 *     RtlAvlRemoveNode @ 0x140260BC0 (RtlAvlRemoveNode.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     MiCompareHotPatchNodes @ 0x1407F2484 (MiCompareHotPatchNodes.c)
 *     MiInsertPreviouslyRegisteredHotPatchRecord @ 0x1407F34DC (MiInsertPreviouslyRegisteredHotPatchRecord.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiInsertHotPatchRecord(unsigned __int64 *a1, __int64 a2, int a3)
{
  void *v3; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  _QWORD *v8; // rax
  signed __int8 v9; // cf
  _QWORD *v10; // rdi
  __int64 v11; // rdi
  int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // ecx
  _QWORD *v15; // rdi
  bool v16; // r8
  _QWORD *v17; // rax
  unsigned int v18; // edi
  __int64 v19; // rcx
  $81B80DCEA5A02D890AB7B2872B48AC01 *v21; // rdx

  v3 = 0LL;
  if ( a3 )
  {
    CurrentThread = 0LL;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v8 = KeAbPreAcquire((__int64)&qword_140E37490, 0LL);
    v9 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E37490, 0LL);
    v10 = v8;
    if ( v9 )
      ExfAcquirePushLockExclusiveEx(&qword_140E37490, (__int64)v8, (__int64)&qword_140E37490);
    if ( v10 )
      *((_BYTE *)v10 + 10) = 1;
  }
  v11 = *a1;
  while ( v11 )
  {
    v12 = MiCompareHotPatchNodes(a2, v11);
    if ( v12 >= 0 )
    {
      if ( v12 <= 0 )
        break;
      v11 = *(_QWORD *)(v11 + 8);
    }
    else
    {
      v11 = *(_QWORD *)v11;
    }
  }
  if ( v11 )
  {
    v13 = *(_DWORD *)(a2 + 32);
    v3 = (void *)v11;
    v14 = *(_DWORD *)(v11 + 32);
    if ( v13 <= v14 )
    {
      v3 = 0LL;
      v18 = 255;
      if ( v13 != v14 )
        v18 = -1073740758;
      goto LABEL_28;
    }
    RtlAvlRemoveNode(a1, v11);
    if ( (unsigned int)MiInsertPreviouslyRegisteredHotPatchRecord(v11) )
      v3 = 0LL;
  }
  v15 = (_QWORD *)*a1;
  v16 = 0;
  if ( !*a1 )
    goto LABEL_27;
  while ( (int)MiCompareHotPatchNodes(a2, (__int64)v15) >= 0 )
  {
    v17 = (_QWORD *)v15[1];
    if ( !v17 )
    {
      v16 = 1;
      goto LABEL_27;
    }
LABEL_25:
    v15 = v17;
  }
  v17 = (_QWORD *)*v15;
  if ( *v15 )
    goto LABEL_25;
  v16 = 0;
LABEL_27:
  RtlAvlInsertNodeEx(a1, (unsigned __int64)v15, v16, (_QWORD *)a2);
  v18 = 0;
LABEL_28:
  if ( !a3 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E37490, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E37490);
    KeAbPostRelease((ULONG_PTR)&qword_140E37490);
    if ( CurrentThread->SpecialApcDisable++ == -1 )
    {
      v21 = &CurrentThread->152;
      if ( ($81B80DCEA5A02D890AB7B2872B48AC01 *)v21->ApcState.ApcListHead[0].Flink != v21 )
        KiCheckForKernelApcDelivery(v19, (__int64)v21);
    }
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return v18;
}
