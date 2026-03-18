/*
 * XREFs of ?FreePointerInfoNode@CTouchProcessor@@AEAAXGKKW4CPointerInputFramePhase@@@Z @ 0x1C01C3C24
 * Callers:
 *     ?UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C01D8340 (-UnreferenceFrameAndMessageData@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01D8738 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0056A68 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C00E4038 (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C00E4A0E (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C01C25F0 (-FindAndReferenceFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePha.c)
 *     ?FreeHistory@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z @ 0x1C01C353C (-FreeHistory@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@@Z.c)
 *     ?FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C01C3D84 (-FreePointerInfoNodeInt@CTouchProcessor@@AEAAXPEAUCPointerInputFrame@@KW4CPointerInputFramePhase.c)
 *     ?UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C01D8688 (-UnreferenceFrameInt@CTouchProcessor@@AEAAKPEAUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 */

__int64 __fastcall CTouchProcessor::FreePointerInfoNode(
        struct _KTHREAD **a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v6; // rbp
  __int64 result; // rax
  __int64 v8; // rdi
  __int64 v9; // rbx

  v6 = a4;
  if ( a1[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9038);
  result = CTouchProcessor::FindAndReferenceFrameById((__int64)a1, a3, 4u);
  v8 = result;
  if ( result )
  {
    if ( (unsigned int)v6 >= *(_DWORD *)(result + 48) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9048);
    v9 = *(_QWORD *)(v8 + 240) + 480 * v6;
    if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v9) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9050);
    if ( (*(_DWORD *)v9 & 2) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9052);
    if ( (unsigned int)CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v9) > 1 )
      CTouchProcessor::FreeHistory(a1, (const struct CPointerInputFrame *)v8, (const struct CPointerInfoNode *)v9);
    CInputDest::SetEmpty((CInputDest *)(v9 + 24));
    CInputDest::SetEmpty((CInputDest *)(v9 + 352));
    CTouchProcessor::FreePointerInfoNodeInt(a1, v8, (unsigned int)v6);
    return CTouchProcessor::UnreferenceFrameInt(a1, v8);
  }
  return result;
}
