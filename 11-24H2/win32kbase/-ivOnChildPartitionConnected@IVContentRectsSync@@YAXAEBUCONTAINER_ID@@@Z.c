/*
 * XREFs of ?ivOnChildPartitionConnected@IVContentRectsSync@@YAXAEBUCONTAINER_ID@@@Z @ 0x140218850
 * Callers:
 *     ?ivOnChildPartitionConnected@@YAXPEBXUCONTAINER_ID@@@Z @ 0x1402172E0 (-ivOnChildPartitionConnected@@YAXPEBXUCONTAINER_ID@@@Z.c)
 * Callees:
 *     IVContentRectsSync::_anonymous_namespace_::ivSendContentRectsUpdate @ 0x140218868 (IVContentRectsSync--_anonymous_namespace_--ivSendContentRectsUpdate.c)
 */

void __fastcall IVContentRectsSync::ivOnChildPartitionConnected(
        IVContentRectsSync *this,
        const struct CONTAINER_ID *a2)
{
  IVContentRectsSync::_anonymous_namespace_::ivSendContentRectsUpdate(this);
}
