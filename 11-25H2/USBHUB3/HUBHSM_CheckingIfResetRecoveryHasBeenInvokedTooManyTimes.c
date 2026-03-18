/*
 * XREFs of HUBHSM_CheckingIfResetRecoveryHasBeenInvokedTooManyTimes @ 0x140008B40
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0p_EtwWriteTransfer @ 0x1400087B4 (McTemplateK0p_EtwWriteTransfer.c)
 *     HUBMISC_VerifierDbgBreak @ 0x140033D80 (HUBMISC_VerifierDbgBreak.c)
 */

__int64 __fastcall HUBHSM_CheckingIfResetRecoveryHasBeenInvokedTooManyTimes(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned __int16 v5; // ax
  int v6; // eax

  v1 = *(_QWORD *)(a1 + 960);
  v2 = 2041;
  v3 = MEMORY[0xFFFFF78000000014];
  if ( (__int64)(MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v1 + 64)) <= 600000000 )
  {
    v4 = 1LL;
    v5 = *(_WORD *)(v1 + 54) + 1;
    *(_WORD *)(v1 + 54) = v5;
    if ( v5 >= 0xAu )
    {
      v6 = *(_DWORD *)(v1 + 2600);
      v2 = 2057;
      *(_DWORD *)(v1 + 2604) = 1073872899;
      if ( (v6 & 1) != 0 )
        HUBMISC_VerifierDbgBreak("HubHwVerifierTooManyResets", v1 + 1272);
      if ( (BYTE2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x40) != 0 )
        McTemplateK0p_EtwWriteTransfer(
          v4,
          &USBHUB3_ETW_EVENT_HUB_TOO_MANY_RESETS,
          (const GUID *)(v1 + 2420),
          *(_QWORD *)(v1 + 248));
    }
  }
  else
  {
    *(_WORD *)(v1 + 54) = 1;
    *(_QWORD *)(v1 + 64) = v3;
  }
  return v2;
}
