/*
 * XREFs of ?ivOnChildPartitionConnected@@YAXPEBXUCONTAINER_ID@@@Z @ 0x1402172E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4GuiThreadContext@@W4HandleToObjILCheck@@@Z @ 0x1401A8FC0 (--0EnterLeaveCritShared@@QEAA@W4GuiThreadContext@@W4HandleToObjILCheck@@@Z.c)
 *     ?SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z @ 0x140213C58 (-SendSettingsUpdateToContainer@Settings@IVRootDeliver@@YAXAEBUCONTAINER_ID@@@Z.c)
 *     ?ivOnChildPartitionConnected@IVForegroundSync@@YAXAEBUCONTAINER_ID@@@Z @ 0x14021806C (-ivOnChildPartitionConnected@IVForegroundSync@@YAXAEBUCONTAINER_ID@@@Z.c)
 *     ?ivOnChildPartitionConnected@IVContentRectsSync@@YAXAEBUCONTAINER_ID@@@Z @ 0x140218850 (-ivOnChildPartitionConnected@IVContentRectsSync@@YAXAEBUCONTAINER_ID@@@Z.c)
 */

void __fastcall ivOnChildPartitionConnected(__int64 a1, int a2)
{
  const struct CONTAINER_ID *v2; // rdx
  const struct CONTAINER_ID *v3; // rdx
  IVForegroundSync *v4; // rcx
  const struct CONTAINER_ID *v5; // rdx
  int v6; // [rsp+38h] [rbp+10h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v6 = a2;
  EnterLeaveCritShared::EnterLeaveCritShared(&v7, 1u, 1u);
  IVRootDeliver::Settings::SendSettingsUpdateToContainer((IVRootDeliver::Settings *)&v6, v2);
  UserSessionSwitchLeaveCritWithNonPaged();
  IVForegroundSync::ivOnChildPartitionConnected(v4, v3);
  IVContentRectsSync::ivOnChildPartitionConnected((IVContentRectsSync *)&v6, v5);
}
