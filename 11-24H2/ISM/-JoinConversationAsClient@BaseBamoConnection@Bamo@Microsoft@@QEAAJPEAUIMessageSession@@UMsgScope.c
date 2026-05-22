/*
 * XREFs of ?JoinConversationAsClient@BaseBamoConnection@Bamo@Microsoft@@QEAAJPEAUIMessageSession@@UMsgScopeID@@PEBG@Z @ 0x18000C4EC
 * Callers:
 *     ??$CreateClient@VAnimationDataProviderConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@UMsgScopeID@@PEBGPEAPEAVAnimationDataProviderConnection@@@Z @ 0x18000C400 (--$CreateClient@VAnimationDataProviderConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMe.c)
 *     ??$CreateClient@VInputSystemInternalClientConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@UMsgScopeID@@PEBGPEAPEAVInputSystemInternalClientConnection@@@Z @ 0x18007F66C (--$CreateClient@VInputSystemInternalClientConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEA.c)
 *     ??$CreateClient@VMPCManagerClientConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@UMsgScopeID@@PEBGPEAPEAVMPCManagerClientConnection@@@Z @ 0x180160394 (--$CreateClient@VMPCManagerClientConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessage.c)
 * Callees:
 *     ?Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG_N@Z @ 0x18000C550 (-Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMs.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::Bamo::BaseBamoConnection::JoinConversationAsClient(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        __int64 a4)
{
  __int64 v7; // rax
  char v9; // [rsp+28h] [rbp-20h]
  __int128 v10; // [rsp+30h] [rbp-18h] BYREF

  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
  v9 = 0;
  v10 = *a3;
  return ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int128 *, __int64, char))Microsoft::BamoImpl::BaseBamoConnectionImpl::Join)(
           v7,
           a2,
           0LL,
           &v10,
           a4,
           v9);
}
