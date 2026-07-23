/*
 * XREFs of MiInsertHotPatchRecord @ 0x1407F3934
 * Callers:
 *     MiLoadHotPatchForUserSid @ 0x140A9AA90 (MiLoadHotPatchForUserSid.c)
 *     MiLoadHotPatch @ 0x140A9ADA4 (MiLoadHotPatch.c)
 *     MmRegisterHotPatches @ 0x140C58E0C (MmRegisterHotPatches.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     RtlAvlInsertNodeEx @ 0x1402903E0 (RtlAvlInsertNodeEx.c)
 *     RtlAvlRemoveNode @ 0x1402911D0 (RtlAvlRemoveNode.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     MiCompareHotPatchNodes @ 0x1407F2A54 (MiCompareHotPatchNodes.c)
 *     MiInsertPreviouslyRegisteredHotPatchRecord @ 0x1407F3AD0 (MiInsertPreviouslyRegisteredHotPatchRecord.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiInsertHotPatchRecord(unsigned __int64 *a1, __int64 a2, int a3)
{
  void *v3; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  char *v8; // rax
  signed __int8 v9; // cf
  char *v10; // rdi
  __int64 v11; // rdi
  int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // ecx
  _QWORD *v15; // rdi
  bool v16; // r8
  _QWORD *v17; // rax
  unsigned int v18; // edi
  bool v19; // zf

  v3 = 0LL;
  if ( a3 )
  {
    CurrentThread = 0LL;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v8 = (char *)KeAbPreAcquire((__int64)&qword_140E375D0, 0LL);
    v9 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E375D0, 0LL);
    v10 = v8;
    if ( v9 )
      ExfAcquirePushLockExclusiveEx(&qword_140E375D0, v8, (__int64)&qword_140E375D0);
    if ( v10 )
      v10[10] = 1;
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
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140E375D0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140E375D0);
    KeAbPostRelease((ULONG_PTR)&qword_140E375D0);
    v19 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v19 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return v18;
}
