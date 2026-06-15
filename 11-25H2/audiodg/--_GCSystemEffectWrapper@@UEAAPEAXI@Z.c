/*
 * XREFs of ??_GCSystemEffectWrapper@@UEAAPEAXI@Z @ 0x140039450
 * Callers:
 *     <none>
 * Callees:
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x14000CD4C (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x14000CD90 (-AERTFree@@YAXPEAX0@Z.c)
 *     ??1CSystemEffectWrapper@@UEAA@XZ @ 0x1400394A8 (--1CSystemEffectWrapper@@UEAA@XZ.c)
 *     ?OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ @ 0x140045710 (-OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ.c)
 */

CSystemEffectWrapper *__fastcall CSystemEffectWrapper::`scalar deleting destructor'(
        CSystemEffectWrapper *this,
        char a2)
{
  void *v4; // rax
  int v5; // r8d

  CSystemEffectWrapper::~CSystemEffectWrapper(this);
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
