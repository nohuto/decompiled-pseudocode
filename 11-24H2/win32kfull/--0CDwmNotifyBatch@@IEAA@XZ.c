/*
 * XREFs of ??0CDwmNotifyBatch@@IEAA@XZ @ 0x1400887B8
 * Callers:
 *     ??0CDwmWindowNotifyBatch@@QEAA@PEAUtagWND@@@Z @ 0x140088668 (--0CDwmWindowNotifyBatch@@QEAA@PEAUtagWND@@@Z.c)
 *     ??0CDwmSwpNotifyBatch@@QEAA@PEAUtagSMWP@@@Z @ 0x1400886D8 (--0CDwmSwpNotifyBatch@@QEAA@PEAUtagSMWP@@@Z.c)
 * Callees:
 *     <none>
 */

CDwmNotifyBatch *__fastcall CDwmNotifyBatch::CDwmNotifyBatch(CDwmNotifyBatch *this, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  bool v5; // bl

  v5 = 0;
  if ( *(_QWORD *)(W32GetUserSessionState(this, a2) + 19200) )
    v5 = (*(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v4, v3) + 19200) + 48LL) & 0x400) != 0;
  *(_BYTE *)this = v5;
  return this;
}
