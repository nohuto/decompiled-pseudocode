/*
 * XREFs of CommonBuffer_AllocateCommonBufferPage @ 0x1400205B8
 * Callers:
 *     XilCoreCommonBuffer_AllocateBuffers @ 0x140020234 (XilCoreCommonBuffer_AllocateBuffers.c)
 * Callees:
 *     DmaEnabler_AllocateCommonBufferPage @ 0x14003BD24 (DmaEnabler_AllocateCommonBufferPage.c)
 *     Feature_UMPERS__private_IsEnabledDeviceUsageNoInline @ 0x14003F574 (Feature_UMPERS__private_IsEnabledDeviceUsageNoInline.c)
 *     SecureDmaEnabler_AllocateCommonBufferPageWithVelocityFor56487309Disabled @ 0x140056008 (SecureDmaEnabler_AllocateCommonBufferPageWithVelocityFor56487309Disabled.c)
 *     SecureDmaEnabler_AllocateCommonBufferPage @ 0x140083810 (SecureDmaEnabler_AllocateCommonBufferPage.c)
 */

__int64 __fastcall CommonBuffer_AllocateCommonBufferPage(_BYTE *a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v10; // rcx

  if ( !a1[80] )
    return DmaEnabler_AllocateCommonBufferPage(*(_QWORD *)(*(_QWORD *)a1 + 96LL), a2, a3, a4, a5);
  IsEnabledDeviceUsageNoInline = Feature_UMPERS__private_IsEnabledDeviceUsageNoInline();
  v10 = *(_QWORD *)(*(_QWORD *)a1 + 104LL);
  if ( IsEnabledDeviceUsageNoInline )
    return SecureDmaEnabler_AllocateCommonBufferPage(v10, a2, a3, a4, a5);
  else
    return SecureDmaEnabler_AllocateCommonBufferPageWithVelocityFor56487309Disabled(v10, a2, a4, a5);
}
