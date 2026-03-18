/*
 * XREFs of ?BroadcastUpdateToAllContainers@IVContentRectsSync@@YAXXZ @ 0x140218818
 * Callers:
 *     ?SetContentRects@CContentRects@@SA_NIPEBUtagRECT@@@Z @ 0x1401A97B4 (-SetContentRects@CContentRects@@SA_NIPEBUtagRECT@@@Z.c)
 * Callees:
 *     isRootPartition @ 0x14004FB7C (isRootPartition.c)
 *     IVContentRectsSync::_anonymous_namespace_::ivSendContentRectsUpdate @ 0x140218868 (IVContentRectsSync--_anonymous_namespace_--ivSendContentRectsUpdate.c)
 *     ?ContainerConnected@CIVChannel@@SA_NK@Z @ 0x14021B14C (-ContainerConnected@CIVChannel@@SA_NK@Z.c)
 */

void __fastcall IVContentRectsSync::BroadcastUpdateToAllContainers(IVContentRectsSync *this)
{
  int v1; // [rsp+30h] [rbp+8h] BYREF

  if ( isRootPartition((__int64)this) && CIVChannel::ContainerConnected(3u) )
  {
    v1 = 0;
    IVContentRectsSync::_anonymous_namespace_::ivSendContentRectsUpdate((struct CONTAINER_ID *)&v1);
  }
}
