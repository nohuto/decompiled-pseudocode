/*
 * XREFs of ?Initialize@CScheduler@@QEAAJPEAUIMessageLoopExtensions@@PEAX11@Z @ 0x1800EF290
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800EFA80 (-Initialize@CComposition@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180157710 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 */

__int64 __fastcall CScheduler::Initialize(
        CScheduler *this,
        struct IMessageLoopExtensions *a2,
        void *a3,
        void *a4,
        void *a5)
{
  signed int v8; // ebx
  HANDLE WaitableTimerW; // rax
  HANDLE v10; // rsi
  signed int LastError; // eax

  *(_QWORD *)this = a5;
  v8 = 0;
  SetLastError(0);
  WaitableTimerW = CreateWaitableTimerW(0LL, 0, 0LL);
  v10 = WaitableTimerW;
  if ( WaitableTimerW )
  {
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      (char *)this + 8,
      WaitableTimerW);
    *((_QWORD *)this + 3) = a3;
    *((_QWORD *)this + 4) = a4;
    *((_QWORD *)this + 5) = v10;
  }
  else
  {
    LastError = GetLastError();
    v8 = LastError;
    if ( LastError > 0 )
      v8 = (unsigned __int16)LastError | 0x80070000;
    if ( v8 >= 0 )
      v8 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x1Du, 0LL);
  }
  return (unsigned int)v8;
}
