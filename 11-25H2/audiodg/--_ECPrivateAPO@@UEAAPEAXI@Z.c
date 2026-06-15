/*
 * XREFs of ??_ECPrivateAPO@@UEAAPEAXI@Z @ 0x14000CF90
 * Callers:
 *     <none>
 * Callees:
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x14000CD4C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x14000CD90 (-AERTFree@@YAXPEAX0@Z.c)
 *     ??1CPrivateAPO@@UEAA@XZ @ 0x14000CFE8 (--1CPrivateAPO@@UEAA@XZ.c)
 *     ?OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ @ 0x140045710 (-OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
CPrivateAPO *__fastcall CPrivateAPO::`vector deleting destructor'(CPrivateAPO *this, char a2)
{
  void *v4; // rax
  int v5; // r8d

  CPrivateAPO::~CPrivateAPO(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      Windows::Media::Devices::SendCommandAsyncOperation::OnCancel(this);
    }
    else
    {
      v4 = (void *)AERTGetDLLRTHeap();
      AERTFree(this, v4, v5);
    }
  }
  return this;
}
