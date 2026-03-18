/*
 * XREFs of ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14037E000
 * Callers:
 *     ?SmStoreMgrCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x14037DF60 (-SmStoreMgrCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK.c)
 *     SmProcessCreateRequest @ 0x140A42DD4 (SmProcessCreateRequest.c)
 * Callees:
 *     SmAcquireReleaseCharges @ 0x140210CF0 (SmAcquireReleaseCharges.c)
 *     KeStackAttachProcess @ 0x1402473F0 (KeStackAttachProcess.c)
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     ?StCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14037E2D4 (-StCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmFpCleanup @ 0x14037E384 (SmFpCleanup.c)
 *     SmKmStoreHelperCheckWaitCommand @ 0x14039C46C (SmKmStoreHelperCheckWaitCommand.c)
 *     ?SmStReleaseStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14039C4E8 (-SmStReleaseStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14039C560 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmStoreHelperCleanup @ 0x14049F3AC (SmKmStoreHelperCleanup.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     PspUserApcKernelRoutine @ 0x1408A8FB0 (PspUserApcKernelRoutine.c)
 *     SmKmFileInfoCleanup @ 0x140AB19B0 (SmKmFileInfoCleanup.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStCleanup(__int64 a1)
{
  bool v1; // zf
  void *v3; // rcx
  struct _KTHREAD *CurrentThread; // rax
  char v5; // al
  __int64 result; // rax
  __int64 v7; // rdx
  struct _KPROCESS *v8; // rcx
  _QWORD *v9; // rdi
  void *v10; // rdi
  void *v11; // rcx
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-48h] BYREF

  *(_BYTE *)(a1 + 6837) |= 1u;
  v1 = *(_QWORD *)(a1 + 7008) == 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  if ( !v1 )
  {
    KeSetEvent((PRKEVENT)(a1 + 6960), 0, 1u);
    KeWaitForSingleObject(*(PVOID *)(a1 + 7008), Executive, 0, 0, 0LL);
  }
  v3 = *(void **)(a1 + 7008);
  if ( v3 )
    ObfDereferenceObjectWithTag(v3, 0x746C6644u);
  SmKmStoreHelperCheckWaitCommand(a1 + 7040, 1LL);
  if ( (*(_BYTE *)(a1 + 6837) & 4) != 0 )
  {
    if ( *(_QWORD *)(a1 + 7328) )
    {
      KeSetEvent((PRKEVENT)(a1 + 7336), 0, 0);
      KeWaitForSingleObject(*(PVOID *)(a1 + 7328), Executive, 0, 0, 0LL);
      ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 7328), 0x746C6644u);
    }
    if ( (*(_BYTE *)(a1 + 6837) & 4) != 0 )
    {
      v8 = *(struct _KPROCESS **)(a1 + 7432);
      if ( v8 )
        KeStackAttachProcess(v8, &ApcState);
      if ( (*(_BYTE *)(a1 + 6837) & 4) != 0 && *(_QWORD *)(a1 + 7416) )
      {
        v9 = *(_QWORD **)(a1 + 7416);
        if ( *v9 )
          PspUserApcKernelRoutine();
        ExFreePoolWithTag(v9, 0);
      }
    }
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(a1);
  ST_STORE<SM_TRAITS>::StCleanup(a1);
  SMKM_STORE<SM_TRAITS>::SmStReleaseStoreLockExclusive(a1);
  KeLeaveCriticalRegion();
  if ( (*(_BYTE *)(a1 + 6837) & 4) != 0 && *(_QWORD *)(a1 + 7432) )
    KiUnstackDetachProcess((__int64)&ApcState, 0);
  v5 = *(_BYTE *)(a1 + 6836);
  if ( v5 )
  {
    if ( v5 == 1 )
      SmKmFileInfoCleanup(a1 + 7024);
  }
  else
  {
    v10 = *(void **)(a1 + 7024);
    if ( (*(_BYTE *)(a1 + 6837) & 4) != 0 )
    {
      v11 = *(void **)(a1 + 7032);
      if ( v11 )
        ExFreePoolWithTag(v11, 0);
      SmKmStoreHelperCleanup(a1 + 7040);
      SmKmStoreHelperCleanup(a1 + 7184);
    }
    if ( v10 )
      ExFreePoolWithTag(v10, 0);
  }
  result = SmFpCleanup(a1 + 7456);
  if ( (*(_BYTE *)(a1 + 6837) & 0x10) != 0 )
    result = SmAcquireReleaseCharges(*(_QWORD *)(a1 + 7576), *(unsigned int *)(a1 + 7016), 1, 1);
  if ( *(char *)(a1 + 6837) < 0 )
  {
    v7 = *(unsigned __int8 *)(a1 + 7596);
    if ( (_BYTE)v7 != 0xFF )
    {
      result = **(_QWORD **)(*(_QWORD *)(a1 + 7576) + 2096LL);
      if ( _InterlockedDecrement64((volatile signed __int64 *)(result + 8 * v7 + 17752)) <= -1 )
        __fastfail(0xEu);
    }
  }
  return result;
}
