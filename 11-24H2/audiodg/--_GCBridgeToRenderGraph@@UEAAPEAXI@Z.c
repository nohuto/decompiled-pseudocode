/*
 * XREFs of ??_GCBridgeToRenderGraph@@UEAAPEAXI@Z @ 0x140067C90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1400590C4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CBridgeToRenderGraph@@UEAA@XZ @ 0x140067C28 (--1CBridgeToRenderGraph@@UEAA@XZ.c)
 */

CBridgeToRenderGraph *__fastcall CBridgeToRenderGraph::`scalar deleting destructor'(
        CBridgeToRenderGraph *this,
        char a2)
{
  CBridgeToRenderGraph::~CBridgeToRenderGraph(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
