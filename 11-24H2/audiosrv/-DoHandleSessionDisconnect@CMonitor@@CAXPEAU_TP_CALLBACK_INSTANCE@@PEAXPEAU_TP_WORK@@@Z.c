/*
 * XREFs of ?DoHandleSessionDisconnect@CMonitor@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18011C790
 * Callers:
 *     <none>
 * Callees:
 *     ?Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z @ 0x18006950C (-Terminate@CMonitor@@AEAAX_NPEAU_TP_CALLBACK_INSTANCE@@@Z.c)
 *     WPP_SF_ @ 0x1800C0208 (WPP_SF_.c)
 *     ??1SessionDisconnectedContext@@QEAA@XZ @ 0x18011C6CC (--1SessionDisconnectedContext@@QEAA@XZ.c)
 *     ?Stop@CMonitor@@QEAAXXZ @ 0x18011DCE0 (-Stop@CMonitor@@QEAAXXZ.c)
 */

void __fastcall CMonitor::DoHandleSessionDisconnect(
        PTP_CALLBACK_INSTANCE Instance,
        SessionDisconnectedContext *Context,
        PTP_WORK Work)
{
  __int64 v3; // rbx
  _QWORD *v5; // rcx
  bool v6; // zf

  v3 = *((_QWORD *)Context + 1);
  v5 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control )
  {
    if ( (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 34LL, &WPP_755387bd23fa3df5d8dd9259737f5712_Traceguids);
      v5 = WPP_GLOBAL_Control;
    }
    if ( v5 != &WPP_GLOBAL_Control && (*((_DWORD *)v5 + 7) & 0x800000) != 0 && *((_BYTE *)v5 + 25) >= 2u )
      WPP_SF_(v5[2], 50LL, &WPP_755387bd23fa3df5d8dd9259737f5712_Traceguids);
  }
  v6 = *(_DWORD *)(v3 + 72) == 3;
  *(_BYTE *)(v3 + 76) = 1;
  if ( v6 )
    CMonitor::Stop((CMonitor *)v3);
  CMonitor::Terminate((CMonitor *)v3, 1, 0LL);
  SessionDisconnectedContext::~SessionDisconnectedContext(Context);
  operator delete(Context, (const struct std::nothrow_t *)0x18);
}
