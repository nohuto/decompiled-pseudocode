/*
 * XREFs of ?DisableVmBusChannel@DXGVAILOBJECT@@QEAAXXZ @ 0x140077BDC
 * Callers:
 *     NtDxgkVailDisconnect @ 0x14020A1A0 (NtDxgkVailDisconnect.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x14034D1D8 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?DisableVmBusChannel@@YAXPEAVDXGVMBUSCHANNEL@@@Z @ 0x140206DA0 (-DisableVmBusChannel@@YAXPEAVDXGVMBUSCHANNEL@@@Z.c)
 */

void __fastcall DXGVAILOBJECT::DisableVmBusChannel(struct _KTHREAD **this)
{
  struct DXGVMBUSCHANNEL *v2; // rcx

  if ( this[8] != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 353;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_VailMutex.IsOwner()", 353LL, 0LL, 0LL, 0LL, 0LL);
  }
  v2 = this[14];
  if ( v2 )
    DisableVmBusChannel(v2);
}
