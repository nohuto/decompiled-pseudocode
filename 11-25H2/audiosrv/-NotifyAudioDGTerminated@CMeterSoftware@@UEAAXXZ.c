/*
 * XREFs of ?NotifyAudioDGTerminated@CMeterSoftware@@UEAAXXZ @ 0x18006F9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$CComPtrBase@UIPart@@@ATL@@QEAAXXZ @ 0x18006FB98 (-Release@-$CComPtrBase@UIPart@@@ATL@@QEAAXXZ.c)
 *     WPP_SF_q @ 0x1800C480C (WPP_SF_q.c)
 */

void __fastcall CMeterSoftware::NotifyAudioDGTerminated(struct _RTL_CRITICAL_SECTION *this)
{
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, &WPP_bc3a85e3dfc83683df6cca40af32aa11_Traceguids, this);
  }
  EnterCriticalSection(this + 1);
  ATL::CComPtrBase<IPart>::Release(&this->SpinCount);
  if ( this != (struct _RTL_CRITICAL_SECTION *)-40LL )
    LeaveCriticalSection(this + 1);
}
