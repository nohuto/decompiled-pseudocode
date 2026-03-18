/*
 * XREFs of ?ReleaseReference@DXGVAILGUESTOBJECT@@QEAAXXZ @ 0x140207528
 * Callers:
 *     ?ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ @ 0x1402075BC (-ReleaseVailGuestReference@DXGSESSIONDATA@@QEAAXXZ.c)
 *     ?VailGuestConnect@DXGSESSIONDATA@@QEAAJXZ @ 0x140207900 (-VailGuestConnect@DXGSESSIONDATA@@QEAAJXZ.c)
 *     ?VailSendCompositionObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z @ 0x140207F54 (-VailSendCompositionObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z.c)
 *     ?VailSendRemoteObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z @ 0x140208FFC (-VailSendRemoteObjectTestCommand@DXGSESSIONDATA@@QEAAJPEAXI0PEAIH@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1DXGVAILGUESTOBJECT@@IEAA@XZ @ 0x14007A2BC (--1DXGVAILGUESTOBJECT@@IEAA@XZ.c)
 */

void __fastcall DXGVAILGUESTOBJECT::ReleaseReference(DXGVAILGUESTOBJECT *this)
{
  if ( *(struct _KTHREAD **)(*(_QWORD *)this + 18944LL) != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2022;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"m_pSessionData->GetVailGuestMutex()->IsOwner()",
      2022LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (*((_DWORD *)this + 2))-- == 1 )
  {
    DXGVAILGUESTOBJECT::~DXGVAILGUESTOBJECT(this);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(this);
  }
}
