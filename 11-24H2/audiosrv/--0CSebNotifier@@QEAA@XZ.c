/*
 * XREFs of ??0CSebNotifier@@QEAA@XZ @ 0x18010982C
 * Callers:
 *     ??0CPowerReferenceManager@@QEAA@XZ @ 0x1800CB574 (--0CPowerReferenceManager@@QEAA@XZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180059E78 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?PublishSebEvent@CSebNotifier@@AEAAXE@Z @ 0x1800605B0 (-PublishSebEvent@CSebNotifier@@AEAAXE@Z.c)
 *     ??0_Mutex_base@std@@QEAA@H@Z @ 0x1800CB71C (--0_Mutex_base@std@@QEAA@H@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18010A510 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18010A530 (-_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

CSebNotifier *__fastcall CSebNotifier::CSebNotifier(CSebNotifier *this)
{
  int v2; // eax
  PTP_WAIT ThreadpoolWait; // rax
  const char *v4; // r9
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v8; // [rsp+30h] [rbp+8h] BYREF

  *(_DWORD *)this = 0;
  std::_Mutex_base::_Mutex_base((CSebNotifier *)((char *)this + 8), 0);
  *((_BYTE *)this + 40) = -1;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  v8 = 17;
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    (void **)this + 6,
    0LL);
  v2 = NtCreateIRTimer((char *)this + 48, &v8, 2031619LL);
  if ( v2 >= 0 )
  {
    ThreadpoolWait = CreateThreadpoolWait(
                       (PTP_WAIT_CALLBACK)lambda_35797e26c2f113dffb458279a808fd40_::_lambda_invoker_cdecl_,
                       this,
                       0LL);
    *((_QWORD *)this + 7) = ThreadpoolWait;
    if ( !ThreadpoolWait )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x1A4,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
        v4);
  }
  else
  {
    wil::details::in1diag3::_Log_NtStatus(
      retaddr,
      (void *)0x19C,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\powerreference.cpp",
      (const char *)(unsigned int)v2,
      v6);
  }
  CSebNotifier::PublishSebEvent(this, 0);
  return this;
}
