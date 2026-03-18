/*
 * XREFs of ?Release@CChannel@@UEAAKXZ @ 0x180262A60
 * Callers:
 *     ?CreateChannel@CInternalMilCmdConnection@@QEAAJPEAUIDwmChannelProvider@@PEAPEAVCChannel@@@Z @ 0x180217E20 (-CreateChannel@CInternalMilCmdConnection@@QEAAJPEAUIDwmChannelProvider@@PEAPEAVCChannel@@@Z.c)
 *     ?Create@CChannel@@SAJPEAVCInternalMilCmdConnection@@PEAUIDwmChannelProvider@@PEAPEAV1@@Z @ 0x180217F3C (-Create@CChannel@@SAJPEAVCInternalMilCmdConnection@@PEAUIDwmChannelProvider@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??1CChannel@@AEAA@XZ @ 0x180261394 (--1CChannel@@AEAA@XZ.c)
 */

__int64 __fastcall CChannel::Release(CChannel *this, unsigned int a2)
{
  unsigned __int32 v3; // edi

  v3 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v3 && this )
  {
    CChannel::~CChannel(this, a2);
    operator delete(this);
  }
  return v3;
}
