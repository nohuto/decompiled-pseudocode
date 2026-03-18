/*
 * XREFs of ?ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z @ 0x1C01F6E90
 * Callers:
 *     ForceCapture @ 0x1C00C54F0 (ForceCapture.c)
 * Callees:
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0052DB0 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     _tlgKeywordOn @ 0x1C0053E90 (_tlgKeywordOn.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0056A68 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0079EA8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     ?Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z @ 0x1C01FB0AC (-Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z.c)
 */

void __fastcall CMouseProcessor::ForceMouseOwner(CMouseProcessor *this, const struct tagINPUTDEST *a2, int a3)
{
  char v5; // dl
  _BYTE v6[128]; // [rsp+50h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+D0h] [rbp-38h] BYREF

  v5 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v5,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
      4u,
      6u,
      0x13u,
      (__int64)&WPP_f645abfb8f443aa578495af70e8984ab_Traceguids,
      a3);
  if ( a2 )
  {
    CInputDest::CInputDest((CInputDest *)v6, a2);
    CMouseProcessor::MouseOwner::Set((CMouseProcessor *)((char *)this + 3576), (const struct CInputDest *)v6);
    CInputDest::SetEmpty((CInputDest *)v6);
  }
  else if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 924, 1, 1) )
  {
    CInputDest::SetEmpty((CMouseProcessor *)((char *)this + 3576));
    _InterlockedExchange((volatile __int32 *)this + 924, 0);
    if ( (unsigned int)dword_1C0289810 > 4 && tlgKeywordOn((__int64)&dword_1C0289810, 64LL) )
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C0289810,
        (unsigned __int8 *)dword_1C025EADA,
        0LL,
        0LL,
        2u,
        &v7);
  }
}
