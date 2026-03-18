/*
 * XREFs of _lambda_8d077bb7169ba1f271733a2621342a1b_::operator() @ 0x1C00D4830
 * Callers:
 *     ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1C0075FAC (-RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C00742F0 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D6660 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_8d077bb7169ba1f271733a2621342a1b_::operator()(_QWORD *a1, __int64 a2, int a3)
{
  __int64 v4; // rdi
  CInpPushLock *v6; // rbx
  unsigned int v7; // edi

  v4 = 2LL * (unsigned int)(a3 - 1);
  if ( *((_DWORD *)&off_1C0242120 + 4 * (unsigned int)(a3 - 1) + 2) != a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2221LL);
  v6 = *(CInpPushLock **)(*a1 + 1256LL);
  RIMLockExclusive((__int64)v6);
  v7 = ((__int64 (__fastcall *)(_QWORD, __int64))*(&off_1C0242120 + v4))(*a1, a2);
  CInpPushLock::UnLockExclusive(v6);
  return v7;
}
