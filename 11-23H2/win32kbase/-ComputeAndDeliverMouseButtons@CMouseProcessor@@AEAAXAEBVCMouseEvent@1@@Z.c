/*
 * XREFs of ?ComputeAndDeliverMouseButtons@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@@Z @ 0x1C01F58E0
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionForegroundQAccessibleToMouseProducer @ 0x1C00C9854 (ApiSetEditionForegroundQAccessibleToMouseProducer.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     ??0CButtonEvent@CMouseProcessor@@QEAA@W4ButtonNumber@@W4ButtonState@1@W4ButtonStateSpecialization@1@PEBVCMouseEvent@1@@Z @ 0x1C01F4978 (--0CButtonEvent@CMouseProcessor@@QEAA@W4ButtonNumber@@W4ButtonState@1@W4ButtonStateSpecializatio.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C01F9444 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 */

void __fastcall CMouseProcessor::ComputeAndDeliverMouseButtons(
        CMouseProcessor *this,
        const struct CMouseProcessor::CMouseEvent *a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int i; // ebp
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // r9d
  int v12; // eax
  __int64 v13; // [rsp+40h] [rbp-68h] BYREF
  int v14; // [rsp+48h] [rbp-60h]
  _BYTE v15[48]; // [rsp+50h] [rbp-58h] BYREF

  v4 = (**(__int64 (__fastcall ***)(const struct CMouseProcessor::CMouseEvent *))a2)(a2) & 0xF3FF;
  if ( !v4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3409);
  v5 = 1;
  for ( i = (*(unsigned __int16 (__fastcall **)(const struct CMouseProcessor::CMouseEvent *))(*(_QWORD *)a2 + 8LL))(a2);
        v4;
        i >>= 2 )
  {
    if ( (v4 & 3) != 0 )
    {
      if ( (v4 & 1) != 0 )
      {
        if ( !*(_DWORD *)(SGDGetUserSessionState(v7, v6, v9, v10) + 15912) || (v11 = 1, (i & 1) == 0) )
          v11 = 0;
        CMouseProcessor::CButtonEvent::CButtonEvent((__int64)v15, v5, 1, v11, (__int64)a2);
        CMouseProcessor::ProcessMouseButton(this, (const struct CMouseProcessor::CButtonEvent *)v15);
      }
      if ( (v4 & 2) != 0 )
      {
        CMouseProcessor::CButtonEvent::CButtonEvent((__int64)v15, v5, 2, 0, (__int64)a2);
        CMouseProcessor::ProcessMouseButton(this, (const struct CMouseProcessor::CButtonEvent *)v15);
      }
      v7 = *((_QWORD *)a2 + 1);
      if ( (*(_BYTE *)(v7 + 112) & 1) == 0 && *(_DWORD *)(v7 + 108) != 1 )
      {
        v12 = *(_DWORD *)(v7 + 140);
        v13 = *(_QWORD *)(v7 + 132);
        v14 = v12;
        if ( !(unsigned int)ApiSetEditionForegroundQAccessibleToMouseProducer((__int64)&v13, v6, 0) )
          break;
      }
    }
    v5 *= 2;
    v4 >>= 2;
  }
}
