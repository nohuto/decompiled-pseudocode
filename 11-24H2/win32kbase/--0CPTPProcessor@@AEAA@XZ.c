/*
 * XREFs of ??0CPTPProcessor@@AEAA@XZ @ 0x14020DC08
 * Callers:
 *     ?AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x140152D6C (-AddProcessor@CPTPProcessorFactory@@SAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 * Callees:
 *     ??0CTouchProcessor@@QEAA@XZ @ 0x14014883C (--0CTouchProcessor@@QEAA@XZ.c)
 *     memset @ 0x14023F500 (memset.c)
 */

CPTPProcessor *__fastcall CPTPProcessor::CPTPProcessor(CPTPProcessor *this)
{
  __int64 v2; // rcx
  __int64 UserSessionState; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax

  CTouchProcessor::CTouchProcessor(this);
  *(_QWORD *)this = &CBaseProcessor::`vftable';
  *((_QWORD *)this + 21) = &CPTPProcessor::`vftable'{for `IPTPEngineClient'};
  memset((char *)this + 400, 0, 0x70uLL);
  *((_BYTE *)this + 512) = 0;
  memset((char *)this + 560, 0, 0xA0uLL);
  memset((char *)this + 720, 0, 0x278uLL);
  memset((char *)this + 1352, 0, 0x278uLL);
  *((_WORD *)this + 992) = 0;
  *((_BYTE *)this + 1986) = 0;
  UserSessionState = W32GetUserSessionState(v2);
  *((_QWORD *)this + 250) = 0LL;
  *((_QWORD *)this + 251) = 0LL;
  *((_QWORD *)this + 252) = 0LL;
  *((_QWORD *)this + 253) = 0LL;
  *((_QWORD *)this + 249) = UserSessionState + 3304;
  *((_QWORD *)this + 261) = W32GetUserSessionState(v4) + 3336;
  v6 = W32GetUserSessionState(v5);
  *((_DWORD *)this + 97) &= ~2u;
  *((_DWORD *)this + 96) = 0;
  *((_QWORD *)this + 262) = v6 + 3340;
  return this;
}
