/*
 * XREFs of ??_ECConnectionNode@@UEAAPEAXI@Z @ 0x14000D120
 * Callers:
 *     <none>
 * Callees:
 *     ??3CProcessorTransaction@@SAXPEAX@Z @ 0x14000C894 (--3CProcessorTransaction@@SAXPEAX@Z.c)
 *     ??1CConnectionNode@@UEAA@XZ @ 0x14000D16C (--1CConnectionNode@@UEAA@XZ.c)
 *     ?OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ @ 0x140045410 (-OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ.c)
 */

CConnectionNode *__fastcall CConnectionNode::`vector deleting destructor'(CConnectionNode *this, char a2)
{
  CConnectionNode::~CConnectionNode(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      Windows::Media::Devices::SendCommandAsyncOperation::OnCancel(this);
    else
      CProcessorTransaction::operator delete(this);
  }
  return this;
}
