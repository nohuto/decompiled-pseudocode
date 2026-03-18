/*
 * XREFs of ?Interceptor_UpdateInputReport@MouseInputDataEx@CMouseProcessor@@QEAAXAEBU_MouseProcessorData@@@Z @ 0x14021D708
 * Callers:
 *     ?HandleMouseInterceptWorker@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputDataEx@1@@Z @ 0x140051F28 (-HandleMouseInterceptWorker@CMouseProcessor@@AEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputD.c)
 * Callees:
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x140051ED8 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CMouseProcessor::MouseInputDataEx::Interceptor_UpdateInputReport(
        CMouseProcessor::MouseInputDataEx *this,
        const struct _MouseProcessorData *a2)
{
  __int16 v4; // cx
  int v5; // eax
  _DWORD *v6; // rcx
  _DWORD *v7; // rdi
  __int64 v8; // [rsp+30h] [rbp+8h]

  if ( *(_WORD *)this == 0xFFFF )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2466);
  if ( (*((_BYTE *)this + 2) & 1) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2469);
  if ( CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)this, 0x8000) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2472);
  if ( (*((_BYTE *)a2 + 12) & 1) != 0 )
  {
    v4 = *((_WORD *)this + 1) | 1;
    *((_DWORD *)this + 3) = *((_DWORD *)a2 + 1);
    v5 = *((_DWORD *)a2 + 2);
    *((_WORD *)this + 1) = v4;
    *((_DWORD *)this + 4) = v5;
    if ( (*((_BYTE *)a2 + 12) & 2) != 0 )
      *((_WORD *)this + 1) = v4 | 2;
    if ( CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)this, 4) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2490);
    *((_DWORD *)this + 18) &= ~8u;
    v6 = (_DWORD *)((char *)a2 + 20);
  }
  else
  {
    v6 = (_DWORD *)((char *)a2 + 20);
    if ( (*((_DWORD *)a2 + 5) & 0x10) != 0 )
    {
      *((_DWORD *)this + 3) = *((_DWORD *)a2 + 1);
      *((_DWORD *)this + 4) = *((_DWORD *)a2 + 2);
      *((_DWORD *)this + 18) = *((_DWORD *)this + 18) & 0xFFFFFFF3 | 4;
    }
  }
  HIDWORD(v8) = *((_DWORD *)a2 + 4);
  LODWORD(v8) = 2;
  *((_QWORD *)this + 10) = v8;
  if ( (*v6 & 2) != 0 )
  {
    *((_DWORD *)this + 18) |= 0x800u;
    v7 = (_DWORD *)((char *)a2 + 20);
  }
  else
  {
    v7 = v6;
  }
  if ( (*v6 & 4) != 0 )
    *((_DWORD *)this + 18) |= 2u;
  else
    v7 = v6;
  if ( (*v6 & 0x20) != 0 )
    *((_DWORD *)this + 18) |= 0x2000u;
  if ( (*v7 & 0x40) != 0 )
    *((_DWORD *)this + 18) |= 0x4000u;
}
