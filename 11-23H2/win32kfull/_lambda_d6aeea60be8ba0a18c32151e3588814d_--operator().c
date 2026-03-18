/*
 * XREFs of _lambda_d6aeea60be8ba0a18c32151e3588814d_::operator() @ 0x1C013B118
 * Callers:
 *     _lambda_d6aeea60be8ba0a18c32151e3588814d_::_lambda_invoker_cdecl_ @ 0x1C013B100 (_lambda_d6aeea60be8ba0a18c32151e3588814d_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0030A10 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0044724 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1?$CAutoExclusiveCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumentation@@@NSInstrumentation@@QEAA@XZ @ 0x1C00972E4 (--1-$CAutoExclusiveCReaderWriterLock@VCPlatformReaderWriterLock@NSInstrumentation@@@NSInstrument.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00EEC50 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 */

// write access to const memory has been detected, the output may be wrong!
void lambda_d6aeea60be8ba0a18c32151e3588814d_::operator()(_DWORD a1, _DWORD a2, _DWORD a3, _DWORD a4, ...)
{
  char v4; // di
  PEPROCESS *v5; // rax
  LONGLONG v6; // rbx
  char v7; // dl
  int v8; // edx
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // [rsp+40h] [rbp-28h]
  va_list va; // [rsp+90h] [rbp+28h] BYREF

  va_start(va, a4);
  v4 = 1;
  v5 = (PEPROCESS *)gppiStarting;
  v6 = MEMORY[0xFFFFF78000000014] - 300000000LL;
  while ( v5 )
  {
    if ( v6 > PsGetProcessCreateTimeQuadPart(*v5) )
    {
      *(_DWORD *)(gppiStarting + 12LL) &= 0xFFFFFEBF;
      v7 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v11) = *(_DWORD *)(gppiStarting + 56LL);
        WPP_RECORDER_AND_TRACE_SF_D(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v7,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)gFullLog,
          4u,
          2u,
          0xCu,
          (__int64)&WPP_61c26a9f6da9378abf1f04fdf8202002_Traceguids,
          v11);
      }
    }
    v5 = *(PEPROCESS **)(gppiStarting + 368LL);
    gppiStarting = v5;
  }
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)va, (struct _EX_PUSH_LOCK *)&unk_1C035F388);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v4 = 0;
  }
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = v4;
    LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v8,
      v9,
      v10,
      4,
      2,
      13,
      (__int64)&WPP_61c26a9f6da9378abf1f04fdf8202002_Traceguids);
  }
  memset_0(qword_1C035E1B0, 0, 0x168uLL);
  NSInstrumentation::CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::~CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>((__int64 *)va);
}
