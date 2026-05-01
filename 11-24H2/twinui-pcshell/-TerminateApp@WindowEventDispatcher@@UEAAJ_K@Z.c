/*
 * XREFs of ?TerminateApp@WindowEventDispatcher@@UEAAJ_K@Z @ 0x1804243A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$initializer_list@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@std@@QEAA@PEBV?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@1@0@Z @ 0x18022A0E8 (--0-$initializer_list@V-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@@.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_0416af504263cdf2899427440ca143d8___ @ 0x18041699C (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_0416af504263cdf2899427440ca143d8.c)
 */

__int64 __fastcall WindowEventDispatcher::TerminateApp(WindowEventDispatcher *this, __int64 a2)
{
  _QWORD *v2; // rax
  int v3; // eax
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  v2 = std::initializer_list<std::vector<Windows::UI::Color>>::initializer_list<std::vector<Windows::UI::Color>>(
         v5,
         (__int64)this - 24,
         (__int64)&v7);
  v3 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_0416af504263cdf2899427440ca143d8___((__int64)v2);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x778,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v3);
  return 0LL;
}
