/*
 * XREFs of MiFindProcessImageHotPatchRecord @ 0x140A26708
 * Callers:
 *     MiGetAllRegisteredPatches @ 0x1407F2DDC (MiGetAllRegisteredPatches.c)
 *     MiQuerySingleLoadedPatch @ 0x140A2654C (MiQuerySingleLoadedPatch.c)
 *     MiCreatePatchSectionRequest @ 0x140AE969C (MiCreatePatchSectionRequest.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x14031F4D0 (PsReferencePrimaryTokenWithTag.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiCompareHotPatchNodes @ 0x1407F2A54 (MiCompareHotPatchNodes.c)
 *     MiFindUserSidHotPatchContext @ 0x1407F2D6C (MiFindUserSidHotPatchContext.c)
 *     RtlIsPatchMachineApplicable @ 0x14082FB64 (RtlIsPatchMachineApplicable.c)
 *     SeQueryUserSidToken @ 0x1408E1C90 (SeQueryUserSidToken.c)
 *     RtlDuplicateUnicodeString @ 0x1409287C0 (RtlDuplicateUnicodeString.c)
 *     MiFindHotPatchRecord @ 0x140A4EF38 (MiFindHotPatchRecord.c)
 */

__int64 __fastcall MiFindProcessImageHotPatchRecord(__int64 a1, int a2, int a3, int a4, PUNICODE_STRING StringOut)
{
  struct _KTHREAD *CurrentThread; // rdi
  void *v10; // rbp
  char *v11; // rbx
  int v12; // esi
  __int64 v13; // rbx
  int v14; // eax
  NTSTATUS HotPatchRecord; // ebx
  bool v16; // zf
  _QWORD *UserSidHotPatchContext; // rax
  __int128 v20; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+60h] [rbp-B8h]
  int v22; // [rsp+68h] [rbp-B0h]
  int v23; // [rsp+6Ch] [rbp-ACh]
  __int128 v24; // [rsp+70h] [rbp-A8h]
  __int64 v25; // [rsp+80h] [rbp-98h]
  _QWORD v26[10]; // [rsp+90h] [rbp-88h] BYREF

  memset_0(v26, 0, 0x44uLL);
  CurrentThread = KeGetCurrentThread();
  v10 = 0LL;
  if ( !a4 )
  {
    --CurrentThread->SpecialApcDisable;
    v11 = (char *)KeAbPreAcquire((__int64)&qword_140E375D0, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E375D0, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140E375D0, 0, v11, (__int64)&qword_140E375D0);
    if ( v11 )
      v11[10] = 1;
  }
  v12 = *(unsigned __int16 *)(a1 + 1772);
  if ( !qword_140E375B0
    || (v10 = (void *)PsReferencePrimaryTokenWithTag(a1, 0x746C6644u),
        SeQueryUserSidToken((__int64)v10, v26, 0x44u, 0LL),
        (UserSidHotPatchContext = MiFindUserSidHotPatchContext(v26)) == 0LL)
    || (HotPatchRecord = MiFindHotPatchRecord((int)UserSidHotPatchContext + 24, 1, a2, a3, v12, 0LL, StringOut),
        HotPatchRecord == -1073741275) )
  {
    v13 = *(_QWORD *)&qword_140E375B8;
    v21 = 0LL;
    v22 = a2;
    v23 = a3;
    v20 = 0LL;
    v25 = 0LL;
    v24 = 0LL;
    while ( v13 )
    {
      v14 = MiCompareHotPatchNodes((__int64)&v20, v13);
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
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E375D0, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140E375D0);
    KeAbPostRelease((ULONG_PTR)&qword_140E375D0);
    v16 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v16 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  if ( v10 )
    ObfDereferenceObject(v10);
  return (unsigned int)HotPatchRecord;
}
