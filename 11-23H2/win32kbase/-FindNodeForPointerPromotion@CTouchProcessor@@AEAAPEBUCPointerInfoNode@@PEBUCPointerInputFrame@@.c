/*
 * XREFs of ?FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@@Z @ 0x1C01C272C
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C01C4EF8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C00E4A0E (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C01CCAD8 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?IsPrimary@CPointerInfoNode@@QEBAHXZ @ 0x1C01CD0A4 (-IsPrimary@CPointerInfoNode@@QEBAHXZ.c)
 */

const struct CPointerInfoNode *__fastcall CTouchProcessor::FindNodeForPointerPromotion(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2)
{
  __int16 v3; // si
  __int64 v4; // rax
  unsigned int v5; // ebp
  CPointerInfoNode *v6; // rbx
  __int64 v7; // r8
  CPointerInfoNode *v8; // rcx

  v3 = 0;
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(this, a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9509);
  if ( *(_DWORD *)(*((_QWORD *)a2 + 32) + 24LL) == 7 )
    return 0LL;
  if ( (*((_DWORD *)a2 + 57) & 4) == 0 )
  {
    v3 = 0;
    if ( qword_1C0296980 )
    {
      if ( (int)qword_1C0296980() >= 0 )
      {
        if ( !qword_1C0296988 )
          return 0LL;
        v3 = qword_1C0296988();
      }
      if ( v3 )
        goto LABEL_10;
    }
    return 0LL;
  }
LABEL_10:
  v4 = *((unsigned int *)a2 + 12);
  v5 = 0;
  v6 = (CPointerInfoNode *)*((_QWORD *)a2 + 30);
  if ( !(_DWORD)v4 )
    return 0LL;
  v7 = *((_QWORD *)a2 + 30);
  while ( 1 )
  {
    if ( (unsigned __int64)v6 >= v7 + 480 * v4 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 9547);
    if ( (unsigned int)CPointerInfoNode::IsValid(v6)
      && (*(_DWORD *)v6 & 0x1000) == 0
      && ((unsigned int)CPointerInfoNode::IsPrimary(v8) || v3 == *((_WORD *)v6 + 86)) )
    {
      break;
    }
    v4 = *((unsigned int *)a2 + 12);
    ++v5;
    v6 = (CPointerInfoNode *)((char *)v6 + 480);
    if ( v5 >= (unsigned int)v4 )
      return 0LL;
  }
  return v6;
}
