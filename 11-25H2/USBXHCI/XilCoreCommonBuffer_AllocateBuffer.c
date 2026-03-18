/*
 * XREFs of XilCoreCommonBuffer_AllocateBuffer @ 0x140056E34
 * Callers:
 *     XilCoreCommonBuffer_AcquireBuffer @ 0x140004284 (XilCoreCommonBuffer_AcquireBuffer.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14000CCC8 (WPP_RECORDER_SF_.c)
 *     DmaEnabler_AllocateCommonBufferPage @ 0x14003BD24 (DmaEnabler_AllocateCommonBufferPage.c)
 *     SecureDmaEnabler_FreeCommonBufferPage @ 0x14003C8A8 (SecureDmaEnabler_FreeCommonBufferPage.c)
 *     Feature_UMPERS__private_IsEnabledDeviceUsageNoInline @ 0x14003F574 (Feature_UMPERS__private_IsEnabledDeviceUsageNoInline.c)
 *     SecureDmaEnabler_AllocateCommonBufferPageWithVelocityFor56487309Disabled @ 0x140056008 (SecureDmaEnabler_AllocateCommonBufferPageWithVelocityFor56487309Disabled.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140059AC0 (memset.c)
 *     SecureDmaEnabler_AllocateCommonBufferPage @ 0x140083810 (SecureDmaEnabler_AllocateCommonBufferPage.c)
 */

_QWORD *__fastcall XilCoreCommonBuffer_AllocateBuffer(_QWORD *a1, unsigned int a2)
{
  _BYTE *v2; // rdi
  _QWORD *v3; // rbx
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 *v7; // rcx
  int CommonBufferPage; // eax
  int v9; // edx
  _QWORD *v10; // rdi
  void *v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+60h] [rbp+18h] BYREF

  v2 = (_BYTE *)*a1;
  v3 = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  if ( v2[80] )
  {
    IsEnabledDeviceUsageNoInline = Feature_UMPERS__private_IsEnabledDeviceUsageNoInline();
    v7 = *(__int64 **)(*(_QWORD *)v2 + 104LL);
    if ( IsEnabledDeviceUsageNoInline )
      CommonBufferPage = SecureDmaEnabler_AllocateCommonBufferPage(
                           (_DWORD)v7,
                           104,
                           a2,
                           (unsigned int)&v13,
                           (__int64)&v12);
    else
      CommonBufferPage = SecureDmaEnabler_AllocateCommonBufferPageWithVelocityFor56487309Disabled(v7, 104LL, &v13, &v12);
  }
  else
  {
    CommonBufferPage = DmaEnabler_AllocateCommonBufferPage(*(_QWORD **)(*(_QWORD *)v2 + 96LL), 104LL, a2, &v13, &v12);
  }
  if ( CommonBufferPage < 0 )
    return v12;
  v10 = (_QWORD *)v13;
  if ( (*(_DWORD *)(v13 + 8) & 0xFFF) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 3;
      WPP_RECORDER_SF_(*(_QWORD *)(a1[1] + 72LL), v9, 8, 11, (__int64)&WPP_ed2c8bfb3bf43ee5af8154ef7bced396_Traceguids);
    }
    if ( *(_BYTE *)(*a1 + 80LL) )
      SecureDmaEnabler_FreeCommonBufferPage(*(_QWORD *)(*(_QWORD *)*a1 + 104LL), (__int64)v10);
    else
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01033 + 1664))(WdfDriverGlobals, v10[2]);
  }
  else
  {
    v3 = v12;
    memset(v12, 0, 0x68uLL);
    v3[2] = *v10;
    v3[3] = v10[1];
    *((_DWORD *)v3 + 10) = a2;
    v3[12] = v10;
  }
  return v3;
}
