/*
 * XREFs of ?GETCLIENTWNDINFOOFFSET@@YAHPEBUtagWND@@@Z @ 0x14026C2A4
 * Callers:
 *     GETCLIENTWNDINFO @ 0x14026C270 (GETCLIENTWNDINFO.c)
 * Callees:
 *     Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline @ 0x14027F280 (Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline.c)
 *     ?UserModeSupportsPartitionedExtraBytes@NonClient@Scrollbar@@YA_NXZ @ 0x1402AB038 (-UserModeSupportsPartitionedExtraBytes@NonClient@Scrollbar@@YA_NXZ.c)
 */

__int64 __fastcall GETCLIENTWNDINFOOFFSET(const struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  Scrollbar::NonClient *v5; // rcx

  if ( (unsigned int)Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline(a1, a2, a3, a4)
    && Scrollbar::NonClient::UserModeSupportsPartitionedExtraBytes(v5) )
  {
    return (*(_DWORD *)(*((_QWORD *)a1 + 5) + 200LL) + 7) & 0xFFFFFFF8;
  }
  else
  {
    return (unsigned int)(*(_DWORD *)(*((_QWORD *)a1 + 5) + 200LL) - 48);
  }
}
