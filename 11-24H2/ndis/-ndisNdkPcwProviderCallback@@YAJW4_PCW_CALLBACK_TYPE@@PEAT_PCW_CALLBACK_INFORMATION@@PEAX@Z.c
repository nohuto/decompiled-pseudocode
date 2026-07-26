/*
 * XREFs of ?ndisNdkPcwProviderCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z @ 0x140162510
 * Callers:
 *     <none>
 * Callees:
 *     ndisNdkPcwEnumerateInstances @ 0x14006FD70 (ndisNdkPcwEnumerateInstances.c)
 *     ndisNdkPcwAddCounter @ 0x1400B96D0 (ndisNdkPcwAddCounter.c)
 *     ndisNdkPcwRemoveCounter @ 0x1401408E4 (ndisNdkPcwRemoveCounter.c)
 *     ndisNdkPcwCollectData @ 0x140162550 (ndisNdkPcwCollectData.c)
 */

__int64 __fastcall ndisNdkPcwProviderCallback(
        enum _PCW_CALLBACK_TYPE a1,
        union _PCW_CALLBACK_INFORMATION *a2,
        void *a3)
{
  int v4; // ecx

  if ( a1 == PcwCallbackCollectData )
    return ndisNdkPcwCollectData(a2);
  if ( a1 == PcwCallbackAddCounter )
    return ndisNdkPcwAddCounter((__int64)a2);
  v4 = a1 - 1;
  if ( !v4 )
    return ndisNdkPcwRemoveCounter((__int64)a2);
  if ( v4 == 1 )
    return ndisNdkPcwEnumerateInstances(a2->EnumerateInstances.Buffer);
  return 0LL;
}
