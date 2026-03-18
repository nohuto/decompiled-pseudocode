/*
 * XREFs of DpiFdoDriverDisarmWaitWake @ 0x1402543B4
 * Callers:
 *     DpiFdoArmWaitWake @ 0x1402540F0 (DpiFdoArmWaitWake.c)
 *     DpiFdoWaitWakePoCompletionWorkItem @ 0x140254410 (DpiFdoWaitWakePoCompletionWorkItem.c)
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x140011084 (McTemplateK0p_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
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
