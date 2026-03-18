/*
 * XREFs of ?GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@_N@Z @ 0x1C0054C20
 * Callers:
 *     ?QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_INT@@PEBUtagPOINT@@@Z @ 0x1C0054818 (-QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_I.c)
 *     ?InitiateWaitForInjectionCompletion@CMouseProcessor@@QEAA_NP6AXXZ@Z @ 0x1C01F83E8 (-InitiateWaitForInjectionCompletion@CMouseProcessor@@QEAA_NP6AXXZ@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

struct CMouseProcessor::RawMouseEvent *__fastcall CMouseProcessor::CMouseQueue::GetItemForWrite(
        CMouseProcessor::CMouseQueue *this,
        char a2)
{
  __int16 *v2; // rbx
  __int16 v4; // cx

  v2 = (__int16 *)((char *)this + 2690);
  if ( !a2 )
  {
    if ( (unsigned __int16)*v2 > 0x10u )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6546LL);
    v4 = *v2;
    if ( *v2 == 16 )
      return 0LL;
    *((_WORD *)this + 1344) = ((unsigned __int8)*((_WORD *)this + 1344) + 1) & 0xF;
    *v2 = v4 + 1;
  }
  if ( (unsigned __int16)*v2 > 0x10u )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6525LL);
  return (CMouseProcessor::CMouseQueue *)((char *)this + 168 * *((unsigned __int16 *)this + 1344));
}
