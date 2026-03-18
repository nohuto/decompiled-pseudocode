/*
 * XREFs of ?GetFrameIdFromPointerMsgId@CTouchProcessor@@QEAAK_K@Z @ 0x1C00E4020
 * Callers:
 *     <none>
 * Callees:
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1C01C7400 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetFrameIdFromPointerMsgId(CTouchProcessor *this, unsigned __int64 a2)
{
  return *((unsigned int *)CTouchProcessor::GetNonConstMsgData(this, a2) + 7);
}
