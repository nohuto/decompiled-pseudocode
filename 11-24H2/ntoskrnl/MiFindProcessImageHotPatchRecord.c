/*
 * XREFs of MiFindProcessImageHotPatchRecord @ 0x140A326F0
 * Callers:
 *     MiGetAllRegisteredPatches @ 0x1407F280C (MiGetAllRegisteredPatches.c)
 *     MiQuerySingleLoadedPatch @ 0x140A32534 (MiQuerySingleLoadedPatch.c)
 *     MiCreatePatchSectionRequest @ 0x140AAB9A8 (MiCreatePatchSectionRequest.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14033FFF0 (PsReferencePrimaryTokenWithTag.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     MiCompareHotPatchNodes @ 0x1407F2484 (MiCompareHotPatchNodes.c)
 *     MiFindUserSidHotPatchContext @ 0x1407F279C (MiFindUserSidHotPatchContext.c)
 *     RtlIsPatchMachineApplicable @ 0x14082F36C (RtlIsPatchMachineApplicable.c)
 *     SeQueryUserSidToken @ 0x14090A570 (SeQueryUserSidToken.c)
 *     RtlDuplicateUnicodeString @ 0x140926680 (RtlDuplicateUnicodeString.c)
 *     MiFindHotPatchRecord @ 0x140A570A8 (MiFindHotPatchRecord.c)
 */

__int64 __fastcall MiFindProcessImageHotPatchRecord(__int64 a1, int a2, int a3, int a4, PUNICODE_STRING StringOut)
{
  struct _KTHREAD *CurrentThread; // rdi
  void *v10; // rbp
  _QWORD *v11; // rbx
  int v12; // esi
  __int64 v13; // rbx
  int v14; // eax
  NTSTATUS HotPatchRecord; // ebx
  __int64 v16; // rdx
  bool v17; // zf
  _QWORD *UserSidHotPatchContext; // rax
  __int128 v21; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+60h] [rbp-B8h]
  int v23; // [rsp+68h] [rbp-B0h]
  int v24; // [rsp+6Ch] [rbp-ACh]
  __int128 v25; // [rsp+70h] [rbp-A8h]
  __int64 v26; // [rsp+80h] [rbp-98h]
  _QWORD v27[10]; // [rsp+90h] [rbp-88h] BYREF

  memset_0(v27, 0, 0x44uLL);
  CurrentThread = KeGetCurrentThread();
  v10 = 0LL;
  if ( !a4 )
  {
    --CurrentThread->SpecialApcDisable;
    v11 = KeAbPreAcquire((__int64)&qword_140E37490, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E37490, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140E37490, 0, v11, (__int64)&qword_140E37490);
    if ( v11 )
      *((_BYTE *)v11 + 10) = 1;
  }
  v12 = *(unsigned __int16 *)(a1 + 1772);
  if ( !qword_140E37470
    || (v10 = (void *)PsReferencePrimaryTokenWithTag(a1, 0x746C6644u),
        SeQueryUserSidToken((__int64)v10, v27, 0x44u, 0LL),
        (UserSidHotPatchContext = MiFindUserSidHotPatchContext(v27)) == 0LL)
    || (HotPatchRecord = MiFindHotPatchRecord((int)UserSidHotPatchContext + 24, 1, a2, a3, v12, 0LL, StringOut),
        HotPatchRecord == -1073741275) )
  {
    v13 = *(_QWORD *)&qword_140E37478;
    v22 = 0LL;
    v23 = a2;
    v24 = a3;
    v21 = 0LL;
    v26 = 0LL;
    v25 = 0LL;
    while ( v13 )
    {
      v14 = MiCompareHotPatchNodes((__int64)&v21, v13);
      if ( v14 >= 0 )
      {
        if ( v14 <= 0 )
          break;
        v13 = *(_QWORD *)(v13 + 8);
      }
      else
      {
        v13 = *(_QWORD *)v13;
      }
    }
    if ( v13 && (!(_WORD)v12 || RtlIsPatchMachineApplicable(v12, *(_DWORD *)(v13 + 36))) )
    {
      if ( !StringOut
        || (HotPatchRecord = RtlDuplicateUnicodeString(0, (PCUNICODE_STRING)(v13 + 40), StringOut), HotPatchRecord >= 0) )
      {
        HotPatchRecord = 0;
      }
    }
    else
    {
      HotPatchRecord = -1073741275;
    }
  }
  if ( !a4 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E37490, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140E37490);
    KeAbPostRelease((ULONG_PTR)&qword_140E37490);
    v17 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v17 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(1LL, v16);
  }
  if ( v10 )
    ObfDereferenceObject(v10);
  return (unsigned int)HotPatchRecord;
}
