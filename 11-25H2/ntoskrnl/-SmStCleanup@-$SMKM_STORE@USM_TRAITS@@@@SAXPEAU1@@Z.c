/*
 * XREFs of ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140396200
 * Callers:
 *     ?SmStoreMgrCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x140396160 (-SmStoreMgrCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK.c)
 *     SmProcessCreateRequest @ 0x1409C16A4 (SmProcessCreateRequest.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     SmKmStoreHelperCheckWaitCommand @ 0x14020CDBC (SmKmStoreHelperCheckWaitCommand.c)
 *     ?SmStReleaseStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14020CE38 (-SmStReleaseStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14020CEB0 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmAcquireReleaseCharges @ 0x14022E380 (SmAcquireReleaseCharges.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     KeStackAttachProcess @ 0x140348CD0 (KeStackAttachProcess.c)
 *     SmKmStoreHelperCleanup @ 0x1403960C8 (SmKmStoreHelperCleanup.c)
 *     ?StCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1403964D4 (-StCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmFpCleanup @ 0x140396584 (SmFpCleanup.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     PspUserApcKernelRoutine @ 0x1408E08C0 (PspUserApcKernelRoutine.c)
 *     SmKmFileInfoCleanup @ 0x140AAC740 (SmKmFileInfoCleanup.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  SmKmStoreHelperCheckWaitCommand(a1 + 7040, 1);
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
    KiUnstackDetachProcess((__int64)&ApcState, 0LL);
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
      SmKmStoreHelperCleanup((PVOID *)(a1 + 7040));
      SmKmStoreHelperCleanup((PVOID *)(a1 + 7184));
    }
    if ( v10 )
      ExFreePoolWithTag(v10, 0);
  }
  result = SmFpCleanup(a1 + 7456);
  if ( (*(_BYTE *)(a1 + 6837) & 0x10) != 0 )
    result = SmAcquireReleaseCharges(*(_QWORD *)(a1 + 7576), *(unsigned int *)(a1 + 7016), 1, 1LL);
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
