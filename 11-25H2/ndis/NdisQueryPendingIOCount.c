/*
 * XREFs of NdisQueryPendingIOCount @ 0x1400BFD50
 * Callers:
 *     <none>
 * Callees:
 *     Feature_NDPQualityWinter25__private_IsEnabledDeviceUsageNoInline @ 0x14009F4E0 (Feature_NDPQualityWinter25__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall NdisQueryPendingIOCount(__int64 a1, int *a2)
{
  KSPIN_LOCK *v2; // rsi
  KIRQL v5; // bp
  int v6; // ecx
  unsigned int v7; // ebx

  v2 = (KSPIN_LOCK *)(a1 + 232);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 232));
  if ( (*(_DWORD *)(a1 + 224) & 0x8000) != 0 )
  {
    v6 = 0;
    v7 = -1073676286;
  }
  else
  {
    Feature_NDPQualityWinter25__private_IsEnabledDeviceUsageNoInline();
    v7 = 0;
    v6 = *(_DWORD *)(a1 + 228) - *(_DWORD *)(a1 + 376) - 1;
  }
  *a2 = v6;
  KeReleaseSpinLock(v2, v5);
  return v7;
}
