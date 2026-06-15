/*
 * XREFs of ?AddSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z @ 0x180044C30
 * Callers:
 *     <none>
 * Callees:
 *     ?AddInterface@?$CLockedList_UniqueValuesOnly@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180044CC0 (-AddInterface@-$CLockedList_UniqueValuesOnly@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@@@QEA.c)
 *     WPP_SF_q @ 0x1800C34E4 (WPP_SF_q.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSession::AddSessionNotification(CAudioSession *this, struct ISessionInternalEvents *a2)
{
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 68LL, &WPP_ea93f1868512325b454513e390c361b8_Traceguids, a2);
  }
  if ( a2 )
    (*(void (__fastcall **)(struct ISessionInternalEvents *))(*(_QWORD *)a2 + 8LL))(a2);
  CLockedList_UniqueValuesOnly<ATL::CComPtr<ISessionInternalEvents>,0>::AddInterface((LPCRITICAL_SECTION)((char *)this + 432));
  return 0LL;
}
