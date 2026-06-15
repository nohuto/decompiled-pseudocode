/*
 * XREFs of ??0CPdcActivationClient@@QEAA@XZ @ 0x1800FE980
 * Callers:
 *     ??0CPowerReferenceManager@@QEAA@XZ @ 0x1800CBEA4 (--0CPowerReferenceManager@@QEAA@XZ.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001AEC8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??0_Mutex_base@std@@QEAA@H@Z @ 0x1800CC04C (--0_Mutex_base@std@@QEAA@H@Z.c)
 */

CPdcActivationClient *__fastcall CPdcActivationClient::CPdcActivationClient(CPdcActivationClient *this)
{
  int v2; // eax
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  std::_Mutex_base::_Mutex_base((CPdcActivationClient *)((char *)this + 32), 0);
  v4[0] = 1LL;
  v4[1] = &CPdcActivationClient::PdcTimerActivatorCallback;
  v4[2] = this;
  v2 = Pdcv2ActivationClientRegister(40LL, v4, this) | 0x10000000;
  if ( v2 < 0 )
    AudSrvTraceLoggingErrorHelper("CPdcActivationClient::CPdcActivationClient", 18, v2);
  return this;
}
