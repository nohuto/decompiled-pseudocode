/*
 * XREFs of DpiFdoDriverDisarmWaitWake @ 0x14024D584
 * Callers:
 *     DpiFdoArmWaitWake @ 0x14024D2C0 (DpiFdoArmWaitWake.c)
 *     DpiFdoWaitWakePoCompletionWorkItem @ 0x14024D5E0 (DpiFdoWaitWakePoCompletionWorkItem.c)
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x14001428C (McTemplateK0p_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiFdoDriverDisarmWaitWake(__int64 a1)
{
  __int64 result; // rax
  __int64 v4; // r8

  if ( (*(_DWORD *)(a1 + 2776))-- == 1 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD))(a1 + 2824))(*(_QWORD *)(a1 + 2792));
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
        return McTemplateK0p_EtwWriteTransfer(
                 (__int64)&DxgkControlGuid_Context,
                 (__int64)&EventDpiDxgkDdiWaitWakeDisarming,
                 v4,
                 *(_QWORD *)(a1 + 48));
    }
  }
  return result;
}
