/*
 * XREFs of ??$SyncMessage@$07@DispBrokerClient@DispBroker@@QEAAJPEAU?$AlpcRequest@$07@1@PEA_KPEAU?$AlpcReply@$07@1@@Z @ 0x1400C9970
 * Callers:
 *     ?DispBrokerQueryDisplayConfig@@YAJIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@_N@Z @ 0x1401A8A8C (-DispBrokerQueryDisplayConfig@@YAJIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG.c)
 * Callees:
 *     DrvDxgkSendDisplayBrokerMessage @ 0x1400C99F4 (DrvDxgkSendDisplayBrokerMessage.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1400C9A64 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1400C9AEC (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 */

__int64 __fastcall DispBroker::DispBrokerClient::SyncMessage<8>(__int64 a1, int a2, __int64 a3, int a4)
{
  int v7; // r8d
  unsigned int v8; // ebx
  _BYTE v10[24]; // [rsp+40h] [rbp-18h] BYREF

  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v10);
  v8 = DrvDxgkSendDisplayBrokerMessage(1179648, a2, v7, a4, a3);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v10);
  return v8;
}
