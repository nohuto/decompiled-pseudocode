/*
 * XREFs of ?CanCoalesceIgnoreNode@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAW4CPointerCoalesce@@@Z @ 0x1401F707C
 * Callers:
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1401F8908 (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8564 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     ?IsFullyReleased@CPointerInfoNode@@QEBAHXZ @ 0x140105A34 (-IsFullyReleased@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x14018536C (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?FindNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z @ 0x1401FB918 (-FindNodeInFrame@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@PEBUCPointerInputFrame@@GPEAK@Z.c)
 */

__int64 __fastcall CTouchProcessor::CanCoalesceIgnoreNode(
        PERESOURCE *this,
        const struct CPointerInputFrame *a2,
        const struct CPointerInfoNode *a3,
        enum CPointerCoalesce *a4)
{
  __int64 v8; // rcx
  struct CPointerInfoNode *NodeInFrame; // rax

  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9887);
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(v8, (__int64)a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9888);
  if ( (*(_DWORD *)a3 & 0x2000) == 0 && !CPointerInfoNode::IsFullyReleased(a3) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9889);
  NodeInFrame = CTouchProcessor::FindNodeInFrame((CTouchProcessor *)this, a2, *((_WORD *)a3 + 86), 0LL);
  if ( !NodeInFrame )
  {
    *(_DWORD *)a4 = 3;
    return 0LL;
  }
  if ( (*(_DWORD *)NodeInFrame & 0x2000) == 0 && !CPointerInfoNode::IsFullyReleased(a3) )
  {
    *(_DWORD *)a4 = 20;
    return 0LL;
  }
  if ( *(_DWORD *)a4 != 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9904);
  return 1LL;
}
