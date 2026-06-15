/*
 * XREFs of ??0CMuteControlBase@@QEAA@PEAUIControlChangeNotify@@@Z @ 0x18007BFFC
 * Callers:
 *     ?Make@CMuteSoftware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAPEAVIMuteControlHandler@@@Z @ 0x18007BEBC (-Make@CMuteSoftware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAPEAVIMuteControlHandler@@@Z.c)
 *     ?Make@CMuteHardware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIMuteControlHandler@@@Z @ 0x18008B4A0 (-Make@CMuteHardware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIMuteCon.c)
 * Callees:
 *     ??0IMuteControlHandler@@QEAA@XZ @ 0x1800A6C7C (--0IMuteControlHandler@@QEAA@XZ.c)
 *     WPP_SF_q @ 0x1800C480C (WPP_SF_q.c)
 */

CMuteControlBase *__fastcall CMuteControlBase::CMuteControlBase(
        CMuteControlBase *this,
        struct IControlChangeNotify *a2)
{
  __int64 v3; // rdx

  IMuteControlHandler::IMuteControlHandler(this);
  *((_DWORD *)this + 2) = 1;
  *((_DWORD *)this + 6) = 0;
  *(_QWORD *)this = &CMuteControlBase::`vftable';
  *((_QWORD *)this + 2) = v3;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_e846c6bb50ec3cebd8d62736219e1480_Traceguids, this);
  }
  return this;
}
