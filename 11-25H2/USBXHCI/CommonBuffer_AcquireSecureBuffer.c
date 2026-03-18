/*
 * XREFs of CommonBuffer_AcquireSecureBuffer @ 0x14003F2E8
 * Callers:
 *     XilCommonBuffer_AcquireBufferEx @ 0x140003EB4 (XilCommonBuffer_AcquireBufferEx.c)
 *     XilEndpoint_AllocateStreamContextArray @ 0x140036AE4 (XilEndpoint_AllocateStreamContextArray.c)
 * Callees:
 *     Feature_UMPERS__private_IsEnabledDeviceUsageNoInline @ 0x14003F574 (Feature_UMPERS__private_IsEnabledDeviceUsageNoInline.c)
 *     SecureDmaEnabler_AllocateCommonBufferPageWithVelocityFor56487309Disabled @ 0x140056008 (SecureDmaEnabler_AllocateCommonBufferPageWithVelocityFor56487309Disabled.c)
 *     memset @ 0x140059AC0 (memset.c)
 *     SecureDmaEnabler_AllocateCommonBufferPage @ 0x140083810 (SecureDmaEnabler_AllocateCommonBufferPage.c)
 */

__int64 __fastcall CommonBuffer_AcquireSecureBuffer(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  __int64 v4; // rbx
  size_t v5; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 Pool2; // rdi
  __int64 v12; // r8
  int IsEnabledDeviceUsageNoInline; // eax
  void ***v14; // rsi
  __int64 v15; // rcx
  int CommonBufferPageWithVelocityFor56487309Disabled; // eax
  void **v17; // rcx

  v4 = 0LL;
  v5 = a2;
  Pool2 = ExAllocatePool2(64LL, 112LL, 1229146200LL);
  if ( Pool2
    && ((IsEnabledDeviceUsageNoInline = Feature_UMPERS__private_IsEnabledDeviceUsageNoInline(v10, v9, v12),
         v14 = (void ***)(Pool2 + 104),
         v15 = *(_QWORD *)(*(_QWORD *)a1 + 104LL),
         !IsEnabledDeviceUsageNoInline)
      ? (CommonBufferPageWithVelocityFor56487309Disabled = SecureDmaEnabler_AllocateCommonBufferPageWithVelocityFor56487309Disabled(
                                                             v15,
                                                             v5,
                                                             Pool2 + 104,
                                                             0LL))
      : (CommonBufferPageWithVelocityFor56487309Disabled = SecureDmaEnabler_AllocateCommonBufferPage(
                                                             v15,
                                                             0,
                                                             v5,
                                                             (int)Pool2 + 104,
                                                             0LL)),
        CommonBufferPageWithVelocityFor56487309Disabled >= 0) )
  {
    memset(**v14, 0, v5);
    v17 = *v14;
    v4 = Pool2;
    *(_QWORD *)(Pool2 + 16) = **v14;
    *(_QWORD *)(Pool2 + 24) = v17[1];
    *(_DWORD *)(Pool2 + 40) = v5;
    *(_DWORD *)(Pool2 + 44) = v5;
    *(_DWORD *)(Pool2 + 64) = a4;
    *(_QWORD *)(Pool2 + 72) = a3;
    *(_DWORD *)(Pool2 + 80) = 3;
  }
  else if ( Pool2 )
  {
    ExFreePoolWithTag((PVOID)Pool2, 0x49434858u);
  }
  return v4;
}
