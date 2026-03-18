/*
 * XREFs of ?GetClientExtraBytesTotalSize@@YAHPEBUtagWND@@@Z @ 0x1402F13E4
 * Callers:
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 * Callees:
 *     Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline @ 0x14027F280 (Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline.c)
 *     ?UserModeSupportsPartitionedExtraBytes@NonClient@Scrollbar@@YA_NXZ @ 0x1402AB038 (-UserModeSupportsPartitionedExtraBytes@NonClient@Scrollbar@@YA_NXZ.c)
 */

__int64 __fastcall GetClientExtraBytesTotalSize(const struct tagWND *a1)
{
  unsigned int v2; // ebx
  Scrollbar::NonClient *v3; // rcx

  v2 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 200LL);
  if ( (unsigned int)Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline()
    && Scrollbar::NonClient::UserModeSupportsPartitionedExtraBytes(v3) )
  {
    v2 += *(_DWORD *)(*((_QWORD *)a1 + 5) + 336LL);
  }
  return v2;
}
