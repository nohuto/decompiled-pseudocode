/*
 * XREFs of ??0CButtonEvent@CMouseProcessor@@QEAA@W4ButtonNumber@@W4ButtonState@1@W4ButtonStateSpecialization@1@PEBVCMouseEvent@1@@Z @ 0x1C01F4978
 * Callers:
 *     ?ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C01F58E0 (-ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _anonymous_namespace_::IsMouseButtonSwapped @ 0x1C01F88EC (_anonymous_namespace_--IsMouseButtonSwapped.c)
 */

__int64 __fastcall CMouseProcessor::CButtonEvent::CButtonEvent(__int64 a1, __int64 a2, int a3, int a4, __int64 a5)
{
  __int64 v6; // r10
  int v7; // eax
  void *v8; // rax

  v6 = *(_QWORD *)(a5 + 8);
  *(_QWORD *)a1 = &CMouseProcessor::CButtonEvent::`vftable';
  *(_QWORD *)(a1 + 8) = v6;
  *(_DWORD *)(a1 + 24) = a2;
  *(_DWORD *)(a1 + 28) = a2;
  *(_DWORD *)(a1 + 32) = a3;
  *(_DWORD *)(a1 + 36) = a4;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 16) = 2;
  if ( !(_DWORD)a2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7279);
  if ( ((*(_DWORD *)(a1 + 24) - 1) & *(_DWORD *)(a1 + 24)) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7282);
  v7 = *(_DWORD *)(a1 + 32);
  if ( v7 != 2 && v7 != 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7284);
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 112LL) & 0x400) == 0 )
  {
    LOBYTE(a2) = *(_DWORD *)(a1 + 32) == 2;
    if ( (unsigned __int8)anonymous_namespace_::IsMouseButtonSwapped(*(unsigned int *)(a1 + 24), a2) )
      *(_DWORD *)(a1 + 24) ^= 3u;
  }
  if ( *(_QWORD *)(a1 + 40) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7291);
  switch ( *(_DWORD *)(a1 + 24) )
  {
    case 1:
      v8 = &CMouseProcessor::CButtonEvent::_dependentInfo;
      goto LABEL_24;
    case 2:
      v8 = &unk_1C0266BD8;
      goto LABEL_24;
    case 4:
      v8 = &unk_1C0266BF0;
      goto LABEL_24;
    case 8:
      v8 = &unk_1C0266C08;
      goto LABEL_24;
    case 0x10:
      v8 = &unk_1C0266C20;
LABEL_24:
      *(_QWORD *)(a1 + 40) = v8;
      return a1;
  }
  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7321);
  return a1;
}
