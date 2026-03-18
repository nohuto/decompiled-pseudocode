/*
 * XREFs of ?PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x1400EC48C
 * Callers:
 *     PostPendingMouseMove @ 0x1400EC440 (PostPendingMouseMove.c)
 *     ?DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@@Z @ 0x14018C3F8 (-DeliverMouseButtonToInputDest@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@AEBVCInputDest@@AEBUInpu.c)
 * Callees:
 *     UserIsCurrentThreadDesktopComposed @ 0x140094A60 (UserIsCurrentThreadDesktopComposed.c)
 *     _anonymous_namespace_::PhysicalCursorPointAsLogicalPoint @ 0x1400951D0 (_anonymous_namespace_--PhysicalCursorPointAsLogicalPoint.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagLOGICALPOINT@@_K2PEBU_InputDeviceHandle@@@Z @ 0x14021E150 (-PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagLOGICALPOINT@@_K2PEBU_InputDeviceHandle.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

void __fastcall CMouseProcessor::PostPendingMouseMove(CMouseProcessor *this, struct tagQ *a2)
{
  __int64 v4; // xmm0_8
  int v5; // eax
  _DWORD *v6; // rax
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // [rsp+20h] [rbp-48h]
  __int64 v9; // [rsp+38h] [rbp-30h] BYREF
  int v10; // [rsp+40h] [rbp-28h]
  __int64 v11; // [rsp+48h] [rbp-20h]
  int v12; // [rsp+50h] [rbp-18h]

  if ( (*((_DWORD *)a2 + 109) & 0x20) != 0 )
  {
    if ( (unsigned int)UserIsCurrentThreadDesktopComposed((__int64)this, (__int64)a2) )
    {
      v4 = *((_QWORD *)a2 + 24);
      v5 = *((_DWORD *)a2 + 50);
    }
    else
    {
      v6 = anonymous_namespace_::PhysicalCursorPointAsLogicalPoint(&v9);
      v4 = *(_QWORD *)v6;
      v5 = v6[2];
    }
    v7 = *((_QWORD *)a2 + 26);
    v12 = v5;
    v11 = v4;
    v10 = v5;
    v8 = *((_QWORD *)a2 + 27);
    v9 = v4;
    CMouseProcessor::PostMouseMoveToQ(
      this,
      a2,
      (const struct tagLOGICALPOINT *)&v9,
      v7,
      v8,
      (struct tagQ *)((char *)a2 + 224));
    if ( (*((_DWORD *)a2 + 109) & 0x20) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1707LL);
  }
}
