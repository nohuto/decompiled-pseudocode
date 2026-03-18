/*
 * XREFs of ?NodeMatchesMTGeneration@CTouchProcessor@@AEAAHPEBUCPointerInfoNode@@H@Z @ 0x1400DEA1C
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1401FCB24 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ?IsForManipulationThread@CPointerInfoNode@@QEBAHXZ @ 0x1400DEA6C (-IsForManipulationThread@CPointerInfoNode@@QEBAHXZ.c)
 */

__int64 __fastcall CTouchProcessor::NodeMatchesMTGeneration(CTouchProcessor *this, const struct CPointerInfoNode *a2)
{
  int v2; // eax
  __int64 v3; // rdx
  int v4; // r8d
  unsigned int v5; // r9d
  int v7; // eax

  v2 = CPointerInfoNode::IsForManipulationThread(a2);
  v5 = 0;
  if ( (v2 != 0) == (v4 != 0) )
  {
    if ( !v4 )
      return 1;
    v7 = *(_DWORD *)(v3 + 4);
    if ( (v7 & 0x200) != 0 && (v7 & 0x400) == 0 )
      return 1;
  }
  return v5;
}
