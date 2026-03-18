/*
 * XREFs of DpiFdoDriverArmWaitWake @ 0x140254310
 * Callers:
 *     DpiFdoArmWaitWake @ 0x1402540F0 (DpiFdoArmWaitWake.c)
 * Callees:
 *     McTemplateK0pt_EtwWriteTransfer @ 0x140012010 (McTemplateK0pt_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpiFdoDriverArmWaitWake(__int64 a1)
{
  int v1; // edx
  __int64 v2; // rdi
  int v4; // eax
  __int64 v5; // r8
  int v7; // [rsp+20h] [rbp-18h]

  v1 = *(_DWORD *)(a1 + 2776);
  LODWORD(v2) = 0;
  *(_DWORD *)(a1 + 2776) = v1 + 1;
  if ( !v1 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(a1 + 2816))(*(_QWORD *)(a1 + 2792));
    v2 = v4;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000) != 0 )
    {
      v7 = v4;
      McTemplateK0pt_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        (__int64)&EventDpiDxgkDdiWaitWakeArming,
        v5,
        *(_QWORD *)(a1 + 48),
        v7);
    }
    if ( (int)v2 < 0 )
    {
      WdLogSingleEntry1(2LL, v2);
      --*(_DWORD *)(a1 + 2776);
      WdLogGlobalForLineNumber = 728;
    }
  }
  return (unsigned int)v2;
}
