/*
 * XREFs of ??_ECConnectionNode@@UEAAPEAXI@Z @ 0x14000D0F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3CProcessorTransaction@@SAXPEAX@Z @ 0x14000C864 (--3CProcessorTransaction@@SAXPEAX@Z.c)
 *     ??1CConnectionNode@@UEAA@XZ @ 0x14000D13C (--1CConnectionNode@@UEAA@XZ.c)
 *     ?OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ @ 0x140045710 (-OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ.c)
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
