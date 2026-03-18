/*
 * XREFs of ?_Dequeue@CMouseQueue@CMouseProcessor@@AEAAXPEAURawMouseEvent@2@@Z @ 0x14018FD88
 * Callers:
 *     ?xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x14021F008 (-xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x14023F500 (memset.c)
 */

void __fastcall CMouseProcessor::CMouseQueue::_Dequeue(
        CMouseProcessor::CMouseQueue *this,
        struct CMouseProcessor::RawMouseEvent *a2)
{
  char *v4; // rcx
  char *v5; // rbx

  if ( !*((_WORD *)this + 1473) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 7019LL);
  v4 = (char *)this + 184 * ((*((_BYTE *)this + 2944) - *((_BYTE *)this + 2946) + 1) & 0xF);
  *(_OWORD *)a2 = *(_OWORD *)v4;
  *((_OWORD *)a2 + 1) = *((_OWORD *)v4 + 1);
  *((_OWORD *)a2 + 2) = *((_OWORD *)v4 + 2);
  *((_OWORD *)a2 + 3) = *((_OWORD *)v4 + 3);
  *((_OWORD *)a2 + 4) = *((_OWORD *)v4 + 4);
  *((_OWORD *)a2 + 5) = *((_OWORD *)v4 + 5);
  *((_OWORD *)a2 + 6) = *((_OWORD *)v4 + 6);
  v5 = (char *)a2 + 128;
  *((_OWORD *)v5 - 1) = *((_OWORD *)v4 + 7);
  *(_OWORD *)v5 = *((_OWORD *)v4 + 8);
  *((_OWORD *)v5 + 1) = *((_OWORD *)v4 + 9);
  *((_OWORD *)v5 + 2) = *((_OWORD *)v4 + 10);
  *((_QWORD *)v5 + 6) = *((_QWORD *)v4 + 22);
  memset(v4, 0, 0xB8uLL);
  if ( --*((_WORD *)this + 1473) >= 0x10u )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 7027LL);
}
