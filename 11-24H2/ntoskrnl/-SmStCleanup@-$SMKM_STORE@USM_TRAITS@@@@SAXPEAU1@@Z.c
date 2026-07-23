/*
 * XREFs of ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140377D20
 * Callers:
 *     ?SmStoreMgrCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x140377C80 (-SmStoreMgrCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK.c)
 *     SmProcessCreateRequest @ 0x140A38664 (SmProcessCreateRequest.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     KeStackAttachProcess @ 0x1402E1C90 (KeStackAttachProcess.c)
 *     SmKmStoreHelperCheckWaitCommand @ 0x1402F976C (SmKmStoreHelperCheckWaitCommand.c)
 *     ?SmStReleaseStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402F97E8 (-SmStReleaseStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402F9860 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     SmAcquireReleaseCharges @ 0x14033A050 (SmAcquireReleaseCharges.c)
 *     SmKmStoreHelperCleanup @ 0x140377A08 (SmKmStoreHelperCleanup.c)
 *     ?StCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140377FF4 (-StCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmFpCleanup @ 0x1403780A4 (SmFpCleanup.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PspUserApcKernelRoutine @ 0x1408FF210 (PspUserApcKernelRoutine.c)
 *     SmKmFileInfoCleanup @ 0x140AAC920 (SmKmFileInfoCleanup.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStCleanup(__int64 a1)
{
  bool v1; // zf
  void *v3; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  char v7; // al
  __int64 result; // rax
  __int64 v9; // rdx
  struct _KPROCESS *v10; // rcx
  _QWORD *v11; // rdi
  void *v12; // rdi
  void *v13; // rcx
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
      v10 = *(struct _KPROCESS **)(a1 + 7432);
      if ( v10 )
        KeStackAttachProcess(v10, &ApcState);
      if ( (*(_BYTE *)(a1 + 6837) & 4) != 0 && *(_QWORD *)(a1 + 7416) )
      {
        v11 = *(_QWORD **)(a1 + 7416);
        if ( *v11 )
          PspUserApcKernelRoutine();
        ExFreePoolWithTag(v11, 0);
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
    KiUnstackDetachProcess((__int64)&ApcState, 0, v5, v6);
  v7 = *(_BYTE *)(a1 + 6836);
  if ( v7 )
  {
    if ( v7 == 1 )
      SmKmFileInfoCleanup(a1 + 7024);
  }
  else
  {
    v12 = *(void **)(a1 + 7024);
    if ( (*(_BYTE *)(a1 + 6837) & 4) != 0 )
    {
      v13 = *(void **)(a1 + 7032);
      if ( v13 )
        ExFreePoolWithTag(v13, 0);
      SmKmStoreHelperCleanup((PVOID *)(a1 + 7040));
      SmKmStoreHelperCleanup((PVOID *)(a1 + 7184));
    }
    if ( v12 )
      ExFreePoolWithTag(v12, 0);
  }
  result = SmFpCleanup(a1 + 7456);
  if ( (*(_BYTE *)(a1 + 6837) & 0x10) != 0 )
    result = SmAcquireReleaseCharges(*(_QWORD *)(a1 + 7576), *(unsigned int *)(a1 + 7016), 1, 1LL);
  if ( *(char *)(a1 + 6837) < 0 )
  {
    v9 = *(unsigned __int8 *)(a1 + 7596);
    if ( (_BYTE)v9 != 0xFF )
    {
      result = **(_QWORD **)(*(_QWORD *)(a1 + 7576) + 2096LL);
      if ( _InterlockedDecrement64((volatile signed __int64 *)(result + 8 * v9 + 17752)) <= -1 )
        __fastfail(0xEu);
    }
  }
  return result;
}
