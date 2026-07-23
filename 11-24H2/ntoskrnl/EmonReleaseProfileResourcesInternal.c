/*
 * XREFs of EmonReleaseProfileResourcesInternal @ 0x14055B504
 * Callers:
 *     EmonAllocateResources @ 0x1405589BC (EmonAllocateResources.c)
 *     EmonReleaseProfileResources @ 0x14055B470 (EmonReleaseProfileResources.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140287740 (KeAddProcessorAffinityEx.c)
 *     KeQueryActiveProcessorCountEx @ 0x140339940 (KeQueryActiveProcessorCountEx.c)
 *     KeIsEmptyAffinityEx @ 0x140371960 (KeIsEmptyAffinityEx.c)
 *     HalpPmuReservedResourcesProcessorCallback @ 0x140543798 (HalpPmuReservedResourcesProcessorCallback.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall EmonReleaseProfileResourcesInternal(__int64 a1)
{
  unsigned int v2; // ebx
  ULONG ActiveProcessorCount; // r14d
  unsigned int v4; // edi
  _BYTE *v5; // rsi
  __int64 v7; // [rsp+20h] [rbp-138h] BYREF
  _BYTE v8[264]; // [rsp+28h] [rbp-130h] BYREF

  memset_0(v8, 0, 0x100uLL);
  v2 = 0;
  v7 = 2097153LL;
  memset_0(v8, 0, 0x100uLL);
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v4 = 0;
  if ( ActiveProcessorCount )
  {
    v5 = (_BYTE *)(a1 + 40);
    do
    {
      if ( *v5 )
        KeAddProcessorAffinityEx((unsigned __int16 *)&v7, v4);
      ++v4;
      v5 += 80;
    }
    while ( v4 < ActiveProcessorCount );
  }
  if ( !(unsigned int)KeIsEmptyAffinityEx((unsigned __int16 *)&v7) )
    return (unsigned int)HalpPmuReservedResourcesProcessorCallback(
                           (__int64)&v7,
                           (__int64)EmonReleaseReservedCounters,
                           a1,
                           a1);
  return v2;
}
