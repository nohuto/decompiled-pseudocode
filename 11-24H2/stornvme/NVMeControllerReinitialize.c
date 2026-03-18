/*
 * XREFs of NVMeControllerReinitialize @ 0x1400274C4
 * Callers:
 *     NVMeControllerReset @ 0x14001D564 (NVMeControllerReset.c)
 *     NVMeControllerPanicResetActionWorkItem @ 0x140027150 (NVMeControllerPanicResetActionWorkItem.c)
 * Callees:
 *     NVMeControllerInitPart2 @ 0x140007440 (NVMeControllerInitPart2.c)
 *     NVMeQueuesReInit @ 0x14000C920 (NVMeQueuesReInit.c)
 *     NVMeControllerInitPart3 @ 0x14000FB50 (NVMeControllerInitPart3.c)
 *     NVMeControllerInitPart1 @ 0x14001D11C (NVMeControllerInitPart1.c)
 *     NVMeInitializeProcessorIoQueueMapping @ 0x14001E2F4 (NVMeInitializeProcessorIoQueueMapping.c)
 */

char __fastcall NVMeControllerReinitialize(__int64 a1)
{
  int v2; // esi
  char v3; // bl
  unsigned int v4; // eax
  int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  v2 = *(_DWORD *)(a1 + 24);
  v3 = 0;
  v4 = v2 & 0xFFFFFFEF;
  v5 = v2 & 0x800000;
  *(_DWORD *)(a1 + 24) = v4;
  NVMeQueuesReInit(a1);
  if ( !(unsigned int)NVMeControllerInitPart1(a1, 0) )
  {
    LOBYTE(v7) = 1;
    LOBYTE(v6) = v5 != 0;
    if ( !(unsigned int)NVMeControllerInitPart2(a1, v6, v7, v8)
      && NVMeControllerInitPart3(a1, 1u)
      && (!v5 || !(unsigned int)NVMeInitializeProcessorIoQueueMapping(a1)) )
    {
      return 1;
    }
  }
  return v3;
}
