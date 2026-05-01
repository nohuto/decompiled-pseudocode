/*
 * XREFs of ?RmpSystemOpenProcess@@YAJPEAPEAXKK@Z @ 0x18003D5F0
 * Callers:
 *     ?HampClientStart@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@PEAXKKPEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@@Z @ 0x18003D1E8 (-HampClientStart@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@PEAXKKPEAU_HAM_CLIENT_CONNECTION_PARA.c)
 *     ?HampHostProcessDepAllocateState@@YAJPEAU_HAM_HOST_PROCESS_DEPENDENCY@@KK@Z @ 0x180084300 (-HampHostProcessDepAllocateState@@YAJPEAU_HAM_HOST_PROCESS_DEPENDENCY@@KK@Z.c)
 *     ?RmAvailabilityCheck@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K@Z @ 0x180086BDC (-RmAvailabilityCheck@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2.c)
 *     RmGameModeRSrvDisableForRegisteredProcess @ 0x180089220 (RmGameModeRSrvDisableForRegisteredProcess.c)
 *     RmGameModeRSrvReenableForRegisteredProcess @ 0x180089280 (RmGameModeRSrvReenableForRegisteredProcess.c)
 *     RmGameModeRSrvRegisterPairedAuxiliaryProcess @ 0x1800892E0 (RmGameModeRSrvRegisterPairedAuxiliaryProcess.c)
 *     RmGameModeRSrvRegisterProcess @ 0x180089390 (RmGameModeRSrvRegisterProcess.c)
 *     RmGameModeRSrvUnregisterProcess @ 0x180089410 (RmGameModeRSrvUnregisterProcess.c)
 *     ?RmpGameModeAllocateObjectsForRecipientProcess@@YAJPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAX@Z @ 0x18008C0A4 (-RmpGameModeAllocateObjectsForRecipientProcess@@YAJPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAX@Z.c)
 *     ?RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ @ 0x18008E0A4 (-RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RmpSystemOpenProcess(void **a1, ACCESS_MASK a2, unsigned int a3)
{
  unsigned __int128 v4; // [rsp+20h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES v5; // [rsp+30h] [rbp-38h] BYREF

  memset(&v5.RootDirectory, 0, 40);
  *(_QWORD *)&v5.Length = 48LL;
  v4 = a3;
  return NtOpenProcess(a1, a2, &v5, (PCLIENT_ID)&v4);
}
