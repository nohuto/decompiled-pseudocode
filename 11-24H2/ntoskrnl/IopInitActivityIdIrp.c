/*
 * XREFs of IopInitActivityIdIrp @ 0x140454AF0
 * Callers:
 *     IopAllocateIrpPrivate @ 0x140253E10 (IopAllocateIrpPrivate.c)
 *     IopAllocateReserveIrp @ 0x140374518 (IopAllocateReserveIrp.c)
 *     IopAllocateIrpWithExtension @ 0x14037592C (IopAllocateIrpWithExtension.c)
 *     IopAllocateBackpocketIrp @ 0x140595CD8 (IopAllocateBackpocketIrp.c)
 *     IovAllocateIrp @ 0x140BA9550 (IovAllocateIrp.c)
 * Callees:
 *     EtwWriteEx @ 0x140259680 (EtwWriteEx.c)
 *     EtwActivityIdControl @ 0x14041E010 (EtwActivityIdControl.c)
 *     IoSetActivityIdIrp @ 0x140454CF0 (IoSetActivityIdIrp.c)
 *     PnpIsSafeToExamineUserModeTeb @ 0x14046D660 (PnpIsSafeToExamineUserModeTeb.c)
 *     IopIsActivityTracingEventEnabled @ 0x1404B1634 (IopIsActivityTracingEventEnabled.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

int __fastcall IopInitActivityIdIrp(__int64 a1)
{
  bool v2; // r14
  const GUID *RelatedActivityId; // rsi
  const EVENT_DESCRIPTOR *v4; // rdi
  struct _KTHREAD *CurrentThread; // r13
  char IsActivityTracingEventEnabled; // al
  __int64 v7; // rax
  _WORD *v8; // rax
  char v10; // [rsp+40h] [rbp-68h]
  GUID v11; // [rsp+60h] [rbp-48h] BYREF
  GUID ActivityId; // [rsp+70h] [rbp-38h] BYREF

  ActivityId = 0LL;
  v11 = 0LL;
  v2 = 0;
  RelatedActivityId = 0LL;
  v4 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
  {
    if ( CurrentThread[1].WaitBlock[1].WaitListEntry.Flink )
    {
      IsActivityTracingEventEnabled = IopIsActivityTracingEventEnabled(&IoTrace_KernelIo_AllocateIrp);
      if ( IsActivityTracingEventEnabled )
        RelatedActivityId = (const GUID *)CurrentThread[1].WaitBlock[1].WaitListEntry.Flink;
      else
        ActivityId = (GUID)*CurrentThread[1].WaitBlock[1].WaitListEntry.Flink;
      v2 = IsActivityTracingEventEnabled == 0;
      v4 = (const EVENT_DESCRIPTOR *)((unsigned __int64)&IoTrace_KernelIo_AllocateIrp & -(__int64)(IsActivityTracingEventEnabled != 0));
    }
    else if ( (unsigned __int8)PnpIsSafeToExamineUserModeTeb() && (*(_BYTE *)(a1 + 71) & 0x21) != 0x21 )
    {
      v10 = 0;
      if ( KeGetPcr()->NtTib.$F9182C7BBDA5465159379F5666D1C81A::$B2F89C67BE96B06D3F6044187E462952::Self )
      {
        v11 = *(GUID *)&KeGetPcr()->NtTib.$F9182C7BBDA5465159379F5666D1C81A::$B2F89C67BE96B06D3F6044187E462952::Self[105].SubSystemTib;
        v10 = 1;
      }
      if ( v10 )
      {
        v7 = *(_QWORD *)&CPER_EMPTY_GUID.Data1 - *(_QWORD *)&v11.Data1;
        if ( *(_QWORD *)&CPER_EMPTY_GUID.Data1 == *(_QWORD *)&v11.Data1 )
          v7 = *(_QWORD *)CPER_EMPTY_GUID.Data4 - *(_QWORD *)v11.Data4;
        if ( v7 )
        {
          if ( (unsigned __int8)IopIsActivityTracingEventEnabled(&IoTrace_UserInitiatedIo) )
          {
            RelatedActivityId = &v11;
            v4 = &IoTrace_UserInitiatedIo;
          }
          else
          {
            ActivityId = v11;
            v2 = 1;
          }
        }
      }
    }
  }
  if ( !v2 )
    EtwActivityIdControl(3u, &ActivityId);
  LODWORD(v8) = IoSetActivityIdIrp(a1, &ActivityId);
  if ( (int)v8 >= 0 )
  {
    v8 = *(_WORD **)(a1 + 200);
    *v8 |= 2u;
    if ( RelatedActivityId )
      LODWORD(v8) = EtwWriteEx(IoTraceHandle, v4, 0LL, 0, &ActivityId, RelatedActivityId, 0, 0LL);
  }
  return (int)v8;
}
